#include<bits/stdc++.h>

using namespace std;

#define read() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define day() time_t now = time(0);char* x = ctime(&now);cerr<<"Right Now Is : "<<x<<"\n"

#define ii pair<int,int>
#define X first
#define Y second 

const long long MAX = (int)1e6 + 5;
const long long INF = (int)1e9;
const long long MOD = (int)1e9 + 7;

int l,r;
string s;
	
signed main(){
	
	read();
	
	cin >> l >> r >> s;
	
	//freopen("data.txt","r",stdin);
	//int t;
	//cin >> t;
	
	//s = to_string(t + 1) + "." + s;
	
	system(("md " + s).c_str());
	
	for(int i = l;i <= r;i++){
		//system(("echo .> test.inp").c_str());
		system(("Test_generator.exe > " + s + "\\test" + to_string(i) + ".inp").c_str());
		system(("Run_Test.exe < " + s + "\\test" + to_string(i) + ".inp > " + s + "\\test" + to_string(i) + ".out ").c_str());
		cerr << "Create test number " << i << " successfull!\n";
	}	
	
	//freopen("data.txt","w",stdout);
	//cout << t + 1;
}
