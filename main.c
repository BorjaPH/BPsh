#include <stdio.h>
#include <stdlib.h>


#define MAX_LENGTH_COMMAND 50   //Command's max length in bytes

// Method to read a command from user through terminal
char* readCommand() {
    
    char* commandToReturn= malloc(MAX_LENGTH_COMMAND);
    printf("BPsh>");
    scanf("%s", commandToReturn);

    return commandToReturn;

}

int main (int argc, char* argv[]) {

    while (1) {
        char* command = readCommand();
        printf("The command is: %s\n", command);
    }
}
