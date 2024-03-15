#include <stdio.h>
#include <unistd.h>
#include <ctype.h> // Include ctype.h for toupper function

int main() {
    char buffer[1024];
    
    // Prompt the user to enter a string
    printf("Enter a string: ");
    
    // Read input from the user
    ssize_t bytes_read = read(STDIN_FILENO, buffer, sizeof(buffer));
    if (bytes_read == -1) {
        perror("read");
        return 1;
    }
    
    // Convert the input string to uppercase
    for (int i = 0; i < bytes_read; i++) {
        buffer[i] = toupper(buffer[i]);
    }
     printf("result display: ");
    // Display the processed output
    ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
    if (bytes_written == -1) {
       
        perror("write");
        return 1;
    }
    
    return 0;
}
