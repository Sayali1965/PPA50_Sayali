#include<iostream>
using namespace std;

class Arithematic
{
    public:
    int No1;
    int No2;

    Arithematic()
    {
        No1=10;
        No2=20;
    }
    Arithematic(int A,int B)
    {
        No1=A;
        No2=B;
    }
    int Addition()
    {
        int Ans=0;
        Ans=No1+No2;
        return Ans;
    }
    int Substraction()
    {
        int Ans=0;
        Ans=No1-No2;
        return Ans;
    }
};

int main()
{
    int value1=0, value2=0, Ret=0;
    cout<<"Enter first number:\n";    //printf("Enter first number\n");
    cin>>value1;                      //scanf("%d",&value1);

    cout<<"Enter second number:\n";
    cin>>value2;

    Arithematic obj(value1,value2);

    Ret=obj.Addition();
    cout<<"Addition is:"<<Ret<<"\n";

    Ret=obj.Substraction();
    cout<<"Substraction is:"<<Ret<<"\n";
    return 0;
}