#include "Span.hpp"

Span::Span(unsigned int n): _maxLimit(n) { }
Span::Span(const Span& copy): _maxLimit(copy._maxLimit), _arr(copy._arr) { }
Span&   Span::operator=(const Span& copy) {
    _maxLimit = copy._maxLimit;
    _arr = copy._arr;
    return (*this);
}
Span::~Span(void) { }

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

/**
 * @brief Add multiple numbers to the span through a single call.
 * 
 * Uses the provided iterators to loop through the container with the numbers
 * and add those to the span.
 * 
 * @param beginIt The iterator representing the start of the elements
 * @param endIt The iterator representing the element after the last element
 */
void    Span::addNumbers(
    std::vector<int>::iterator beginIt,
    std::vector<int>::iterator endIt
) {
    _arr.insert(_arr.end(), beginIt, endIt);
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

void    Span::print(void) const {
    for (unsigned int i = 0; i < _arr.size(); i++) {
        std::cout << _arr[i] << (i == _arr.size() - 1 ? "\n" : ", ");
    }
}
