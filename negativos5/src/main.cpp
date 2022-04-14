#include <iostream>

int main() {
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