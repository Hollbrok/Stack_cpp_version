#include "stack.h"

int main()
{

    setlocale(LC_ALL, "russian");

	Stack stk1("first stack", 10);

    for(int i = 0; i < 60; i++)
        stk1.push(i);
    stk1.dump();

	for(int i = 0; i < 50; i++)
        stk1.pop();
    stk1.dump();

    for(int i = 0; i < 8; i++)
        stk1.pop();
    stk1.dump();

	printf("Press any button to continue.. ");
	getch();

    return 0;
}
