#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n;
	vector<int> a(n,0);
	cin>>t;
	while(t--){
	    cin>>n;
	    for(int i =0; i<n; i++){
	    	cin>>a[i];
		}
		// sort(a.begin(),a.end());
		vector<int> ans;
		int c=0;
		for(int i =0; i+1<n; i++){

		    if(a[i]== a[i+1]){
		        c++;
		        
		    }
		    else {
		        ans.push_back(c);
		        c=0;
		    }
		}
		sort(ans.begin(),ans.end());
		int n=ans.size();
	if(ans[n-1]==ans[n-2]){
	    cout<<"NO"<<endl;
	}
	else cout<<"YES"<<endl;
		
	}
}

