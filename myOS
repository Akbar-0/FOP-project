#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <stdbool.h>
#include <mmsystem.h>

#ifdef _WIN32
#define CLEAR_COMMAND "cls"
#define LIST_COMMAND "dir /b"
#else
#define CLEAR_COMMAND "clear"
#define LIST_COMMAND "ls"
#endif

// Defining functions
int delay(unsigned int mseconds); // For short delays in milliseconds, used in animations

void initiate(void); // A brief Introduction

void displayBootMenu(void);      // Displays Boot Menu
void powerMenu(void);            // Displays Power Menu
void displayWelcomePage(void);   // Displays Welcome Page
void startOperatingSystem(void); // Preface of the OS starting
void displayDateTime(void);      // Displays Current Time and Date
void displayStartupMenu(void);   // Displays Startup Menu
void displayDesktop(void);       // Displays Desktop

int loginUser(int wrng_pwrd); // User Login Test

void openFileExplorer(void); // Opens File Explorer
void openNotepad(void);      // Open Note pad
void createNewNote(void);    // Create new Note
void openExistingNote(void); // Opens the already created Note

void openGames(void); // Opens Games
void hangman(void);

// Main function
int main()
{
    int choice, wrong_password = 0;

    initiate();

if_invalid_choice:
{
    while (1)
    {
        system(CLEAR_COMMAND);
        displayBootMenu();
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1)
        {
            // Invalid input, clear the input buffer
            while (getchar() != '\n')
            {
                continue;
            }

            printf("Invalid choice!\n");
            delay(1500);
            system(CLEAR_COMMAND);
            goto if_invalid_choice;
        }
    step:
    {
        switch (choice)
        {
        case 1:
            system(CLEAR_COMMAND);
            startOperatingSystem();
            system(CLEAR_COMMAND);
        logn:
        {
            if (loginUser(wrong_password))
            {
                    displayDesktop();
                while (1)
                {

                    displayStartupMenu();
                    printf("Enter your choice: ");
                    scanf("%d", &choice);

                    switch (choice)
                    {
                    case 1:
                    {
                        system(CLEAR_COMMAND);
                        displayDesktop();
                        break;
                    }
                    case 2:
                    {
                        system(CLEAR_COMMAND);
                        openFileExplorer();
                        break;
                    }
                    case 3:
                    {
                        system(CLEAR_COMMAND);
                        openNotepad();
                        break;
                    }
                    case 4:
                    {
                        system(CLEAR_COMMAND);
                        openGames();
                        break;
                    }
                    case 5:
                    {
                        system(CLEAR_COMMAND);
                        displayDateTime();
                        break;
                    }
                    case 6:
                    {
                        system(CLEAR_COMMAND);
                        powerMenu();
                        int select;
                        printf("Enter your choice:");
                        scanf("%d", &select);
                        switch (select)
                        {
                        case 1:
                        {
                            system(CLEAR_COMMAND);
                            goto shutdwn;
                            break;
                        }
                        case 2:
                        {
                            system(CLEAR_COMMAND);
                            goto restrt;
                            break;
                        }
                        case 3:
                        {
                            system(CLEAR_COMMAND);
                            goto slep;
                            break;
                        }
                        case 4:
                        {
                            system(CLEAR_COMMAND);
                            printf("Locking");
                            for (int i = 0; i < 3; i++)
                            {
                                delay(200);
                                printf(".");
                            }
                            delay(2000);

                            goto step;
                            break;
                        }
                        default:
                        {
                            printf("Invalid selection");
                            break;
                        }
                        }
                        break;
                    }
                    default:
                    {
                        system(CLEAR_COMMAND);
                        printf("Invalid choice!\n");
                    }
                    }
                }
            }
            else
            {
                printf("Login failed! Please try again.\n");
                delay(1000);
                system(CLEAR_COMMAND);
                wrong_password++;
                goto logn;
            }
            break;
        case 2:
        {
        shutdwn:
        {
            system(CLEAR_COMMAND);
            printf("Shutting Down");
            for (int i = 0; i < 3; i++)
            {
                delay(200);
                printf(".");
            }
            delay(2000);
            exit(0);
        }
        }
        case 3:
        {
        restrt:
        {
            printf("Restarting ");
            for (int i = 0; i < 3; i++)
            {
                delay(200);
                printf(".");
            }
            delay(2000);
            system(CLEAR_COMMAND);
            displayBootMenu();
        }
        break;
        }
        case 4:
        {
        slep:
        {
            int sleep_time_mins;
            printf("Time for sleep in minutes : ");
            scanf("%d", &sleep_time_mins);
            system(CLEAR_COMMAND);
            printf("Going to sleep mode for %d minutes ", sleep_time_mins);
            for (int i = 0; i < 3; i++)
            {
                delay(200);
                printf(".");
            }
            delay(300);
            system(CLEAR_COMMAND);
            printf("\n\n\n\n\n\n\n\t\t\t\t\t\tSleep Mode");
            delay(sleep_time_mins * 60 * 1000);
            goto step;
        }
        }
        default:;
        }
        }
    }
    }
}

    return 0;
}

int delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock())
        ;
}

void initiate(void)
{
    int a = 0, i = 0;
    system(CLEAR_COMMAND);
    system("color e0");
    int i1, j, l, l1;
    char name[50] = "\n\n\n\n\t\t\t      WELCOME TO OUR PROJECT\n\n";
    printf("\t\n");
    for (i1 = 0; i1 < 50; i1++)
    {
        printf("%c", name[i1]);
        delay(20);
    }
    printf("\n\t   ");
    for (j = 0; j < 30; j++)
    {
        printf("%c", 17);
        delay(30);
    }
    for (j = 0; j < 30; j++)
    {
        printf("%c", 16);
        delay(30);
    }
    delay(1500);
    printf("\n\n\n\n");
    system(CLEAR_COMMAND);
    system("color 1f");
    printf("\n\n\n");
    printf("\tName Of The Group Members Of \n\t\t");
    char ame[] = "\tC E P   GROUP:\n\n";
    printf("\t\n");
    for (l1 = 0; l1 < sizeof(ame) - 1; l1++)
    {
        printf("%c", ame[l1]);
        delay(150);
    }
    printf(" \n\t *   ID  :  - Group Members\n\n");
    delay(300);
    printf(" \t * 455507:  - Akbar Shah Zar Mughal\n\n");
    delay(300);
    printf(" \t * 456995:  - Rashid Hafeez\n\n");
    delay(300);
    printf("\n");
    system("pause");       // Pauses the Console window, until a key is pressed
    system(CLEAR_COMMAND); // Clears the console
    system("color 5e");    // Changing the console colors, there are two hexadecimal digits deciding background an foreground colors respectively
    printf("\n\n\n\n\n\n");
    printf("\t\t\tOur project on:\n");
    printf(" _____  _       _       _____                     _            \n");
    printf("|     ||_| ___ |_| ___ |   __| ___ _____  ___ _ _| |_ ___  ___  \n");
    printf("| | | || ||   || ||___||  |__ | . |     || . | | |  _| -_||  _| \n");
    printf("|_|_|_||_||_|_||_|     |_____||___|_|_|_||  _|___|_| |___||_|   \n");
    printf("                                         |_|                   \n");
    printf("\n");
    system("pause");
}

void displayBootMenu(void)
{
    system("color 97");
    printf("\nBoot Menu:\n");
    printf("1. Start OS\n");
    printf("2. Shutdown\n");
    printf("3. Restart\n");
    printf("4. Sleep\n");
}

void startOperatingSystem(void)
{
    printf("Operating System starting...\n");
    delay(1000);
    system(CLEAR_COMMAND);
    int i, j;
    system("color ed");
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 81; j++)
            printf("*");
        printf("\n");
    }
    printf("***********************");
    printf("                       _____  _____ ");
    printf("**********************\n");
    printf("***********************");
    printf(" ___  ___  ___  _____ |     ||   __|");
    printf("**********************\n");
    printf("***********************");
    printf("|  _|| . ||_ -||     ||  |  ||__   |");
    printf("**********************\n");
    printf("***********************");
    printf("|___||___||___||_|_|_||_____||_____|");
    printf("**********************\n");
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 81; j++)
            printf("*");
        printf("\n");
    }
    PlaySound(TEXT("C:\\Windows\\Media\\Windows Logon.wav"), NULL, SND_FILENAME);
}

