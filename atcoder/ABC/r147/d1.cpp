#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define bt(i) (1LL<<(i))
typedef long long ll;
using namespace std;
ll two[100];
ll MOD=1e9+7;
int main()
{
	fio;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif;
	two[0]=1;
	for(int i=1;i<100;i++)two[i]=two[i-1]*2%MOD;
	
    int n;
	cin>>n;
	vector<ll>v(n);
	for(int i=0;i<n;i++)cin>>v[i];

	ll ans=0;
	for(int k=0;k<60;k++){
		ll one=0,zero=0;
		for(int i=0;i<n;i++){
			if(bt(k)&v[i])one++;
			else zero++;
		}
		ans+=two[k]*(one*zero%MOD);
		ans%=MOD;
	}
	cout<<ans<<endl;
	return 0;
}