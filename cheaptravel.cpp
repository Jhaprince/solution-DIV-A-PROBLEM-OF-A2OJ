#include<iostream>
using namespace std;
int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int i=n/m; int j=n%m;
    int k=(i*b)+(j*a);
    int l=(i+1)*b;
    int o=n*a;
    if(k<=l && k<=o)
       {

        cout<<k;}
    else if(l<=k && l<=o)
      {

        cout<<l;}
else
      {

        cout<<o;}

}

