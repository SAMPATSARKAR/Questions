// #include <iostream>
// using namespace std;
// class solution{
//     public:
//     int duplicate(int *arr,int size){
//         int ans = 0;
//         for(int i = 0 ; i < size ; i++){
//             ans = ans ^ arr[i];
//         };
//         for(int i = 1 ; i < size;i++){
//             ans = ans^i;
//         };
//         return ans;
//     };

// };

// int main(){
//     int arr[5]={1,2,4,3,4};
//     solution x;
//     int a = x.duplicate(arr,5);
//     cout<<"Duplicate is:- "<<a<<endl;
// }
// --------------------------------------------------------------------------------------------
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// class Solution {
// public:
//     vector<int> findDuplicates(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         vector<int>v;
//         for(int i =0;i<nums.size()-1;){15_Awap_Number
//             if(nums[i]==nums[i+1]){
//                 v.push_back(nums[i]);
//                 i+=2;
//             }else{
//                 i++;
//             }
//         }
//         return v;
//     }
// };

// int main(){
//    vector<int> arr={1,2,4,3,4};
//     Solution x;
//     vector<int> a = x.findDuplicates(arr);
//     for(int b : a){
//         cout<<b<<endl;
//     }
// }
// ----------------------------------------------------------------------------------------------
#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>   // for timing
#include <random>

using namespace std;
using namespace std::chrono;
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>v;
        for(int i =0;i<nums.size()-1;){
            if(nums[i]==nums[i+1]){
                v.push_back(nums[i]);
                i+=2;
            }else{
                i++;
            }
        }
        return v;
    }
};

int main() {
    // Start timer
    auto start = high_resolution_clock::now();

    // -------- Your algorithm here --------
   
    vector<int> arr;

    for (int i = 0; i < 50000; i++) {
        arr.push_back(i);
        arr.push_back(i);  // every number appears twice
    }

    random_device rd;   // hardware random seed
    mt19937 g(rd());    // Mersenne Twister engine
    shuffle(arr.begin(), arr.end(), g);

    Solution x;
    vector<int> a = x.findDuplicates(arr);
    int count = 0;
    for(int b : a){
        cout<<b<<endl;
        count++;
        if(count == 10){
            break;
        }
    }

    // -------------------------------------

    // End timer
    auto stop = high_resolution_clock::now();

    // Calculate duration in microseconds
    auto duration = duration_cast<milliseconds>(stop - start);

    cout << "Time taken: " << duration.count() << " milliseconds" << endl;

    return 0;

}
