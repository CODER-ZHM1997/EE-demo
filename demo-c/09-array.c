// #include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[5]={11,22,33,44,55};
    // 需要自己来控制长度，不能让他自己跑
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        printf("%d,",arr[i]);
    }
     
     arr={66,77,88,99}
    return 0;
}
