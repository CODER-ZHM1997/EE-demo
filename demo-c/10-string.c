#include <stdio.h>
int main(int argc, char const *argv[])
{
    // 此时变成一维数组了，但是存放的是指针
    char* weekdays[]={
        "Monday",
        "Tuesday",
    };

    printf("weekdays[0]: ",&weekdays[0]);
    return 0;
}
