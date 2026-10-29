#include <iostream>

using namespace std;

class Calculadora{
    private:
        float primero;
        float segundo;
        bool comprobar();
    public:
        Calculadora();
        void setNumeros(float, float);
        float getPrimero();
        float getSegundo();
        float sumar();
        float restar();
        float multiplicar();
        bool dividir(float&);
};

int main(){
    Calculadora casio;
    float a, b, result;
    int op;

    do {
        cout << "CALCULADORA" << endl;
        cout << "1. Establecer los dos valores" << endl;
        cout << "2. Mostrar valores actuales" << endl;
        cout << "3. Sumar" << endl;
        cout << "4. Restar" << endl;
        cout << "5. Multiplicar" << endl;
        cout << "6. Dividir" << endl;
        cout << "7. Salir" << endl;
        cout << "Eliga una opcion (1 - 7)" << endl;
        cin >> op;

        if (op == 1){
            cin >> a >> b;
            casio.setNumeros(a, b);
        }
        else if (op == 2){
            cout << "Valor del primer numero: " << casio.getPrimero() << endl;
            cout << "Valor del segundo numero: " << casio.getSegundo() << endl;
        }
        else if (op == 3){
            result = casio.sumar();
            cout << "La suma de los dos numeros es: " << result << endl;
        }
        else if (op == 4){
            result = casio.restar();
            cout << "La diferencia de los dos numeros es: " << result << endl;
        }
        else if (op == 5){
            result = casio.multiplicar();
            cout << "El producto de los dos numeros es: " << result << endl;
        }
        else if (op == 6){
            result = casio.getPrimero();
            if (casio.dividir(result))
                cout << "La division es: " << result << endl;
            else
                cout << "Error: Division entre cero" << endl;
        }
        else 
            cout << "Saliendo del programa" << endl;
    } while (op != 7);
    

    return 0;
}

Calculadora :: Calculadora(){
    primero = 0;
    segundo = 0;
}

void Calculadora :: setNumeros(float a, float b){
    primero = a;
    segundo = b;
}

float Calculadora :: getPrimero(){
    return primero;
}

float Calculadora :: getSegundo(){
    return segundo;
}

float Calculadora :: sumar(){
    return primero + segundo;
}

float Calculadora :: restar(){
    return primero - segundo;
}

float Calculadora :: multiplicar(){
    return primero*segundo;
}

bool Calculadora :: comprobar(){
    if (segundo == 0)
        return true;
    else
        return false;
}

bool Calculadora :: dividir(float &resultado){
    if (!comprobar()){
        resultado/=segundo;
        return true;
    }
    else
        return false;
}