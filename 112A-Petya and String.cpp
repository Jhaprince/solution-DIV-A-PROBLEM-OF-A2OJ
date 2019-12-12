link of problem:http://codeforces.com/problemset/problem/112/A

#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    for(int i=0;i<s1.size();i++)
    {
        if(s1.at(i)>='A' && s1.at(i)<='Z')
            s1.at(i)=s1.at(i)+32;
    }

     for(int i=0;i<s2.size();i++)
    {
        if(s2.at(i)>='A' && s1.at(i)<='Z')
            s2.at(i)=s2.at(i)+32;

    }


    if(s1>s2)
    {
        cout<<"1";
    }
    if(s1<s2)

    {
        cout<<"-1";
    }
    if (s1==s2)
    {
        cout<<"0";
    }
}
