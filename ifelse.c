#include<stdio.h>
int main()
{
    int Standard=0;
    printf("enter your Standard:\n");
    scanf("%d",&Standard);
if(Standard==1)
{
    printf("Your Exam is at 7AM\n");
    
}
else if(Standard==10)
{
    printf("Your Exam is at 8AM\n");
}
else if(Standard==3)
{
    printf("Your Exam is at 9Am\n");
}
else if(Standard==4)
{
    printf("Your Exam is at 10Am\n");
}
else
{
    printf("Wrong Standard\n");

}
return 0;
}