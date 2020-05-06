#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
int sudoku_solver(int Sudoku[9][9],int row,int col);
bool isSafe(int Sudoku[9][9],int row,int col,int i);
void display(int Sudoku[9][9]);

int sudoku_solver(int Sudoku[9][9],int row,int col)
{
    if(row==9)
    {
        printf("Solved Sudoku :\n");
        display(Sudoku);
        return 0;
    }
    if(col==9)
    {
        col=0;
        row++;
    }
    while(row<9)
    {
        if(Sudoku[row][col]==0)
        {
            for(int i=1;i<=9;i++)
            if(isSafe(Sudoku,row,col,i))
            {
                Sudoku[row][col]=i;
                sudoku_solver(Sudoku,row,col+1);
                Sudoku[row][col]=0;
            }
        }
        else
        {
            sudoku_solver(Sudoku,row,col+1);
        }
    }
    return 0;
}

bool isSafe(int Sudoku[9][9],int row,int col,int i)
{
    for(int j=0;j<9;j++)
    {
        if(Sudoku[row][j]==i)
         {
           return false;
         }
    }

    for(int o=0;o<9;o++)
    {
        if(Sudoku[o][col]==i)
        {
            return false;
        }
    }

    int row_start=(row/3)*3;
    int col_start=(col/3)*3;
    for(int k=row_start;k<row_start+3;k++)
    {
        for(int l=col_start;l<col_start+3;l++)
        {
            if(Sudoku[k][l]==i)
            {
                return false;
            }
        }
    }

    return true;
}

void display(int Sudoku[9][9])
{
  printf("\n");
  printf("____________");
  printf("\n");
  for(int i=0;i<9;i++)
     {
        for (int j=0;j<9;j++)
        {
            printf("|");
            printf("%d",Sudoku[i][j]);
        }
        printf("\n");
     }
   printf("____________");
   return;
}

int main()
{
    printf("XXXXXXXXXXXXXXXXXXXXXX\t \t\tWelcome to Sudoku solver \t XXXXXXXXXXXXXXXXXXXXXX");
    printf("\n");
    printf("\n");
    printf("\n");
    int Sudoku[9][9]={{6,5,0,8,7,3,0,9,0},
                      {0,0,3,2,5,0,0,0,8},
                      {9,8,0,1,0,4,3,5,7},
                      {1,0,5,0,0,0,0,0,0},
                      {4,0,0,0,0,0,0,0,2},
                      {0,0,0,0,0,0,5,0,3},
                      {5,7,8,3,0,1,0,2,6},
                      {2,0,0,0,4,8,9,0,0},
                      {0,9,0,6,2,5,0,8,1}
                      };
printf("____________");
printf("\n");
for(int i=0;i<9;i++)
    {
        for (int j=0;j<9;j++)
        {
            printf("|");
            printf("%d",Sudoku[i][j]);
        }
        printf("\n");
    }
printf("____________");

   /* printf("Enter elements to be entered if you do not want to enter any element at a particular index Enter 0");
    printf("\n");
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j <9; j++)
            {
                printf("Enter Element");
                printf("[");
                printf("%d",i+1);
                printf("]");
                printf("[");
                printf("%d",j+1);
                printf("]");
                printf(":");
                scanf("%d",&Sudoku[i][j]);
                printf("\n");
            }
        }*/
    sudoku_solver(Sudoku,0,0);
    return 0;
}
