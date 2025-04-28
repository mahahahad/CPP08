#include "Span.hpp"

int main(void) {
    {
        Span sp(10000);

        for (int i = 0; i <= 10000; i+=2) {
            // std::cout << i << std::endl;
            sp.addNumber(i);
        }
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    {
        Span    multi(10);
        std::vector<int>    otherContainer;

        for (int i = 0; i <= 10; i++) {
            otherContainer.push_back(i);
        }
        // Add all of the numbers in this container to the span in one call
        multi.addNumbers(otherContainer.begin(), otherContainer.end());
        std::cout << multi.shortestSpan() << std::endl;
        std::cout << multi.longestSpan() << std::endl;
    }
    return (0);
}
