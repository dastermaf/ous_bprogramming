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

// Function to add a task (value passing)
Task add_task(int id, char description[], int year, int month, int day, int completed) {
    Task t;
    t.id = id;
    strcpy(t.description, description);
    t.deadline.year = year;
    t.deadline.month = month;
    t.deadline.day = day;
    t.completed = completed;
    return (t);
}

// Function to display a task (value passing)
void display_task(Task t) {
    printf(
        "ID: %d, Description: %s, Deadline: %d/%d/%d, Completed: %s\n",
        t.id, t.description, t.deadline.year, t.deadline.month,
        t.deadline.day, t.completed ? "Yes" : "No");
}

// Function to filter uncompleted tasks
void filter_uncompleted_tasks(Task arr[], int count) {
    printf("\nUncompleted Tasks:\n");
    for (int i = 0; i < count; i++) {
        if (arr[i].completed == 0) {
            display_task(arr[i]);
        }
    }
}

int main(void) {
    Task my_tasks[10];
    int i, task_count = 0;

    // Add initial tasks
    my_tasks[task_count++] =
        add_task(1, "Buy groceries", 2025, 12, 25, 0);
    my_tasks[task_count++] =
        add_task(2, "Finish report", 2025, 11, 30, 1);
    my_tasks[task_count++] =
        add_task(3, "Clean room", 2025, 10, 20, 1);

    printf("Task List:\n");
    for (i = 0; i < task_count; i++) {
        display_task(my_tasks[i]);
    }

    filter_uncompleted_tasks(my_tasks, task_count);

    return (0);
}