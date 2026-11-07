//替换输入的字母，非字符字母保持不变
#include <stdio.h>
#include <ctype.h>//包含字符处理函数库,isalpha()函数用于判断是否为字母
int main ()
{
    char ch;

    while ((ch = getchar()) != '\n')//当不是换行符时，当一行未结束时
    {
        if (isalpha(ch))//判断是否为字母
            putchar(ch + 1);//改变字母
        else
            putchar(ch);//非字母保持不变
    }
    putchar(ch);//输出换行符
    return 0;
}