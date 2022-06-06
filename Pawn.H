#ifndef PAWN_H
#define PAWN_H

#include "ChessBoard.h"


class Pawn : public ChessPiece
{
    public:
        Pawn(ChessBoard *board, Color color);
        virtual ~Pawn();

        string toString() const;
        vector<string>* legalMoves()const;
    protected:
        bool wasMoved;
    private:
};

#endif 
Filename: Queen.h

#ifndef QUEEN_H
#define QUEEN_H

#include "ChessBoard.h"


class Queen : public ChessPiece
{
    public:
        Queen(ChessBoard *board, Color color);
        virtual ~Queen();

        string toString() const;
        vector<string>* legalMoves()const;
    protected:

    private:
};

#endif
Filename: Rook.h

#ifndef ROOK_H
#define ROOK_H

#include "ChessBoard.h"


class Rook: public ChessPiece
{
    public:
        Rook(ChessBoard *board, Color color);
        ~Rook();

        string toString() const;
        vector<string>* legalMoves()const;
    protected:

    private:
};

#endif
