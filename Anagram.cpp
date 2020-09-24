#include<bits/stdc++.h>
using namespace std;
int main()
{
int m,n;
cin>>m;
for(int k=0;k<m;k++)
{
    string s1,s2;
    cin>>s1>>s2;
    int a1[26]={0};
    int a2[26]={0};

    for(int i=0;i<s1.length();i++)
    {
        a1[(int)s1[i]-97] += 1;
    }
    for(int i=0;i<s2.length();i++)
    {
        a2[(int)s2[i]-97] += 1;
    }
    int flag=0;
    for(int i=0;i<26;i++)
    {
        if(a1[i]!=a2[i])
        {
            flag=1;
            break;
        }

    }
    for(int i=0;i<26;i++)
    {
        cout<<a1[i]<<" "<<a2[i]<<endl;
    }
    if(flag==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
}
