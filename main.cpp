/*----------------------------------------------
 * Datos de Entrada: largo, ancho (double)
 * Dato de Salida:  perimetro, area (double)
 ----------------------------------------------*/

#include "CRectangulo.h"

int main()
{
    CRectangulo   R1; //--- usando el constructor por defecto

    R1.setLargo(20);
    R1.setAncho(7);
    cout << "El perimetro es: " << R1.perimetro() << "\n";
    cout << "El area es     : " << R1.area() << "\n";
    cout << "\nahora se crea un segundo objeto\n";

    //--- creamos el segundo objeto
    double l,a;

    cout << "Largo: ";
    cin >> l;
    cout << "Ancho: ";
    cin >> a;
    CRectangulo R2(l,a);  //--- constructor inicializador
    cout << "el perimetro es : " << R2.perimetro() << "\n";
    cout << "El area es      : " << R2.area() << "\n";
    //-- ahora modificamos el valor de los atributos largo y ancho de tal manera
    //-- que tengan ahora dies unidades mas
    R2.setLargo(R2.getLargo() + 10);
    R2.setAncho(R2.getAncho() + 10);
    cout << "Se realiza nuevamente el calculo del area y perimetro de R2\n";
    cout << "el perimetro es : " << R2.perimetro() << "\n";
    cout << "El area es      : " << R2.area() << "\n";

    return 0;
}
