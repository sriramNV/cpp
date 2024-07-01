#include <iostream>
#include <time.h>
#include <conio.h>
#include <windows.h>

using namespace std;

enum eDirection
{
    STOP = 0,
    LEFT = 1,
    UPLEFT = 2,
    DOWNLEFT = 3,
    RIGHT = 4,
    UPRIGHT = 5,
    DOWNRIGHT = 6
};

class cBall
{
private:
    int x, y;
    int originalX, originalY;
    eDirection dir;

public:
    cBall(int posX, int posY)
    {
        originalX = posX;
        originalY = posY;
        x = posX;
        y = posY;
        dir = STOP;
    }
    void Reset()
    {
        x = originalX;
        y = originalY;
        dir = STOP;
    }
    void changeDirection(eDirection d)
    {
        dir = d;
    }
    void randomDirection()
    {
        dir = (eDirection)((rand() % 6) + 1);
    }

    inline int getX() { return x; }
    inline int getY() { return y; }
    inline eDirection getDirection() { return dir; }

    void Move()
    {
        switch (dir)
        {
        case STOP:
            break;
        case LEFT:
            x--;
            break;
        case RIGHT:
            x++;
            break;
        case UPLEFT:
            x--;
            y--;
            break;
        case DOWNLEFT:
            x--;
            y++;
            break;
        case UPRIGHT:
            x++;
            y--;
            break;
        case DOWNRIGHT:
            x++;
            y++;
            break;
        default:
            break;
        }
    }

    friend ostream &operator<<(ostream &o, cBall c)
    {
        o << "BALL [" << c.x << "," << c.y << "][" << c.dir << "]" << endl;
        return o;
    }
};

class cPaddle
{
private:
    int x, y;
    int originalX, originalY;

public:
    cPaddle()
    {
        x = y = 0;
    }
    cPaddle(int posX, int posY) : cPaddle()
    {
        originalX = posX;
        originalY = posY;
        x = posX;
        y = posY;
    }
    inline void Reset()
    {
        x = originalX;
        y = originalY;
    }
    inline int getX() { return x; }
    inline int getY() { return y; }
    inline void moveUp() { y--; }
    inline void moveDown() { y++; }

    friend ostream &operator<<(ostream &o, cPaddle c)
    {
        o << "PADDLE [" << c.x << "," << c.y << "]" << endl;
        return o;
    }
};

class cGameManager
{
private:
    int width, height;
    int score1, score2;
    char up1, down1, up2, down2;
    bool quit;
    cBall *ball;
    cPaddle *p1;
    cPaddle *p2;

public:
    cGameManager(int w, int h)
    {
        srand(time(NULL));
        quit = false;
        up1 = 'w';
        down1 = 's';
        up2 = 'i';
        down2 = 'k';
        score1 = score2 = 0;
        width = w;
        height = h;
        ball = new cBall(w / 2, h / 2);
        p1 = new cPaddle(1, h / 2 - 3);
        p2 = new cPaddle(w - 2, h / 2 - 3);
    }

    ~cGameManager()
    {
        delete ball, p1, p2;
    }

    void scoreUp(cPaddle *player)
    {
        if (player == p1)
            score1++;
        else if (player == p2)
            score2++;

        ball->Reset();
        p1->Reset();
        p2->Reset();
    }
    void Draw()
    {
        system("cls");
    }

    void Input() {}
    void Logic() {}
};

int main()
{

    return 0;
}