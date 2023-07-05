#include<stdio.h>
int main()
{
    int previous=1;
    int next=2;
    int sum=0;
    int temp;
    int target=4000000;
    do
    {
        if (next%2==0)
        {
            sum+=next;
        }
        temp=previous+next;
        previous=next;
        next=temp;
    }
    while(next<target);
    printf("the sum is :%d",sum);
    return 0;
}
