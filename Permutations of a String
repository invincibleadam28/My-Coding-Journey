#include <bits/stdc++.h>
using namespace std;
int z=0;
void permutations(string s,int l,int r)
{
    if(l==r)
    {
        cout<<s<<endl;
        z++;
    }

    else
        {
        for(int i=l;i<=r;i++)
        {
            swap(s[l],s[i]);
            permutations(s,l+1,r);
            //swap(s[l],s[i]);
        }
        }
}
main()
{
    string s;
    cin>>s;
    int n = s.length();
    permutations(s,0,n-1);
    cout<<z;
}
