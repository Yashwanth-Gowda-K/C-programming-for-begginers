#include <stdio.h>
#include <unistd.h> // For sleep()

int main() {
    // Infinite loop for the traffic light system
    while (1) {
        // RED Light
        printf("RED light is ON. Please STOP.\n");
        sleep(5); // Wait for 5 seconds
        
        // GREEN Light
        printf("GREEN light is ON. You can GO.\n");
        sleep(5); // Wait for 5 seconds
        
        // YELLOW Light
        printf("YELLOW light is ON. Get READY to STOP.\n");
        sleep(2); // Wait for 2 seconds
    }

    return 0; // This line won't be reached because of the infinite loop
}
