#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void)
{
  int n1;
  int result = 0;
  
  for (int i = 0; i < 5; i++){
    std::cin >> n1;
    if (n1 < 0){
      result = result + 1;
    }
  }
  std::cout << result; 
}