int loginUser(int wrng_pwrd)
{
    if (wrng_pwrd <= 4)
    {
        char username[20];
        char password[20];

        printf("Enter your user name: ");
        scanf("%s", username);

        printf("Enter your password: ");
        scanf("%s", password);

        // Already saved user name and password for demonstration purposes
        const char *validUsername = "abcd";
        const char *validPassword = "123";

        // Compare the entered user name and password with the valid credentials
        // Return 1 if login successful, 0 otherwise
        if (strcmp(username, validUsername) == 0 && strcmp(password, validPassword) == 0)
        {
            printf("Login successful!\n");
            PlaySound(TEXT("C:\\Windows\\Media\\Windows Unlock.wav"), NULL, SND_FILENAME);
            return 1;
        }
        else
        {
            printf("Invalid user name or password. Login failed.\n");
            return 0;
        }
    }
    else
    {
        printf("Too many attempts!\nTry again in 5 minutes");
        delay(60 * 1000);
        system(CLEAR_COMMAND);
        printf("Too many attempts!\nTry again in 4 minutes");
        delay(60 * 1000);
        system(CLEAR_COMMAND);
        printf("Too many attempts!\nTry again in 3 minutes");
        delay(60 * 1000);
        system(CLEAR_COMMAND);
        printf("Too many attempts!\nTry again in 2 minutes");
        delay(60 * 1000);
        system(CLEAR_COMMAND);
        printf("Too many attempts!\nTry again in 1 minute");
        delay(60 * 1000);
        system(CLEAR_COMMAND);
        wrng_pwrd = 0;
        loginUser(wrng_pwrd);
    }
}

void displayStartupMenu(void)
{
    PlaySound(TEXT("C:\\Windows\\Media\\Windows Startup.wav"), NULL, SND_FILENAME);
    system(CLEAR_COMMAND);
    printf("\nStartup Menu:\n");
    printf("1. Desktop\n");
    printf("2. File Explorer\n");
    printf("3. Notepad\n");
    printf("4. Games\n");
    printf("5. Display Date and Time\n");
    printf("6. Power\n");
}

void displayDateTime(void)
{
    time_t currentTime;
    time(&currentTime);
    // Day Mon DD HH:MM:SS YYYY
    printf("Current Date and Time: %s", ctime(&currentTime));
    delay(4000);
    system(CLEAR_COMMAND);
}

void displayDesktop(void)
{
    int select = 0;
    system(CLEAR_COMMAND);
    time_t currentTime;
    time(&currentTime);
    // Day Mon DD HH:MM:SS YYYY
    printf("Current Date and Time: %s", ctime(&currentTime));
    while(1){
    printf("\nDesktop\n");
    printf("1. File Explorer\n");
    printf("2. Notepad\n");
    printf("3. Games\n");
    printf("4. Close Desktop\n");
    printf("Enter your choice: ");
    scanf("%d", &select);
    if (select == 1)
    {
        system(CLEAR_COMMAND);
        openFileExplorer();
        continue;
    }
    else if (select == 2)
    {
        system(CLEAR_COMMAND);
        openNotepad();
        continue;
    }
    else if (select == 3)
    {
        system(CLEAR_COMMAND);
        openGames();
        continue;
    }
    else if (select == 4)
    {
        break;
    }
    else
    {
        printf("Invalid Input!");
        continue;
    }
  }
}

void openFileExplorer(void)
{
    system(CLEAR_COMMAND);
    printf("\nOpening File Explorer \n");
    for (int i = 0; i < 3; i++)
    {
        delay(100);
        printf(".");
    }
    system(CLEAR_COMMAND);
    int choice, i;
    char filename[100];

    while (1)
    {
        printf("\nFile Explorer Menu:\n");
        printf("1. Create a file\n");
        printf("2. Delete a file\n");
        printf("3. List files in the current directory\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            system(CLEAR_COMMAND);
            printf("Enter the name of the file to create: ");
            scanf("%s", filename);

            // Create the file
            FILE *file = fopen(filename, "w");
            if (file == NULL)
            {
                printf("Error creating the file.\n");
            }
            else
            {
                printf("File created successfully.\n");
                fclose(file);
            }
            delay(1500);
            system(CLEAR_COMMAND);
            continue;

        case 2:
            system(CLEAR_COMMAND);
            printf("The files in this directory are: \n");
            system(LIST_COMMAND);
            printf("Enter the name of the file to delete: ");
            scanf("%s", filename);

            // Delete the file
            if (remove(filename) == 0)
            {
                printf("File deleted successfully.\n");
            }
            else
            {
                printf("Error deleting the file.\n");
            }
            delay(1500);
            system(CLEAR_COMMAND);
            continue;

        case 3:
            system(CLEAR_COMMAND);
            printf("Files in the current directory:\n");

            // List files in the current directory
            system(LIST_COMMAND);
            delay(7000);
            system(CLEAR_COMMAND);
            continue;

        case 4:
            printf("Exiting the File Explorer ");
            for (i = 0; i < 3; i++)
            {
                delay(200);
                printf(".");
            }
            delay(2000);
            system(CLEAR_COMMAND);
            break;

        default:
            printf("Invalid choice. Please try again.\n");
            delay(500);
            system(CLEAR_COMMAND);
            continue;
        }

        // Clear the screen
        system(CLEAR_COMMAND);
        break;
    }
}

