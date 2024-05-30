#include<iostream>

namespace Marvellous
{
    class Demo
    {
        //LOGIC
    };
}

namespace PPA
{
    class Hello
    {
        //LOGIC
    };
}

using namespace Marvellous;

int main()
{
    std::cout<<"Inside main\n";
    Demo dobj;
    PPA::Hello hobj;
    return 0;
}
