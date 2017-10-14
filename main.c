#include <stdio.h>
#include <stdlib.h>

int main()
{
    char userName[20];
    char reason[20];//Placeholder for when the chief gives the detective a chance to explain himself.
    int task;
    int complete = 0;

    printf("CPP Police Department\nPlease enter your last name to login.\n");
    fgets(userName, 20, stdin);//Gets the name of the player.

    printf("\nWelcome back detective %sHere is a list of your tasks for today\n\n", userName);
    printf("1. Murder on Elm Street\n2. Stolen Cake\n3. Missing child\n");
    printf("(Enter the number of the task you wish to accept)\n");

    scanf("%d", &task);//Gets the task the user wants to do.

    printf("You chose %d\n", task);


    if(task == 1){                          //Everything inside this if statement is for task 1, murder on elm street.

        printf("Murder on Elm Street accepted.\n\n");
        printf("You read over the case files, everything seems to be in check, everything except the last sentence. Things don't add up.\n");
        printf("As the leading detective, you know the crime was committed one week ago, however the last sentence tells you otherwise.\n");
        printf("What would you like to do?\n\n1. Tell the chief what you have found.\n2. Visit the bakery where the victim was last seen.\n3. Go for a walk down Elm Street.\n");

        scanf("%d", &task);

        while (complete == 0){

            if(task == 1){ //Everything in this if statement happens if the player decides to tell the chief what they found.
                printf("You decide to tell the chief what you found!\n");
                printf("The chief tells you it must have been a typo and demands you get back to work. He seems a little nervous at your discovery.\nWhat would you like to do?\n\n");
                printf("1. Investigate your boss, the chief\n2. Visit the bakery where the victim was last seen.\n3. Go for a walk down Elm Street.\n");

                scanf("%d", &task);

                if (task == 1){

                    printf("One of your fellow officers sees what you are doing and reports it to the chief. The chief calls you to his office and locks the door.\n\n");
                    printf("Chief: It has come to my attention that you do not trust me detective %s\nWhy are you doing this?\n", userName);
                    scanf("%s", reason);
                    printf("\nChief: That is not a good enough excuse. I can't have people like you on my team. You have left me with no choice.");
                    printf("\n\n\nYou got fired, game over!\n\n\n");
                    return 0;
                }
            }

            if (task == 2){
                printf("You decide to visit the bakery where the victim was last seen\n");
                printf("As you walk towards the bakery, you hear someone call your name, detective %s", userName);
                printf("You see the captain eating a donut outside the bakery.\n");
                printf("What do you do?\n\n");
                printf("1. Tell the chief what you have found.\n2. Ask the captain why he is at the bakery during work hours.\n3. Go for a walk down Elm Street.\n");
                scanf("%d", &task);

                if (task == 2){
                    printf("You question the captain\n");
                    printf("The captain tells you it's his daily routine. That eating the donut helps him stay focused. He then asks why you are there.\n");
                    scanf("%s", reason);
                    printf("Captain: I see, well I don't think the bakery will be of any use to you. I suggest you go to the crime scene.\n");
                    printf("What would you like to do?\n");
                    printf("1. Tell the chief what you have found\n2. Question the bakery owner\n3. Go for a walk down Elm Street.\n");
                    scanf("%d", &task);

                    if (task == 2) {
                        printf("You decide to question the baker\n");
                        printf("While questioning the baker, the chief tells you again to leave the bakery. The baker insists you take a free pie before you leave\n");
                        printf("What would you like to do?\n\n1. Investigate the chief\n2. Take the pie and leave.\n3. Go for a walk down Elm Street.\n");
                        scanf("%d", &task);

                        if (task == 2){
                            printf("You take the pie, thank the baker and leave\n");
                            printf("Later that night you eat the pie for dinner\nA few hours later you don't feel too good. You call an ambulance and the chief... but it is too late.\n");
                            printf("\n\nYou died, Game Over!\n\n\n");
                            return 0;
                        }
                    }

                }

            }
        }

    }

    if(task == 2){                          //Everything inside this if statement is for task 2
        printf("Stolen Cake accepted.\n\n");
    }

    if(task == 3){                          //Everything inside this if statement is for task 3
        printf("Missing child accepted.\n\n");
    }

    return 0;
}
