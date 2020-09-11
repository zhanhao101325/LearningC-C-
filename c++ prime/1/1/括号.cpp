#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

#define MAXSZIZE 100
#define STACK_INIT_SIZE 20
typedef char ElemType;
/*一种栈的声明方式*/
typedef struct
{
	ElemType *base;
	ElemType *top;
	int stackSize;

}sqStack;
void initStack(sqStack *s)
{
	s->base = (ElemType*)malloc(MAXSZIZE * sizeof(ElemType));
	if (!s->base)
	{
		exit(0);
	}
	s->top = s->base; //最开始，栈顶就是栈底；
	s->stackSize = MAXSZIZE;
}
void Push(sqStack *s, ElemType e)
{

	if (s->top - s->base >= s->stackSize)
	{
		s->base = (ElemType*)realloc(s->base, (s->stackSize + STACK_INIT_SIZE) * sizeof(ElemType));
		if (!s->base)
			exit(0);
		s->top = s->base + s->stackSize;
		s->stackSize = s->stackSize + STACK_INIT_SIZE;
	}
	*(s->top) = e;
	s->top++;
}
void Pop(sqStack *s, ElemType *e)
{
	if (s->top == s->base)
	{
		return;
	}
	*e = *--(s->top);
	//printf("%d\n", *e);
}


int  Match(char *p)
{
	sqStack s;
	initStack(&s);
	char temp[100];
	char c;
	int i = 0;
	while (*p != '\0')
	{
		if (*p == '(' || *p == ')' || *p == '[' || *p == ']' || *p == '{' || *p == '}')
		{
			temp[i] = *p;
			i++;
		}
		p++;

	}
	temp[i] = '\0';
	for (int j = 0; j < i; j++)
	{
		Push(&s, temp[j]);
	l:Pop(&s, &c);
		if ((c == '(' && temp[j + 1] == ')') || (c == '{' && temp[j + 1] == '}') || (c == '[' && temp[j + 1] == ']'))
		{
			if (s.top != s.base)
			{
				j++;
				goto l;
			}
			else
				j++;
		}
		else
		{
			Push(&s, c);
		}

	}
	if (s.top == s.base)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	char s[] = "{()";
	int res = Match(s);
	if (res == 1)
	{
		printf("true\n");

	}
	else
		printf("false\n");
	return 0;
}