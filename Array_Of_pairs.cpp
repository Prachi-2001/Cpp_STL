#include<bits/stdc++.h>
using namespace std;

void printpair(pair<string,int>&p){
  cout<<p.first<<" "<<p.second;
}

int main(){
  int n;
  cin>>n;
  pair<string,int> p[n];
  
  for(int i=0;i<n;i++){
    int y;
    string x;
    cin>>x>>y;
    p[i]={x,y};
  }
  
  // Swap element of array 
  swap(p[1],p[2]);
  for(int i=0;i<n;i++){
     printpair(p[i]);
     cout<<"\n";
  }
  return 0;
}