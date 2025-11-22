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
    printf("ID: %d, Description: %s, Deadline: %d/%d/%d, Completed: %s\n",
                    t.id, t.description, t.deadline.year, t.deadline.month,
                    t.deadline.day, t.completed ? "Yes" : "No");
}

// Function to compare two dates
// Returns 1 if d1 > d2, -1 if d1 < d2, 0 if d1 == d2
int compare_dates(Date d1, Date d2) {
    if (d1.year != d2.year) {
        return (d1.year - d2.year);
    }
    if (d1.month != d2.month) {
        return (d1.month - d2.month);
    }
    return (d1.day - d2.day);
}

void swap_tasks(Task arr[], int i, int j) {
    Task temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

// Function to sort tasks by deadline (Bubble Sort)
void sort_by_deadline(Task tasks[], int count) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - 1 - i; j++) {
            if (compare_dates(tasks[j].deadline, tasks[j + 1].deadline) > 0) {
                swap_tasks(tasks, j, j + 1);
            }
        }
    }
}

int main(void) {
    Task my_tasks[10];
    int task_count = 0, i;

    // Add initial tasks
    my_tasks[task_count++] =
        add_task(1, "Buy groceries", 2025, 12, 25, 0);
    my_tasks[task_count++] =
        add_task(2, "Finish report", 2025, 11, 30, 0);
    my_tasks[task_count++] = add_task(3, "Clean room", 2025, 10, 20, 1);

    printf("Before sorting:\n");
    for (i = 0; i < task_count; i++) {
        display_task(my_tasks[i]);
    }

    sort_by_deadline(my_tasks, task_count);

    printf("\nAfter sorting by deadline:\n");
    for (i = 0; i < task_count; i++) {
        display_task(my_tasks[i]);
    }

    return (0);
}