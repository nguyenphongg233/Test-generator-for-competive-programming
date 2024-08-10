#include<bits/stdc++.h>

using namespace std;

#define read() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define day() time_t now = time(0);char* x = ctime(&now);cerr<<"Right Now Is : "<<x<<"\n"

#define int long long
#define ii pair<int,int>
#define X first
#define Y second 

const long long MAX = (int)1e6 + 5;
const long long INF = (int)1e9;
const long long MOD = (int)1e9 + 7;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

long long Rand(long long l,long long r){
    long long x = rng() % (long long)1e18;
    return x % (r - l + 1) + l;
}

signed main(){

	int n = Rand(1,1e5);
	
	cout << n << "\n";
	
}
