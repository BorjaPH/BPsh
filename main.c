#include <stdio.h>
#include <stdlib.h>

char* readCommand() {
    
    char* commandToReturn= malloc(20);
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
