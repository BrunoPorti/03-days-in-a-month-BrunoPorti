#include <stdio.h>
//Author: Bruno Portilla
//Date of delivery: 30/08/18
int main()
{
    //asigno variables de mes y dia.
    int month;
    int year;

    //pregunto por los datos y los asigno a las variables
    printf("What month is it? (number)");
    scanf("%i", &month);
    printf("What year is it?");
    scanf("%i", &year);
    //pongo casos diferentes por cada mes para decir el numero de dias que tienen.
    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("this month has 31 days.");
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            printf("this month has 30 days.");
            break;

        case 2:     //Pongo la condicion para averiguar si el año es biciesto.
            if (year % 4 == 0) {
                printf("this month has 29 days.");
                    }
            else (
                    printf("this month has 28 days.")
                    );

            break;

        default:
            printf("error");

            return 0;
    }


}