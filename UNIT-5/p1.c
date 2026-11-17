#include <stdio.h>

int a[10][10], visited[10], q[10];
int n, front = 0, rear = -1;

void bfs(int v)
{
    int i;
    visited[v] = 1;
    q[++rear] = v;

    while (front <= rear)
    {
        v = q[front++];
        printf("%d ", v);

        for (i = 0; i < n; i++)
        {
            if (a[v][i] == 1 && visited[i] == 0)
            {
                visited[i] = 1;
                q[++rear] = i;
            }
        }
    }
}

int main()
{
    int i, j, start;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("Enter starting vertex (0 to %d): ", n - 1);
    scanf("%d", &start);

    printf("BFS Traversal: ");
    bfs(start);

    return 0;
}
