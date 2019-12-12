http://codeforces.com/problemset/problem/122/A

#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
    string s;
    int i,j;
    getline(cin,s);
    for(i=0;i<s.size();i++)
    {
        if(s.at(i)!='4' && s.at(i)!='7')
        {


            break;
        }
    }
    j=i;
    if (j==s.size())
    {
        cout<<"YES"<<endl;
    }

    else if (stoi(s)%4==0 || stoi(s)%7==0 || stoi(s)%47==0)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";

}
