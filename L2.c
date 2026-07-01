//Variables

#include <stdio.h>
int main(){
int eg1 = 1;
float eg2 = 12.34f; //float stores by 4 byte - accurate upto 6 or 7 decimal digits (.24f is a good practice)
double eg3 = 123.123324122; //double stores by 8 bytes - accurate upto 15 digits - cosnume more memory
char eg4 = 'A'; //char only 1 letter

//printing
printf("integer : %i\n",eg1);
printf("float : %f\n",eg2);
printf("double : %f\n",eg3);
printf("char : %c\n",eg4);
// %i/%d for integer
// %f for float or double
// %c for char
return 0;

//Strings ARE NOT there in c unlike other languages - will be learnt later
}