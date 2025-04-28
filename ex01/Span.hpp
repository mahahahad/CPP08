#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <iostream>
#include <math.h>
#include <vector>

class   Span {
    public:
        Span( unsigned int n );
        Span( const Span& copy );
        Span&   operator=( const Span& copy );
        ~Span( void );
        void    addNumber( int newNum );
        void    addNumbers(
            std::vector<int>::iterator beginIt,
            std::vector<int>::iterator endIt
        );
        int     shortestSpan( void );
        int     longestSpan( void );
        void    print( void ) const;

    public:
        class   CalculationException: public std::exception {
            public:
                virtual const char  *what() const throw();
        };
        class   OverfillException: public std::exception {
            public:
                virtual const char  *what() const throw();
        };

    private:
        Span();
        unsigned int        _maxLimit;
        std::vector<int>    _arr;
};

#endif
