#include <bits/stdc++.h>
using namespace std;
const int N=51;
const int P=51*30;
int n,k,p;
int dp[N][P];
int arr[N][31],pref[N][31];

int func(int idx,int tak)
{
if(tak==p)
    return 0;
if(idx>n || tak >p)
    return INT_MIN;
if(dp[idx][tak]!=-1)
    return dp[idx][tak];
int ans=INT_MIN;
    for(int i=0;i<=k;i++)
    {
        ans=max(ans,pref[idx][i]+func(idx+1,tak+i));

    }

return dp[idx][tak]=ans;
//code here
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	//code

	int t;
	cin>>t;
	for (int tc=1;tc<=t;tc++)
	{

	    cin>>n>>k>>p;
	    memset(dp,-1,sizeof(dp));
pref[1][0]=0;
	    for(int i=1;i<=n;i++)
        {for(int j=1;j<=k;j++)
	    {
	        cin>>arr[i][j];
	        pref[i][j]=pref[i][j-1]+arr[i][j];
	    }
        }
        int ans=func(1,0);
        cout<<"Case #"<<tc<<": "<<ans<<endl;
	}
}

