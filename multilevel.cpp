#include<iostream>
using namespace std;

class Base
{
    public:
    int A,B;
    Base()
        { cout<<"Inside Base constructor\n"; 
        A=11;
        B=21;
         }
    ~Base()
        {cout<<"Inside Base destructor\n"; }
     void Fun()
         { cout<<"Inside Base fun\n";  }   
};

class Derived:public Base
{
    public:
    int X,Y;
    Derived()
    {cout<<"Inside Derived constructor\n"; 
    X=51;
    Y=101;
     }
    ~Derived()
    {cout<<"Inside Derived distructor\n";  }
    void Gun()
    {cout<<"Inside Derived gun\n";  }
};
class DerivedX:public Derived
{
    public:
    int P;
    DerivedX()
    {
        cout<<"Inside DerivedX constructor\n";
        P=111;
    }
    ~DerivedX()
    {cout<<"Inside DerivedX destructor\n";}
    void Sun()
    {cout<<"Inside Derived Sun\n";}
};
int main()
{
    Derived dobj;   //Constructor of Base Constructor of Derived constructor of DerivedX
    cout<<"Size of object is:"<<sizeof(dobj)<<"\n";     //20

    cout<<dobj.A<<"\n";
    cout<<dobj.B<<"\n";
    cout<<dobj.X<<"\n";
    cout<<dobj.Y<<"\n";
    cout<<dobj.P<<"\n";

    dobj.Fun();     //Base Fun
    dobj.Gun();     //Derived Gun
    dobj.Sun();     //Derived Sun
    //Destructor of Derived
    //Destructor of DerivedX
    //Destructor Base
    return 0; 
    
}
