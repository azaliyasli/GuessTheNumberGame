#include <stdio.h>
int main()
{
    int array1[1]={2};
    int array2[1]={29};
    int array3[1]={84};
    int n1, n2, n3, exit;
    char difficulty, choice;

    
        printf("Please write which difficulty that you want to play (E for easy, N for normal, D for difficult): ");
        scanf("%c", &difficulty);

        if(difficulty == 'E') {
            do {
                printf("Guess a number between 1 and 5: ");
                scanf("%d", &n1);
                if(n1 == array1[0]) {
                     printf("You guessed right, congrats!(Press 0 to exit.): ");
                     scanf("%d", &exit);
                     if(exit == 0)
                     return 0;
                }
                else
                printf("You guessed wrong, would you like to play again? (Y/N): ");
                getchar();
                scanf("%c", &choice);
            } while(choice == 'Y');
        }
        else if(difficulty == 'N') {
             do {
                printf("Guess a number between 1 and 50: ");
                scanf("%d", &n1);
                if(n1 == array2[0]) {
                     printf("You guessed right, congrats!(Press 0 to exit.): ");
                     scanf("%d", &exit);
                     if(exit == 0)
                     return 0;
                }
                else
                printf("You guessed wrong, would you like to play again? (Y/N): ");
                getchar();
                scanf("%c", &choice);
            } while(choice == 'Y');
        }
        else if(difficulty == 'D') {
             do {
                printf("Guess a number between 1 and 100: ");
                scanf("%d", &n1);
                if(n1 == array3[0]) {
                     printf("You guessed right, congrats!(Press 0 to exit.): ");
                     scanf("%d", &exit);
                     if(exit == 0)
                     return 0;
                }
                else
                printf("You guessed wrong, would you like to play again? (Y/N): ");
                getchar();
                scanf("%c", &choice);
            } while(choice == 'Y');
        }
}