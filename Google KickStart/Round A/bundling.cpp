#include <bits/stdc++.h>
using namespace std;
const int N=1e5+5;
const int P=51*30;
int n,k,p;
string a[N];
typedef struct data{
data *child[26];
int cnt=0;

}trie;

trie* root;

void insert_(string &a)
{

    trie* cur=root;
    for(int i=0;i<a.size();i++)
    {
        char ch=a[i];
        int reqd=ch-'A';
        if(!cur->child[reqd])
            cur->child[reqd]=new trie();
        cur=cur->child[reqd];

    }
    cur->cnt++;
}
int ans=0;
void dfs(trie *cur,int lvl)
{
    for(int i=0;i<=25;i++)
    {
        if(cur->child[i])
        {
            dfs(cur->child[i],lvl+1);
            cur->cnt+=cur->child[i]->cnt;


        }

    }
    while(cur->cnt>=k)
    {

        cur->cnt-=k;
        ans+=lvl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	//code

	int t;
	cin>>t;
	ans=0;

	for (int tc=1;tc<=t;tc++)
	{ans=0;
	root=new trie();

	    cin>>n>>k;
	    for(int i=1;i<=n;i++)
     {

       cin>>a[i];
insert_(a[i]);}

dfs(root,0);
        cout<<"Case #"<<tc<<": "<<ans<<endl;
	}
}

