#include "Span.hpp"

int main(void) {
    // {
    //     Span sp(10);
    //     sp.addNumber(4);
    //     sp.addNumber(2);
    //     sp.addNumber(3);

    //     Span test = sp;
    //     std::cout << "Copied span elements: ";
    //     test.print();
    //     Span test2(test);
    //     std::cout << "Copied span (test) elements: ";
    //     test2.print();
    //     std::cout << "Original details:\n";
    //     std::cout << sp.longestSpan() << std::endl;
    //     std::cout << sp.shortestSpan() << std::endl;
    //     std::cout << "Test details:\n";
    //     std::cout << test.longestSpan() << std::endl;
    //     std::cout << test.shortestSpan() << std::endl;
    //     std::cout << "Test2 details:\n";
    //     std::cout << test2.longestSpan() << std::endl;
    //     std::cout << test2.shortestSpan() << std::endl;
    // }
    {
        Span sp = Span(5);

        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        // for (int i = 0; i <= 10000; i+=2) {
        //     sp.addNumber(i);
        // }
        // sp.print();
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    // {
    //     Span    multi(10);
    //     std::vector<int>    otherContainer;

    //     for (int i = 0; i <= 10; i++) {
    //         otherContainer.push_back(i);
    //     }
    //     // Add all of the numbers in this container to the span in one call
    //     multi.addNumbers(otherContainer.begin(), otherContainer.end());
    //     // Verify if numbers are present and Span works as expected
    //     multi.print();
    //     std::cout << multi.shortestSpan() << std::endl;
    //     std::cout << multi.longestSpan() << std::endl;
    // }
    return (0);
}
