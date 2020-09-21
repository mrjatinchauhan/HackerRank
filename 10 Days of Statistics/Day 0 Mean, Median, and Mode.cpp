#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;


int main() {
    int n;
    cin>>n;
    int*  arr = new int[n];  
    // input data //
    for(int i=0;i<n;++i){
        cin>>arr[i];
    } 
    // mean // 
    double mean = 0;
    for(int i=0;i<n;++i){
        mean+=arr[i];
    } 
    mean/=static_cast<double>(n);
    // sort // 
    sort(arr,arr+n);
    // median // 
    double median = 0;
    if(n%2)
        median = arr[n/2];
    else 
        median = .5*(arr[n/2]+arr[n/2-1]); 
    // mode // 
    int mode = arr[0];
    int count = 1;
    int count_max = 1;
    for(int i=0;i<n-1;++i){
        if(arr[i]==arr[i+1])
            ++count;
        else 
            count=1; 
        // new mode // 
        if(count>count_max){
            count_max = count;
            mode = arr[i];
        }
    }
    // output // 
    cout<<fixed<<setprecision(1)<<mean<<endl;
    cout<<fixed<<setprecision(1)<<median<<endl;
    cout<<mode<<endl;
    // deallocate // 
    delete[] arr;
    return 0;
}