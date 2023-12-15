//There will be minor change in this question
#include<iostream>
#include<vector>
using namespace std;
int first_occ(vector<int> arr, int target){
    int l=0;
    int r=arr.size()-1;
    int res=-1;
    while(l<=r){
         int mid=l+(r-l)/2;
         if(arr[mid]==target){
            //ther will be only two chnages as compare to the binary search standard 
            //algorithm
            res=mid;
            l=mid+1;
         }
         else if(arr[mid]>target){
            r=mid-1;
         }
         else l=mid+1;
    }
    return res;
}
int main(){
       vector<int> arr{1,3,3,3,3,4,4,5};
       cout<<first_occ(arr,4)<<endl;
}