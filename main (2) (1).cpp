#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int print()
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
    gotoxy(2,1);
}
int main()
{
    int x=2,y=1,x0,y0;
    char ch;
    system("cls");
    print();
    cout << "P";

      while (true) {
        if (_kbhit()) {
            ch = _getch();

            cout << " ";

              switch (ch) {
                case 72:
                     if (y > 0)
                        {x0=x; y0=y; y-=1;}
                    break;
                case 80:
                     if (y < 21)
                        {x0=x; y0=y; y+=1;}
                    break;
                case 75:
                     if (x > 1)
                        {x0=x; y0=y; x-=1;}
                    break;
                case 77:
                     if (x < 47)
                        {x0=x; y0=y; x+=1;}
                    break;
                case 27:
                    return 0;
            }

            system("cls");
            print();
            gotoxy(x, y);
            if((x==4||x==12||x==20||x==28||x==37||x==8||x==16||x==24||x==32||x==5||x==6||x==7||x==13||x==14||x==15||x==21||x==22||x==23||x==29||x==30||x==31||x==38||x==39||x==40)&&(y==3||y==7||y==11||y==15||y==19))
            {
               gotoxy(x0,y0);
               cout<<"P";
               x=x0;
               y=y0;
            }
            else if(x==26 && y==1 || x==10 && y==1 || x==18 && y==5 || x==22 && y==5 || x==26 && y==5 || x==14 && y==9 ||
                    x==35 && y==9 || x==2 && y==13  || x==38 && y==13 || x==42 && y==13 || x==10 && y==21 || x==10 && y==19 ||
                    x==26 && y==19 || x==10 && y==17 || x==22 && y==17 || x==30 && y==17 || x==46 && y==17 || x==2 && y==5 ||
                    x==10 && y==13)
            {
               gotoxy(x0,y0);
               cout<<"P";
               x=x0;
               y=y0;
            }
                else if(x==14 && y==17 || x==38 && y==5 || x==26 && y==9)
                {
               gotoxy(x0,y0);
               cout<<"P";
               x=x0;
               y=y0;
                }
               else
            cout << "P";
        }
    }
    }



