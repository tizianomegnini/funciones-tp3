#include<bits/stdc++.h>
using namespace std;


int contarletrasA(string f); 
{
int contador = 0;

for (int i = 0; i < f.length(); i++) 
    
	{
   
    if (f[i] == 'a' || f[i] == 'A') 

		{contador++;}
    
	
	}
return contador;

}

int main() 
{
    string frase;
    cout << "Ingresa una frase: "<<endl;
    getline(cin, frase);

int cantidaddeletrasA = contarletrasA(frase);
    
	cout << "La cantidad de letras A en la frase es: " << cantidaddeletrasA <<endl;

return 0;
}


