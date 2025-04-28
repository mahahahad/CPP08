#include "MutantStack.hpp"

template <typename T>    
typename MutantStack<T>::iterator    MutantStack<T>::begin(void) {
    return (this->c.begin());
};

template <typename T>    
typename MutantStack<T>::iterator    MutantStack<T>::end(void) {
    return (this->c.end());
};
    
template <typename T>
MutantStack<T>::MutantStack(void): std::stack<T>() { }

template <typename T>
MutantStack<T>::MutantStack(const MutantStack& copy): std::stack<T>(copy) { }

template <typename T>
MutantStack<T>&  MutantStack<T>::operator=(const MutantStack<T>& copy) {
    this = copy;
    return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack( void ) { }
