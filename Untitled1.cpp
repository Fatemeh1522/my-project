#include <iostream>
using namespace std;
#include <windows.h>
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main()
{
    const int length=25;
    const int width=20;
    char choice;
    for(int i=0;i<length;i++)
        cout<<"* ";
    for(int i=0;i<width;i++)
       {
         cout<<endl<<"*";
         for(int j=0;j<length-1;j++)
            cout<<"  ";
         cout<<"*";
       }
       cout<<endl;
    for(int i=0;i<length;i++)
        cout<<" *";

        gotoxy(18,2);
        cout<<"Spoon man";
        gotoxy(2,4);
        cout<<"1 _ Start";
        gotoxy(2,6);
        cout<<"2 _ level: A_Eazy  B_Medium  C_Hard";
        gotoxy(2,8);
        cout<<"3 _ Help";
        gotoxy(2,10);
        cout<<"4 _ Exit";
        cin>>choice;
        switch(choice)
        {
            case'1':system("cls");
            start();
            break;        }


}
