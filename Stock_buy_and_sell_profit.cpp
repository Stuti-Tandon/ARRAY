#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];

	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    int x=0,f=0;
	    int p=0;
	    for(int i=1;i<n;i++)
	    {
	        x=i;
	        f=0;
	        while(arr[i]>arr[i-1]&& i<n)
	        {
	            p+=arr[i]-arr[i-1];
	             i++;
	             f=1;
	        }
	        if(f==1 )
	        {
	             cout<<"("<<x-1<<" "<<i-1<<")";
	             cout<<" ";
	        }
	    }
	    if(p==0)
	    cout<<"No Profit";
	    cout<<endl;
	}
	return 0;
}
