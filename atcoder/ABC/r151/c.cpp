#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define DEBUG(x)           cout << '>' << #x << ':' << x << endl;
#define forn(i,n)          for(int i=0;i<(int)n;++i)
#define for1(i,n)          for(int i=1;i<=(int)n;++i)
#define forr(i,n)          for(int i=(int)n-1;i>=0;--i)
#define forre(i,a,b)       for(int i=(int)b;i>=(int)a;--i)
#define fore(i,a,b)        for(int i=(int)a;i<=(int)b;++i)
#define input(arr,n)       for(int i=0;i<n;i++)cin>>arr[i]
#define output(arr,n)      for(int i=0;i<n;i++)cout<<arr[i]<<" "
#define for_each(arr)      for(auto& it:arr)cout<<it<<" "
#define ff                 first
#define ss                 second
#define PI                 acos(-1.0)
#define all(a)             a.begin(),a.end()
#define rall(a)            a.rbegin(),a.rend()
#define Unique(a)          sort(all(a)),a.erase(unique(all(a)),a.end())
#define pb(x)              push_back(x)
#define eb(x)              emplace_back(x) 
#define ppb(x)             pop_back(x)
#define pf(x)              push_front(x)
#define ppf(x)             pop_front(x)
#define in(x,y)            insert({x,y})
#define Sort(a)            sort(a.begin(),a.end())
#define mem(arr,a)         memset(arr,a,sizeof arr)
#define ins(a)             insert(a)
#define max2(a,b)          max(a,b)
#define max3(a,b,c)        max(a,max(b,c))
#define max4(a,b,c,d)      max(a,max3(b,c,d))
#define min2(a,b)          min(a,b)
#define min3(a,b,c)        min(a,min(b,c))
#define min4(a,b,c,d)      min(a,min3(b,c,d))
typedef long long ll;
typedef pair<int,int> pi;
typedef pair<ll,ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<char> vc;
typedef vector<double> vd;
/*inline int two(int n) { return 1 << n; }
inline int test(int n, int b) { return (n>>b)&1; }
inline void Set(int & n, int b) { n |= two(b); }
inline void Reset(int & n, int b) { n &= ~two(b); }
inline int last_bit(int n) { return n & (-n); }
inline int ones(int n) { int res = 0; while(n && ++res) n-=n&(-n); return res; }*/
/*int fx[]= {0,0,1,-1,-1,1,-1,1};
int fy[]= {1,-1,0,0,-1,1,1,-1};
int fx1[]={0,1,1,1,0,-1,-1,-1};
int fy1[]={1,1,0,-1,-1,-1,0,1};*/



int main()
{
    FIO;
  //  #ifndef ONLINE_JUDGE
   // freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);
  //  #endif
    int n,m,i,p,ans1=0,ans2=0,a[100010],b[100010];
	string s;
	cin>>n>>m;
	for(int i=0;i<=n;i++){
		a[i]=0,b[i]=0;
	}    

	for(int i=0;i<m;i++){
		cin>>p>>s;
		if(s=="WA"&&a[p]==0)
			b[p]++;
		if(s=="AC"&&a[p]==0){
			++ans1;
			ans2+=b[p];
			a[p]=1;
		}
	}
	cout<<ans1<<" "<<ans2<<endl;
   

    
   	
    #ifdef ONLINE_JUDGE
    cerr<<"Time elapsed: "<<1.0*clock()/CLOCKS_PER_SEC<<"s.\n";
    #endif
   return 0;
}
 