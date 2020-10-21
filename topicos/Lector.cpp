#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include "Lector.h"

using namespace std;

vector<string> paises;
string a[12];



    bool Lector::existeEnVector(vector<string> v, string busqueda) {
        return find(v.begin(), v.end(), busqueda) != v.end();
    }

    void Lector::cpaises() {
        ifstream infile("covid.csv");
        string line ="";
        int i=0;
        while ( getline ( infile, line )){               
            
            std::string delimiter = "\",\"";
            size_t pos = 0;
            std::string token;
            while ((pos = line.find(delimiter)) != std::string::npos) {
                token = line.substr(0, pos);
                a[i]=token;
                  line.erase(0, pos + delimiter.length());
                  i++;
            }
            if(!existeEnVector(paises,a[6])){              
                paises.push_back(a[6]);   
            }
          i=0;

        }
       

    }


    void Lector::deathcounter(){
        string mppais[paises.size()][2];
        for(int i=0;i<paises.size();++i){

            mppais[i][0]=paises[i];      
        }
        int cast;
            ifstream infile("covid.csv");
            string line ="";
            getline ( infile, line );
            int i=0;
            int aux=0;
            int x=0;
            string dcast="";
            while ( getline ( infile, line )){               
            
                std::string delimiter = "\",\"";
                size_t pos = 0;
                std::string token;
                while ((pos = line.find(delimiter)) != std::string::npos) {
                    token = line.substr(0, pos);
                    a[i]=token;
                    line.erase(0, pos + delimiter.length());
                    i++;
            }
            if(paises[x]==a[6]){
                cast=stoi(a[5]);
                aux+=cast;
                dcast=std::to_string(aux);
                mppais[x][1]=dcast;
            }
            else
            {
                aux=0;
                x++;
                cast=stoi(a[5]);
                aux+=cast;
                dcast=std::to_string(aux);
                mppais[x][1]=dcast;
            }

                i=0;
            }  
            for(int j=0;i<paises.size();++j){

            cout<<"el pais "+paises[j]+" tiene "+mppais[j][1]+ " muertos"<<endl;
            }
         
        }
     
    


    


