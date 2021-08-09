#include <bits/stdc++.h>
using namespace std;
void isKSortedArray(int arr[], int n, int k)
    {
        priority_queue<int,vector<int>, greater<int>>q;
        
        for(int i=0;i<n;i++)
        {
            q.push(arr[i]);
            if(q.size()>k)
            {
                
               cout<<(q.top())<<" ";
                q.pop();
            }
        }
        while(q.size()>0)
        {
             cout<<(q.top())<<" ";
            q.pop();
        }
        
        return;
    }
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    
	    isKSortedArray(arr,n,k);
	    cout<<endl;
	}
	return 0;
}
