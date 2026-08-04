// C Program to Check Vowel or Consonant                
#include <stdio.h>
int main(){
    char character;
    scanf("%c",&character);
    if(character=='A'||character=='E'||character=='I'||character=='O'||character=='U'||character=='a'||character=='e'||character=='i'||character=='o'||character=='u'){
        printf("The Entered character is a Vowel");
    }
    else{
        printf("The Entered character is not a vowel");
    }
    return 0;
}