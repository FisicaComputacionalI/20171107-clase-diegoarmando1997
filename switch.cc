#include <iostream>
using namespace std;
int main(){
  char variable;
  cout<<"dame un valor entre A, B, C, D, E, F"<<endl;
  cin>>variable;
  switch (variable){
  case 'A' : cout<<"excelente"<<endl;
    break;
  case 'B' : cout<<"muy bien"<<endl;
    break;
  case 'C' : cout<<"bien"<<endl;
    break;
  case 'D' : cout<<"pasaste"<<endl;
    break;
  case 'F' : cout<<"Intentalo de nuevo"<<endl;
    break;
  default : cout<<"Opción no válida"<<endl;
  }
  return 0;
}
