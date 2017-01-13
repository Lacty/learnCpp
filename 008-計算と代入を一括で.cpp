
#include <iostream>


int main() {
  int x = 4;
  int y = 8;

  x += y; // x = x + y; と同じ

  std::cout << x << std::endl; // 出力結果.12

  x *= y; // x = x  * y; と同じ
          // x = 12 * 8;

  std::cout << x << std::endl; // 出力結果.96
}
