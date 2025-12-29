#include <stdio.h>
int main()
{
    void func_adder(int var)
    {
        if (var == 6)
            return;
        printf("INCREAMENT=%d\n", var);
        func_adder(var + 1);
        printf("\n");
    }
    void func_sub(int var)
    {
        if (var == 0)
            return;
        printf("DECREAMNET=%d\n", var);
        func_sub(var - 1);
    }
    func_adder(0);
    func_sub(10);
    return 0;
}
