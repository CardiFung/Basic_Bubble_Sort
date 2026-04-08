#include <bits/stdc++.h>
using namespace std;
int n,a[110000];
int main(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){
        for(int k=0;k<n-i-1;k++){
            if(a[k]>a[k+1]){
                int temp=a[k];
                a[k]=a[k+1];
                a[k+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
    cout<<"\n";
    return 0;
}
