#include <stdio.h>
#include <windows.h>  // For Sleep() and Beep()

void countdown(int seconds) {
    for (int i = seconds; i >= 0; i--) {
        printf("Time remaining: %d seconds\n", i);
        Sleep(1000);  // Sleep for 1000 milliseconds (1 second)
    }
    Beep(523, 1000);  // Beep sound at 523 Hz for 1 second when the timer ends
    printf("Time is up!\n");
}

int main() {
    int seconds;
    printf("Enter countdown time in seconds: ");
    scanf("%d", &seconds);
    countdown(seconds);
    return 0;
}
