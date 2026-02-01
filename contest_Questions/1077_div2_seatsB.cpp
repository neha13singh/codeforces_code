#include<bits/stdc++.h>
using namespace std;
#include<iostream>
int main()
{
   long long t;
   cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
       string str;
       cin>>str;
       int one=0;
    //   int zero=0;
       int countone=0;
       int count=0;
       string str2=str;
       int ans=0;
       /*
       pattern detected for counting number of 1 placed in number of zeroes
       like:
       when we have 1 at either left or either right so the number of other once placement is like this
      no of zeroes
       1-0 -0
       10-1-0
       100-2-1
       1000-3-1
       10000-4-1
       100000-5-2
       1000000-6-2
       10000000-7-2
       100000000-8-3
       1000000000-9-3
       10000000000-10-3
       so the equation formed is n+1/3
       when we have 1 at both side so the number of other once placement is like this
      no of zeroes
       1-0 -0
       101-1-0
       1001-2-0
       10001-3-1
       100001-4-1
       1000001-5-1
       10000001-6-2
       100000001-7-2
       1000000001-8-2
       10000000001-9-3
       100000000001-10-3
       for 11->3
       12->4
       13->4
       14->4
       so the equation formed is n/3

       last one is when there is no 1 present
       
       
       0-1-1
       00-2-1
       000-3-1
       0000-4-2
       00000-5-2
       000000-6-2
       0000000-7-3
       00000000-8-3
       000000000-9-3
       0000000000-10-4
       so the equation formed is n+2/3
       */

       for(int i=0; i<n; i++)
       {
           if(str[i]=='1')
           {
               countone++;
           }
           
           if(str[i]=='0')
           {
               count++;
           }
           else
           {
               if(one) // matlab ham 10001 aisi ya 10001 aisi equation pe work kr rhe hai ek ephale 1 aa gya hai aur ek hame abhi mila hai.
               {
               if(count>0)
               {
                   ans+=(count)/3;
                   count=0;
               }
               }
               else
               {
                   //1000 aisi equation pe 
                   if(count>0)
                   {
                       ans+=(count+1)/3;
                       count=0;
                   }
               }
               one=1;
               
           }
           
       }
       if(count>0 && one)
       {
           ans+=(count+1)/3;
       }
       else
       {
           ans+=(count+2)/3;
       }
       cout<<ans+countone<<endl;
       
   }
    
}