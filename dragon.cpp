#include<iostream>
using namespace std;
int main()
{
    int s,n;
    cin>>s>>n;
    int a[n][2];
    for(int i=0;i<n;i++)
        for(int j=0;j<2;j++)
    {
        cin>>a[i][j];
    }
    for(int i=0;i<n;i++)
        for(int j=0;j<n-1;j++)
    {
        if(a[j][0]>a[j+1][0])
        {
            swap(a[j],a[j+1]);
        }
    }
   for(int i=0;i<n;i++)
   {
       if(s>a[i][0])
       {
           s+=a[i][1];
       }
       else
       {
           cout<<"NO";
           return 0;
       }
   }
   cout<<"YES";
}
