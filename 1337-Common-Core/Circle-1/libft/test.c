#include <stdio.h>
int main() {
    int fd = open("test.c", O_WRONLY | O_APPEND | O_CREAT, 0640);
    if (fd == -1) {
        perror("Error opening file");
        return 1;
    }
    printf("File descriptor: %d\n", fd);
}