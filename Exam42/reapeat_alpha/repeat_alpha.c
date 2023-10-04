#include <unistd.h>

int main(int argc, char** av)
{
    int i = 0;
    int count = 0;

    if (argc == 2)
    {
        while(av[1][i] != '\0')
        {
            if(av[1][i] >= 'A' && av[1][i] <= 'Z')
                count = av[1][i] - 64;
            if (av[1][i] >= 'a' && av[1][i] <= 'z')
                count = av[1][i] - 96;
            while (count != 0)
            {
                write(1, &av[1][i],1);
                count--;
            }
            count = 1;
            i++;
        }
    }
    write(1, "\n",1);
}
