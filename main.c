#include <stdio.h>
#include <stdlib.h>

int main()
{
    char userName[20];
    char task[1];

    printf("CPP Police Department\nPlease enter your last name to login.\n");
    fgets(userName, 20, stdin);//Gets the name of the player.

    printf("Welcome back detective %sHere is a list of your tasks for today\n", userName);
    printf("1. Murder on Elm Street\n2. Stolen Cake\n3. Missing child\n");
    printf("(Enter the number of the task you wish to accept)\n");

    fgets(task, 2, stdin);//Gets the task the user wants to do.

    printf("You chose %s\n", task);

    if(strcmp(task, "1") == 0){                          //Everything inside this if statement is for task 1
        printf("Murder on Elm Street accepted.\n\n");
    }

    if(strcmp(task, "2") == 0){                          //Everything inside this if statement is for task 2
        printf("Stolen Cake accepted.\n\n");
    }

    if(strcmp(task, "3") == 0){                          //Everything inside this if statement is for task 3
        printf("Missing child accepted.\n\n");
    }


}
