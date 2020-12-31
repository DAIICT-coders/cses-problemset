#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define FOR(start,end) for(int i=start;i<=end;i++)
#define MOD 1000000007
#define pb push_back
#define F first
#define S second
#define all(v) v.begin(),v.end()
#define vector2d vector<vector<int>> 
#define error 0.0000000001
using namespace std;
typedef long long int lint;
typedef pair<lint,lint> pii;
typedef pair<int,pii> piii;
 
lint power(lint a,lint b){
    if(b == 0) return 1;
    lint temp = power(a,b/2);
    temp %= MOD;
    lint res = (temp*temp)%MOD;
    if(b%2 == 0) return res%MOD;
    else return (res*a)%MOD;
}
 
int main(){
    int t; cin >> t;
    while(t--){
        lint a,b; cin >> a >> b;
        cout << power(a,b)%MOD << endl;
    }
    return 0;
}