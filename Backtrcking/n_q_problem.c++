#include<iostream>
#include<vector>

using namespace std;

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

    // Check in row
    int i = row;
    int j = col;

    while(j >= 0){
        if(path[i][j] == 'Q') return false;
        j--;
    } 

    // Check in upper diagonal
    
    i = row;
    j = col;

    while(i >= 0 && j >= 0){
        if(path[i][j] == 'Q') return false;
        i--;
        j--;
    }

    // Check in bottum diagonal 
    i = row;
    j = col;

    while(i<Queen && j>=0){
        if(path[i][j] == 'Q') return false;
        i++;
        j--;
    }

    // It means all condition are positive

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

            // Next call
            find(Queen, path, col+1);

            // Bactracking 
            path[row][col] = '-';
        }
    }    
}

int main(){


    int Queen = 9;
    vector<vector<char>>path(Queen, vector<char>(Queen, '-'));

    int col = 0;

    find(Queen, path, col);



    return 0;
}