#include <bits/stdc++.h>
using namespace std;

int counttriplets(int arr[],int n)
{
   int maxi=INT_MIN;
   for(int i=0;i<n;i++)
   {
      if(arr[i]>maxi)
      {
         maxi=arr[i];
      }
   }
   maxi=maxi+1;
   int dp[maxi]={0};

   for(int i=0;i<n;i++)
   {
      dp[arr[i]] += 1;
   }
   int c=0;
   if(dp[0]>=3)
      c += (dp[0]*(dp[0]-1)*(dp[0]-2))/6;

   if(dp[0]>0)
   {

   for(int i=1;i<maxi;i++)
   {
      c+= (dp[0]*dp[i]*(dp[i]-1))/2;
   }

   }
   for(int i=1;2*i<maxi;i++)
   {
      c+= (dp[i]*(dp[i]-1)*dp[2*i])/2;
   }
   for(int i=1;i<maxi;i++)
   {
      for(int j=i+1;i+j<maxi;j++)
      {
         c+= dp[i]*dp[j]*dp[i+j];
      }
   }
   if(c==0)
      return -1;
   else
      return c;
}

main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
      cin>>arr[i];
   }
   cout<<counttriplets(arr,n)<<endl;

}
