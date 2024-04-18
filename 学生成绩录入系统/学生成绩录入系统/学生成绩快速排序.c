#include <stdio.h>
#include <stdlib.h>
#include <wchar.h> // 包含支持宽字符的库函数

#define MAXSIZE 100

int num[MAXSIZE];
wchar_t name[MAXSIZE][20]; // 使用宽字符类型的字符串
int math[MAXSIZE];
int english[MAXSIZE];
int clang[MAXSIZE];
int sum[MAXSIZE];
int count = 0;

void student_input();
void student_output();
int compare(const void *a, const void *b); // 比较函数

int main()
{
    while (1) {
        printf("输入选项：1. 输入学生成绩 2. 输出学生成绩 0. 退出 3. 按总分排名\n");
        int option;
        scanf("%d", &option);

        switch (option) {
            case 1:
                student_input();
                break;
            case 2:
                student_output();
                break;
            case 0:
                exit(0); // 退出程序
                break;
            case 3:
                qsort(sum, count, sizeof(int), compare); // 对数组 sum 进行排序
                // 注意，排序后修改其他数组的顺序会导致信息对应不上
                break;
            default:
                printf("选项不正确，请重新输入！\n");
                break;
        }
    }

    return 0;
}

void student_input()
{
    printf("输入学号：");
    scanf("%d", &num[count]);

    printf("输入姓名：");
    scanf("%ls", name[count]); // 使用正确的格式化符号 %ls 来读取宽字符类型的字符串

    printf("输入数学成绩：");
    scanf("%d", &math[count]);

    printf("输入英语成绩：");
    scanf("%d", &english[count]);

    printf("输入C语言成绩：");
    scanf("%d", &clang[count]);

    sum[count] = math[count] + english[count] + clang[count];

    count++;
}

void student_output()
{
    int i;
    printf("\n学号\t姓名\t数学\t英语\tC语言\t总分\n");
    for(i = 0; i < count; i++)
    {
        printf("%d\t%ls\t%d\t%d\t%d\t%d\n", num[i], name[i], math[i], english[i], clang[i], sum[i]); // 使用正确的格式化符号 %ls 来打印宽字符类型的字符串
    }
}

int compare(const void *a, const void *b)
{
    int va = *(int *)a; // 把指针先转成 int 型
    int vb = *(int *)b; // 把指针先转成 int 型
    return vb - va; // 通过减法比较大小
}
