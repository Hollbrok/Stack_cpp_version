#include "stack.h"

int main()
{

    setlocale(LC_ALL, "russian");

    FILE* res = fopen("log_stack.txt", "w");
    fclose(res);
    //char* name = nullptr;
    printf("before construct\n");
    Stack stk1("first stack", 10);
    printf("after construct\n");
    stk1.push(19);
    stk1.push(1111);
    printf("after push\n");
    stk1.pop();
    printf("after pop\n");
    stk1.dump();
    printf("after dump\n");
    printf("Enter F to leave..\n");
    getch();

    return 0;
}
