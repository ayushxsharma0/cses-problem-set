#include<bits/stdc++.h>
using namespace std ;

// int function1(int arr[], int n){
//     //this typically sort the array and then iterate through it to find the missing element
//     sort(arr,arr+n-1) ;
//     int k =1 ;
//     for(int i=0;i<n-1;i++){
//         if(arr[i] != k){
//             return k ;
//         }
//         k++ ;
//     }
//     //time complexity = O(nlogn) cuz of sorting
// }

int function2(long long arr[],long long n){
    //we ca calculate sum upto n and minus our sum to get the number
    long long sum =0 ;
    for(int i =0;i<n-1;i++){
        sum += arr[i] ;
    }
    //sum of first n integers = n(n-1)/2 ;
    long long realsum = n*(n+1)/2 ;
    return  realsum - sum ;
    //time complexity = O(n)
}

int main(){
    long long n ; //size of array
    cin>>n ;

    long long arr[n] ;
    for(int i =0;i<n-1;i++){
        cin>>arr[i] ;
    }
    cout<<function2(arr,n) ;
}