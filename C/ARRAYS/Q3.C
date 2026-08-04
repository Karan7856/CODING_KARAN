//GIVEN AN ARRAY OF MARKS OF STUDENTS, IF THE MARK OF ANY STUDENT IS LESS THAN 35 PRINT ITS ROLL NUMBER.[roll number here refers to the index of the array]
#include <stdio.h>
int main(){
    int n;
    printf("Enter the no of student in class");
    scanf("%d",&n);
    int marks[n];
    for(int i=0;i<n;i++){
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<n;i++){
        if(marks[i]<35){
            printf("%d ",i);
        }
    }
    return 0;

}