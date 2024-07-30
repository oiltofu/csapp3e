// I* Determine whether arguments can be added without overflow *I
// int tadd_ok(int x, int y);
// 如果参数 x 和 y 相加不会产生溢出，这个函数就返回1。
int tadd_ok(int x, int y)
{
  int sum = x + y;
  int neg_over = x < 0 && y < 0 && sum >= 0;
  int pos_over = x >= 0 && y >= 0 && sum < 0;
  return !neg_over && !pos_over;
}