#include <time.h>    //for dealing with time variables
#include <stdio.h>   //standard input and output
#include <stdlib.h>  //for the system() functions
#include <unistd.h>  //for the sleep() and usleep() functions
#include <string.h>  //for string handling
#include <stdbool.h> //to handle boolean values

#ifdef _WIN32
#define CLEAR_COMMAND "cls"
#define LIST_COMMAND "dir /b"
#else
#define CLEAR_COMMAND "clear"
#define LIST_COMMAND "ls"
#endif

// Declaring functions
void initiate(void);             // A brief Introduction
void displayBootMenu(void);      // Displays Boot Menu
void powerMenu(void);            // Displays Power Menu
void displayWelcomePage(void);   // Displays Welcome Page
void startOperatingSystem(void); // Shows the OS starting
void displayDateTime(void);      // Displays Current Time and Date
void displayStartupMenu(void);   // Displays Startup Menu
void displayDesktop(void);       // Displays Desktop
int loginUser(int wrng_pwrd);    // User Login Test
void openFileExplorer(void);     // Opens File Explorer
void openNotepad(void);          // Opens Note pad
void createNewNote(void);        // Creates new Note
void openExistingNote(void);     // Opens the already created Note
void openGames(void);            // Opens Games
void guessTheNumber(void);       // Runs Guess The Number
void ticTacToe();                // Runs Tic Tac Toe
void hangman(void);              // Runs Hangman

// Main function
int main() {
	int choice, wrong_password = 0;

	initiate();

if_invalid_choice: {
		while (1) {
			system(CLEAR_COMMAND);
			displayBootMenu();
			printf("Enter your choice: ");
			if (scanf("%d", &choice) != 1) {
				// Invalid input, clear the input buffer
				while (getchar() != '\n') {
					continue;
				}
				system("echo \a");
				printf("Invalid choice!\n");
				usleep(1500000);
				system(CLEAR_COMMAND);
				goto if_invalid_choice;
			}
step: {
				switch (choice) {
					case 1:
						system(CLEAR_COMMAND);
						startOperatingSystem();
						system(CLEAR_COMMAND);
logn: {
							if (loginUser(wrong_password)) {
								displayDesktop();
								while (1) {

									displayStartupMenu();
									printf("Enter your choice: ");
									scanf("%d", &choice);

									switch (choice) {
										case 1: {
											system("echo \a");
											system(CLEAR_COMMAND);
											displayDesktop();
											break;
										}
										case 2: {
											system("echo \a");
											system(CLEAR_COMMAND);
											openFileExplorer();
											break;
										}
										case 3: {
											system("echo \a");
											system(CLEAR_COMMAND);
											openNotepad();
											break;
										}
										case 4: {
											system("echo \a");
											system(CLEAR_COMMAND);
											openGames();
											break;
										}
										case 5: {
											system("echo \a");
											system(CLEAR_COMMAND);
											displayDateTime();
											break;
										}
										case 6: {
											system("echo \a");
											system(CLEAR_COMMAND);
											powerMenu();
											int select;
											printf("Enter your choice:");
											scanf("%d", &select);
											switch (select) {
												case 1: {
													system("echo \a");
													system(CLEAR_COMMAND);
													goto shutdwn;
													break;
												}
												case 2: {
													system("echo \a");
													system(CLEAR_COMMAND);
													goto restrt;
													break;
												}
												case 3: {
													system("echo \a");
													system(CLEAR_COMMAND);
													goto slep;
													break;
												}
												case 4: {
													system("echo \a");
													system(CLEAR_COMMAND);
													printf("Locking");
													for (int i = 0; i < 3; i++) {
														usleep(200000);
														printf(".");
													}
													usleep(2000000);

													goto step;
													choice = 0;
													break;
												}
												default: {
													system("echo \a");
													printf("Invalid choice. Please try again.\n");
													usleep(500000);
													system(CLEAR_COMMAND);
													continue;
												}
											}
											break;
										}
										default: {
											system("echo \a");
											printf("Invalid choice. Please try again.\n");
											usleep(500000);
											system(CLEAR_COMMAND);
											continue;
										}
									}
								}
							} else {
								system("echo \a");
								printf("Login failed! Please try again.\n");
								usleep(1000000);
								system(CLEAR_COMMAND);
								wrong_password++;
								goto logn;
							}
							break;
						case 2: {
shutdwn: {
								system("echo \a");
								system(CLEAR_COMMAND);
								printf("Shutting Down");
								for (int i = 0; i < 3; i++) {
									usleep(200000);
									printf(".");
								}
								usleep(2000000);
								exit(0);
							}
						}
						case 3: {
restrt: {
								system("echo \a");
								printf("Restarting ");
								for (int i = 0; i < 3; i++) {
									usleep(200000);
									printf(".");
								}
								usleep(2000000);
								system(CLEAR_COMMAND);
								displayBootMenu();
							}
							break;
						}
						case 4: {
slep: {
								system("echo \a");
								int sleep_time_mins;
								printf("Time for sleep in minutes : ");
								scanf("%d", &sleep_time_mins);
								system(CLEAR_COMMAND);
								printf("Going to sleep mode for %d minutes ", sleep_time_mins);
								for (int i = 0; i < 3; i++) {
									usleep(200000);
									printf(".");
								}
								usleep(300000);
								system(CLEAR_COMMAND);
								printf("\n\n\n\n\n\n\n\t\t\t\t\t\tSleep Mode");
								usleep(sleep_time_mins * 60 * 1000000);
								goto step;
							}
						}
						default: {
							printf("Invalid choice. Please try again.\n");
							usleep(500000);
							system(CLEAR_COMMAND);
							continue;
						}
					}
				}
			}
		}
	}

	return 0;
}