void createNewNote(void)
{
    char fileName[100];
    printf("Enter the note name: ");
    scanf("%s", fileName);
    getchar(); // Wait the newline character from the previous input

    FILE *file = fopen(fileName, "w");
    if (file == NULL)
    {
        printf("Error creating the note.\n");
        return;
    }

    printf("Enter the contents of the note (type ~ on a new line to save and exit):\n");

    char c;
    while ((c = getchar()) != '~')
    {
        fputc(c, file);
    }

    fclose(file);
    printf("Note created successfully.\n");
}

void openExistingNote(void)
{
    char fileName[100];
    printf("Enter the note name: ");
    scanf("%s", fileName);

    FILE *file = fopen(fileName, "r+");
    if (file == NULL)
    {
        printf("Error opening the note.\n");
        return;
    }

    printf("Existing contents of the note:\n");

    char c;
    while ((c = fgetc(file)) != EOF)
    {
        putchar(c);
    }

    printf("\nEnter the new contents of the note (type ~ on a new line to save and exit):\n");

    while ((c = getchar()) != '~')
    {
        fputc(c, file);
    }

    fclose(file);
    printf("Note edited successfully.\n");
}

void openNotepad(void)
{
    int choice;

    while (1)
    {
        printf("\nNotepad Menu:\n");
        printf("1. Create a new note\n");
        printf("2. Open an existing note\n");
        printf("3. Exit Notepad\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            createNewNote();
            break;
        case 2:
            openExistingNote();
            break;
        case 3:
        {
            printf("Exiting Notepad...\n");
            system(CLEAR_COMMAND);
            return;
        }
        default:
            printf("Invalid choice!\n");
        }
    }
}

void powerMenu(void)
{
    system("color 97");
    printf("\nPower Menu:\n");
    printf("1. Shutdown\n");
    printf("2. Restart\n");
    printf("3. Sleep\n");
    printf("4. Lock User\n");
}

void hangman(void)
{
    void printHangman(int attempts)
    {
        printf("\n\n");
        printf("  +---+\n");
        printf("  |   |\n");
        switch (attempts)
        {
        case 7:
            printf("      |\n      |\n      |\n      |\n");
            break;
        case 6:
            printf("  O   |\n      |\n      |\n      |\n");
            break;
        case 5:
            printf("  O   |\n  |   |\n      |\n      |\n");
            break;
        case 4:
            printf("  O   |\n /|   |\n      |\n      |\n");
            break;
        case 3:
            printf("  O   |\n /|\\  |\n      |\n      |\n");
            break;
        case 2:
            printf("  O   |\n /|\\  |\n /    |\n      |\n");
            break;
        case 1:
            printf("  O   |\n /|\\  |\n / \\  |\n      |\n");
            break;
        }
        printf("=========\n\n");
    }
    char word[] = "hello";
    char guess[6] = "_____";
    int attempts = 7;

    while (attempts > 0 && strcmp(word, guess) != 0)
    {
        printHangman(attempts);
        printf("Guess the word: %s\n", guess);

        char letter;
        printf("Enter a letter: ");
        scanf(" %c", &letter); // The space before %c consumes any whitespace

        int found = 0;
        for (int i = 0; i < 5; i++)
        {
            if (word[i] == letter)
            {
                guess[i] = letter;
                found = 1;
            }
        }

        if (!found)
        {
            attempts--;
        }
        system(CLEAR_COMMAND);
    }

    if (attempts > 0)
    {
        printf("Congratulations, you won! The word was %s.\n\n\n\n\n\n", word);
    }
    else
    {
        printHangman(attempts);
        printf("Sorry, you lost. The word was %s.\n\n\n\n\n\n", word);
    }
}

