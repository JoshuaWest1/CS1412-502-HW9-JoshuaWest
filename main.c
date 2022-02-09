#include <stdio.h>
#include <math.h>
// --------------------------------------------------------------------------------
// AUTHOR: Joshua Wade West
// FILENAME: HW9.cpp
// SPECIFICATION: Makes a user inputted list into alphabetical order
// FOR: CS 1412 Lab- Section 502


//defint tructure complex
typedef struct
{
  int real, img;//define varibles real and imaginary
}complex;

//function for user to input the real and imaginary number
 complex get_NUMB() {
    complex IR;
    printf("Enter a Real number: ");
    scanf("%d", &(IR.real));//input a real numer
    printf("Enter an Imaginary number: ");
    scanf("%d", &(IR.img));//input a imaginary number
    return IR;
}

//function to multiply n=the complex numbers
complex multiply_complex(complex num, complex num2){
complex Multi;//variables for the multiplied number


Multi.real = num.real*num2.real -num.img*num2.img;//calculates real
      Multi.img = num2.img*num.real + num2.real*num.img;//calculates imaginary



printf("\n Multiplied the two imaginary number = %d + %di", Multi.real, Multi.img);//outputs the real and imaginary values

return Multi;
}

//function to divide complex numbers
complex divide_complex(complex num, complex num2){
complex div;//variable for division
if ((num.real == 0 && num.img == 0) || (num2.real == 0 && num2.img == 0))//if dividing by 0
        printf("Division by 0 + 0i isn't allowed.");
      else
      {
        double x = num.real*num2.real + num.img*num2.img;//find the first part
        
        double y = num.img*num2.real - num.real*num2.img;//find the Second part
        double z = num2.real*num2.real + num2.img*num2.img;//find the third part


double A,B,C,I,R;
//move vlaues into seperate variables
A= x;
B=y;
C=z;

R=A/C;//calculates real value
I=B/C;//calculates imaginary value
printf("divided, the number = %lf + %lfi\n", R, I);

      }
return div;
}

//function to add complex numbers
complex add_complex(complex num, complex num2){
complex add;
add.real = num.real+num2.real;//adds real
add.img = num.img+num2.img;//adds imaginary

printf("Added together, the number = %d + %di\n", add.real, add.img);

return add;
};

//function to subtract complex numbers
complex sub_complex(complex num, complex num2){
complex sub;
sub.real = num.real-num2.real;//sub real
sub.img = num.img-num2.img;//sub imaginary

if(sub.img == 0){printf("subtracted, the number = %d\n\n", sub.real);}
//if imaginary =0, remove i
else if (sub.img == 1){printf("subtracted, the number = %d + i\n\n", sub.real);}
//if i = 1, only show i
else{
printf("subtracted, the number = %d + %di\n", sub.real, sub.img);
}
return sub;
};

//function to find absolute value
complex ABS_complex(complex num){

  complex ABS;
  double a = num.real;//input real into a double
  double b = num.img;//input imaginary into a double
double x = sqrt((a*a)+(b*b));//find absolute value
  

printf("%lf\n\n", x);
  return ABS;
};

int main()
{
  int choice;//for list
  int i=0;
printf("For the first Complex numbers:\n");
 complex num = get_NUMB();//get the first complex number
 printf("\nFor the Second Complex numbers:\n");
complex num2 = get_NUMB();//get the second complex number
 printf("\n");

while(i < 1){//while loop for list

//output a list of commands
printf("What would you like to do with the complex number?\n");
printf("Press 1 to multiply the two complex number\nPress 2 to Divide the two complex number\nPress 3 to add the two complex number\nPress 4 to subtract the two complex number\nPress 5 to Find the absolute value of the first complex number\nPress 6 to Find the absolute value of the second complex number\nPress 7 to End Program");
scanf("%d",&choice);

switch(choice){
case 1:{//function call to multiply
multiply_complex(num, num2);
printf("\n\n");
break;}

case 2:{//function call to divide
printf("\n\n");
divide_complex(num, num2);
printf("\n\n");break;}

case 3:{//function call to add
printf("\n\n");
add_complex(num, num2);
printf("\n\n");break;}

case 4:{//function call to subtract
printf("\n");
sub_complex(num, num2);break;}

case 5:{//function call to find the first absolute value
printf("\n");
printf("For the First Complex numbers The Absolute value is ");
ABS_complex(num);break;}

case 6:{//function call to find the second absolute value
printf("\n");
printf("For the Second Complex numbers The Absolute value is ");
ABS_complex(num2);
break;
}
case 7:{i=100;}// end while loop
}
}
}