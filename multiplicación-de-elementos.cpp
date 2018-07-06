#include <iostream>
#define MAX 3 //definiendo el nº maximo de valores
using namespace std;
int main() {

  int a1[MAX];
  int a2[MAX];
  int a3[MAX];
  std::cout << "\n--Ingrese los valores del PRIMER arreglo--" << '\n';
  for (int i = 0; i < MAX; i++) {
    std::cout << "Indice " <<i<<" :";
    std::cin >> a1[i];
  }
  std::cout << "\n--Ingrese los valores delSEGUNDO arreglo--" << '\n';
  for (int e=0; e < MAX; e++){
    std::cout << "Indice " <<e<<" :";
    std::cin >> a2[e];
  }
  std::cout << "\n--Los valores del TERCER arreglo son--" << '\n';
  for (int u = 0; u < MAX; u++) {
    a3[u]=a1[u]*a2[u];
    std::cout << "Indice "<<u<<" :"<<a3[u]<< '\n';
  }
  return 0;
}
