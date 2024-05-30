#include<stdio.h>

struct Demo
{
    int data;                //4
    struct Hello hobj;       //8
    {
        int no;              //4
        int f;               //4
    }hobj;
};
int main()
{
    struct demo dobj; 
    dobj.data=11;
    dobj.hobj.no=21;
    dobj.hobj.f=90.99;
    return 0;
}