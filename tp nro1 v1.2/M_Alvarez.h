#ifndef M_ALVAREZ_H_INCLUDED
#define M_ALVAREZ_H_INCLUDED

/// Lee y retorna nuemros flotates.
int scan_num();

///Toma 2 numeros flotantes,los suma entre si y retorna es resultado.
int addition_num( int date1 , int date2 );

///Toma 2 numeros flotantes,los resta entre si y retorna el resultado.
int diminish_num(int date1 , int date2 );

///Toma 2 numeros flotantes,los los multiplica entre si y retorna el resultado.
int multiplcation( int date1 , int date2 );

///Toma 2 numeros flotantes,los divide entre si y retorna el resultado.
float division_num( int date1 , int dae2 );

///Toma unumero flotante realiza opreacon de factores del mismo y retorna el resutado.
int factorial( int date1 );


///Valida la carga existencia de datos cargados para iniciar un proceso y retorna 1 .
int valiD_Charge( int flag1, int flag2);

#endif // M_ALVAREZ_H_INCLUDED
