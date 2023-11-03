#include<bits/stdc++.h>
using namespace std;

//map is giving TLE !
int main()
{
    int n  ;
    cin>>n ;
    
    set<int> s ;
    int a ;
    while(n--){
        cin>>a ;
        s.insert(a) ;
    }
    cout<<s.size()  ;
    return 0;
}
//if you take array as input and then iterate it again to push elements in the se
// it will give TLE cuz T.C. = O(2n) 
//so take input and insert it to set T.C. = O(n) 