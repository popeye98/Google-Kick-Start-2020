#include <bits/stdc++.h>
using namespace std;
const int N=1e5+5;
const int P=51*30;
int n,k,p;
int a[N];
int check(int d)
{int req=0;
    for(int i=1;i+1<=n;i++)
    {
        req+=(a[i+1]-a[i]-1)/d;
    }
        if(req<=k)
            return 1;
        return 0;



}
int func(int l,int hi)
{while(hi>l){
    int mid=(l+hi)/2;
    if(check(mid))
        hi=mid;
    else l=mid+1;
}
return l;

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	//code

	int t;
	cin>>t;
	for (int tc=1;tc<=t;tc++)
	{

	    cin>>n>>k;
	    for(int i=1;i<=n;i++)
       cin>>a[i];

        int ans=func(1,1e9);
        cout<<"Case #"<<tc<<": "<<ans<<endl;
	}
}

