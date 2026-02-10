#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
               int t;
               cin>>t;
               while(t--)
               {
                              string str;
                              cin>>str;
                              if((str[0]=='Y'|| str[0]=='y') && (str[1]=='e' || str[1]=='E')&&(str[2]=='S'||str[2]=='s'))
                              {
                                             cout<<"YES"<<endl;
                              }
                              else
                              {
                                             cout<<"NO"<<endl;
                              }
               }
}