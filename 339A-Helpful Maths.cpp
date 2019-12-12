link of problem:http://codeforces.com/problemset/problem/339/A

#include<iostream>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    if(s.size()>1)
    {

    for(int i=0;i<s.size();i++)
        for(int j=0;j<s.size()-2;j++)
    {
        if(s.at(j)>s.at(j+2))
        {
           swap(s.at(j),s.at(j+2));

        }
    }
    cout<<s;
    }
    else
    {
        cout<<s;
    }

}
