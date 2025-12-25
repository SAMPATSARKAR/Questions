#include<bits/stdc++.h>
using namespace std;
bool linearSearch(int arr[],int target,int size){
    if(size == 0){
        return false;
    }
    if( arr[0]==target ){
        return true;
    }else{
        return linearSearch(arr+1,target,size-1);
    }

}
int main(){
    int arr[8]= {1,3,5,7,8,9,23,25};
    cout<<linearSearch(arr,23,8)<<endl;
}