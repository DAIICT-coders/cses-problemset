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
 
lint power(lint a,lint b,lint p){
    if(b == 0) return 1;
    lint temp = power(a,b/2,p);
    temp %= p;
    lint res = (temp*temp)%p;
    if(b%2 == 0) return res%p;
    else return (res*a)%p;
}
 
int main(){
    int t; cin >> t;
    while(t--){
        lint a,b,c; cin >> a >> b >> c;
        lint temp = power(b,c,MOD-1);
        lint res = power(a,temp,MOD)%MOD;
        cout << res << endl;
    }
    return 0;
}