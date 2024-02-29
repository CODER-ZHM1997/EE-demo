#include <stdio.h>
struct Student{
 char* name;
 int age;
};

int main(int argc, char const *argv[])
{
    struct Student stu;
    // 赋值
    // 方式1：逐一赋值
    stu.name="zeng";
    stu.age=18;
    printf("name:%s,age:%d\n",stu.name,stu.age);
    // 方式2：一次性赋值，只能声明的时候操作
    struct Student stu1={"zeng1",18};
    printf("name:%s,age:%d\n",stu1.name,stu1.age);
    struct Student stu2={.name="zeng2"};
    stu2.age=18;
    printf("name:%s,age:%d\n",stu2.name,stu2.age);

    return 0;
}