#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	
	    int n;
	    cin>>n;
	    vector<int>arr(n);
	    unordered_map<int,int>map;
	    for(int i=0; i<n; i++)
	    {
	        cin>>arr[i];
	        map[arr[i]]++;
	    }
	    int count=0;
	    if(map.find(4)!=map.end())
	    {
	        
	        count+=map[4];
	       // cout<<"4: "<<count<<endl;

	    }
	    if(map.find(3)!=map.end())
	    {
	        if(map.find(1)!=map.end())
	        {
	         int minpair=min(map[1],map[3]);
	         count+=minpair;
	       //   cout<<"31: "<<count<<endl;

	         map[1]-=minpair;
	         map[3]-=minpair;
	         
	            
	        }
	        if(map.find(3)!=map.end())
	        {
	            count+=map[3];
	           // cout<<"3: "<<count<<endl;
	            map[3]=0;
	        }
	    }
	    if(map.find(2)!=map.end())
	    {
	        if(map[2]%2==0)
	        {
	            count+=map[2]/2;
	           // cout<<"2 even: "<<count<<endl;

	            map[2]=0;
	        }
	        else
	        {
	            count+=map[2]/2;
	            
	           // cout<<"2 odd but pending one: "<<count<<endl;
	            if(map.find(1)!=map.end() && map[1]!=0)
	            {
	               if(map[1]>=2)
	               {
	                   map[1]-=2;
	               }
	               else
	               {
	                   map[1]--;
	               }
	               //cout<<"2 1 1 or 2 1: "<<count<<endl;
	               count++;

	               
	            }else
	            {
	               // cout<<"2 single: "<<count<<endl;
	                count++;
	            }
	        }
	    }
	    if(map.find(1)!=map.end())
	    {
	        if(map.find(1)!=map.end())
	        {
	           if(map[1]>=4)
	           {
	               int four=map[1]/4;
	               //cout<<"4 1: "<<count<<endl;
	               count+=four;
	               map[1]-=four*4;
	           }
	           if(map[1]!=0 && map[1]<4)
	           {
	               //cout<<"1: "<<count<<endl;
	               count++;
	           }
	           
	            
	            
	            	          //  cout<<"1: "<<count<<endl;

	        }
	    }
	    cout<<count<<endl;
	   
	

}
