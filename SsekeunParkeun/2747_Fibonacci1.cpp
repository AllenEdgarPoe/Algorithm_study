#include <iostream>
using namespace std;
int main(){
  int count = 0;
  int num1 = 0;
  int num2 = 1;
  cin >> count;
  for(int i=0; i < count; i++){
    num2 += num1;
    num1 = num2 - num1;
  }
  cout << num1;
  return 0;
}
