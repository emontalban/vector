#include <iostream>
#include <vector>
using namespace std;

int main()  {   
    //el numero entreparentesis india el numero de  elementos que tiene este vector
    // que en este momento es 0 para el vector int ya que no hemos inicializado
    vector <int> records (5);
    //el numero entreparentesis indica los valores que tiene este vector
    // tiene 5 elementos 
    vector <int> records2{25,36,25,23,26}; 
    
    //el numero entreparentesis indica los valores que tiene este vector
    vector <string> letras (10);
    

    // crear un vector por ejemplo el salario de 350 personas que es el mismo pero luego cada uno tiene sus incentivos
    // el primer valor son los salarios y el segundo es el salario
    // de esta manera tenemos un vector de 350 elementos con el mismo dato en las 350 posiciones
    
    vector <double> salarios (350, 2125.50);

    for (int i = 0; i < 5; i++) {
        cout << records2[i] << endl;
    }
    for (int j = 0; j < 10; j++) {
        cout << letras[j] << endl;
    }
    /*
    for (double k = 0; k < 350; k++) {
        cout << salarios[k] << endl;
    }
    */
   // hacer lo mismo pero con while

   int numero = 0;
   while (i<salarios.size()){
    cout << salarios[numero] << endl;
    numero++;
   }

}
