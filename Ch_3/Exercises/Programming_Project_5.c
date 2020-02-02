#include <stdio.h>

int main(void){
    int one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve, thirteen, fourteen, fifteen, sixteen;
    printf("Please enter the numbers from 1 to 16 (in any order): ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &one, &two, &three, &four, &five, &six, &seven, &eight, &nine, &ten, &eleven, &twelve, &thirteen, &fourteen, &fifteen, &sixteen);
    printf("%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\nRow sums: %d %d %d %d\nColumn sums: %d %d %d %d\nDiagonal sums: %d %d", one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve, thirteen, fourteen, fifteen, sixteen, one+two+three+four, five+six+seven+eight, nine+ten+eleven+twelve, thirteen+fourteen+fifteen+sixteen, one+five+nine+thirteen, two+six+ten+fourteen, three+seven+eleven+fifteen, four+eight+twelve+sixteen, one+six+eleven+sixteen, four+seven+ten+thirteen);
    return 0;
}

