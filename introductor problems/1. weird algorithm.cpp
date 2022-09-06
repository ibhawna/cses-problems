// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     long long n;
//   cin>>n;
//   while(n!=1){
//     cout<<n<<" ";
//     if(n&1){ // odd
//       n = n*3 + 1;
//     }
//     else{
//       n = n/2;
//     }
//   }
//   cout<<"1";
// }



// using bitwise operator as divide by 2
#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
  cin>>n;
  
  while(n!=1){
    cout<<n<<" ";
    if(n&1){
      n = n*3 + 1;
    }
    else{
      n = n >> 1; // everytime we shift a number towards right by 1 bit it divides by number by 2 .
    }
  }
  cout<<"1";
}


