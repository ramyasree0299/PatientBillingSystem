int getRes(char *forum);
int evalinfix(char *infix, int *var_stack, int var_top, char op_stack[20], int op_top);
char op_pop(char *stack, int top);
int getValue(char *s);
int var_pop(int *stack, int top);
int operation(int a, int b, char op);
int var_peek(int *stack, int top);
char op_peek(char *stack, int op_top);
int Prec(char ch);
int ifOperator(char ch);
void var_push(int ch, int *stack, int top);
void op_push(char ch, char *stack, int top);