#include<bits/stdc++.h>
using namespace std;
int main()
{
int m,n;
cin>>m;
for(int k=0;k<m;k++)
{
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int l[n]={0};
    int r[n]={0};
    l[0]=1;
    r[n-1]=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
            l[i]=l[i-1]+1;

        else
            l[i]=1;
    }
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>arr[i+1])
            l[i]=l[i+1]+1;
        else
            l[i]=1;
    }
    int s=0;
    for(int i=0;i<n;i++)
    {
        arr[i]=max(l[i],r[i]);
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
}
