#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template    <typename T>
class   MutantStack: public std::stack<T> {
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator    begin( void );
        iterator    end( void );

    public:
        MutantStack( void );
        MutantStack( const MutantStack& copy );
        MutantStack&  operator=( const MutantStack& copy );
        ~MutantStack( void );
};

#include "MutantStack.tpp"

#endif
