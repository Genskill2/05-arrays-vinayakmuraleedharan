/* Enter your solutions in this file */
#include <stdio.h>
int max(int A[], int n);
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

    
