
/** \brief Calculadora tipo especial diseñada para mostrar las 4 oparaciones basicas y la produccion  de factoriales.
 *
 * \param Toma los valores por medio de la funcion scan_num() a las variables number1 y number2 los saignan a las funciones
 * \param addition_num(;),diminish_num(,),multiplcation(,),division_num(,),factorial(),all_In_One(,).
 * \return Los resultados de los retornados de las funciones por pantalla
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "M_Alvarez.h"

#define TOLBAR printf("\n*******************************************************************\n");
#define TOL    printf("\n______________________________");

int main()
{
    /// INICIO DE VARIASBLES.
    int number1 = 0;
    int number2 = 0;
    int result;
    // variables  validacion de carga de datos.
    int flag1 = 0;
    int flag2 = 0;

    // variable para seleccion de operacion a realizar.
    int option = 0;

   // variable para nimeros complejos cco los resultados de la devisio
    float divisionResult;

    //bloque de codigo que encierra la presentacion de pnes de usuario y el bloque de pciones.
    do
    {
    system("cls");

    ///Panel opciones para el usuario.
    printf("**************(((CALCULATOR 1.0 (TP) NRO 1   Matias.H.Alvarez)))****************");

    printf("\n\nElija entre las siguientes operaciones.\n\n\n");

    printf("[1]INGRESO EL PRIMER VALOR A CALCULAR :\n\n");
    printf("[2]INGRESE EL SEGUNDO VALOR A CALCULAR :");
    TOLBAR

    printf("\nValor actual PRIMERO :%d\n",number1);
    printf("\nValor actual SEGUNDO :%d",number2);
    TOL

    printf("\n[3]SUMA.");
    printf("[4]RESTA.");
    TOL


    printf("\n[5]MUTIPLICACION.");
    printf("[6]DIVISION.");
    TOL


    printf("\n[7]FACTORIAL");
    TOL


    printf("\n[8]TODOS LOS CALCULOS EN UNO");
    TOL

    printf("\n\n\nO ingrese ((9 para SALIR)) del programa.\t//_:");
    scanf("%d",& option);

    ///bloque switch de opciones a realizar
    switch (option)
    {
    case 1:
        system("cls");
        number1 = scan_num();
        flag1 = 1;

    //quiebro bloque switch po final de case.
    break;

    case 2:
        system("cls");
        number2 = scan_num();

        flag2 = 1;

    //quiebro bloque switch po final de case.
    break;

    case 3:
        system("cls");
        option = valiD_Charge( flag1, flag2);
        result = addition_num( number1, number2);
        printf("SUMA =\t:%d\n\n",result);
        system("pause");

    //quiebro bloque switch po final de case.
    break;


    case 4:
        system("cls");
        option = valiD_Charge( flag1, flag2);
        result = diminish_num( number1, number2);
        printf("RESTA =\t%d\n\n",result);
        system("pause");

    //quiebro bloque switch po final de case.
    break;

    case 5:
        system("cls");
        option = valiD_Charge( flag1, flag2);
        result = multiplcation( number1, number2);
        printf("MULTIPLICACION = \t%d\n\n",result);
        system("pause");

    //quiebro bloque switch po final de case.
    break;


    case 6:
        system("cls");
        option = valiD_Charge( flag1, flag2);
        divisionResult = division_num( number1, number2);
        printf("DIVISION =\t%.2f\n\n", divisionResult);
        system("pause");

    //quiebro bloque switch po final de case.
    break;


    case 7:
        system("cls");
        if(flag1 == 0 )
        {
            printf("ERROR!");
            printf(" el VALOR es INVALIDO\n\n reingrese el valor ");
        }
        else
        {
            result = factorial(number1 );
            printf("FACTORIAL = \t%d\n\n",result);
        }
            system("pause");

        //quiebro bloque switch po final de case.
        break;


    case 8:
        system("cls");
        option = valiD_Charge( flag1, flag2);
        all_In_One(number1 ,number2 );

    //quiebro bloque switch po final de case.
    break;


    case 9:
        //opcion de salida: si opcion es = 9 finaliza el programa por code la iteracion.


        //lipio la pantalla.
        system("cls");

        //muestro mesaje de despedida que anuncia cierre del programa.
        printf("\n\n\n\n\n\n\n\n\n                     ___________<<<<<HASTA LUEGO>>>>>___________\n\n\n\n\n\n\n\n\n");
    //quiebro bloque switch po final de case.
    break;

    default:
        system("cls");

        printf("\n\n\n\nERROR OPCION INEXISTENTE INTENETE NUEVAMENTE\n\n\n\n\n\n\n\n\n\n\n\n\n.");
        system("pause");
    }


    }while( option != 9 );


    return 0;
}// fin de funcion main.
