

int scan_num()
{   //Pide y guarda un valor luego lo retorna.

    int date;
    printf("Ingrese el numero\t:");
    scanf("%d",&date);
    return (date);
}

int addition_num( int date1 , int date2 )
{   //Suma 2 valores enteros y nos retorna el resultado.

    int solution;
    solution = date1 + date2;
    return solution;
}

int diminish_num(int date1 , int date2 )
{   //Resta 2 valores de punto flotantes y devuelve el resultado.
    int solution;
    solution = (date1 - date2);
    return solution;
}

float division_num( int date1 , int date2 )
{   //Divide 2 valores flotantes y nos retorna el resultado.


    //de laro variable local tipo flotante.
    float solution = 0;


    //este bloque nos permite validar la correcta carga de los escalares para su division.
    if( date1 == 0 || date2 == 0 )
    {// si alguno de los valores a dividir el = 0 entonces nos indica error ya que no es posible dividir entre 0.
        printf("ERROR\t( %d entre %d )es INDIVISIBLE. ", date1,date2);
        printf("\n ya que no es posible una division entre 0 ");

        printf("REINGRESE VALORES\n\n:");

        //nos pide el ingreso de los valores nuevamente de modo que pueda iniciar la operacion divisoria.
        printf("numero 1:");
        scanf("%d", &date1);

        printf("numero2:");
        scanf("%d", &date2);
    }
    else
    {// si no hay error en el ingreso de los datos los calcula el resultado de la oparacion y la asigna a solution.
       solution = (float) date1 / date2;
    }
    //retorna el valor final de solution como resultado.
    return solution;
}// fin de funcion.

int multiplcation(  date1 ,  date2 )
{   //Mutiplica 2 valores enteros y retorna el resultado.
    int  solution;

    solution = date1*date2;

    return  solution;
}

    ///Funcion de tipo recursiva que aproduce el facorial de un valor entero y lo retorna
    int factorial( date1 )
    {   //Declaro la variable a retornar.
    int solution;
        //Declaro la variable que tomara el valor dado para trabajar.
    int number;
        //Asigno valor ingresado a variable de proceso.
    number = date1;
        //Asigno valor ingresado a variable de retorno y comparacion en preceso.
    solution = date1 ;
        //Validacion de procedimiento ,(de ser 1 el valor inicial no es necesario hacer factorial).
    if( solution == 1 )
    {
        return(1);
    }
        //Solution toma el valor de la multiplicacion de si mismo menos 1,el valor de si mismo llamado de manera recurciva a su misma funcion.
    solution = ( number * factorial( number- 1) );

        //Retorno el resultado de el factorial del valor ingresado a su iombocador.
    return(solution);
    }///fin de funcion.


 int valiD_Charge( int number1 , int number2 )
 {  //Valida la carga existencia de datos cargados para iniciar un proceso y retorna 1.
    if( number1 == 0 || number2 == 0 )
    {
        system("cls");
        printf("ERROR NO INGESO NINGUN VALOR!\n\n");
        printf("\n(1)Ingrese el valor primero y segundo.");
        printf("\n\n(2)seleccione el tipo de operacion matematica\n\n\n");
        system("pause");
        return 1;
    }
    else
    {
     return 0;
    }
 }
    ///Realiza las cuatro operaiones elementales entre 2 numeros y el factoreo del primero.
void all_In_One( int number1 ,  int number2 )
{   // genera el resultado de la suma,resta,mutiplicacion y division de 2 valores.
    // Tambien genera el factoria del uno de los valores .


    //lipio pantalla.
    system("cls");

    //declaro variables locales.
    int solution;

    //decaro variable para mostrar resultado en punto flotante para la fincion [division_num()].
    float solutionF;


    //llamo a la funcion de sumas,asigno el resultado a variable solucion.
    solution = addition_num( number1, number2 );

    //muestro por pantallavalor de solution resultado de la suma de los vaores de number1 y number2.
    printf("SUMA =%d\n",solution);
    printf("______________________________\n");


    //llamo a la funsion de resta,asigno el resultado a solution.
    solution = diminish_num( number1, number2 );

    //muestro por pantalla la el valor de solution que es el resultado de la resta.
    printf("RESTA =\t%d\n",solution);
    printf("______________________________\n");


    //llamo a la funsion de mutiplicacion,asigno el resultado a solution.
    solution = multiplcation( number1 ,number2 );


    //muestro por pantalla la el valor de solution que es el resultado de la multiplicacion.
    printf("MULTIPLICACION =%d\n",solution);
    printf("______________________________\n");

    //llamo a la funsion de division,asigno el resultado a solution.
    solutionF = division_num( number1 , number2);

    //muestro por pantalla la el valor de variable tipo flotante solutionF que es el resultado de la division.
    printf("DIVISION =%.2f\n",solutionF);
    printf("______________________________\n");

    //Llamado a la funcion de factoreo y muestro resultdo en pantalla.
    solution = factorial( number1 );

    //muestro por pantalla la el valor de solution que es el resultado de la factorial.
    printf("FACTORIAL =%d\n",solution);
    printf("______________________________\n");

    //produce pause en la secuencia para apreciar los datos en pantalla.
    system("pause");

}//fin de funcion.


