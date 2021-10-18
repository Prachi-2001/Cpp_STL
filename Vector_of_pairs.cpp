// vector of pairs
#include <bits/stdc++.h>
using namespace std;

void printvec(vector<pair<int,int> >&v1){
 
  for(int i=0;i<v1.size();i++){
      cout<<v1[i].first<<" "<<v1[i].second<<"\n";
  }
}

int main() 
{
    vector<pair<int,int> >v;  // here size of vector is 0
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
      int x,y;
      cin>>x>>y;
      // we can use make_pair function also to pass pair into push_back 
      v.push_back({x,y});  
    }
    swap(v[0],v[2]); 
    printvec(v);
    return 0;
}
