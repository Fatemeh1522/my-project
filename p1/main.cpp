#include <iostream>
using namespace std;
int main()
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

}
