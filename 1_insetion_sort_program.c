//Program for insertion sorting
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

  while(j>=0 && a[j]>key)  // here we write j>=0 because we compare upto 0 location 
  {
      a[j+1]=a[j];  // Interchange the current data
      j=j-1;  /* Move elements of arr[0..i-1], that are greater than key, 
                  to one position ahead of their current position */
  }
  a[j+1]=key;
  }
}


