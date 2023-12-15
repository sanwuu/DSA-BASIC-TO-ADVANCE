#include<iostream>
using namespace std;
//sum of lower triangle 
int main(){
     int n,m;
     cin>>n>>m;
     int arr[n][m];
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
     }
     //sum of lower trinagle
     int sum=0;
     for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            sum+=arr[i][j];
        }
     }
     cout<<sum;
}