// write char value to file using putc() or fputc() function
#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("file/data-1.txt","w");
    printf("Enter string (ctrl+z to end): ");
    ch = getchar();
    while(ch!=EOF)
    {
        putc(ch,fp); // fputc(ch, fp);
        ch=getchar();
    }
    fclose(fp);
    getch();
    return 0;
}
