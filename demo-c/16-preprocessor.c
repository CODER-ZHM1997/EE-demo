#include <stdio.h>
#define MAX 100
#define SQUARE(a, b) #a + #b
int main(int argc, char const *argv[])
{
    printf("%d\n", MAX);
    printf("%s\n", SQUARE(1, 2));
}
