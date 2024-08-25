#include <stdio.h>

int hanoi(int a, char from_rod, char to_rod, char aux_rod);

int main()
{
    int n;
    printf("Enter number of plates in the tower: ");
    scanf("%d", &n);
    printf("Number of moves required = %d\n", hanoi(n, 'A', 'C', 'B'));
    return 0;
}

int hanoi(int a, char from_rod, char to_rod, char aux_rod)
{
    if (a == 1)
    {
        printf("Move disk 1 from rod %c to rod %c\n", from_rod, to_rod);
        return 1;
    }

    int moves = 0;
    moves += hanoi(a - 1, from_rod, aux_rod, to_rod);
    printf("Move disk %d from rod %c to rod %c\n", a, from_rod, to_rod);
    moves += 1;
    moves += hanoi(a - 1, aux_rod, to_rod, from_rod);
    return moves;
}
