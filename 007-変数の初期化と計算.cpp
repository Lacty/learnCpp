
#include <iostream>


int main() {
  // 変数の宣言と同時に
  // 初期化も行う
  int x = 95; // int型の変数xを95で初期化
  int y = 43; // int型の変数yを43で初期化
          
  // 同じ名前の変数は宣言できない！
  // コメントアウトを外して確認してみよう
  // int x = 10; // err
                  
  // 変数を使って計算
  std::cout << x + y << std::endl;
  std::cout << x - y << std::endl;
}
