
#include <iostream>


int main() {
  std::cout << "改行したいけど";
  std::cout << "改行されない!";
      
  // std::endl を使用すれば改行できる
  std::cout << "改行！" << std::endl;
  std::cout << "改行された！" << std::endl;
              
  // std::coutは << を使って繋げることができる
  std::cout << "1 + 1 = " << 1 + 1 << std::endl;
}
