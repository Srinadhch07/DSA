//code : Deadlock Detection program
#include <stdio.h>

int main() {
    int n, m;
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    printf("Enter the number of resources: ");
    scanf("%d", &m);

    int alloc[n][m], max[n][m], need[n][m], finish[n], work[m];
    printf("Enter the allocation matrix:\n");
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            scanf("%d", &alloc[i][j]);

    printf("Enter the max matrix:\n");
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            scanf("%d", &max[i][j]);

    printf("Enter the available resources:\n");
    for(int i = 0; i < m; i++)
        scanf("%d", &work[i]);

    for(int i = 0; i < n; i++) {
        finish[i] = 0;
        for(int j = 0; j < m; j++) {
            need[i][j] = max[i][j] - alloc[i][j];
        }
    }

    int count = 0;
    while(count < n) {
        int found = 0;
        for(int i = 0; i < n; i++) {
            if(finish[i] == 0) {
                int safe = 1;
                for(int j = 0; j < m; j++) {
                    if(need[i][j] > work[j]) {
                        safe = 0;
                        break;
                    }
                }
                if(safe) {
                    for(int j = 0; j < m; j++) {
                        work[j] += alloc[i][j];
                    }
                    finish[i] = 1;
                    found = 1;
                    count++;
                }
            }
        }
        if(!found) {
            printf("System is in deadlock state.\n");
            return 0;
        }
    }
    printf("System is not in deadlock state.\n");
    return 0;
}

#c
#operatingSystem
