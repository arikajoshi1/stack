#define MAXITEMS 2
typedef struct{
	int top;
	int items [MAXITEMS];
}
stack;
void push(stack* , int);
int pop (stack*);
int main()
{
	stack s;
	s.top= -1;
	push (&s,5);
	push (&s,6);
	printf ("%d \n", pop(&s));
	printf ("%d \n", pop(&s));
	printf ("%d", pop(&s));
}

void push (stack*s, int x)
{
	if(s-> top==MAXITEMS-1)
	{
		printf("it is case of overflow");
		exit(0);
	}else
	{
	++s-> top;
	s-> items [s->top]=x;
	s++;
}
}
int pop(stack*s)

   {
	return s -> items[s->top--];
   }
}
