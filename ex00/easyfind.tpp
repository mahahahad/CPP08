#include "easyfind.hpp"

template <typename T>
void    easyfind(T haystack, int needle) {
    // assuming T is a container of integers
    // it should contain a begin and end member function
    typename T::iterator it = std::find(
                                haystack.begin(),
                                haystack.end(),
                                needle
                            ); 
    if (it != haystack.end()) {
        std::cout << "Value found: " << *it << std::endl;
    } else {
        std::cerr << "Value was not found" << std::endl;
    }
}
