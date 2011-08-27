extern char stack[512];
extern int top;
char pop(char c)
{
	return stack[top--];
}
