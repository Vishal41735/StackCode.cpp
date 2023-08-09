#include<iostream>
using namespace std;
class Stack{
    int *arr;
    int size;
    int top1;
    int top2;

};
int main(){
  
}





// --------------------------------------------------
// by using 1 array creating  1 stack......
// ...
//   ..
//   ..

// #include<iostream>
// #include<stack>
// using namespace std;
// class Stack{
//     public:
//       int *arr;
//       int size;
//       int top;
//   Stack(int size){
//       arr = new int[size];
//       this->size = size;
//       top = -1;
    
//   }
// void push(int data){
//   if(size-top >1){
//     top++;
//     arr[top] = data;
//   }
//   else{
//     cout<<"Stack is overflow"<<endl;
//   }
    
  
  
// }
// void pop(){
//   if(top == -1){
//     cout<<"Stack is underflow";
//   }
//   else{
//     top--;
//   }
  
// }
// int gettop(){
//   if(top == -1){

//     cout<<"Stack is empty"<<endl;
//   }
//   else{
//     return arr[top];
    
//   }
  
  
// }
// int getsize(){
//   return top+1;
  
// }

// bool isempty(){
//   if(top == -1){
//     return true;
//   }
//   else{
//     return false;
//   }
  
// }
      

// };
 





// int main(){
//   Stack s(5);
//   s.push(100);
//   s.push(200);
//   s.push(300);
//   s.push(400);
//   s.push(500);

//   // s.print();
// }
//   // s.push(20);
  // s.pop();
  
  // while(s.isempty()){
  //   cout<<s.gettop()<<" ";
  //   s.pop();
  // }
  // cout<<s.getsize()<<endl;
  // cout<<"kya Stack empty hai:: "<<s.isempty()<<endl;
  // while(!s.isempty()){
  //   cout<<s.gettop()<<" ";
  //   s.pop();
  // }

   
  // }
  
  


  
// -----------------------------------------------------
//   // defined Stack by using Stl function;;;
//   stack<int> s;
//   s.push(10);
//   s.push(200);
//   s.push(300);
//   s.push(400);

//   cout<<"top element of an Stack is  : "<<s.top()<<endl;
//   cout<<s.size();
//   cout<<endl;
//   cout<<"Stack is empty or  not :: "<<s.empty()<<endl;


//   s.pop();

//   cout<<"by using pop function the top element is  :  "<<s.top()<<endl;




// cout<<"Whole array traversing  :  ";

//  while(!s.empty()){
//    cout<<s.top()<<"  ";
//    s.pop();
//  } 
  
  
