#include <stdio.h>

void butler(const char *name);  

int main(void)
{
    printf("I will summon the butler function.\n");

    butler("Mr. Johnson"); 

    printf("Yes. Bring me some tea and writeable CD-ROMS.\n");

    return 0;
}

void butler(const char *name)
{
    printf("You rang, %s?\n", name); 
}