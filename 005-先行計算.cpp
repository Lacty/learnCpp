
#include <iostream>


int main() {
  // ７から２を引いた数を３で掛ける
  // (7 - 2) * 3
  // 5 * 3
  // 答え. 15
          
  std::cout << 7 - 2 * 3 << std::endl; // 出力結果. 1
              
  // 掛け算や割り算などは
  // 足し算より先に行われる
  // 7 - (2 * 3)
  // 7 - 6
  // 結果. 1
                          
  // ()を使用して
  // 先行計算をさせてあげよう
  std::cout << (7 - 2) * 3 << std::endl; // 出力結果. 15
}
