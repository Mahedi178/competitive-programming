#include<bits/stdc++.h>
using namespace std;
namespace std{
	ostream& operator<<(ostream &os,const pair<int,string> &p){
		return os<<"("<<p.first<<", "<<p.second<<")";
	}
	
}
int main()
{
	vector<pair<int,string>> v {
		{1,"one"},
		{2,"two"},
		{3,"three"},
		{4,"four"}};
	
	map<int,string>m;
	copy_n(begin(v),3,inserter(m,begin(m)));
    auto shell_it(ostream_iterator<pair<int,string>>{cout,","});
    copy(begin(m),end(m),shell_it);
    cout<<'\n';	
	return 0;
}