#include <stdio.h>
#include <string.h>

// Define Date structure
typedef struct date {
    int year;   // Year
    int month;  // Month
    int day;    // Day
} Date;

// Define Task structure
typedef struct task {
    int id;                 // Task ID
    char description[100];  // Description
    Date deadline;          // Deadline (Date structure)
    int completed;  // Completion flag (0: Not completed, 1: Completed)
} Task;

// Function to add a task
/* BLANK */

// Function to display a task
void display_task(Task t) {
    printf(
        "ID: %d, Description: %s, Deadline: %d/%d/%d, Completed: %s\n",
        t.id, t.description, t.deadline.year, t.deadline.month,
        t.deadline.day, t.completed ? "Yes" : "No");
}

int main(void) {
    Task my_tasks[10];
    int task_count = 0;
    int id, year, month, day, i;
    char description[100];
    char continue_input;

    do {
        printf("Enter task ID: ");
        scanf("%d", &id);
        printf("Enter task description: ");
        scanf(" %[^\n]", description);  // Read string with spaces
        printf("Enter deadline (YYYY MM DD): ");
        scanf("%d %d %d", &year, &month, &day);
        /* BLANK */
        printf("Task added.\n\n");

        printf("Add another task? (y/n): ");
        scanf(" %c", &continue_input);
    } while (continue_input == 'y' || continue_input == 'Y');

    printf("\nTask List:\n");
    for (i = 0; i < task_count; i++) {
        display_task(my_tasks[i]);
    }

    return (0);
}
