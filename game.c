#include<stdio.h>
void main()
{

    printf("\t\t\t\t\t WELCOME TO WORD BUILTING GAME \t\t\t\t\t\n");
    printf("\n\t\t\t\t\t\t  LEVEL 1 \n");
    printf("\n FIND ALL THE POSSIBLE WORDs FROM THE GIVEN SCRAMBLED WORD AND ALL THE WORDS SHOILD BE IN UPPER CASE\n ");
    printf(" WORD: SE0BR \n");
    char word1[10],word2[10],word3[10],word4[10],word5[10],word6[10],word7[10];
    printf("Enter the possible word 1: ");
    scanf("%s",word1);
    printf("Enter the possible word 2: ");
    scanf("%s",word2);
    printf("Enter the possible word 3: ");
    scanf("%s",word3);
    printf("Enter the possible word 4: ");
    scanf("%s",word4);
    printf("Enter the possible word 5: ");
    scanf("%s",word5);
    printf("Enter the possible word 6: ");
    scanf("%s",word6);
    printf("Enter the possible word 7: ");
    scanf("%s",word7);
    if(word1 == "ROSE" || word1 == "ROBE" || word1 == "ROB" || word1 == "BORE" || word1 == "ORE" || word1 == "SORE" || word1 == "BRO")
    {
        printf("Word 1 is correct word");
    }
    else if(word1 != word2)
    {
        if(word2 == "ROSE" || word2 == "ROBE" || word2 == "ROB" || word2 == "BORE" || word2 == "ORE" || word2 == "SORE" || word2 == "BRO")
        {
            printf("Word 2 is correct word");
        }
    }
    else if(word3 != word2 && word3 != word1)
    {
        if(word3 == "ROSE" || word3 == "ROBE" || word3 == "ROB" || word3 == "BORE" || word3 == "ORE" || word3 == "SORE" || word3 == "BRO")
        {
            printf("word 3 is correct word");
        }
    }
    else if(word4 != word3 && word4 != word2 && word4 != word1)
    {
        if(word4 == "ROSE" || word4  == "ROBE" || word4 == "ROB" || word4 == "BORE" || word4 == "ORE" || word4 == "SORE" || word4 == "BRO")
        {
           printf("word 4 is correct word");
        }
    }
    else if(word5 != word4 && word5 != word3 && word5 != word2 && word5 != word1)
    {
        if(word5 == "ROSE" || word5  == "ROBE" || word5 == "ROB" || word5 == "BORE" || word5 == "ORE" || word5 == "SORE" || word5 == "BRO")
        {
            printf("word 5 is correct word");
        }
    }
    else if(word6 != word5 && word6 != word4 && word6 != word3 && word6 != word2 && word6 != word1)
    {
        if(word6 == "ROSE" || word6 == "ROBE" || word6 == "ROB" || word6 == "BORE" || word6 == "ORE" || word6 == "SORE" || word6 == "BRO")
        {
            printf("word 6 is correct word");
        }
    }
    else if(word7 != word6 && word7 != word5 && word7 != word4 && word7 != word3 && word7 != word2 && word7 != word1)
    {
        if(word7 == "ROSE" || word7 == "ROBE" || word7 == "ROB" || word7 == "BORE"  || word7 == "ORE" || word7 == "SORE" || word7 == "BRO")
        {
            printf("word 7 is correct word");
        }
    }
}
