#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
               int n,k,l,c,d,p,nl,np;
               cin>>n>>k>>l>>c>>d>>p>>nl>>np;
               int ml=(k*l)/nl;
               int salt=(c*d);
               int third=p/np;
               cout<<(min(min(ml,salt),third))/n<<endl;
               
               
               
}