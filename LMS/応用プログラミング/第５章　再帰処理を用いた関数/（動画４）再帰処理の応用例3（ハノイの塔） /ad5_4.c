#include <stdio.h>

// Function to solve Tower of Hanoi problem recursively
//-n: number of disks
// source: source peg
// auxiliary: auxiliary peg
// destination: destination peg
void hanoi (int n, char source, char auxiliary, char destination) {
    // Base case: if only one disk, move it directly from source to
    // destination
    if (n == 1){
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }
    // Move n-1 disks from source to auxiliary, using destination as
    // auxiliary
    hanoi (n - 1, source, destination, auxiliary);

    // Move the nth disk from source to destination
    printf("Move disk %d from %c to %c\n", n, source, destination);

    // Move n-1 disks from auxiliary to destination, using source as
    // auxiliary
    hanoi (n - 1, auxiliary, source, destination);
}

int main(void) {
    int num_disks = 3; // Number of disks
    printf("Tower of Hanoi with %d disks: \n", num_disks);
    hanoi (num_disks, 'A', 'B', 'C'); // Solve for 3 disks, pegs A, B, C
    return(0);
}

// hanoi (3, 'A', 'B', 'C')
    // hanoi (2, 'A', 'C', 'B')
        // hanoi (1, 'A', 'B', 'C')
            // Move disk 1 from 'A' to 'C'
        // Move disk 2 from 'A' to 'B'
        // hanoi (1, 'C', 'A', 'B')
            // Move disk 1 from 'C' to 'B'
    // Move disk 3 from 'A' to 'C'
    // hanoi (2, 'B', 'A', 'C')
        // hanoi(1, 'B', 'C', 'A')
            // Move disk 1 from 'B' to 'A'
    // Move disk 2 from B to C
    // hanoi(1, 'A', 'B', 'C')
            // Move disk 1 from 'A' to 'C'