
#include <stdio.h>
int main(void){
    // syntax : scanf(%type,&declared_variable_name)
    printf("Your age ?");
    int age;
    scanf("%i",&age);

    printf("Your height in cm ?");
    float height;
    scanf("%f",&height);

    printf("Your age : %i\n",age);
    printf("Your height : %f\n",height);

    // C to F or vice versa converter
    
   printf("Enter the parameter number:");
   float num;
   scanf("%f",&num);
   printf("Enter the default convention unit :");
   char unit;
   scanf(" %c",&unit); // SPACEBAR to be left as "Whenever a %c follows a %f or %d, it needs a breathing room space." scanf(" %c", &unit);
   
   if(unit == 'C'){
       float F = (1.8*num + 32);
       printf("Converted from C to F and is %fF",F);
   }
   else if(unit == 'F'){
       float C = (num-32)*(5/9);
        printf("Converted from F to C and is %fC",C);
   }
   else{
       printf("Invalid!\n");
   }


    return 0;
}
