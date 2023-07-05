#include<stdio.h>
int main()
{
    int target=1000;
    int by_3=target/3;
    int by_5=(target/5)-1;
    int sum=0;
    for(int counter=1;counter<=by_3;counter++)
    {
       if (counter%5!=0)
       {
           sum+=3*counter;
       }
    }
    for(int counter=1;counter<=by_5;counter++)
    {
        sum+=5*counter;
    }
    printf("the sum is :%d",sum);
    return 0;
}
