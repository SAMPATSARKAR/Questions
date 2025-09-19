// #include <iostream>
// #include <cmath>
// using namespace std;
// struct Notes{
//     int notes1,notes100,notes20,notes50;

// };
// class solution{
//     public:
//     Notes notes(int amount){
//         Notes value={0,0,0,0};
//         int choice = 1;
//         while(amount>0){
//             switch(choice){
//                 case 1: if(amount>=100){
//                     value.notes100 = amount/100;
//                     amount -= value.notes100*100;
                    
//                 }
//                 choice++;
//                 break;
//                 case 2:if(amount>=50){
//                     value.notes50 = amount/50;
//                     amount -= value.notes50*50;
//                 }
//                 choice++;
//                 break;
//                 case 3: if(amount>=20){
//                     value.notes20 = amount/20;
//                     amount -= value.notes20*20;

//                 }
//                 choice ++;
//                 break;
//                 case 4: if(amount>=1){
//                     value.notes1 = amount/1;
//                     amount -= value.notes1*1; 
//                 }
//                 choice++;
//                 break;
//                 default:
//                     amount = 0;
//                     break;
//             }
            
//         }
//         return value;
        
//     }
//     };
// int main(){
//     int n;
//     cout<<"Enter amount to calculate notes :- ";
//     cin>>n;
//     solution* x = new solution();
//     Notes a = x->notes(n);
//     cout<<"100's notes are :- "<<a.notes100<<endl;
//     cout<<"50's notes are :- "<<a.notes50<<endl;
//     cout<<"20's notes are :- "<<a.notes20<<endl;
//     cout<<"1's notes are :- "<<a.notes1<<endl;
//     delete x;
//     x= nullptr;
// }
// // -----------------class -----------
// #include <iostream>
// #include <cmath>
// using namespace std;
// class Notes{
//     public:
//     int notes1,notes100,notes20,notes50;

// };
// class solution{
//     public:
//     Notes notes(int amount){
//         Notes value={0,0,0,0};
//         int choice = 1;
//         while(amount>0){
//             switch(choice){
//                 case 1: if(amount>=100){
//                     value.notes100 = amount/100;
//                     amount -= value.notes100*100;
                    
//                 }
//                 choice++;
//                 break;
//                 case 2:if(amount>=50){
//                     value.notes50 = amount/50;
//                     amount -= value.notes50*50;
//                 }
//                 choice++;
//                 break;
//                 case 3: if(amount>=20){
//                     value.notes20 = amount/20;
//                     amount -= value.notes20*20;

//                 }
//                 choice ++;
//                 break;
//                 case 4: if(amount>=1){
//                     value.notes1 = amount/1;
//                     amount -= value.notes1*1; 
//                 }
//                 choice++;
//                 break;
//                 default:
//                     amount = 0;
//                     break;
//             }
            
//         }
//         return value;
        
//     }
//     };
// int main(){
//     int n;
//     cout<<"Enter amount to calculate notes :- ";
//     cin>>n;
//     solution* x = new solution();
//     Notes a = x->notes(n);
//     cout<<"100's notes are :- "<<a.notes100<<endl;
//     cout<<"50's notes are :- "<<a.notes50<<endl;
//     cout<<"20's notes are :- "<<a.notes20<<endl;
//     cout<<"1's notes are :- "<<a.notes1<<endl;
//     delete x;
//     x= nullptr;
// }