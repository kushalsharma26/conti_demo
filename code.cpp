
#include<iostream>

using namespace std;

int sum(int a, int b ){
    int sum = a+b;
    cout <<"the sum of a and b is "<<sum<<endl;
    //or use
    // return a+b;
    //or
    return sum;
}
 int diff (int a, int b){
    return a-b;
}
// int product(int a, int b){
//     return a*b;
// }
  int product =1;
  int factorial(int n){
    for (int i =n; i>=1;i--){
        product*=i;

    }
     

    cout<<"the factorial of n is "<<product<<endl;
    return product;
  }

int main(){
    // sum(5,10);
    // diff(10,5);
    // cout<<diff(10,5)<<endl;
    // cout<<product(5,10)<<endl;
    cout<<factorial(5)<<endl;
return 0;

}  