// Ques: https://www.codechef.com/problems/INDIPERM

#include <iostream>
#include<vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> a(n,0);
	    if(n%2 == 0){
	        a[n-1] = 1;
	        a[0] = n;
	    }else{
	        a[0] = 1;
	        a[n-1] = n-1;
	    }
	    for(int i = 2;i < n; ++i){
	        if(i%2 == 0) a[i-1] = i+1;
	        else a[i-1] = i-1;
	    }
	    for(int arr:a){
	        cout<<arr<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
