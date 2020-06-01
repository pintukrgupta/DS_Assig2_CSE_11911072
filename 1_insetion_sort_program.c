#include<stdio.h>
void insertion_sort(int a[],int);
int main()
{
    int a[]={87,25,97,22,76,23};
    insertion_sort(a,5);
    printf("sorted data:\n");
    for(int i=0;i<=5;i++)
    {
        printf(" %d",a[i]);
    }
    return 0;
}
void insertion_sort(int a[],int n)
{
    int j,key;
  for(int i=1;i<=n;i++)
  {
       key=a[i];
      j=i-1;

  while(j>=0&&a[j]>key)
  {
      a[j+1]=a[j];
      j=j-1;
  }
  a[j+1]=key;
  }
}


