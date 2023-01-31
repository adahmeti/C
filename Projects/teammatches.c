#include <stdio.h>

int main() {
    int numTeams, i, j;
    
    // Ask for the number of teams
    printf("Enter the number of teams: ");
    scanf("%d", &numTeams);
    
    // Validate input
    if (numTeams < 2) {
        printf("Error: Invalid number of teams.\n");
        return 1;
    }
    
    // Display the matches
    for (i = 1; i < numTeams; i++) {
        for (j = i + 1; j <= numTeams; j++) {
            printf("Team %d vs. Team %d\n", i, j);
        }
    }
    
    return 0;
}
