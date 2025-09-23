#include <vector>
#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
class solution{
    public:
    int i =0 ;
    int j = 0;
    public:
    vector<int> intersection(int *arr1,int m,int *arr2,int n){
        vector<int> v;
        while(i<m && j<n){
            if(arr1[i]==arr2[j]){
                v.push_back(arr1[i]);
                i++;
                j++;
            }else if(arr1[i]<arr2[j])
            {
                i++;
            }else{
                j++;
            }

        };
        return v;
    };

};

int main(){
    auto start = high_resolution_clock::now();
    // ---------------------------------------
    int arr1[4] = {1,2,3,4};
    int arr2[3] = {2,3,4};
    solution x;
    vector<int> a = x.intersection(arr1,4,arr2,3);
    for(int c : a){
        cout<< c <<" ";
    };cout<<endl;
    // --------------------------------------------
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop-start);
    cout<<"Duration in "<<duration.count()<<" millisec "<<endl;

    return 0;
}