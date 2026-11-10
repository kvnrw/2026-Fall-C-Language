#include <stdio.h>
#include <string.h>   /* strlen, strtok, strcmp */
#include <ctype.h>    /* tolower */

int main(void)
{
    char text[] = "My day begins early, and my dog waits by the door. I pack my bag, grab my coat, and walk with my friend Mia to the bus stop. She laughs at my jokes, but MY teacher does not! Oh my! Yesterday my class read a mystery about an army of ants, and I told everyone about my family. Is my story true? Ask my grandmother, my uncle, or my neighbor. I made this lunch myself, and my sandwich is the best one in school. My secret? Smile, keep my promise, and share my snacks. Oh my, tomorrow my brother comes too!";

    int text_length = 0;
    int my_count = 0;
    int i;

    // Task 1: find the length of the text.
    text_length = strlen(text);

    // Task 2: count the word "my".
    char *word = strtok(text, " ,.!?;");
    while (word != NULL) {
        char lower[32];
        strncpy(lower, word, sizeof(lower) - 1);
        lower[sizeof(lower) - 1] = '\0';
        for (i = 0; lower[i] != '\0'; i++)
            lower[i] = tolower(lower[i]);

        if (strcmp(lower, "my") == 0)
            my_count++;

        word = strtok(NULL, " ,.!?;");   /* next word */
    }

    /* Task 3: print the results. */
    printf("Length: %d\n", text_length);
    printf("Count: %d\n", my_count);

    return 0;
}
