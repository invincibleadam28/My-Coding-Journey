#include<bits/stdc++.h>
#include <unordered_map>
#include <map>
#include <vector>
using namespace std;
#define ll long long


int main()
{
int testcase,n;
cin>>testcase;
for(int casenumber=0;casenumber<testcase;casenumber++)
{
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //1 ascending and 0 descending
    int flag =1;
    int i=0;
    while(1)
    {
       if(i>n-2)
         break;

       if(flag==1)
       {
          if(arr[i+1]<arr[i])
            swap(arr[i],arr[i+1]);

          flag=0;
          i++;
       }

       if(flag==0)
       {
         if(arr[i]<arr[i+1])
            swap(arr[i],arr[i+1]);
         flag=1;
         i++;
       }
    }
    for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";

    cout<<endl;

}
}
