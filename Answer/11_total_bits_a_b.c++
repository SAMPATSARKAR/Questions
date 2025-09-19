// #include <iostream>
// using namespace std;
// class solution{
//     public:
//     int bit(int x){
//         int count = 0;
//         while(x!=0){
//             int digit = x&1;
//                 if(digit == 1){
//                     count++;
//                 }
//             x=x>>1;
//         }
//         return count;
//     }
//     int bits(int a, int b){
//         return bit(a)+bit(b);
//     }

// };
// int main(){
//     int a;
//     cout<<"Enter first number:- ";
//     cin>>a;

//     int b;
//     cout<<"Enter second number:- ";
//     cin>>b;

//     solution* x = new solution();
//     int y = x->bits(a,b);
//     cout<<"Total bits in a and b are "<< y <<endl;


//     return 0;
// }