void guessTheNumber(void)
{
    int secretNumber, userGuess;

    // Initialize random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    secretNumber = rand() % 100 + 1;

    printf("Welcome to Guess the Number!\n");
    printf("I'm thinking of a number between 1 and 100.\n");

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &userGuess);

        if (userGuess < secretNumber)
        {
            printf("Too low! Try again.\n");
        }
        else if (userGuess > secretNumber)
        {
            printf("Too high! Try again.\n");
        }
    } while (userGuess != secretNumber);

    printf("Congratulations! You found the number.\n");
}

void ticTacToe()
{
    const int BOARD_SIZE = 3;
    char board[3][3];

    // Function to initialize the board
    void initializeBoard()
    {
        for (int i = 0; i < BOARD_SIZE; i++)
        {
            for (int j = 0; j < BOARD_SIZE; j++)
            {
                board[i][j] = ' ';
            }
        }
    }

    // Function to print the board
    void displayBoard()
    {
        printf("\n");
        printf("-------------\n");
        for (int i = 0; i < BOARD_SIZE; i++)
        {
            printf("|");
            for (int j = 0; j < BOARD_SIZE; j++)
            {
                printf(" %c |", board[i][j]);
            }
            printf("\n-------------\n");
        }
    }

    // Function to check if a player has won
    bool checkWin(char player)
    {
        // Check rows
        for (int i = 0; i < BOARD_SIZE; i++)
        {
            if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            {
                return true;
            }
        }

        // Check columns
        for (int i = 0; i < BOARD_SIZE; i++)
        {
            if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            {
                return true;
            }
        }

        // Check diagonals
        if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
            (board[0][2] == player && board[1][1] == player && board[2][0] == player))
        {
            return true;
        }

        return false;
    }

    // Function to check if the board is full
    bool isBoardFull()
    {
        for (int i = 0; i < BOARD_SIZE; i++)
        {
            for (int j = 0; j < BOARD_SIZE; j++)
            {
                if (board[i][j] == ' ')
                {
                    return false;
                }
            }
        }
        return true;
    }

    // Function to make a move
    bool makeMove(int row, int col, char player)
    {
        if (board[row][col] == ' ')
        {
            board[row][col] = player;
            return true;
        }
        return false;
    }

    // Function to play the game
    void playGame()
    {
        char currentPlayer = 'X';
        int row, col;
        bool validMove;
        bool gameover = false;

        initializeBoard();

        while (!gameover)
        {
            system(CLEAR_COMMAND);
            printf("Current board:\n");
            displayBoard();
            printf("Player %c's turn. Enter row and column (0 to 2) e.g.(1 2): ", currentPlayer);
            scanf("%d %d", &row, &col);

            validMove = makeMove(row, col, currentPlayer);

            if (validMove)
            {
                if (checkWin(currentPlayer))
                {
                    printf("Player %c wins!\n", currentPlayer);
                    gameover = true;
                }
                else if (isBoardFull())
                {
                    printf("It's a draw!\n");
                    gameover = true;
                }
                else
                {
                    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
                }
            }
            else
            {
                printf("Invalid move. Try again.\n");
                delay(1000);
            }
        }

        printf("Final board:\n");
        displayBoard();
    }

    printf("Tic-Tac-Toe\n");
    delay(1000);
    playGame();
}

void openGames(void)
{
    system(CLEAR_COMMAND);
    printf("\nOpening Games ");
    for (int i = 0; i < 3; i++)
    {
        delay(100);
        printf(".");
    }
    system(CLEAR_COMMAND);
    int choice, i;
    char filename[100];
    while (1)
    {
        printf("\nGames Menu:\n");
        printf("1. Hangman\n");
        printf("2. Guess the number\n");
        printf("3. Tic-Tac-Toe\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            system(CLEAR_COMMAND);
            hangman();
            delay(3000);
            system(CLEAR_COMMAND);
            continue;

        case 2:
            system(CLEAR_COMMAND);
            guessTheNumber();
            delay(3000);
            system(CLEAR_COMMAND);
            continue;

        case 3:
            system(CLEAR_COMMAND);
            ticTacToe();
            delay(3000);
            system(CLEAR_COMMAND);
            continue;

        case 4:
            printf("Exiting the Games ");
            for (i = 0; i < 3; i++)
            {
                delay(200);
                printf(".");
            }
            delay(2000);
            system(CLEAR_COMMAND);
            break;

        default:
            printf("Invalid choice. Please try again.\n");
            delay(500);
            system(CLEAR_COMMAND);
            continue;
        }

        // Clear the screen
        system(CLEAR_COMMAND);
        break;
    }
}
