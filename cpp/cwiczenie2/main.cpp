#include <iostream>

using namespace std;

int main(){
srand(time(NULL));
int liczba = 0;
int ile_liczb_w_przedziale = 5;
int startowa_liczba = 1;
int wylosowana = rand() % ile_liczb_w_przedziale + startowa_liczba;
do {

cout<<"Podaj liczbe od 1 do 5:"<<endl;
cin>>liczba;
} while (liczba < 1 || liczba > 5);

if(liczba==wylosowana)
    cout<<"Twoja liczba jest taka sama"<<endl;
else
    cout<<"Twoja liczba nie jest taka sama"<<endl;
cout<<wylosowana<<endl;




return 0;
}
