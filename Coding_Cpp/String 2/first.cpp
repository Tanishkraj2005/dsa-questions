
#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<climits>
using namespace std;
int main(){
    string s = "physicswaallah";
    int n=s.length();
    unordered_map<char,int> mp;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    char ch;
    int maxi = 0;
    for(auto i:mp){
        if(i.second>maxi){
            maxi=i.second;
            ch=i.first;
        }
    }
    cout<<ch<<" "<<maxi;
    
}


