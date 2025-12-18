#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

unordered_map<int,bool>rowCheck;
unordered_map<int,bool>bottumleftDiagonalCheck;
unordered_map<int,bool>upperleftDiagonalCheck;


void printpath(vector<vector<char>>&path, int &Queen){

    for(int i=0; i<Queen; i++){

        for(int j=0; j<Queen; j++){

            cout<<path[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    return;
}

bool issafe(int row, int col, vector<vector<char>>&path, int &Queen){

    if(rowCheck[row] == true) return false;

    if(bottumleftDiagonalCheck[row+col] == true) return false;

    if(upperleftDiagonalCheck[Queen-1+col-row] == true) return false;

    return true;
}



void find(int &Queen, vector<vector<char>>&path, int col){

    if(col >= Queen){

        printpath(path, Queen); 
        return;
    }

    for(int row=0; row<Queen; row++){

        if(issafe(row, col, path, Queen)){
             
            // Rakh do
            path[row][col] = 'Q';
            rowCheck[row] = true;
            upperleftDiagonalCheck[Queen-1+col-row] = true;
            bottumleftDiagonalCheck[row+col] = true;

            // Next call
            find(Queen, path, col+1);

            // Bactracking 
            path[row][col] = '-';
            rowCheck[row] = false;
            upperleftDiagonalCheck[Queen-1+col-row] = false;
            bottumleftDiagonalCheck[row+col] = false;

        }
    }    
}

int main(){


    int Queen = 4;
    vector<vector<char>>path(Queen, vector<char>(Queen, '-'));

    int col = 0;

    find(Queen, path, col);
    return 0;
}