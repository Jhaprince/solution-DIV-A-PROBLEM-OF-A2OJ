link of problem:http://codeforces.com/problemset/problem/118/A

#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++)
        if(s.at(i)>='A' && s.at(i)<='Z')
    {
        s.at(i)=s.at(i)+32;
    }
    cout<<s<<endl;
    for(int i=0;i<s.size();i++)
        if(s.at(i)=='a' || s.at(i)=='e' || s.at(i)=='i' || s.at(i)=='o' || s.at(i)=='u' || s.at(i)=='y')
    {
        s.erase(i,1);
        i--;
    }
    cout<<s<<endl;
    for(int i=0;i<s.size();i++)
{
    string s3=".";
    s.insert(i,s3);
    i++;
}

    cout<<s;

}
