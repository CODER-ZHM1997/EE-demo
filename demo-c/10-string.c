// 居然没有string类型，还要通过数组或指针的方式来搞定
#include <stdio.h>
int main(int argc, char const *argv[])
{

    // 二维数组，只能自动计算一维的
    char weekdays[][10] = {
        "monday",
        "tuesday"};
    printf("weekdays[0]: %s\n", weekdays[0]);

    // 此时变成一维数组了，但是存放的是指针
    char *weekdays1[] = {
        "Monday",
        "Tuesday",
    };
    printf("weekdays[0]: %s\n", weekdays1[0]);

    return 0;
}
