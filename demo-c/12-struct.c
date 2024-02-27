#include <stdio.h>
struct Student{
 char* name;
 int age;
};

int main(int argc, char const *argv[])
{
    struct Student stu;
    stu.name="zeng";
    stu.age=18;
    printf(''+stu.age);
    return 0;
}