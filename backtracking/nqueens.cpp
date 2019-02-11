//https://www.codesdope.com/blog/article/backtracking-explanation-and-n-queens-problem/
#include <bits/stdc++.h>
using namespace std;
//Number of queens
int N;

//chessboard
int board[100][100];

//function to check if the cell is attacked or not
int is_attack(int i,int j)
{
    
    //checking if there is a queen in row or column
    for(int k=0;k<N;k++)
    {
        if((board[i][k] == 1) || (board[k][j] == 1))
            return 1;
    }
    //checking for diagonals
    for(int k=0;k<N;k++)
    {
        for(int l=0;l<N;l++)
        {
            if(((k+l) == (i+j)) || ((k-l) == (i-j)))
            {
                if(board[k][l] == 1)
                    return 1;
            }
        }
    }
    return 0;
}

int N_queen(int n)
{
    //cout<<n<<endl;
    int i,j;
    //if n is 0, solution found
    if(n==0)
        return 1;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
          
            if((!is_attack(i,j)) && (board[i][j]!=1))
            {  // cout<<"hi"<<endl;
                board[i][j] = 1;
                
                if(N_queen(n-1)==1)
                {
                    return 1;
                }
                //cout<<"oops"<<endl;
                board[i][j] = 0;
            }
        }
    }
    return 0;
}

int main()
{
  
    cout<<"Enter the value of N for NxN chessboard"<<endl;
    cin>>N;

    int i,j;
    //setting all elements to 0
    memset(board,0,N*N);
    //calling the function
    N_queen(N);
    //printing the matix
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
            printf("%d\t",board[i][j]);
        printf("\n");
    }

}
