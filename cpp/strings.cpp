#include<iostream>
#include<string>
using namespace std;
int main()
{
    // string str;
    // string str1(5,'a');
    // cout<<str1<<endl;

    // string str="Apni Kaksha";
    // cout<<str<<endl;

    // string str;
    // getline(cin,str);
    // cout<<str<<endl;

    //Different function in strings:-

    //1)Append:-
    string s1;
    string s2;
    string x;
    cout<<"Enter first word"<<endl;;
    getline(cin,s1);
    cout<<"Enter first word"<<endl;;
    getline(cin,s2);
    // s1.append(s2);
    x=s1+s2;
    cout<<x<<endl;

    return 0;

}