// Defining pre-declared Functions
void initiate(void) {
	int a = 0, i = 0;
	system(CLEAR_COMMAND);
	int i1, j, l, l1;
	printf("\n\n\n\n\t");
	for (j = 0; j < 60; j++) {
		printf("%c", 15);
		usleep(20000);
	}
	char name[50] = "\n\t*\t\t    WELCOME TO OUR PROJECT        \t   *";
	printf("\n\t*\t\t\t\t\t\t\t   *");
	printf("\n\t*\t\t\t\t\t\t\t   *");
	for (i1 = 0; i1 < 50; i1++) {
		printf("%c", name[i1]);
		usleep(20000);
	}
	printf("\n\t*\t\t\t\t\t\t\t   *");
	printf("\n\t*\t\t\t\t\t\t\t   *");
	printf("\n\t");
	for (j = 0; j < 60; j++) {
		printf("%c", 15);
		usleep(20000);
	}
	usleep(1500000);
	printf("\n\n\n\n");
	system(CLEAR_COMMAND);
	printf("\n\n\n");
	printf("\tName Of The Group Members Of \n\t\t");
	char ame[] = "\tC E P   GROUP:\n\n";
	printf("\t\n");
	for (l1 = 0; l1 < sizeof(ame) - 1; l1++) {
		printf("%c", ame[l1]);
		usleep(80000);
	}
	printf(" \n\t *   ID  :  - Group Members\n\n");
	usleep(300000);
	printf(" \t * 455507:  - Akbar Shah Zar Mughal\n\n");
	usleep(300000);
	printf(" \t * 456995:  - Rashid Hafeez\n\n");
	usleep(300000);
	printf("\n");
	sleep(5);
	system(CLEAR_COMMAND); // Clears the console
	printf("\n\n\n\n\n");
	printf("\t\t\tPresenting you a\n\n");
	printf(" _____  _       _       _____                     _             \n");
	printf("|     ||_| ___ |_| ___ |   __| ___ _____  ___ _ _| |_ ___  ___  \n");
	printf("| | | || ||   || ||___||  |__ | . |     || . | | |  _| -_||  _| \n");
	printf("|_|_|_||_||_|_||_|     |_____||___|_|_|_||  _|___|_| |___||_|   \n");
	printf("                                         |_|                    \n");
	system("echo \a");
	sleep(4);
}

