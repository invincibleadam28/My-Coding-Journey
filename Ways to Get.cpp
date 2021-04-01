#include<iostream>
using namespace std;
int waystoget(int n)
{
    if(n==0||n==1||n==2)
        return 1;
    if(n==3)
        return 2;

    int s1= waystoget(n-1);
    int s3=waystoget(n-3);
    int s4=waystoget(n-4);

    return(s1+s3+s4);

}
main()
{
    int k;
    cin>>k;
    cout<<waystoget(k);
}
