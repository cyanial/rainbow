#include <stdio.h>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"

int main() {
    char line[256];
    int colorIndex = 0;
    char *colors[] = {RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN};
    int numColors = sizeof(colors) / sizeof(colors[0]);

    while (1) {
        if (fgets(line, sizeof(line), stdin) == NULL)
            break;

        printf("%s%s%s", colors[colorIndex], line, RESET);
        fflush(stdout);
        colorIndex = (colorIndex + 1) % numColors;
    }

    return 0;
}