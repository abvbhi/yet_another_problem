#include <bits/stdc++.h>
using namespace std;
void swap(int m, int n){
  int p=m;
  m=n;
  n=m;
}
int main(){
  int m=25;
  int n=35;
  swap(m, n);
  cout << "numbers after swapping: " << endl;
  cout << m << ' ' << n << endl;
}
  
