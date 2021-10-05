/*
Maze Game in C
Use WASD to play the game.
You are '0' and you have to reach the end, i.e. the '*'.
*/

#include <stdio.h>
#include <conio.h>  // For system() function
#include <stdlib.h> // For srand() and rand() function
#include <unistd.h> // For sleep() function
#include <time.h>   // To pass in srand()

int height, width, difficulty, num;
int gameWon, gameExit;
int start_x, start_y, end_x, end_y;
int pos_x, pos_y, movement;
char maze[50][50];

// Easy Mazes
char easy_maze[5][8][15] = {
    // Element 0
    {
        {"###############"},
        {"#0   #  #    ##"},
        {"#### # # # #  #"},
        {"#  # #   # ####"},
        {"#    # # #    #"},
        {"# #### # # #  #"},
        {"#      #   # *#"},
        {"###############"},
    },
    // Element 1
    {
        {"###############"},
        {"#     #    # *#"},
        {"# ###    # #  #"},
        {"### # #  # #  #"},
        {"#0  # #  #    #"},
        {"# ### #  #  ###"},
        {"#     #  #    #"},
        {"###############"},
    },
    // Element 2
    {
        {"###############"},
        {"# # # #       #"},
        {"# #      # #  #"},
        {"# # #  ### ##*#"},
        {"#   #  #    ###"},
        {"#####     # # #"},
        {"#0     #  #   #"},
        {"###############"},
    },
    // Element 3
    {
        {"###############"},
        {"#    #        #"},
        {"# # ###   ###0#"},
        {"### # #   # # #"},
        {"# # ##  # #   #"},
        {"#   #   # ### #"},
        {"#*#     #     #"},
        {"###############"},
    },
    // Element 4
    {
        {"###############"},
        {"#    #        #"},
        {"# # ##### #   #"},
        {"## ## #   #   #"},
        {"#     # ####  #"},
        {"## ## # #     #"},
        {"#*  #   #  # 0#"},
        {"###############"},
    }};

// Hard Mazes
char hard_maze[5][12][30] = {
    // Element 0
    {
        {"##############################"},
        {"#0        #  #      #   # #  #"},
        {"########  ## # #  #       #  #"},
        {"#      #  #  # #  ####### #  #"},
        {"#  # # #  #  # #  #  #  #    #"},
        {"#  # # #     #    #       #  #"},
        {"#  # # ##### # #     #### ####"},
        {"#  #      #  ## ### #     #  #"},
        {"#  ######    #  #   #  ##### #"},
        {"#       # ##### #  ##        #"},
        {"#   ### #          #   ## # *#"},
        {"##############################"},
    },
    // Element 1
    {
        {"##############################"},
        {"#    #       #  #     #     *#"},
        {"#  # #       #  #  #  # ######"},
        {"#  # #########  #  #  #      #"},
        {"#  #       #      ########## #"},
        {"#  ####### #   #  #        # #"},
        {"#0       # #   #  # #####  # #"},
        {"######## #     #  # ##     # #"},
        {"#        #  #  #    # # #### #"},
        {"#  #######  #  #    # #      #"},
        {"#           #  #    #    #   #"},
        {"##############################"},
    },
    // Element 2
    {
        {"##############################"},
        {"#     #     #  #    #####    #"},
        {"#   #####      #          ####"},
        {"# # #       #  #    #####    #"},
        {"# #   ### ######        ###  #"},
        {"# # # #    #  #  #####  #    #"},
        {"# # # #    #  #         # ####"},
        {"#   # # #  #  #  #   #  # #  #"},
        {"#   # # #  #  #  #   #  #    #"},
        {"####### #     #  #   #  # #  #"},
        {"#0      #  #     #   #######*#"},
        {"##############################"},
    },
    // Element 3
    {
        {"##############################"},
        {"#      #    #         #      #"},
        {"#  ####### ###        #  ### #"},
        {"#*       #  #   #### ##      #"},
        {"#  ####  #        #   #      #"},
        {"#     #  #  #     #     ######"},
        {"#######  #  #     #          #"},
        {"#        #  #  #  #   # ######"},
        {"#  ##########  #  #   #      #"},
        {"#              #  ### ##### ##"},
        {"#  #############  #      #  0#"},
        {"##############################"},
    },
    // Element 4
    {
        {"##############################"},
        {"###      #    #  #  ########0#"},
        {"#     #  #    #  #   #       #"},
        {"#* ##### # #  #    #   #  #  #"},
        {"######     #    #  #####  ####"},
        {"# #### #####    #  #      #  #"},
        {"# ##   #  #     #######   #  #"},
        {"# ## # #        #   #    ##  #"},
        {"# #  # #  #     # # # #  #   #"},
        {"# #  #  #######   # # #  #   #"},
        {"#    #            #   #      #"},
        {"##############################"},
    }};

