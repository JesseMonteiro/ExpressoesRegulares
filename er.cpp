
#include <iostream>
#include <regex>
#include <string>

 using namespace std;

 void PesquisarPlaca(){
   string imput;
   regex integer("[a-z]{3}-?[0-9]{2}");
   while (1){
     cout  << "\nDigite a placa do carro ou q para sair\n";
     cin >> imput;
     if(imput == "q"){
       break;
     }
     if(regex_match(imput, integer)){
       cout << "\nplaca válida\n\n";
     }
     else {

       cout << "\nplaca inválida\n\n";
     }

   }


 }

 int PesquisarCPF(){

   string imput;
   regex integer("[0-9]{3}\\.?[0-9]{3}\\.?[0-9]{3}-?[0-9]{2}");
   while (1){
     cout  << "\nDigite o CPF ou q para sair\n";
     cin >> imput;
     if(imput == "q"){
       break;
     }
     if(regex_match(imput, integer)){
       cout << "\nCPF válido\n\n";
     }
     else {

       cout << "\nCPF inválido\n\n";
     }

   }


 }

 void PesquisarTelefone(){

   string imput;
   regex integer("([0-9]{4}-[0-9]{4})|([0-9]{5}-[0-9]{4})");
   while (1){
     cout  << "\nDigite o telefone ou q para sair\n";
     cin >> imput;
     if(imput == "q"){
       break;
     }
     if(regex_match(imput, integer)){
       cout << "\nTelefone válido\n\n";
     }
     else {

       cout << "\nTelefone inválido\n\n";
     }

   }


 }

 int main (){
   int i = 1;

   while (i!=0){
   cout << "\nDigite 1 para Pesquisar Telefone, 2 para Pesquisar CPF, 3 para Pesquisar Placa ou 0 para sair: ";
   cin >> i;
   switch (i){
   case 1:
     PesquisarTelefone();
     break;
   case 2:
     PesquisarCPF();
     break;
   case 3:
     PesquisarPlaca();
     break;
           }

       }
     return 0;
 }
