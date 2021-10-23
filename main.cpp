#include <iostream>
using namespace std;

// Unosi se dva cijela broj x i n, ispitati da li je broj x dijeljiv brojem n bez korištenja modula [%].

int main() {
  int x, n;
  int i = 0;
  
  cout<< "Unesite dva cijela broja:"<< endl;
  cin>> x >> n;

  while (n==x || n!=x){
    if (x==n){
     cout<< "Brojevi su dijeljivi";
     break;
     }
    else if (n>x){
      cout<<"Brojevi nisu dijeljivi";
      break;
    } 
    else{
      i++;
      n = n+ n/i;
    }
  }
  return 0;
}