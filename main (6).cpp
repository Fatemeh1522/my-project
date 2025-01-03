#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main()
{ const int length=25;
    const int width=20;
    for(int i=0;i<length;i++)
       {
           cout<<"* ";
       }

       for(int j=0;j<width;j++)
          {
              cout<<endl<<"*";
              for(int i=0;i<length-3;i+=2)
                cout<<"   |";
                cout<<"   *";
              j++;
              cout<<endl<<"*";
            for(int i=0;i<length-3;i+=2)
                cout<<" -  ";
                cout<<" - *";
          }
          cout<<endl<<"*";
          for(int i=0;i<length-3;i+=2)
                cout<<"   |";
                cout<<"   *";
          cout<<endl<<"*";
          for(int i=0;i<length-1;i++)
            cout<<" *";
    int positions1[][2] = {{13,17},{37,5}, {26,9}};
    int count1 = sizeof(positions1) / sizeof(positions1[0]);
    int positions2[][2] = { {10,1}, {26,1}, {2,5}, {18,5}, {22,5},
                          {26,5}, {14,9}, {34,9}, {2,13}, {10,13},
                          {38,13}, {42,13}, {10,21}, {10,19}, {26,19},
                          {10,17}, {22,17}, {30,17}, {46,17}};
    int count2 = sizeof(positions2) / sizeof(positions2[0]);
    int positions3[][2] = {{5,3}, {13,3}, {21,3}, {29,3}, {37,3},
                           {5,7}, {13,7}, {21,7}, {29,7}, {37,7},
                           {5,11}, {13,11}, {21,11}, {29,11}, {37,11},
                           {5,15}, {13,15}, {21,15}, {29,15}, {37,15},
                           {5,19}, {13,19}, {21,19}, {29,19}, {37,19}};
    int count3 = sizeof(positions3) / sizeof(positions3[0]);
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    if (hConsole == INVALID_HANDLE_VALUE) {
        std::cerr << "Error getting console handle." << std::endl;
        return 1;
    }
    for (int i = 0; i < count1; ++i)
    {
        gotoxy(positions1[i][0], positions1[i][1]);
        cout << "EE";
    }
    for (int i = 0; i < count2; ++i)
    {
        gotoxy(positions2[i][0], positions2[i][1]);
        cout << "#";
    }
     for (int i = 0; i < count3; ++i)
    {
        gotoxy(positions3[i][0], positions3[i][1]);
        cout << "XX";
    }
    gotoxy(0,23);

}

