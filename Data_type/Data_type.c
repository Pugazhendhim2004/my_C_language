#include <stdio.h>

int main()
{

    char c;
    int d, i;
    float f;
    double lf;
    long int ld;
    long long int lld;
    unsigned int u;
    unsigned long lu;
    unsigned long long llu;
    char str[50];
    void *p;
    long double Lf;

    printf("Enter a character: ");
    scanf(" %c", &c);

    printf("Enter an integer: ");
    scanf("%d", &d);

    printf("Enter a float: ");
    scanf("%f", &f);

    printf("Enter a double: ");
    scanf("%lf", &lf);

    printf("Enter a long int: ");
    scanf("%ld", &ld);

    printf("Enter a long long: ");
    scanf("%lld", &lld);

    printf("Enter an unsigned int: ");
    scanf("%u", &u);

    printf("Enter an unsigned long: ");
    scanf("%lu", &lu);

    printf("Enter an unsigned long long: ");
    scanf("%llu", &llu);

    printf("Enter a string: ");
    scanf("%s", str);

    Lf = 123.456789;
    p = &d;

    printf("\n OUTPUT \n");

    printf("Character      = %c    Specifier: %%c\n", c);
    printf("Integer (d)    = %d    Specifier: %%d\n", d);
    printf("Integer (i)    = %i    Specifier: %%i\n", d);
    printf("Float          = %f    Specifier: %%f\n", f);
    printf("Double         = %lf   Specifier: %%lf\n", lf);
    printf("Long int       = %ld   Specifier: %%ld\n", ld);
    printf("Long long      = %lld  Specifier: %%lld\n", lld);
    printf("Unsigned int   = %u    Specifier: %%u\n", u);
    printf("Unsigned long  = %lu   Specifier: %%lu\n", lu);
    printf("Unsigned LL    = %llu  Specifier: %%llu\n", llu);
    printf("String         = %s    Specifier: %%s\n", str);
    printf("Octal          = %o    Specifier: %%o\n", d);
    printf("Hex (lower)    = %x    Specifier: %%x\n", d);
    printf("Hex (upper)    = %X    Specifier: %%X\n", d);
    printf("Pointer        = %p    Specifier: %%p\n", p);
    printf("Scientific     = %e    Specifier: %%e\n", f);
    printf("Scientific(E)  = %E    Specifier: %%E\n", f);
    printf("Long double    = %Lf   Specifier: %%Lf\n", Lf);
    printf("Percent sign   = %%    Specifier: %%%%\n");

    int n;
    printf("%n", &n);
    printf("\nValue stored by %%n = %d\n", n);

    return 0;
}
