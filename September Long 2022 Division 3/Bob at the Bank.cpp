// Ques: https://www.codechef.com/submit/BOBBANK?tab=statement

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
    while(t--){
        int w,x,y,z;
        cin>>w>>x>>y>>z;
        cout<<(w + z * (x-y))<<endl;
    }	
	return 0;
}
