//7. Write a program to calculate the difference between two time periods.

#include <stdio.h>

struct Time {
  int hours;
  int minutes;
  int seconds;
};

void difference_between_times(struct Time start, struct Time end, struct Time *diff) {
  if (end.seconds < start.seconds) {
    end.minutes--;
    end.seconds += 60;
  }
  diff->seconds = end.seconds - start.seconds;
  if (end.minutes < start.minutes) {
    end.hours--;
    end.minutes += 60;
  }
  diff->minutes = end.minutes - start.minutes;
  diff->hours = end.hours - start.hours;
}

int main() {
  struct Time start_time, end_time, diff_time;
  printf("Enter the start time (hh:mm:ss): ");
  scanf("%d:%d:%d", &(start_time.hours), &(start_time.minutes), &(start_time.seconds));
  printf("Enter the end time (hh:mm:ss): ");
  scanf("%d:%d:%d", &(end_time.hours), &(end_time.minutes), &(end_time.seconds));
  difference_between_times(start_time, end_time, &diff_time);
  printf("Time difference: %d:%d:%d\n", diff_time.hours, diff_time.minutes, diff_time.seconds);
  return 0;
}

