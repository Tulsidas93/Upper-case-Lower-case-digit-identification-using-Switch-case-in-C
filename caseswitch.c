
#include<stdio.h>
int main()
{
    char check;
    printf("Enter the character :"); //print statement
    scanf("%c",&check);                 // read character
    switch(check)
    {
        case 'A'...'Z' :                            // case1
        printf("The character is an Upper Case.");
        break;
        
         case 'a'...'z':                           // case2
        printf("The character is an Lower Case.");
        break;
        
         case '0'...'9':                      // case3
        printf("The character is an Digit.");
        break;
        
        default :                                       //case4
        printf("The character not an alphabet or digit");
        break;
        
    }
    
    
}
