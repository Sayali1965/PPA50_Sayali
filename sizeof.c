#include<stdio.h>
int main()
{
    char ch='A';         //1 byte
    int i=11;            //4 byte
    float f=90.89;       //4 byte 
    double d=90.768459   //8byte

    int Arr[5];          //20 byte
    char Crr[5];         //5 byte
    float Frr[5];        //20 byte 
    double Drr[5];       //40 byte
                                            
    printf("%lu\n",sizeof(ch));
    printf("%lu\n",sizeof(i));
    printf("%lu\n",sizeof(f));
    printf("%lu\n",sizeof(d));

    printf("%lu\n",sizeof(Arr));
    printf("%lu\n",sizeof(Crr));
    printf("%lu\n",sizeof(Frr));
    printf("%lu\n",sizeof(Drr));
    return 0;