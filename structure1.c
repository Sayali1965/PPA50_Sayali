#include<stdio.h>

struct Demo
{
    int no;
    float f;
    double d;
};
int main()
{
    struct Demo obj;

    obj.no=11;
    obj.f=90.8;
    obj.d=90.8888;

    printf("%d\n",obj.no);
    printf("%f\n",obj.f);
    printf("%f\n",obj.d);
    return 0;
}