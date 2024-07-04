#include <iostream>

#include <vector>

using namespace std;

const int maxRandom = 3;
const int maxPrev = 500;

int matrix[4][4] = {0};
int temp = 0, len = 0, score = 0, hScore = 0, count = 0;
bool gameOver;

void Draw()
{

    system("cls");

    cout << "'W' or 'w': Move up\n";
    cout << "'S' or 's': Move up\n";
    cout << "'A' or 'a': Move up\n";
    cout << "'D' or 'd': Move up\n\n";

    for (int i = 0; i < 4; i++)
    {
        // cout << "\t\t\t\t\t_________________________\n";
        for (int j = 0; j < 4; j++)
        {
            if (j == 0)
                cout << "\t\t\t\t\t|" << matrix[i][j] << "|\t";

            else if (j != 3)
                cout << "|" << matrix[i][j] << "|\t ";
            else if (j == 3)
                cout << "|" << matrix[i][j] << "|";
        }

        // cout << "|";
        cout << endl;
    }
    // cout << "\t\t\t\t\t_________________________\n";

    cout << "\n Score: " << score;
}

void Setup()
{
    gameOver = false;
}

void Logic() {}
void Input() {}

int main()
{
    Draw();
    return 0;
}
