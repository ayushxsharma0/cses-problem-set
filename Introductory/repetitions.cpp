#include<bits/stdc++.h>
using namespace std;

int solve(string s){
    //using two pointers approach 
    int i=0 ;
    int j =1 ;
    int n = s.size() ;
    int ans = 1 ;
    int count =1 ;
    while(j<n){
        if(s[i] == s[j]){
            count++ ;
            j++ ;
        }
        if(s[i] != s[j]){
            i = j;
            j++;
            ans = max(ans,count) ;
            count =1 ;
        }
    }
    return ans ;
}

int main()
{
    string s ;
    getline(cin,s) ;
    cout<<solve(s) ;
    return 0;
}