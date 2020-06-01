//program to sorting the data using quick sort
#include<stdio.h>
void quick_sort(int a[],int start,int end);
void swap(int *,int *);
int partition(int a[],int start,int end);
int main()
{
    int a[]={5,2,5,33,12,7,1,9,24};
    int n=sizeof(a);
    quick_sort(a,0,n-1);
    printf("sorted array : n\n");
    for(int i=0;i<n;i++)
        printf("%d",a[i]);
    printf("n");
}
void quick_sort(int a[],int start,int end)
{
    if(start<end)
    {
        int pi=partition(a,start,end);//pi -> partition index
        quick_sort(a,start,pi-1); // sorting left side of partition location
        quick_sort(a,pi+1,end); // sorting right side of partition location
    }
}
int partition(int a[],int start,int end)
{
    int temp;
  int pivot=a[start];
  int i=start+1,j=end;
 while(i<j)
  {
      while(a[i]>a[pivot]&&i<end) //If current element is larger than the pivot
        i++;                     //increment of current element
      while(a[j]<a[pivot])
        j--;
      if(i<j)
      {
          swap(&a[i],&a[j]);
      }
  }
  swap(&a[pivot],&a[j]);
  return j;
}

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
