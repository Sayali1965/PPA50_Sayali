#include<stdio.h>

void Display(int No)       //calleee
{
    int iCnt = 0;

    while(iCnt < No)
    {
        printf("Jay Ganesh...\n");
        iCnt++;
    }
}

int main()      //caller
{
    Display(4); 
    
    return 0;
}