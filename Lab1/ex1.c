#include <stdio.h>

int main(void)

{

    int dogs;
    int cats;


    printf("How many dogs do you have?\n");

    scanf("%d", &dogs);

    printf("So you have %d dog(s)!\n", dogs);

    
    printf("How many cats do you have?\n");

    scanf("%d", &cats);

    printf("So you have %d cat(s)!\n", cats);

    return 0;

}