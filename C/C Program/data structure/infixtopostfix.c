#include<stdio.h>
#include<string.h>
	int stack[100];
	int top=-1;
	char arrpost[100];
	int p=0;
int Prec(char ch)
{
    switch (ch)
    {
    case '+':
    case '-':
        return 1;

    case '*':
    case '/':
	case '%':
        return 2;

    case '^':
        return 3;
    }
    return 0;
}
int empty()
{
	if(top==-1)
	return 0;
	else
	return 1;
}
char peek()
{
	return stack[top];
}
char pop()
{
 return stack[top--];
}
void push(char a)
{
	stack[++top]=a;
}
int main()
{
	printf("Write a C program to convert infix to postfix\n\n");
	printf("Enter your infix expration like a+b*c\n");
	char arr[100];
	scanf("%s",arr);
	int i=0;
	for(i=0;i<strlen(arr);i++)
	{
		if(arr[i]!='+' && arr[i]!='^' && arr[i]!='-' && arr[i]!='/' && arr[i]!='(' && arr[i]!=')' && arr[i]!='*'   )
			arrpost[p++]=arr[i];
		else if (Prec(arr[i])>Prec(peek()))
			push(arr[i]);
		else if(arr[i]=='(')
		{
			push(arr[i]);
		}
		else if(arr[i]==')')
		{
			while(peek()!='(')
			arrpost[p++]=pop();
			
			if(peek()=='(')
			top--;
		}
		else
        {
        	if(top>-1)
			{
            while(Prec(arr[i])<=Prec(peek()) && empty())
		    arrpost[p++]=pop();
		    }
		    push(arr[i]);
        }
	}
	while(empty())
	{
		arrpost[p++]=pop();
	}
	printf("%s",arrpost);
	return 0;
}
