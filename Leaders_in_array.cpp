#include<iostream>
#include<vector>
using namespace std;

void leaders(int arr[], int n)
{
    vector<int> v;
    v.push_back(arr[n-1]);
    int j=0;
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>=v[j])
       {
           v.push_back(arr[i]);
           j++;
       }
    }
    for(int i=j;i>=0;i--)
        cout<<v[i]<<" ";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        leaders(a,n);
    }
    return 0;
}
