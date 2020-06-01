#include<stdio.h>
void bubble_sort(int a[],int);
int main()
{
    int a[]={87,25,97,22,76,23};
    bubble_sort(a,6);
    printf("sorted data:\n");
    for(int i=0;i<=5;i++)
    {
        printf(" %d",a[i]);
    }
    return 0;
}
void bubble_sort(int a[],int n)
{
    int round,i,temp;
    for(round=0;round<=n-1;round++)
    for(i=0;i<=n-1-round;i++)
        if(a[i]>a[i+1])
    {
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
}


