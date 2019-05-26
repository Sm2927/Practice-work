//https://leetcode.com/explore/learn/card/recursion-i/250/principle-of-recursion/1439/
void printReverse(const char *str) {
  if (!*str)
    return;
  printReverse(str + 1);
  putchar(*str);
}
