#include <stdio.h>

#define NR_OF_STUDENTS 2
#define NR_OF_QUIZZES 2

int getTotal(int studentGrades[]);

int main(void){

    int studentGrades[NR_OF_STUDENTS][NR_OF_QUIZZES];
    int student, quiz;
   
    // Get user input for student grades.
    
    for(student=0; student<NR_OF_STUDENTS; student++){
        for(quiz=0; quiz<NR_OF_QUIZZES; quiz++){
            printf("Enter grade for student %d quiz %d: ", student + 1, quiz + 1);
            scanf("%d", &studentGrades[student][quiz]);
        }
    }
    // Parse student grades and print total score and average score for each student.
    for(student=0;student<NR_OF_STUDENTS; student++){
        printf("Student %d \nTotal: %d\nAverage: %.1f\n", student + 1, getTotal(studentGrades[student]), getTotal(studentGrades[student])/(float) NR_OF_QUIZZES);
    }


    // Parse quizzes and print quiz average, high, and low scores.
    for(quiz=0;quiz<NR_OF_QUIZZES;quiz++){
        int quizHigh=studentGrades[0][quiz];
        int quizLow=studentGrades[0][quiz]; 
        int quizTotal=studentGrades[0][quiz];
        for(student=1;student<NR_OF_STUDENTS;student++){
            int score=studentGrades[student][quiz];
            if(score>quizHigh) quizHigh=score;
            if(score<quizLow) quizLow=score;
            quizTotal+=score;
        }
        printf("Quiz %d\nAverage: %.2f\nHigh: %d\nLow: %d\n", quiz + 1, quizTotal/(float)NR_OF_QUIZZES, quizHigh, quizLow);
        
    }
    return 0;
}

// Returns the sum total of a student scores.
// @Param: an array with a students grades.
// @Return: the sum.
int getTotal(int studentGrades[]){
    int total=0;
    for(int i=0;i<NR_OF_QUIZZES;i++){
        total+=studentGrades[i];
    }
    return total;
}





            
                



            








