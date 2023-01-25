#include <iostream>
#include <fstream>
#include <string>
#include <chrono>
#include <cstring>
#include "conio.h"
#include<windows.h>
using namespace std;
using namespace std::chrono;

int main()
{
  // ifstream fichier("C:/Users/minim/Downloads/text.txt");
       /* string texteee;
       cout<<"taper votre texte"<<endl;
         cin>>texteee;
     string const nomFichier("new.txt");
    ofstream monFlux(nomFichier);

    if(monFlux)
    {
        monFlux << texteee;
        monFlux.close();

    }*/
ifstream fichier("new.txt");

   if(fichier)
   {
       string t;
       string v;
       milliseconds mil(1000);
       mil = mil*60;
       while(getline(fichier,t))
       {
           cout<<t<<endl;
           cout<<"taper votre text pour verifier :"<<endl;
           cout<<"====================================="<<endl;
          std::chrono::high_resolution_clock::time_point a= std::chrono::high_resolution_clock::now();
           for(int i=0;i<t.length()-1;i++)
           {

               char g;

               g=getch();

               cout<<g;
               if(g!=t[i])
               {
                   Beep(750,300);
                    v+=t[i];
                    v+=" ";
               }

           }
           if(strlen(v.data()) != 0){
            std::chrono::high_resolution_clock::time_point b= std::chrono::high_resolution_clock::now();
            unsigned int time= (std::chrono::duration_cast<std::chrono::microseconds>(b - a).count())/1000000;
           cout<<endl;
            cout<<"time: "<<time<<"s"<<endl;
            cout<<"------------------------------------------------------------------------------------------------"<<endl;
           cout<<"vous êtes trempé sur les lettres suivantes :"<<endl;

           cout<<v;
           }else{
               cout<<endl;
                std::chrono::high_resolution_clock::time_point b= std::chrono::high_resolution_clock::now();
            unsigned int time= (std::chrono::duration_cast<std::chrono::microseconds>(b - a).count())/1000000;
           cout<<endl;
           cout<<"------------------------------------------------------------------------------------------------"<<endl;
            cout<<"time: "<<time<<"s"<<endl;
           cout<<"bravo !";

           }


       }

    }else
    {
    cout<<"erreur";
    }
return 0;
}
