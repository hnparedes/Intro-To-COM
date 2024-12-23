#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void shuffleHoles(int holes[], int size) {
  
    int i, j, temp;
  
    srand(time(NULL));
  
    for (i = size - 1; i > 0; i--) {
      
        j = rand() % (i + 1);
        temp = holes[i];
        holes[i] = holes[j];
        holes[j] = temp;
      
    }
  
}

void displayHoles(int holes[], int size) {
  
    printf("The holes are as follows: ");
  
    for (int i = 0; i < size; i++) {
      
        printf("%d ", holes[i]);
      
    }
  
    printf("\n");
  
}

int guessGame(int balance) {
  
    int holes[] = {0, 0, 1}; 
    int bet, guess;

    printf("----Enter your starting cash balance---- : ");
    scanf("%d", &balance);

    while (balance > 0) {
      
        printf("\nEnter the amount you want to bet: ");
        scanf("%d", &bet);

        if (bet == 0) {
          
            printf("Exiting the game. Thank you for playing!");
            break;
          
        }

        if (bet > balance) {
          
            printf("You can't bet more than your current balance. Please try again.\n");
            continue;
          
        }

        printf("\nWait !! The treasure is being hidden. . .\n");

        printf("\nGuess the hole where the treasure is hidden(0, 1, or 2): ");
        scanf("%d", &guess);
      
        shuffleHoles(holes, 3);   

        if (guess < 3) {

          if (holes[guess] == 1) {
            
              printf("You found the treasure! ");
              displayHoles(holes, 3);
              printf("Your cash balance is now = %d\n", balance + bet);
              balance += bet;
            
          } 
          else {
            
              printf("No treasure here! ");
              displayHoles(holes, 3);
              printf("Your cash balance is now = %d\n", balance - bet);
              balance -= bet;
            
          }

          if (balance == 0) {
            
              printf("\n * Sorry, you're out of cash. Better luck next time! Thank you for playing.\n");
              break;
            
          }
          
        } 
        else {
          
          printf("Sorry, you can either enter 0, 1, or 2 to guess, try again\n");
          
        }
      
    }

    return balance;
}

int main() {
  
    int balance;

    balance = guessGame(balance);

    return 0;
  
}