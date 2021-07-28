#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    printf("Insert your theta value and you will get the cosine or sine value.\n");
    printf("Make sure to type pi when you want specific values. \n");
//this code only does specific theta values
char theta[20];

scanf("%s", theta);


if (strcmp(theta, "0")==0){

    printf("the sine of this theta is 0\n");
    printf("the cosine of this theta is 1\n");

}else if (strcmp(theta, "pi/6")==0){
    printf("the sine of this theta is 1/2\n");
    printf("the cosine of this theta is rad3/2\n");
}else if(strcmp(theta, "pi/4")==0){
     printf("the sine of this theta is rad2/2\n");
    printf("the cosine of this theta is rad2/2\n");
}else if(strcmp(theta, "pi/3")==0){
    printf("The sine of this theta is rad3/2\n");
    printf("the cosine of this theta is 1/2\n");
}else if(strcmp(theta, "pi/2")==0){
    printf("the sine of this theta is 1\n");
    printf("The cosine of this theta is 0\n");
}else if(strcmp(theta, "2pi/3")==0){
printf("the sine of this theta is rad3/2\n");
printf("the cosine of this theta is -1/2\n");
}else if (strcmp(theta, "3pi/4")==0){
printf("the sine of this theta is rad2/2\n");
printf("the cosine of this theta is -rad2/2\n");
}else if (strcmp(theta, "5pi/6")==0){
printf("the sine of this theta is 1/2\n");
printf("the cosine of this theta is -rad3/2\n");
}else if (strcmp(theta, "pi")==0){
printf("The sine of this theta is 0\n");
printf("the cosine of this theta is -1\n");
}else if(strcmp(theta, "7pi/6")==0){
printf("the sine of this theta is -1/2\n");
printf("the cosine of this theta is -rad3/2\n");
}else if (strcmp(theta, "5pi/4")==0){
printf("the sine of this theta is -rad2/2\n");
printf("the cosine of this theta is -rad2/2\n");
}else if(strcmp(theta, "4pi/3")==0){
printf("the sine of this theta is -rad3/2\n");
printf("the cosine of this theta is -1/2\n");
}else if (strcmp(theta, "3pi/2")==0){
printf("the sine of this theta is -1\n");
printf("the cosine of this theta is 0\n");
}else if(strcmp(theta, "5pi/3")==0){
printf("the sine of this theta is-rad3/2\n");
printf("the cosine of this theta is 1/2 ");
}else if(strcmp(theta, "7pi/4")==0){
printf("the sine of this theta is -rad2/2");
printf("the cosine of this theta is rad2/2");
}else if (strcmp(theta, "11pi/6")==0){
    printf("the sine of this theta is-1/2");
    printf("the cosine of this theta is rad3/2");
}else if (strcmp(theta, "2pi")==0){
printf("the sine of this theta is 0\n");
    printf("the cosine of this theta is 1\n");
}else if (strcmp(theta, "13pi/6")==0){
    printf("the sine of this theta is 1/2\n");
    printf("the cosine of this theta is rad3/2\n");
}else if (strcmp(theta, "9pi/4")==0){
printf("the sine of this theta is rad2/2\n");
printf("the cosine of this theta is rad2/2\n");
}else if (strcmp(theta, "7pi/3")==0){
printf("The sine of this theta is rad3/2\n");
printf("the cosine of this theta is 1/2\n");
}else if (strcmp(theta, "5pi/2")==0){
printf("the sine of this theta is 1\n");
printf("The cosine of this theta is 0\n");
}else if(strcmp(theta, "8pi/3")==0){
 printf("the sine of this theta is rad3/2\n");
printf("the cosine of this theta is -1/2\n");
}else if(strcmp(theta, "11pi/4")==0){
printf("the sine of this theta is rad2/2\n");
printf("the cosine of this theta is -rad2/2\n");
}else if (strcmp(theta, "17pi/6")==0){
printf("the sine of this theta is 1/2\n");
printf("the cosine of this theta is -rad3/2\n");
} else if (strcmp(theta, "3pi")==0){
printf("The sine of this theta is 0\n");
printf("the cosine of this theta is -1\n");
}else if (strcmp(theta, "19pi/6")==0){
    printf("the sine of this theta is -1/2\n");
printf("the cosine of this theta is -rad3/2\n");
}else if(strcmp(theta, "13pi/4")==0){
printf("the sine of this theta is -rad2/2\n");
printf("the cosine of this theta is -rad2/2\n");
}else if(strcmp(theta, "10pi/3")==0){
printf("the sine of this theta is -rad3/2\n");
printf("the cosine of this theta is -1/2\n");
}else if(strcmp(theta, "7pi/2")==0){
printf("the sine of this theta is -1\n");
printf("the cosine of this theta is 0\n");
}else if(strcmp(theta, "11pi/3")==0){
printf("the sine of this theta is-rad3/2\n");
printf("the cosine of this theta is 1/2 ");
}else if(strcmp(theta, "15pi/4")==0){
printf("the sine of this theta is -rad2/2");
printf("the cosine of this theta is rad2/2");
}else if(strcmp(theta, "23pi/6")==0){
 printf("the sine of this theta is-1/2");
printf("the cosine of this theta is rad3/2");
}else if(strcmp(theta, "4pi")==0){
printf("the sine of this theta is 0\n");
printf("the cosine of this theta is 1\n");
}else if(strcmp(theta, "25pi/6")==0){
   printf("the sine of this theta is 1/2\n");
    printf("the cosine of this theta is rad3/2\n");
}else if (strcmp(theta, "17pi/4")==0){
printf("the sine of this theta is rad2/2\n");
printf("the cosine of this theta is rad2/2\n");
}else if(strcmp(theta,"13pi/3")==0){
printf("The sine of this theta is rad3/2\n");
printf("the cosine of this theta is 1/2\n");
}else if(strcmp(theta, "9pi/2")==0){
printf("the sine of this theta is 1\n");
printf("The cosine of this theta is 0\n");
}else if(strcmp(theta, "14pi/3")==0){
printf("the sine of this theta is rad3/2\n");
printf("the cosine of this theta is -1/2\n");
}else if(strcmp(theta, "19pi/4")==0){
printf("the sine of this theta is rad2/2\n");
printf("the cosine of this theta is -rad2/2\n");
}else if(strcmp(theta, "29pi/6")==0){
printf("the sine of this theta is 1/2\n");
printf("the cosine of this theta is -rad3/2\n");
}else if(strcmp(theta, "5pi")==0){
printf("The sine of this theta is 0\n");
printf("the cosine of this theta is -1\n");
}else if(strcmp(theta, "31pi/6")==0){
printf("the sine of this theta is -1/2\n");
printf("the cosine of this theta is -rad3/2\n");
}else if(strcmp(theta,"21pi/4")==0){
printf("the sine of this theta is -rad2/2\n");
printf("the cosine of this theta is -rad2/2\n");
}else if(strcmp(theta, "16pi/3")==0){
printf("the sine of this theta is -rad3/2\n");
printf("the cosine of this theta is -1/2\n");
}
else if(strcmp(theta, "11pi/2")==0){
printf("the sine of this theta is -1\n");
printf("the cosine of this theta is 0\n");
}else if(strcmp(theta, "17pi/3")==0){
printf("the sine of this theta is-rad3/2\n");
printf("the cosine of this theta is 1/2 ");
}else if(strcmp(theta, "23pi/4")==0){
printf("the sine of this theta is -rad2/2");
printf("the cosine of this theta is rad2/2");
}else if(strcmp(theta, "35pi/6")==0){
printf("the sine of this theta is-1/2");
printf("the cosine of this theta is rad3/2");
}else if(strcmp(theta, "6pi")==0){
printf("the sine of this theta is 0\n");
printf("the cosine of this theta is 1\n");
}else {
printf("It either is invalid or is not added yet");
}













    return 0;
}
