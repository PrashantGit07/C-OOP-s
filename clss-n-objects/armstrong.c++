#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, original, res = 0, rem;
    cout<<"enter the number : ";
    cin>>n;
    original=n;
    while (original!=0)
    {
        rem = original%10;
        res += rem*rem*rem;

        original/=10;
    }
    if(res==n){
        cout<<"the number is armstrong";
    }
    else{
        cout<<"the number is not armstrong";
    }
    
    return 0;
}