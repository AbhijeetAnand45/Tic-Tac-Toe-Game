#include <stdio.h>
#include <iostream>
#include <cstring>
#include <string>
#include <fstream>

using namespace std;

class Board
{
    char positionSelected[16];
    char winner;

public:
    Board(){
        winner = 'z';
        for(int i=0;i<16;i++){
            positionSelected[i] = '_';
        }
    }
    char
};

