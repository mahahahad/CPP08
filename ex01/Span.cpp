#include "Span.hpp"

Span::Span(unsigned int n): _maxLimit(n) { }
Span::Span(const Span& copy) {
    (void) copy;
}
Span&   Span::operator=(const Span& copy) {
    (void) copy;
    return (*this);
}
Span::~Span() { }

const char  *Span::OverfillException::what() const throw() {
    return ("The limit of numbers in the span has been exceeded.");
}

const char  *Span::CalculationException::what() const throw() {
    return ("There isn't a sufficient amount of numbers to perform the \
calculation.");
}

/**
 * @brief Add the provided `num` to the container
 * 
 * Throws an exception if adding this number will overflow the Span
 * 
 * @param num The new number to add to the container
 */
void    Span::addNumber(int num) {
    if (_arr.size() == _maxLimit)
        throw Span::OverfillException();
    _arr.push_back(num);
}

int Span::shortestSpan(void) {
    if (_arr.empty() || _arr.size() == 1) 
        throw Span::CalculationException();
    std::sort(_arr.begin(), _arr.end());
    int min = *(_arr.end() - 1);
    for (unsigned int i = 0; i < _arr.size(); i++) {
        if (abs(_arr[i + 1] - _arr[i]) < min)
            min = abs(_arr[i + 1] - _arr[i]);
    }
    return (min);
}

int Span::longestSpan(void) {
    if (_arr.empty() || _arr.size() == 1) 
        throw Span::CalculationException();
    std::sort(_arr.begin(), _arr.end());
    return (*(_arr.end() - 1) - _arr[0]);
}
