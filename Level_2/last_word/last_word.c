#include <unistd.h>

void putchar(char c)
{
    write(1, &c, 1);
}
int main(int argc, char *argv[])
{
    int i;

    i = 0;
    if (argc != 2)
    {
        putchar('\n');
        return (0);
    }

    while (argv[1][i] != '\0')
        i++;
    while (argv[1][i - 1] == ' ')
        i--;
    while (argv[1][i - 1] != ' ')
        i--;
    while (argv[1][i] != '\0')
    {
        if (argv[1][i] == ' ')
        {
            putchar('\n');
            return (0);
        }
        putchar(argv[1][i]);
        i++;
    }
    putchar('\n');
    return (0);
}