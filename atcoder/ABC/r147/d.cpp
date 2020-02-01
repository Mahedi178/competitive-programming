#include <bits/stdc++.h>
 
using namespace std;
#define int long long
const int MOD = 1000000007;
 
int main()
{
    
	ios::sync_with_stdio(false);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","r",stdout);
	#endif
	int N;
	cin >> N;
	vector<int> A(N);
	int res = 0;
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	for (int b = 0; b < 60; b++) {
        int bit = ((int)1 << b);
        int cnt = 0;
		for (int i = 0; i < N; i++) {
            if(A[i] & bit){
                cnt++;
            }
		}
        res += ((((bit % MOD) * cnt) % MOD) * (N - cnt)) % MOD;
        res %= MOD;
	}
	cout << res << endl;
	return 0;
}