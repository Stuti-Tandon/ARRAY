#include <iostream>

#include<bits/stdc++.h>

using namespace std;


int main()
{

  int t;

  cin>>t;
	
  while(t--)

  {
	 
   int n,sum=0,count=0,diff=0;
   cin>>n;
	
   cin>>sum;
	  
   int arr[n];
	  
   for(int i=0;i<n;i++)
	  
   cin>>arr[i];

      
   map<int, int> m;
     
   
   for(int i=0;i<n;i++)

        m[arr[i]]++;

	
   
   for(int i=0;i<n;i++)

   {
	      
    count+= m[sum-arr[i]];
	   
     if(sum-arr[i]==arr[i])
	
        count--;
	   
   }
	   
   cout<<count/2<<'\n';
	
  }	
	
return 0;

}