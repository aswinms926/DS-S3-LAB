#include<stdio.h>
#include<ctype.h>
int top = -1;
char stack[100];
void
push (char x)
{
  stack[++top] = x;
}

char
pop ()
{
  if (top == -1)
	{
	  printf ("epmty");
	  return '\0';
	}
  else
	{
	  return stack[top--];
	}
}

int
priority (char x)
{
  if (x == '(')
	{
	  return 0;
	}
  else if (x == '+' || x == '-')
	{
	  return 1;
	}
  else if (x == '*' || x == '/')
	{
	  return 1;
	}
}

int main ()
{
  char exp[100], *a, x;
  printf ("Enter the expression :");
  scanf ("%s", exp);
  a = exp;
  while (*a != '\0')
	{
	  if (isalnum (*a))
		{
		  printf ("%c", *a);
		}
	  else if (*a == '(')
		{
		  push (*a);
		}
	  else if (*a == ')')
		{
		  while ((x = pop ()) != '(')
			{
			  printf ("%c", x);
			}
		}
	  else
		{
		  while (priority (stack[top]) >= priority (*a))
			{
			  printf ("%c", pop ());
			}
		  push (*a);
		}
	  a++;
	}
  if (top != -1)
	{
	  printf ("%c", pop ());
	}
}
