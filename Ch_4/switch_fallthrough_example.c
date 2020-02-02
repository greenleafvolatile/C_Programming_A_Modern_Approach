#include <stdio.h>
#define TRUE 1
#define FALSE 0
#define BOOL int

BOOL promptForMore(BOOL done);

int main(void){
    int grade;
    int num_passing=0;
    int total_grades=0;
    BOOL done=FALSE;
    while(!done){
        printf("Please enter a grade (4, 3, 2, 1, 0): " );
        scanf("%d", &grade);
        switch(grade){
            case 1: case 2: case 3: case 4:
                num_passing++;
                /* FALL THROUGH */ 
            case 0:
                total_grades++;
                break;
        }
        printf("Total number of passing grades: %d\nTotal number of grades: %d\n", num_passing, total_grades);
        done=promptForMore(done);
    }
    printf("Done!");
    return 0;
}

BOOL promptForMore(BOOL done){
    BOOL temp=done;
    char ch;
    BOOL repeat=TRUE;
    while(repeat){
        printf("Would you like to enter another grade (y/n) ?");
        scanf(" %c", &ch);
        switch(ch){
            case 'n': case 'N':
                temp=TRUE;
                repeat=FALSE;
            case 'y': case 'Y':
                repeat=FALSE;
        }
    }
    return temp;
}


