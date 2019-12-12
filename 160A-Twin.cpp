link of problem:http://codeforces.com/problemset/problem/160/A
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int sum=0;
    int counter=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sum=sum/2;
    sort(a,a+n);
    int sum2=0;
    for(int i=n-1;i>=0;i--)
    {
        sum2+=a[i];
        ++counter;
        if(sum2>sum) 
        {
            break;
        }
    }
    cout<<counter;
    
    
}
