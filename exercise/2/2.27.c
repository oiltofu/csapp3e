// 这个函数是对确定无符号加法是否溢出的规则的直接实现。
/* Determine whether arguments can be added without overflow */
int uadd_ok(unsigned x, unsigned y)
{
  unsigned sum = x + y;
  return sum >= x;
}