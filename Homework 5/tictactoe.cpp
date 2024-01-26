#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl; using std::string;

// Justin Jiang

//
class TTTBoard{
private:
    char board[3][3];

public:
    TTTBoard();
    void display();
    bool occupied(int x, int y);
    bool set(int x, int y, char z);
    bool win_for(char player);
}; 
//

//
TTTBoard::TTTBoard(){
    for(int i=0; i<3; ++i){
        for(int j=0; j<3; ++j){
            board[i][j] = ' ';
        }
    }
}

void TTTBoard::display(){
    for(int i=0; i<3; ++i){
        for(int j=0; j<3; ++j){
            if(j==2){
                cout << board[i][j];
            }
            else{
                cout << board[i][j] << " | ";
            }
        }
        if(i<2){
            cout << "\n---------"<< endl;
        }
        else{
            cout << endl;
        }
    }
}

bool TTTBoard::occupied(int x, int y){
    if(board[x][y]=='o' || board[x][y]=='x'){
        return true;
    }
    else{
        return false;
    }
}

bool TTTBoard::set(int x, int y, char z){
    if(board[x][y] == ' '){
        board[x][y] = z;
        return true;
    }
    else{
        return false;
    }
}

bool TTTBoard::win_for(char player){
    // check horizontal
    for(int i=0; i<3; ++i){
        if(board[i][0]==board[i][1] && board[i][0]==board[i][2] && board[i][0]==player){
            return true;
        }
    }
    // check vertical
    for(int i=0; i<3; ++i){
        if(board[0][i]==board[1][i] && board[0][i]==board[2][i] && board[0][i]==player){
            return true;
        }
    }
    // check diagonal 
    if(board[0][0]==board[1][1] && board[0][0]==board[2][2] && board[0][0]==player){
        return true;
    }
    else if(board[0][2]==board[1][1] && board[0][2]==board[2][0] && board[0][2]==player){
        return true;
    }
    else{
        return false;
    }
}
// 

// Tests below
void test1() {
    cout << "Test 1: " << endl;
    TTTBoard myboard;
    myboard.display();
    cout << "If the above looks like an empty board, then test 1 is passed" << endl;
}

void test2(){
    cout << "Test 2: " << endl;
    TTTBoard myboard;
    myboard.set(0, 0, 'x'); myboard.set(0, 1, 'x'); myboard.set(0, 2, 'x');
    myboard.set(1, 0, 'o'); myboard.set(1, 0, 'o'); 
    myboard.display();
    cout << "You should see a row of three x's followed by a row with one o." << endl;
}


void test3(){
    cout << "Test 3: " << endl;
    TTTBoard myboard;
    myboard.set(0, 0, 'x'); myboard.set(0, 1, 'x'); myboard.set(0, 2, 'x');
    myboard.set(1, 0, 'o'); myboard.set(1, 0, 'o'); 
    cout << "Test 3a: you should see 10: " << myboard.win_for('x') << myboard.win_for('o') << endl;
    TTTBoard myboard2;
    myboard2.set(2, 0, 'o'); myboard2.set(1, 1, 'o'); myboard2.set(0, 2, 'o');
    myboard2.set(1, 0, 'x'); myboard2.set(2, 2, 'x'); 
    cout << "Test 3b: you should see 01: " << myboard2.win_for('x') << myboard2.win_for('o') << endl;
}
// End tests


int main() {
    test1();   // UNCOVER THIS TEST AFTER THE CONSTRUCTOR AND DISPLAY ARE IMPLEMENTED
    test2();   // UNCOVER THIS TEST AFTER OCCUPIED AND SET ARE IMPLEMENTED
    test3();   // UNCOVER THIS TEST AFTER WIN_FOR IS IMPLEMENTED.
    
    // game of tic-tac-toe
    TTTBoard Game;
    char player;
    int x,y;
    for(int a=0; a<9; ++a){
        Game.display();
        if(a%2==0){
            player = 'o';
        }
        else{
            player = 'x';
        }
        do{
            cout << "Player: " << player << " enter a position(x y): ";
            cin >> x >> y; 
        }while(Game.occupied(x,y) == true);
        Game.set(x,y,player);
        if(Game.win_for(player) == true){
            cout << "Player " << player << " wins!";
            break;
        }
    }
    if(Game.win_for('x') == false && Game.win_for('o')){
        cout << "No winner";
    }
    return 0;
}

