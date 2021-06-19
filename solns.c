#include <stdio.h>
int max(int a[], int n)
{
    int maxm = 0;
    for(int i = 0; i<n; i++)
    {
        if(a[i]>maxm)
            maxm = a[i];
    }
    return maxm;
}

int min(int a[], int n)
{
    int minm = 2147483647;
    for(int i = 0; i<n; i++)
    {
        if (a[i]< minm)
            minm = a[i];
    }
    return minm;
}

float average(int a[], int n)
{
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum+=a[i];
    }
    int avgn = sum/n;
    return avgn;
}

int mode(int a[],int n) 
{
   int mxV = 0, mxC = 0;
   for (int i = 0; i < n; ++i) 
   {
      int ct = 0;
      for (int j = 0; j < n; ++j) 
      {
         if (a[j] == a[i])
            ++ct;
      }  
      if (ct > mxC)
      {  
         mxC = ct;
         mxV = a[i];
      }
   }
   return mxV; 
}

int factors(int n, int a[])
{
    int p=n/2,j=0;
    for(int i=2;i<p+1;)
    {
        if(n%i==0)
        {
            a[j]=i;
            j++;
            n=n/i;
        }
     else 
     i++;
  }return j;
}

    
