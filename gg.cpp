#include <iostream>
#include "windows.h"

using namespace std;

char Map[20][20]{
"###################",
"#                 #",
"#                 #",
"#                 #",
"#                 #",
"#                 #",
"#                 #",
"#                 #",
"#                 #",
"#                 #",
"#                 #",
"#                 #",
"#                 #",
"#                 #",
"#                 #",
"#                 #",
"#                 #",
"#        w        #",
"###################"
};

bool endgame= false;
int gamespeed = 400;

int main()
{
    system("color 0a");
    while(endgame== false){
        
        system("cls");
        for(int y = 0; y<20; y++){

            cout<<Map[y]<<endl;

        }
        for(int y=0;y<20;y++){
            for(int x=0;x<20;x++){
                
                switch(Map[y][x]){
                    case  'W':
                    if(GetAsyncKeyState(VK_LEFT) !=0){
                    int newX;
                    newX=x-1;
                    switch (Map[y][newX]){
                        
                        case ' ' :
                        Map[y][newX]=' ';
                        x--;
                        Map[y][newX]='W';}

                        break;
            
                    }
                }
            }
        }
        Sleep(gamespeed);
    }
    

    return 0;
}