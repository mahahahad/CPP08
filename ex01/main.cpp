#include "Span.hpp"

int main(void) {
    Span sp(10000);

    for (int i = 0; i <= 10000; i+=2) {
        // std::cout << i << std::endl;
        sp.addNumber(i);
    }

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return (0);
}
