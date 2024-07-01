#include <iostream>
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

int main()
{
    cBall c(0, 0);
    cout << c << endl;
    c.randomDirection();
    cout << c << endl;
    c.Move();
    cout << c << endl;
    c.randomDirection();
    cout << c << endl;
    c.Move();
    cout << c << endl;
    c.randomDirection();
    cout << c << endl;
    c.Move();
    cout << c << endl;
    c.randomDirection();
    cout << c << endl;
    c.Move();
    cout << c << endl;
    c.randomDirection();
    cout << c << endl;
    c.Move();
    cout << c << endl;

    return 0;
}