#include <iostream>
#include <windows.h>

using  namespace std;
void strzalka(int  pierwsza_pozycja,int pozycja_strzalki);
void menu()
{
    int  pozycja=1;
    int przycisk=0;
    cout <<"Hello  World!"<<endl;
    while (pozycja !=13)
    {
    strzalka(1,pozycja);cout<<"1. Rozpocznij wyścig"<<endl;
    strzalka(2,pozycja);cout << "2. Pojazdy"<<endl; 
    strzalka(3,pozycja);cout  <<  "3. Trasy"<<endl; 
    strzalka(4,pozycja);cout <<"4. Wyjście"<<endl; 
     przycisk=getch();
 if (przycisk==80 && pozycja  !=4)
 {
    pozycja++;
 }else if(przycisk==72 && pozycja !=1)
 {
    pozycja--;
 }else
 {
    pozycja=pozycja;
 }
}
}
void strzalka(int  pierwsza_pozycja,int pozycja_strzalki)
{

    if (pierwsza_pozycja==pozycja_strzalki)
    {
        cout <<"---->>>>";
    }else
    {
        cout<<"       ";
    }
}
int main()
{
    menu();

return 0;
}  