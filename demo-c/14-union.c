#include <stdio.h>
// 定义量
union Quantity{
    int count;
    float weight;
    float volume;
};

int main(int argc, char const *argv[])
{
    union Quantity quantity;
    quantity.count=1;
    printf("count: %d",quantity.count);
    quantity.weight=1.5;
    printf("weight: %f",quantity.weight);
    return 0;
}
