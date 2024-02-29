#include <stdio.h>
#include <string.h>
// 为啥只传入数组不传size，会导致长度计算不对，
void printArray(int arr[], int size)
{
    printf("数组长度：%d\n");
    // 需要自己来控制长度，不能让他自己跑
    for (int i = 0; i < size; i++)
    {
        printf("%d,", arr[i]);
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3};
    printArray(arr, sizeof(arr) / sizeof(arr[0]));
    // 数组长度：居然没有length属性，还要通过另一个函数来搞定
    printf("数组长度：%d\n", sizeof(arr) / sizeof(arr[0]));

    // 数组指针
    printf("数组名与数组第一个元素地址值相等：%d\n", &arr[0] == arr);

    // 数组拷贝
    // 方式1：用for循环拷贝
    // 方式2：memcpy，第一个参数不能用普通指针，要用数组变量
    int arr1[3];
    memcpy(arr1, arr, sizeof(arr));
    printArray(arr1, sizeof(arr1) / sizeof(arr1[0]));
    return 0;
}
