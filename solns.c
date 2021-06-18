/* Enter your solutions in this file */
#include <stdio.h>
int max(int A[], int n);
int min(int A[], int n);
float average(int A[], int n);
int max(int A[], int n)
{
  
  int maxm=A[0];
  for(int i=1;i<n;i++)
  {
    if(A[i]>maxm)
    {
      maxm=A[i];
    }
  }
  return maxm;
}
int min(int A[], int n)
  {
  
  int minm=A[0];
  for(int i=1;i<n;i++)
  {
    if(A[i]<minm)
    {
      minm=A[i];
    }
  }
  return minm;
}
float average(int A[], int n)
{
  int sum=0;
  float avg;
  for(int i=0;i<n;i++)
  {
    sum+=A[i];
  }
  avg=sum/n;
  return avg;
}


    
