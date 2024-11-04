#include <stdio.h>
#include <fcntl.h>    // For open(), O_WRONLY, O_APPEND, O_CREAT
#include <unistd.h>   // For close()
#include <sys/types.h> // For type definitions
#include <sys/stat.h>  // For S_IRUSR, S_IWUSR
#include <stdio.h>    // For perror()

int main() {
    int fd = open("alo.txt", O_WRONLY | O_APPEND | O_CREAT, 0640);
    if (fd == -1) {
        perror("Error opening file");
        return 1;
    }
    printf("File descriptor: %d\n", fd);
}