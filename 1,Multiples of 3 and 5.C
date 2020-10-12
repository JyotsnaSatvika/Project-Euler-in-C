#include<stdio.h>
#include<conio.h>
void main()
{
    int sum=0;
    for(int i=999;i>=0;i--)
    {
        if(i%3==0)
            sum=sum+i;
        else if(i%5==0)
            sum=sum+i;
    }
    printf("sum is %d",sum);
}
