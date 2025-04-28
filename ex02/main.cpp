#include "MutantStack.hpp"

int main(void) {
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    // std::cout << mstack.top() << std::endl;

    // mstack.pop();

    // std::cout << mstack.top() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    {
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
    }
    // {
    //     MutantStack<int> mstack2 = mstack;
    //     MutantStack<int>::iterator it = mstack2.begin();
    //     MutantStack<int>::iterator ite = mstack2.end();

    //     while (it != ite) {
    //         std::cout << *it << std::endl;
    //         ++it;
    //     }
    // }
    std::stack<int> s(mstack); // doesn't crash anything
    return (0);
}
