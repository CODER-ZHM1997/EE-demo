#include <stdio.h>
typedef enum
{
    RED,
    GREEN,
    BLUE
} Color;
int main(int argc, char const *argv[])
{
    // 可以直接使用
    printf("red: %d,green: %d,blue: %d\n", RED, GREEN, BLUE);
    // 也可以把变量声明为枚举类型
    Color color;
    color = BLUE;
    printf("color: %d", color);
    return 0;
}
