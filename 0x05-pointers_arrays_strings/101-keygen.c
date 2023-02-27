#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

int main(void)
{
    char password[PASSWORD_LENGTH + 1] = {0}; // Initialize password array with null characters
    const char* charset[] = {
        "0123456789", // numbers
        "abcdefghijklmnopqrstuvwxyz", // lowercase letters
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ", // uppercase letters
        "!@#$%^&*()_+-={}[]\\|;:'\"<>,.?/" // special characters
    };
    const int charset_size[] = {10, 26, 26, 26 + 21}; // size of each character set
    const int charset_count = 4; // total number of character sets
    srand(time(NULL)); // seed the random number generator with the current time

    // Generate the password
    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        int charset_index = rand() % charset_count; // select a random character set
        int char_index = rand() % charset_size[charset_index]; // select a random character from the character set
        password[i] = charset[charset_index][char_index]; // add the selected character to the password
    }

    // Print the password and exit
    printf("%s\n", password);
    return 0;
}
