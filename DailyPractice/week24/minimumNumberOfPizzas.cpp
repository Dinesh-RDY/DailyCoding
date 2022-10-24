#include <bits/stdc++.h>
#include<
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	   long long n,k;
	   cin>>n>>k;
	    if(n%k==0){
	        cout<<n/k<<endl;
	    }
	    else{
	        int ans=lcm(n,k)/k;
	        cout<<ans<<endl;
	    }
	}
	return 0;
}
