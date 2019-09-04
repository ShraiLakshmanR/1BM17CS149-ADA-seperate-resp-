#include <stdio.h>

 
#define ROW 5
#define COL 5
int x[8]={1,1,1,-1,-1,-1,0,0};
int y[8]={0,-1,1,0,-1,1,-1,1};   //Neighbour arrays rows and coloums

bool issafe(int m[ROW][COL],int i,int j)
{
    if(i>=0 && j>=0 && j<COL && i<ROW)
    return true;
    else
    return false;
}
void dfs(int m[ROW][COL],int i,int j,int visited[ROW][COL])
{
    visited[i][j]=true;
    for(int c=0;c<8;c++)
    {
        if(issafe(m,i+x[c],j+y[c]) && m[i+x[c]][j+y[c]]==1 && !visited[i+x[c]][j+y[c]])
        dfs(m,i+x[c],j+y[c],visited);
    }
}

int countIslands(int m[][COL])
{
    int count=0;
    int visited[ROW][COL]={false};
    for(int i=0;i<ROW;i++)
    {
         for(int j=0;j<COL;j++)
         {
              if(m[i][j] && !visited[i][j])
              {
                  dfs(m,i,j,visited);
                  count++;
              }
         }
    }
    return count;
}


// Driver program to test above function
int main()
{
    int M[][COL]= {  {1, 1, 0, 0, 0},
        {0, 1, 0, 0, 1},
        {1, 0, 0, 1, 1},
        {0, 0, 0, 0, 0},
        {1, 0, 1, 0, 1}
    };
 
    printf("Number of islands is: %d\n", countIslands(M));
 
    return 0;
}
