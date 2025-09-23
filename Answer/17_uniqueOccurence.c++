#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class solution{
    public:
    bool Unique(int arr[],int size){
        sort(arr,arr+size);
        vector<int>v;
        for(int i = 0 ; i < size ; i++){
            int count = 1;
            while(i+1<size && arr[i]==arr[i+1]){
                count++;
                i++;
            }
            v.push_back(count);
        };
        sort(v.begin(),v.end());
        for(int i = 1 ; i < v.size() ; i ++ ){
            if(v[i]==v[i-1]){
                return false;
            }
        }
        return true;

    };
};

int main(){
    int arr[6]={1,1,2,2,2,3};
    solution *x = new solution();
    bool a = x->Unique(arr,6);
    if(a){
        cout<<"Unique Occurence"<<endl;
    }else{
        cout<<"Not Unique"<<endl;
    }
    delete x;
    x = nullptr;
}