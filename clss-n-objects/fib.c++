#include <bits/stdc++.h>
using namespace std;
int series(int n){
   if((n==1)||(n==0)){
    return n;
   }
   else{
    return series(n-1)+series(n-2);
   }
}
int main(){
    // int n1=0,n2=1,n3 , x;
    // cout<<"enter the number : ";
    // cin>>x;
    // cout<<"printing the series : ";
    // cout<<n1<<" "<<n2<<" ";

    // for(int i=2;i<x;i++){
    //     n3 = n1+n2;
    //     cout<<n3<<" ";
    //     n1=n2;
    //     n2=n3;
    // }
    // return 0;

    int n;
    cout<<"enter the number to find the series : ";
    cin>>n;
    int i=0;
    while(i<n){
        cout<<" "<<series(i);
        i++;
    }
    return 0;

}