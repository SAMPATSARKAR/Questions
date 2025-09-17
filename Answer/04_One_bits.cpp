// #include <iostream>
// using namespace std;
// class solution{
//     public:
//     int bits(int n){
//         int count = 0;
//         while(n!=0){
//             if(n&1){
//                 count++;
//             }
//             n=n>>1;
//         }
//         return count;
//     }
// };
// int main(){
//     int n;
//     cin>>n;
//     solution x;
//     int a = x.bits(n);
//     cout<< a <<endl;
// }
// -----------------new ---------------
// #include <iostream>
// using namespace std;
// class solution{
//     public:
//     int bits(int n){
//         int count =0;
//         while(n!=0){
//             int digit = n&1;
//             if(digit == 1){
//                 count ++;
//             }
//             n=n>>1;
//         }
//         return count;
//     }
// };
// int main(){
//     int n;
//     cout<<"Enter a number to find how many 1 bit present :- ";
//     cin>>n;
//     solution* x = new solution();
//     int a = x->bits(n);
//     cout<<a<<endl;

// }