void exitGameMessage(char message[100])
{
    for (int i = 5; i > 0; i--)
    {
        system("cls");
        puts(message);
        printf("The game will terminate in %d second(s).\n", i);
        sleep(1);
    }
}

void initialize(int h, int w)
{
    srand(time(0));
    num = rand() % 5;
    gameExit = 0;
    gameWon = 0;
    height = h;
    width = w;
    start_x = 1;
    start_y = 1;
    end_x = 8;
    end_y = 23;
    // Copying the randomly selected maze to maze array
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (difficulty == 1)
            {
                maze[i][j] = easy_maze[num][i][j];
            }
            if (difficulty == 2)
            {
                maze[i][j] = hard_maze[num][i][j];
            }
            if (maze[i][j] == '0')
            {
                maze[i][j] = ' ';
                start_x = i;
                start_y = j;
                pos_x = i;
                pos_y = j;
            }
            if (maze[i][j] == '*')
            {
                end_x = i;
                end_y = j;
            }
        } // End of J loop
    }     // End of I loop
}

void drawmaze()
{
    system("cls");
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (i == pos_x && j == pos_y)
            {
                printf("0");
            }
            else
            {
                printf("%c", maze[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n");
    printf("Press X to quit the game");
}

void input()
{
    if (kbhit())
    {
        switch (getch())
        {
        case 'w':
            movement = 1;
            break;
        case 's':
            movement = 2;
            break;
        case 'a':
            movement = 3;
            break;
        case 'd':
            movement = 4;
            break;
        case 'x':
            gameExit = 1;
        }
    }
}

void logic()
{
    sleep(0.1);
    switch (movement)
    {
    case 1: // W
        if (maze[pos_x - 1][pos_y] == ' ' || maze[pos_x - 1][pos_y] == '*')
        {
            pos_x -= 1;
        }
        break;
    case 2: // S
        if (maze[pos_x + 1][pos_y] == ' ' || maze[pos_x + 1][pos_y] == '*')
        {
            pos_x += 1;
        }
        break;
    case 3: // A
        if (maze[pos_x][pos_y - 1] == ' ' || maze[pos_x][pos_y - 1] == '*')
        {
            pos_y -= 1;
        }
        break;
    case 4: // D
        if (maze[pos_x][pos_y + 1] == ' ' || maze[pos_x][pos_y + 1] == '*')
        {
            pos_y += 1;
        }
    }
    // Movement Reset
    movement = 5;
    // Checking if the player has reached the end
    if (pos_x == end_x && pos_y == end_y)
    {
        gameWon = 1;
        gameExit = 1;
    }
}

int main()
{
    system("cls");
    printf("Welcome to Maze Game!\n");
    printf("You are '0' stuck in the maze, trying to reach the exit '*'.\n");
    printf("Use W, A, S, D to move around the maze and find your way out!\n");
    printf("Please enter the difficulty you want to play.\n");
    printf("1: Easy\n");
    printf("2: Hard\n");
    scanf("%d", &difficulty);
    switch (difficulty)
    {
    case 1:
        initialize(8, 15);
        break;

    case 2:
        initialize(12, 30);
        break;

    default:
        gameWon = 0;
        gameExit = 1;
        exitGameMessage("Wrong Choice.");
    }

    while (!gameExit)
    {
        drawmaze();
        input();
        logic();
    }
    if (gameWon)
    {
        exitGameMessage("Congratulations! You win!");
    }
    else
    {
        exitGameMessage("Thank you for playing.");
    }
    system("cls");
    return 0;
}