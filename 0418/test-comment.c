/* test0.c */
#include <stdio.h>
/*
* このファイルを改変し適切なコメント(10行以上）を付けること
*/

/*
 * 引数：整数 i, j
 * 返値：iとjの積となる整数
 * 機能：引数の積を計算し返す関数
 */
int test(int i, int j) {
  return (i * j);
}

int main(int argc, char *argv) {
  //入力となる整数 i, j
  int i, j;
  //i, jの積の出力
  int k;
  i = 3;
  j = 2;
  //i, jをかけてkに代入する
  k = test(i, j);
  if (k > 5) {
    printf(">5\n");
  } else {
    printf("<=5\n");
  }
  /*if文の後には曖昧性をさけるために中括弧{}を
　　入れるべきである。
   */
  return 0;
}
