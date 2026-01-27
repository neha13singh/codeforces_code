// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include<bits/stdc++.h>

int main() {
  int s,n;
  cin>>s>>n;
  vector<vector<int>>arr;
  for(int i=0; i<n; i++)
  {
      int a,b;
      cin>>a>>b;
      arr.push_back({a,b});
  }
  sort(arr.begin(),arr.end());
  bool flag=0;
  for(int i=0; i<n; i++)
  {
      if(arr[i][0]<s)
      {
          s+=arr[i][1];
      }
      else
      {
          flag=1;
          break;
      }
      
  }
  if(flag==1)cout<<"NO"<<endl;
  else cout<<"YES"<<endl;

    return 0;
}