void displayBootMenu(void) {
	printf("\t****************\n");
	printf("\t*  Boot Menu:  *\n");
	printf("\t*  1. Start OS *\n");
	printf("\t*  2. Shutdown *\n");
	printf("\t*  3. Restart  *\n");
	printf("\t*  4. Sleep    *\n");
	printf("\t****************\n");
}

void startOperatingSystem(void) {
	printf("Starting cosmOS...\n");
	sleep(1);
	system(CLEAR_COMMAND);
	int i, j;
	for (i = 0; i < 12; i++) {
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
	for (i = 0; i < 12; i++) {
		for (j = 0; j < 81; j++)
			printf("*");
		printf("\n");
	}
	sleep(3);
}

int loginUser(int wrng_pwrd) {
	if (wrng_pwrd <= 4) {
		char username[20];
		char password[20], c;
		int index = 0;

		printf("Enter your user name: ");
		scanf("%s", username);

		printf("Enter your password: ");
		while ((c = getch()) != '\r') {
			if (index < 0)
				index = 0;
			if (c == '\b') {
				putch('\b');
				putch(NULL);
				putch('\b');
				index--;
			} else {
				password[index++] = c;
				putch('*');
			}
		}

		// Already saved user name and password for demonstration purposes
		const char *validUsername = "abcd";
		const char *validPassword = "123";

		// Compare the entered user name and password with the valid credentials
		// Return 1 if login successful, 0 otherwise
		if (strcmp(username, validUsername) == 0 && strcmp(password, validPassword) == 0) {
			system("echo \a");
			printf("\nLogin successful!\n");
			sleep(3);
			return 1;
		} else {
			system("echo \a");
			printf("\nInvalid user name or password. Login failed.\n");
			return 0;
		}
	} else {
		printf("Too many attempts!\nTry again in 5 minutes");
		usleep(60 * 1000000);
		system(CLEAR_COMMAND);
		printf("Too many attempts!\nTry again in 4 minutes");
		usleep(60 * 1000000);
		system(CLEAR_COMMAND);
		printf("Too many attempts!\nTry again in 3 minutes");
		usleep(60 * 1000000);
		system(CLEAR_COMMAND);
		printf("Too many attempts!\nTry again in 2 minutes");
		usleep(60 * 1000000);
		system(CLEAR_COMMAND);
		printf("Too many attempts!\nTry again in 1 minute");
		usleep(60 * 1000000);
		system(CLEAR_COMMAND);
		wrng_pwrd = 0;
		loginUser(wrng_pwrd);
	}
}

void displayStartupMenu(void) {
	system(CLEAR_COMMAND);
	printf("\t*****************************\n");
	printf("\t*     Startup Menu:         *\n");
	printf("\t*     1. Desktop            *\n");
	printf("\t*     2. File Explorer      *\n");
	printf("\t*     3. Notepad            *\n");
	printf("\t*     4. Games              *\n");
	printf("\t*     5. Date and Time      *\n");
	printf("\t*     6. Power              *\n");
	printf("\t*****************************\n");
}

void displayDateTime(void) {
	time_t currentTime;
	time(&currentTime);
	// Day Mon DD HH:MM:SS YYYY
	printf("Current Date and Time: %s", ctime(&currentTime));
	usleep(4000000);
	system(CLEAR_COMMAND);
}

void displayDesktop(void) {
	int select = 0;
	system(CLEAR_COMMAND);
	time_t currentTime;
	time(&currentTime);
	// Day Mon DD HH:MM:SS YYYY
	printf("Current Date and Time: %s", ctime(&currentTime));
	while (1) {
		printf("\t*****************************\n");
		printf("\t*    Desktop                *\n");
		printf("\t*    1. File Explorer       *\n");
		printf("\t*    2. Notepad             *\n");
		printf("\t*    3. Games               *\n");
		printf("\t*    4. Open Startup Menu   *\n");
		printf("\t*****************************\n");
		printf("Enter your choice: ");
		scanf("%d", &select);
		if (select == 1) {
			system(CLEAR_COMMAND);
			openFileExplorer();
			continue;
		} else if (select == 2) {
			system(CLEAR_COMMAND);
			openNotepad();
			continue;
		} else if (select == 3) {
			system(CLEAR_COMMAND);
			openGames();
			continue;
		} else if (select == 4) {
			break;
		} else {
			system("echo \a");
			printf("Invalid choice. Please try again.\n");
			usleep(500000);
			system(CLEAR_COMMAND);
			time(&currentTime);
			printf("Current Date and Time: %s", ctime(&currentTime));
			continue;
		}
	}
}

void openFileExplorer(void) {
	system(CLEAR_COMMAND);
	printf("\nOpening File Explorer ");
	for (int i = 0; i < 3; i++) {
		usleep(100000);
		printf(".");
	}
	system(CLEAR_COMMAND);
	int choice, i;
	char filename[100];

	while (1) {
		printf("\t*******************************************\n");
		printf("\t*    File Explorer Menu:                  *\n");
		printf("\t*    1. Create a file                     *\n");
		printf("\t*    2. Delete a file                     *\n");
		printf("\t*    3. List of current files             *\n");
		printf("\t*    4. Exit                              *\n");
		printf("\t*******************************************\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);

		switch (choice) {
			case 1:
				system(CLEAR_COMMAND);
				printf("Enter the name of the file to create: ");
				scanf("%s", filename);

				// Create the file
				FILE *file = fopen(filename, "w");
				if (file == NULL) {
					printf("Error creating the file.\n");
				} else {
					printf("File created successfully.\n");
					fclose(file);
				}
				usleep(1500000);
				system(CLEAR_COMMAND);
				continue;

			case 2:
				system(CLEAR_COMMAND);
				printf("Choose a file from these: \n");
				system(LIST_COMMAND);
				printf("Enter the name of the file to delete: ");
				scanf("%s", filename);

				// Delete the file
				if (remove(filename) == 0) {
					printf("File deleted successfully.\n");
				} else {
					printf("Error deleting the file.\n");
				}
				usleep(1500000);
				system(CLEAR_COMMAND);
				continue;

			case 3:
				system(CLEAR_COMMAND);
				printf("The current files are listed below:\n");

				// List files in the current directory
				system(LIST_COMMAND);
				usleep(7000000);
				system(CLEAR_COMMAND);
				continue;

			case 4:
				printf("Exiting the File Explorer ");
				for (i = 0; i < 3; i++) {
					usleep(200000);
					printf(".");
				}
				usleep(2000000);
				system(CLEAR_COMMAND);
				break;

			default:
				system("echo \a");
				printf("Invalid choice. Please try again.\n");
				usleep(500000);
				system(CLEAR_COMMAND);
				continue;
		}

		// Clear the screen
		system(CLEAR_COMMAND);
		break;
	}
}

void createNewNote(void) {
	char fileName[100];
	printf("Enter the note name: ");
	scanf("%s", fileName);
	getchar(); // Wait the newline character from the previous input

	FILE *file = fopen(fileName, "w");
	if (file == NULL) {
		system("echo \a");
		printf("Error creating the note.\n");
		return;
	}

	printf("Enter the contents of the note (type ~ at the end to save and exit):\n");

	char c;
	while ((c = getchar()) != '~') {
		fputc(c, file);
	}

	fclose(file);
	printf("Note created successfully.\n");
}

void openExistingNote(void) {
	char fileName[100];
	printf("Enter the note name: ");
	scanf("%s", fileName);

	FILE *file = fopen(fileName, "r+");
	if (file == NULL) {
		system("echo \a");
		printf("Error opening the note.\n");
		return;
	}

	printf("Existing contents of the note:\n");

	char c;
	while ((c = fgetc(file)) != EOF) {
		putchar(c);
	}

	printf("\nEnter the new contents of the note (type ~ at the end to save and exit):\n");

	while ((c = getchar()) != '~') {
		fputc(c, file);
	}

	fclose(file);
	printf("Note edited successfully.\n");
}

void openNotepad(void) {
	printf("\nOpening Notepad ");
	for (int i = 0; i < 3; i++) {
		usleep(100000);
		printf(".");
	}
	system(CLEAR_COMMAND);
	int choice, i;

	while (1) {
		printf("\t**********************************\n");
		printf("\t*     Notepad Menu:              *\n");
		printf("\t*     1. Create a new note       *\n");
		printf("\t*     2. Open an existing note   *\n");
		printf("\t*     3. Exit Notepad            *\n");
		printf("\t**********************************\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);

		switch (choice) {
			case 1:
				createNewNote();
				break;
			case 2:
				openExistingNote();
				break;
			case 3: {
				printf("Exiting Notepad ");
				for (i = 0; i < 3; i++) {
					usleep(200000);
					printf(".");
				}
				usleep(2000000);
				system(CLEAR_COMMAND);
				return;
			}
			default: {
				system("echo \a");
				printf("Invalid choice. Please try again.\n");
				usleep(500000);
				system(CLEAR_COMMAND);
				continue;
			}
		}
	}
}

void powerMenu(void) {
	printf("\t********************\n");
	printf("\t*   Power Menu:    *\n");
	printf("\t*   1. Shutdown    *\n");
	printf("\t*   2. Restart     *\n");
	printf("\t*   3. Sleep       *\n");
	printf("\t*   4. Lock User   *\n");
	printf("\t********************\n");
}

void hangman(void) {
	void printHangman(int attempts) {
		printf("\n\n");
		printf("  +---+\n");
		printf("  |   |\n");
		switch (attempts) {
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

	while (attempts > 1 && strcmp(word, guess) != 0) {
		printHangman(attempts);
		printf("Guess the word: %s\n", guess);

		char letter;
		printf("Enter a letter: ");
		scanf(" %c", &letter); // The space before %c consumes any whitespace

		int found = 0;
		for (int i = 0; i < 5; i++) {
			if (word[i] == letter) {
				guess[i] = letter;
				found = 1;
			}
		}

		if (!found) {
			attempts--;
		}
		system(CLEAR_COMMAND);
	}

	if (attempts > 1) {
		printf("Congratulations, you won! The word was %s.\n\n\n\n\n\n", word);
	} else {
		printHangman(attempts);
		printf("Sorry, you lost. The word was %s.\n\n\n\n\n\n", word);
	}
}

void guessTheNumber(void) {
	int secretNumber, userGuess;

	// Initialize random number generator
	srand(time(0));

	// Generate a random number between 1 and 100
	secretNumber = rand() % 100 + 1;

	printf("Welcome to Guess the Number!\n");
	printf("I'm thinking of a number between 1 and 100.\n");

	do {
		printf("Enter your guess: ");
		scanf("%d", &userGuess);

		if (userGuess < secretNumber) {
			printf("Too low! Try again.\n");
		} else if (userGuess > secretNumber) {
			printf("Too high! Try again.\n");
		}
	} while (userGuess != secretNumber);

	printf("Congratulations! You found the number.\n");
}

void ticTacToe() {
	const int BOARD_SIZE = 3;
	char board[3][3];

	// Function to initialize the board
	void initializeBoard() {
		for (int i = 0; i < BOARD_SIZE; i++) {
			for (int j = 0; j < BOARD_SIZE; j++) {
				board[i][j] = ' ';
			}
		}
	}

	// Function to print the board
	void printBoard() {
		printf("\n");
		printf("-------------\n");
		for (int i = 0; i < BOARD_SIZE; i++) {
			printf("|");
			for (int j = 0; j < BOARD_SIZE; j++) {
				printf(" %c |", board[i][j]);
			}
			printf("\n-------------\n");
		}
	}

	// Function to check if a player has won
	bool gameCheck(char player) {
		// Check rows
		for (int i = 0; i < BOARD_SIZE; i++) {
			if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
				return true;
			}
		}

		// Check columns
		for (int i = 0; i < BOARD_SIZE; i++) {
			if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
				return true;
			}
		}

		// Check diagonals
		if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
		        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
			return true;
		}

		return false;
	}

	// Function to check if the board is full
	bool isBoardFull() {
		for (int i = 0; i < BOARD_SIZE; i++) {
			for (int j = 0; j < BOARD_SIZE; j++) {
				if (board[i][j] == ' ') {
					return false;
				}
			}
		}
		return true;
	}

	// Function to make a move
	bool makeMove(int row, int col, char player) {
		if (board[row][col] == ' ') {
			board[row][col] = player;
			return true;
		}
		return false;
	}

	// Function to play the game
	void playGame() {
		char currentPlayer = 'X';
		int row, col;
		bool validMove;
		bool gameover = false;

		initializeBoard();

		while (!gameover) {
			system(CLEAR_COMMAND);
			printf("Current board:\n");
			printBoard();
			printf("Player %c's turn. Enter row and column (0 to 2) e.g. 1 2: ", currentPlayer);
			scanf("%d %d", &row, &col);

			validMove = makeMove(row, col, currentPlayer);

			if (validMove) {
				if (gameCheck(currentPlayer)) {
					printf("Player %c wins!\n", currentPlayer);
					gameover = true;
				} else if (isBoardFull()) {
					printf("It's a draw!\n");
					gameover = true;
				} else {
					currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
				}
			} else {
				printf("Invalid move. Try again.\n");
				usleep(1000000);
			}
		}

		printf("Final board:\n");
		printBoard();
	}

	printf("Tic-Tac-Toe\n");
	usleep(1000000);
	playGame();
}

void openGames(void) {
	system(CLEAR_COMMAND);
	printf("\nOpening Games ");
	for (int i = 0; i < 3; i++) {
		usleep(100000);
		printf(".");
	}
	system(CLEAR_COMMAND);
	int choice, i;
	while (1) {
		printf("\t***************************\n");
		printf("\t*   Games Menu:           *\n");
		printf("\t*   1. Hangman            *\n");
		printf("\t*   2. Guess the number   *\n");
		printf("\t*   3. Tic-Tac-Toe        *\n");
		printf("\t*   4. Exit               *\n");
		printf("\t***************************\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);

		switch (choice) {
			case 1:
				system(CLEAR_COMMAND);
				hangman();
				usleep(3000000);
				system(CLEAR_COMMAND);
				continue;

			case 2:
				system(CLEAR_COMMAND);
				guessTheNumber();
				usleep(3000000);
				system(CLEAR_COMMAND);
				continue;

			case 3:
				system(CLEAR_COMMAND);
				ticTacToe();
				usleep(3000000);
				system(CLEAR_COMMAND);
				continue;

			case 4:
				printf("Exiting the Games ");
				for (i = 0; i < 3; i++) {
					usleep(200000);
					printf(".");
				}
				usleep(2000000);
				system(CLEAR_COMMAND);
				break;

			default:
				system("echo \a");
				printf("Invalid choice. Please try again.\n");
				usleep(500000);
				system(CLEAR_COMMAND);
				continue;
		}

		// Clear the screen
		system(CLEAR_COMMAND);
		break;
	}
}
