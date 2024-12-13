/* 14. En una clase de 5 alumnos se han realizado tres examenes y se requiere determinar
el numero de:

a) Alumnos que aprobaron todos los examenes.
b) Alumnos que aprobaron al menos un examen.
c) Alumnos que aprobaron unicamente el ultimo examen.

Realize un programa que permita la lectura de los datos y el calculo de las estadisticas */

#include <iostream>

using namespace std;

void limpiar_pantalla()
{
    const char *comando = (system("clear") == 0) ? "clear" : "cls";
    system(comando);
}

int main()
{
    int num_alumnos = 5, num_examenes = 3, todos_aprobados, aprobo_uno, ultimo_aprobado;

    for (int a = 0; a < num_alumnos; a++)
    {
        int aprobadas = 0;

        limpiar_pantalla();
        cout << "Alumno #" << a + 1 << endl;
        for (int e = 1; e <= num_examenes; e++)
        {
            int respuesta;

            cout << "El alumno aprobo el examen #" << e << " (1: Verdadero, 0: Falso)" << endl;
            cin >> respuesta;

            if (respuesta == 1)
            {
                if (e == num_examenes && aprobadas == 0)
                {
                    aprobadas += 10;
                }
                else
                {
                    aprobadas += 1;
                }
            }
        }

        if (aprobadas == num_examenes)
        {
            todos_aprobados += 1;
        }
        else if (aprobadas == 1)
        {
            aprobo_uno += 1;
        }
        else if (aprobadas == 10)
        {
            ultimo_aprobado += 1;
        }
    }

    limpiar_pantalla();

    cout << "Alumnos que aprobaron todos los examenes fueron: " << todos_aprobados << endl;
    cout << "Alumnos que aprobaron almenos un examen: " << aprobo_uno << endl;
    cout << "Alumnos que aprobaron solamente el ultimo examen: " << ultimo_aprobado << endl;

    return 0;
}