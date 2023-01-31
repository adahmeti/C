#include <stdio.h>

char current_floor, dest_floor;
int passengers;

void init_elevator() {
  current_floor = 'G';
  printf("Elevator is now on the ground floor.\n");
  printf("Enter the destination floor (G, 1, 2, 3, 4, 5): ");
  scanf(" %c", &dest_floor);
}

int validate_input() {
  if (dest_floor == 'G' || dest_floor == '1' || dest_floor == '2' || dest_floor == '3' || dest_floor == '4' || dest_floor == '5')
    return 1;
  else {
    printf("Invalid input. Please enter a valid destination floor (G, 1, 2, 3, 4, 5): ");
    scanf(" %c", &dest_floor);
    return 0;
  }
}

void move_elevator() {
  printf("Elevator is moving from %c to %c\n", current_floor, dest_floor);
  current_floor = dest_floor;
}

void alight_passenger() {
  printf("Passenger has alighted on floor %c\n", current_floor);
  printf("Enter 1 to continue or 0 to exit: ");
  int continue_flag;
  scanf("%d", &continue_flag);
  if (continue_flag) {
    printf("Enter the destination floor: ");
    scanf(" %c", &dest_floor);
  }
  else
    printf("Thank you for using the elevator!\n");
}

int main() {
  init_elevator();
  while (validate_input()) {
    move_elevator();
    alight_passenger();
  }
  return 0;

}
