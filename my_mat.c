#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "my_mat.h"
#define N 10



void buildMatrix(int mat[][N])
{
    
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
        {
            printf("Enter the arc weight from vertex %d to vertex %d (0 if there is no arc): ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

void exists(int mat[][N])
{
    int i, j;
    printf("Enter two numbers betwean 1-10: ");
    scanf("%d", &i);
    scanf("%d", &j);

    if(mat[i][j] != 0)
      printf("True");
    
    else
        printf("False");
 }
 

 void shortest(int mat[][N])
 {
    int i, j, k, n1, n2;
    int dist[N][N];
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            dist[i][j] = mat[i][j];
        }
        
    }
    
    printf("Enter two numbers betwean 1-10: ");
    scanf("%d", &n1);
    scanf("%d", &n2);

    for(k = 0; k < N; k++)
    {
        for(i = 0; i < N; i++)
        {
            for(j = 0; j < N; j++)
            {
                if(dist[i][j] > (dist[i][k] + dist[k][j]))
                    dist[i][j] = dist[i][k]+ dist[k][j];
            }
        }
    }

    if(dist[n1][n2] == 0)
        printf("-1");
    else
        printf ("%d", dist[n1][n2]);
 }

 void buildDynimic(){
    float value[5];
    float weight[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Enter the value of the %d item: ", i+1);
        scanf("%f", &value[i]);
        
        printf("\nEnter the weight of the %d item: ", i+1);
        scanf("%f", &weight[i]);
        
    }
 }
 
 void selectitems(float weight[], float value[], char *strings[], int numStrings){


    
      
 }
