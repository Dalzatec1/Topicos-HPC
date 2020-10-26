#include <iostream>
#include <mpi.h>
#include "Lector.h"


using namespace std;

int main(int argc,char *argv[]) {
      Lector l;


  

 
unsigned t0, t1;
MPI_Init(&argc, &argv);
MPI_Comm_rank(MPI_COMM_WORLD, &pid);
MPI_Comm_size(MPI_COMM_WORLD, &npr);
t0=clock();
  l.cpaises();
  l.deathcounter();
t1 = clock();
 

  double time = (double(t1-t0)/CLOCKS_PER_SEC);
MPI_Finalize();
cout << "Execution Time: " << time << endl; 

}