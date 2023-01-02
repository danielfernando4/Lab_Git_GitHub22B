#include <iostream>

using namespace std;

    double suma(double x, double y);
    double resta(double x, double y);
    double multiplicacion(double x, double y);

int main(){
    double numero1, numero2;
    int opcion, salida;
    

    while (salida != 0){
        cout<<"digite un numero: "<<endl;
        cin>>numero1;
        cout<<"digite otro numero: "<<endl;
        cin>>numero2;
        cout<<"que operacion desea hacer: 1-para sumar, 2-para restar, 3-para multiplicar"<<endl;
        cin>>opcion;
        if(opcion == 1){
            cout<<"la suma es: "<<suma(numero1,numero2)<<endl;
        }
        if(opcion == 2){
            cout<<"la resta es: "<<resta(numero1,numero2)<<endl;
        }
        if(opcion == 3){
            cout<<"la multiplicacion es: "<<multiplicacion(numero1,numero2)<<endl;
        }
        
        cout<<"para salir del sistema presione 1, caso contrario presione otro numero";
        cin>>salida;
    }

    

    return 0;
}

double suma(double x, double y){
    double adicion;
    adicion = x+y;
    return adicion;
}
double resta(double x, double y){
    double substraccion;
    substraccion = x-y;
    return substraccion;
}
double multiplicacion(double x, double y){
    double producto;
    producto = x+y;
    return producto;
}