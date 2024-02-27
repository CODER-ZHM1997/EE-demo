#include <stdio.h>
int main(int argc, char const *argv[])
{
    #define MAX 100
    printf("MAX: %d\n",MAX);

    #if MAX==100
        printf("==\n");
    #endif

    #ifdef MAX
        printf("MAX has defined\n");
    #endif

    #ifndef MAX
        printf("MAX has not defined\n");
    #endif
    
    return 0;
}
