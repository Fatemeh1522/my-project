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
{
    const int length=25;
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
int start()
{
    int x=2,y=1,x0,y0;
    char ch;

    // پاک کردن صفحه
    system("cls");
    print();

    // حرکت کاراکتر و نمایش آن
   // gotoxy(x, y);
    cout << "P";

      while (true) {
        if (_kbhit()) { // بررسی می‌کند که آیا کلید فشرده شده است
            ch = _getch(); // دریافت ورودی کلید

            // پاک کردن کاراکتر از موقعیت قبلی
            //gotoxy(x, y);
            std::cout << " "; // فضای خالی برای پاک کردن کاراکتر

            // بررسی ورودی دکمه‌های جهت‌دار
              switch (ch) {
                case 72: // کلید بالا
                     if (y > 0){x0=x; y0=y; y-=2;}
                    break;
                case 80: // کلید پایین

                     if (y < 24){x0=x; y0=y; y+=2;} // 24 محدودیت عمودی
                    break;
                case 75: // کلید چپ

                     if (x > 0){x0=x; y0=y; x-=4;}
                    break;
                case 77: // کلید راست
                     if (x < 79){x0=x; y0=y; x+=4;} // 79 محدودیت افقی
                    break;
                case 27: // کلید ESC برای خروج
                    return 0; // خاتمه برنامه
            }
            // نمایش کاراکتر در موقعیت جدید

            system("cls");
            print();
            gotoxy(x, y);
            if((x==6 || x==14 || x==22 || x==30 || x==38) && (y==3 || y==7 || y==11 || y==15 || y==19))
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
        //Sleep(100); // تأخیر برای جلوگیری از استفاده بیش از حد از CPU
    }
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
        gotoxy(2,12);
        cin>>choice;
        switch(choice)
        {
            case'1':system("cls");
            start();
            break;

            //case'2': gotoxy(2,14);
                    //cin>>choice;
                    //switch(choice) {case'A':
                                    //case'B':
                                   // case'C':
                                   // } break;
            case'3':system("cls");

            break;
            case'4': return 0;

        }



}




