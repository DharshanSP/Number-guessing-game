/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int
getRandomNumber ()
{
  return rand () % 100 + 1;
}

void
guessGame ()
{
  int numberToGuess, tries, guess;

  srand (time (0));
  numberToGuess = getRandomNumber ();
  tries = 0;
  guess = -1;

  printf ("Welcome to the number guessing game!\n");
  printf ("I have chosen a number between 1 and 100.\n");
  printf ("Try to guess the number within 10 attempts.\n");

  while (guess != numberToGuess && tries < 10)
    {
      printf ("Enter your guess: ");
      scanf ("%d", &guess);
      tries++;

      if (guess < numberToGuess)
	{
	  printf ("Too low! Try again.\n");
	}
      else if (guess > numberToGuess)
	{
	  printf ("Too high! Try again.\n");
	}
      else
	{
	  printf ("Congratulations! You guessed the correct number.\n");
	}
    }

  if (guess != numberToGuess)
    {
      printf ("You have run out of attempts! The correct number was %d\n",
	      numberToGuess);
    }
}

int
main ()
{
  guessGame ();
  return 0;
}
