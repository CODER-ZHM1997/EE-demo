#include <stdio.h>
enum Color {RED,GREEN,BLUE};
int main(int argc, char const *argv[])
{
    // 可以直接使用
    printf("red: %d,green: %d,blue: %d\n",RED,GREEN,BLUE);
    // 也可以把变量声明为枚举类型
    enum Color color;
    color=BLUE;
    printf("color: %d",color);
    return 0;
}
