#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int t1;
	cin>>t1;
	for(int t=1;t<=t1;t++ )
	{
	    int n,b;
	    cin>>n>>b;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    int ans=0;
	   for(int i=0;i<n;i++)
	   {
	       if(arr[i]>b)
	       break;
	       else
	       {
	           ans++;
	           b=b-arr[i];
	       }
	   }
	   cout<<"Case #"<<t<<": "<<ans<<endl;
	}
	return 0;
}
