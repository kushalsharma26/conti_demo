
#include<iostream>

using namespace std;

int sum(int a, int b ){
    int sum = a+b;
    cout <<"the sum  two digiti s of a and b is "<<sum<<endl;
    //or use
    // return a+b;
    //or
    return sum;
}
 int diff (int a, int b){
    return a-b;
}
 int products(int a, int b){
  return a*b;
}
//   int product =1;
//   int factorial(int n){
//     for (int i =n; i>=1;i--){
//         product*=i;

//     }
     

//     cout<<"the factorial of n is "<<product<<endl;
//     return product;
//   }
//igsjgisehpiearhi perjgpi jetigjaei regjsi 
int main(){
    // sum(5,10);
    // diff(10,5);
    // cout<<diff(10,5)<<endl;
    // cout<<product(5,10)<<endl;
    // cout<<factorial(5)<<endl;
return 0;

}  

#include<iostream>

using namespace std;
void printsubarray(int arr[], int n){
for(int i=0; i<n; i++){
       
        for(int j=i; j<n; j++){
            
            cout<<"["<< i<<" ,"<<j <<"]"; // accessing array elements
        } cout<<endl;
    }
}
int main(){
    int arr[5] = {1,2,3,4,5}; // array declaration and initialization
    printsubarray(arr, 5);
    return 0;
}



    