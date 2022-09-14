// Ques: https://www.codechef.com/submit/PBATTLE?tab=statement

#include <bits/stdc++.h>
using namespace std;
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T>
using ordered_set = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;
template<class K,class V>
using ordered_map = tree<K,V,less<K>,rb_tree_tag,tree_order_statistics_node_update>;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> a(n);
	    for(int i = 0 ; i < n; ++i){
	        cin>>a[i];
	    }
	    vector<int> b(n);
	    ordered_set<int> X;
	    vector<pair<int,int>> v;
	    for(int i = 0 ; i < n; ++i){
	        cin>>b[i];
	        v.push_back({a[i],b[i]});
	    }
	    sort(v.begin(),v.end());
	    vector<int> s(n,0);
	    int maxi = 0;
	    for(int i = n-1; i >=0 ; --i){
	        // for a:
	        s[i] += i;
	        // for b:
	        X.insert(v[i].second);
	        s[i] += X.order_of_key(v[i].second);
	        maxi = max(maxi,s[i]);
	    }
	    int cnt = 0;
	    for(int i = 0; i < n; ++i){
	        if(s[i] == maxi) cnt++;
	    }
	    cout<<cnt<<endl;
	}
	return 0;
}
