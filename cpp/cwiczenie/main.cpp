#include <iostream>

using namespace std;

int main(){
float liczbaos, liczbaod, liczbacp, liczbasp;
cout<<"Podaj liczbe osób z którą jedziesz"<<endl;
cin>> liczbaos;
cout<<"Podaj odległość trasy w kilometrach"<<endl;
cin>> liczbaod;
cout<<"Podaj cene paliwa"<<endl;
cin>> liczbacp;
cout<<"Podaj spalanie swoje samochodu na 100km"<<endl;
cin>> liczbasp;



float kosztpaliwa = (liczbaod/100 * liczbasp * liczbacp);
cout<<kosztpaliwa<<"zł za całe paliwo"<<endl;
float koszos = (kosztpaliwa/liczbaos);
cout<<koszos<<"zł na osobe"<<endl;
float ilepali = (liczbaod/100*liczbasp);
cout<<ilepali<<"Litrów paliwa za całą trase"<<endl;
return 0;
}







