#include<iostream>
using namespace std;


// Returns factorial of n (n!); defined for n >= 0
// For large n this will overflow int; use a larger type if needed.
int factofnum(int n){
   if(n <= 1){
      return 1;
   }
   // recursive call: n * (n-1)!
   return n * factofnum(n - 1);
}

int main(){
   int n = 5;
   int result = factofnum(n);
   cout << "Factorial of " << n << " is " << result << endl;
   return 0;
}