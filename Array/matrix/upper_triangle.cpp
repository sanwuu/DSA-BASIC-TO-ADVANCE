#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>>m{{1,2,3},{4,5,6},{7,8,9}};
    int n=m.size();
    int sum=0;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            sum+=m[i][j];
        }
    }
    cout<<sum;
    
}