#include<bits/stdc++.h>
using namespace std;

long long fun(long long n){
    if(n==1){
        return 1 ;
    }
    if(n%2==0){
        cout<<" "<<n/2 ;
        return fun(n/2) ;
    }
    else{
        
        cout<<" "<<(n*3) +1 ;
        return fun((n*3)+1) ;
    }
}

int main()
{
    long long x ;
    cin>>x ;
    cout<<x ;
    fun(x) ;

    return 0;
}