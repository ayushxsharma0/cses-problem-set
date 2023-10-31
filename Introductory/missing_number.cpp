#include<bits/stdc++.h>
using namespace std ;

int function1(int arr[], int n){
    //this typically sort the array and then iterate through it to find the missing element
    sort(arr,arr+n-1) ;
    int k =1 ;
    for(int i=0;i<n-1;i++){
        if(arr[i] != k){
            return k ;
        }
        k++ ;
    }
    //time complexity = O(nlogn) cuz of sorting
}

int main(){
    int n ; //size of array
    cin>>n ;

    int arr[n] ;
    for(int i =0;i<n-1;i++){
        cin>>arr[i] ;
    }
    cout<<function1(arr,n) ;
}