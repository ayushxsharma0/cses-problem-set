#include<bits/stdc++.h>
using namespace std;

void toh(int n, int s, int m, int e){
    //move n-1 from 1 to 2 via 3
    if(n==0) return ;
    toh(n-1,s,e,m) ;
    //move nth disk from 1 to 3
    cout<<s<<" "<<e<<endl ;
    //move n-1 from 2 to 3 via 1
    toh(n-1,m,s,e) ;
}

int main()
{
    int n ; //number of disks
    cin>>n ;
    int steps = pow(2,n) -1 ;

    cout<<steps<<endl ;
    toh(n,1,2,3) ;
    return 0;
}