#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
#define maxn 100005

char a[maxn];
bool vis[maxn];


int main()
{
   #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n,k,r,s,p,ans=0;
	scanf("%d%d%d%d%d%s",&n,&k,&r,&s,&p,a);

	for(int i=0;i<n;i++){
		if(i>=k&&vis[i-k]&&a[i]==a[i-k])continue;
		vis[i]=1;
	    ans+=a[i]=='r'?p:(a[i]=='s'?r:s);
	}
	printf("%d",ans);
	return 0;
}