#include<stdio.h>
#include<conio.h>
void main()
{
    int first_previous=2;
    int second_previous=1;
    long int limit=4000000;
    long int sum=2;
    long int fibo=0;
    while(fibo<=limit)
    {   
        fibo=first_previous+second_previous;
        second_previous=first_previous;
        first_previous=fibo;
        if(fibo%2==0)
        {
         sum=sum+fibo;  
        }
    }
    printf("%ld",sum);
}


// Answer:  4613732
