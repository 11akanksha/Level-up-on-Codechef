// Ques: https://www.codechef.com/submit/SUBARRY?tab=statement

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n ; ++i){
        cin>>arr[i];
    }
    
    sort(arr.begin(),arr.end());
    int maxi = max((ll)arr[0]*arr[0],(ll)arr[n-1]*arr[n-1]);
    int mini = min({(ll)arr[0]*arr[0],(ll)arr[n-1]*arr[n-1],(ll)arr[0]*arr[n-1]});
    cout<<mini<<" "<<maxi<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
