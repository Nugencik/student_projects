#include <iostream>

using namespace std;

int main(){

float metr;
cout<<"Ile metrów wprowadzasz"<<endl;
cin>>metr;
if (metr<=0)   {
cout<<"Liczba musi być dodatnia"<<endl;
} else {
    float centy = metr * 100;
cout<<metr<<" to dokładnie "<<centy<<" centymetrów";

}

return 0;
}
