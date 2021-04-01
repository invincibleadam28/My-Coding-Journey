#include <bits/stdc++.h>
using namespace std;
#define ll long long

void mergeit(int arr[],int dept[],int l,int m,int r)
{
   int n1=m-l+1;
   int n2=r-m;

   int L[n1];
   int L2[n1];
   int R[n2];
   int R2[n2];
   int i=0;
   for(;i<n1;i++)
   {
      L[i]=arr[l+i];
      L2[i]=dept[l+i];

   }

   for(i=0;i<n2;i++)
   {
      R[i]=arr[m+1+i];
      R2[i]=dept[m+1+i];
   }

   i = 0; 
   int  j = 0; 
    int k = l; 
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            dept[k] = L2[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            dept[k]= R2[j];
            j++;
        }
        k++;
    }

   
    while (i < n1)
    {
        arr[k] = L[i];
        dept[k]= L2[i];
        i++;
        k++;
    }

    
    while (j < n2)
    {
        arr[k] = R[j];
        dept[k] = R2[j];
        j++;
        k++;
    }
}

void mergesort(int arr[],int dept[], int l, int r)
{
    if (l < r)
    {

        int m = l+(r-l)/2;

        mergesort(arr,dept, l, m);
        mergesort(arr,dept, m+1, r);

        mergeit(arr,dept, l, m, r);
    }
}



main()
{
   int n;
   cin>>n;
   int arr[n];
   int dept[n];

   for(int i=0;i<n;i++)
      {
         cin>>arr[i];
      }
      for(int i=0;i<n;i++)
      {
         cin>>dept[i];
      }

   mergesort(dept,arr,0,n-1);
   for(int i=0;i<n;i++)
   {
      cout<<arr[i]<<" "<<dept[i]<<endl;
   }
   int c=1;
   int cmax=1;

   for(int i=0;i<n-1;i++)
   {
      if(dept[i]>arr[i+1])
         {
            c++;
            cmax=max(cmax,c);
         }
      else
      {
         if(c>1)
            c--;
      }

   }
   cout<<c<<endl;
}
