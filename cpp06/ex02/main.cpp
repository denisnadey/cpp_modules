#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
    srand(time(0));
    int random = (rand() % 3);
    Base *p;
    char a = 0;
    switch (random) {
        case 0:
            p = new A;
            a = 'A';
            break;
        case 1:
            p = new B;
            a = 'B';
            break;
        case 2:
            p = new C;
            a = 'C';
            break;
    }
    if (a)
    {
        std::cout << "generated " << a << " class! " << std::endl;
    }
    else
    {
        std::cout << "ooups!! " << std::endl;
    }
    return (p);
}

void	identify_from_pointer(Base *p)
{
    char c = 0;

    if (A *temp = dynamic_cast<A*>(p))
    {
        c = 'A';
    }
    else if (B *temp = dynamic_cast<B*>(p))
    {
        c = 'B';
    }
    else if (C *temp = dynamic_cast<C*>(p))
    {
        c = 'C';
    }
    if (c)
    {
        std::cout << "your pointer this is " << c << std::endl;
    }
    else
    {
        std::cout << "this pointer not child Base superclass !!! " << std::endl;
    }

}

void	identify_from_reference(Base &p)
{

    char c = 0;

    try {
        A temp = dynamic_cast<A&>(p);
        c = 'A';
    }
    catch (...)
    {}
    try {
        B temp = dynamic_cast<B&>(p);
        c = 'B';
    }
    catch (...)
    {}
    try {
        C temp = dynamic_cast<C&>(p);
        c = 'C';
    }
    catch (...) {}
    if (c)
    {
        std::cout << "your reference this is " << c << std::endl;
    }
    else
    {
        std::cout << "this reference not child Base superclass !!! " << std::endl;
    }
}


int main() {
    Base *ptr = generate();
    identify_from_pointer(ptr);
    identify_from_reference(*ptr);
    std::cout << std::endl;



    Base *ptr2 = new Base;
    identify_from_pointer(ptr2);
    identify_from_reference(*ptr2);
    std::cout << std::endl;



    B *ptr3 = new B;
    identify_from_pointer(ptr3);
    identify_from_reference(*ptr3);
    std::cout << std::endl;

    delete ptr;
    delete ptr2;
    delete ptr3;
    return (0);
}
