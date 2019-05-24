#include "Maze.h"
#include <iostream>
#include <windows.h>
using namespace std;

Maze::Maze()
{
    //ctor
}

Maze::~Maze()
{
    //dtor
}

/*Maze::Maze(int _width, int _height, int _spawnX, int _spawnY, int _exitX, int _exitY)
{
    maxWidth = _width;
    maxHeight = _height;
    spawnX = _spawnX;
    spawnY =  _spawnY;
    exitX = _exitX;
    exitY = _exitY;
}
*/

void Maze::displayMaze()
{
    while(true)
    {
    for (int i = 0; i<15; i++)
        {
            for (int j = 0; j<15; j++)
            {
                cout << maze[i][j] << "";

            }
        cout << endl;

        }
        Sleep(50);
        system("CLS");

    }
    return;

}
/*
int Maze::getParticularMazeLocation(int yval, int xval)
{
    if (maze[yval][xval] == blnk)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
*/ //Copy This
int Maze::getSpawnX()
{
    return spawnX;
}
int Maze::getSpawnY()
{
    return spawnY;
}
int Maze::getExitX()
{
    return exitX;
}
int Maze::getExitY()
{
    return exitY;
}

void Maze::setSpawn(int _spawnX, int _spawnY)
{
    maze[_spawnX][_spawnY] = 'P';
    return;
}
void Maze::setExit(int _exitX, int _exitY)
{
    maze[_exitX][_exitY] = 'E';
    return;
}