#include <stdio.h>

int main(void){
    int area_code;
    printf("Please enter an area code: ");
    scanf("%d ", &area_code);
    printf("That are code belongs to:\n");
    switch(area_code){
        case 229:printf(" Albany.");
        break;

        case 404:
        case 678:
        case 770:

        case 470:printf(" Atlanta.");
        break;
         
        case 478:printf(" Macon.");
        break;

        case 706:
        case 762:printf(" Columbus.");

        case 912:printf(" Savannah.");
        
        default:printf("Area code not recognized.");
            


    }

    return 0;
}




