#include <stdio.h>
#include <string.h>

void reverseString(char* str){
    int length = strlen(str);

    for(int i=0; i<length/2; i++){
        char temp=str[i];
        str[i]=str[length-1-i];
        str[length-1-i]=temp;
    }
}

int main() {

    char word1[100];
    char word2[100];
    char word3[100];
    
    printf("Enter the first word: ");
    fgets(word1, sizeof(word1), stdin);
    printf("Enter the second word: ");
    fgets(word2, sizeof(word2), stdin);
    printf("Enter the third word: ");
    fgets(word3, sizeof(word3), stdin);

    
    word1[strcspn(word1, "\n")] = 0;
    word2[strcspn(word2, "\n")] = 0;
    word3[strcspn(word3, "\n")] = 0;

    reverseString(word1);
    reverseString(word2);
    reverseString(word3);

    printf("Reversed words:\n");
    printf("First word: %s\n", word1);
    printf("Second word: %s\n", word2);
    printf("Third word: %s\n", word3);

}
