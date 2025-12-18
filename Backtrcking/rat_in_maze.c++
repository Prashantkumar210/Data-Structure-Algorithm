#include<iostream>
#include<vector>

using namespace std;

bool issafe(vector<vector<int>>&maze, int row, int col, vector<string>&path, vector<vector<bool>>&visited){

     if(row >= 4 || row < 0) return false;
 
    if(col >= 4 || col < 0) return false;
    
    if(maze[row][col] == 0) return false;

    if(visited[row][col] == true) return false;

    return true;
}

void find(vector<vector<int>>&maze, int row, int col, vector<string>&path, string ans, vector<vector<bool>>&visited){

    // Baes case
    if(row == 3 && col == 3){
        // answer found

        path.push_back(ans);
        return;
    }

    

    // Down
    if(issafe(maze, row+1, col, path, visited)){

        // Function
        visited[row+1][col] = true; 

        find(maze, row+1, col, path, ans + 'D', visited);

        // Backtracking 
        visited[row+1][col] = false;
        

    }

    // Left
    if(issafe(maze, row, col-1, path, visited)){

        // Function
        visited[row][col-1] = true; 

        find(maze, row, col-1, path, ans+'L', visited);

        // Backtracking 
        visited[row][col-1] = false;

    }

    // Right
    if(issafe(maze, row, col+1, path, visited)){

        // Function
        visited[row][col+1] = true; 

        find(maze, row, col+1, path, ans+'R', visited);

        // Backtracking 
        visited[row][col+1] = false;

    }
    
    // Upper
    if(issafe(maze, row-1, col, path, visited)){

        // Function
        visited[row-1][col] = true; 

        find(maze, row-1, col, path, ans+'U', visited);

        // Backtracking 
        visited[row-1][col] = false;
    }
}
 
int main(){


    vector<vector<int>>maze{
                            {1,0,0,0},
                            {1,1,0,0},
                            {0,1,1,1},
                            {0,1,1,1}};

    if(maze[0][0] == 0){
        cout<<"No path exist"<<endl;
        return 0;
    }

    vector<string>path;

    string ans = "";

    int row = 0;
    int col = 0;

    vector<vector<bool>>visited(4, vector<bool>(4,false));

    visited[0][0] = true; 

    find(maze, row, col, path, ans, visited);

    if(path.size()==0) cout<<"No path exist"<<endl;
    cout<<"Printing the path"<<endl;

    for(auto i:path){
        cout<< i <<" ";
    }                  
    return 0;
} 