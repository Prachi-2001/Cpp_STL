#include<bits/stdc++.h>
using namespace std;
// Array of vectors 

void printvec(vector<int> &v){
		for(int i=0;i<v.size();i++){
			cout<<v.at(i)<<" ";
		}
		cout<<"\n";
}
int main(){
	int n;
	cin>>n;
    vector<int> v[n];  // create array of n vectors of any size 
    for(int i=0;i<n;i++){
    	int s;
    	cin>>s;
    	for(int j=0;j<s;j++){
           int x;
           cin>>x;
           v[i].push_back(x);
    	}
    }
    for(int i=0;i<n;i++){
    	printvec(v[i]);
    }
	return 0;
}
// Test 1
