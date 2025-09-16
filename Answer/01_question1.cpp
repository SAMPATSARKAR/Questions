// #include <iostream>
// #include <string>
// using namespace std;
// int sum_diff(int x,int l){
    
//     int sum = 0;
//     int product = 1;
//     for(int i = 0 ; i < l;i++){
//         int digit = x%10;
//         sum += digit;
//         product = product*digit;
//         x = x/10;
//     }
//     return product - sum;
// }
// int main(){
//     int n;
//     cin>>n;
//     // int size = n.size();
//     string num = to_string(n);
//     int leng = num.size();
//     cout<<sum_diff(n,leng)<<endl;
// }
// -------two ways of doing--------------------
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int sum = 0;
//     int product = 1;
//     while(n!=0){
//         int digit = n%10;
//         sum += digit;
//         product *= digit;
//         n=n/10;
//     }
//     cout<<product - sum <<endl;

// }