#include <iostream>
#include "Lector.h"
#include <fstream>
using namespace std;

int main() {
      Lector l;


  

 
  unsigned t0, t1;

t0=clock();
 l.cpaises();
 l.deathcounter();
t1 = clock();
 ofstream file;
file.open("archivo.txt");
 
double time = (double(t1-t0)/CLOCKS_PER_SEC);
cout << "Execution Time: " << time << endl; 
  file<< "Execution Time: "<<time<<"\n"; 
 file.close();
}