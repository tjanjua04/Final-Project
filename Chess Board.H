#ifndef CHESSBOARD_H
#define CHESSBOARD_H
#include "ChessPiece.h"
#include <wchar.h>
#ifdef _WIN32
#include <io.h>
#include <fcntl.h>
#endif
#include <string>
#include <vector>
#define SIZE 8

using namespace std;
enum Color {WHITE, BLACK};
struct Position{
    int row;
    int col;
    Position(int _row, int _col){
        row=_row;
        col=_col;
    }
};
class ChessPiece;

class ChessBoard
{
    public:
        ChessBoard();
        virtual ~ChessBoard();
        ChessPiece* getPiece(Position position) const;
        bool static isCorrect(const int);
        static string coordToString(const int, const int);
        static Position coordToPosition(const string);
        void initialize();
        void print() const;
        void printWindows() const;
        bool move(string fromStr, string toStr);
        bool placePiece(ChessPiece* piece, Position position);

    protected:

    private:
        ChessPiece* board[SIZE][SIZE];
};


class ChessPiece
{
    public:
        ChessPiece(ChessBoard* board, Color color);
        ~ChessPiece() {}

        int getRow() const {return row;}
        int getColumn() const {return column;} 
        Color getColor() const {return color;}
        string getPosition() const;

        void setRow(const int);
        void setColumn(const int); 
        void setPosition(const Position); 
        void setPosition(const string);
        virtual string toString() const=0;
        virtual vector<string>* legalMoves() const=0;



    protected:
        ChessBoard* board; 
        int row; 
        int column; 
        Color color; 

    private:

};


#endif 
