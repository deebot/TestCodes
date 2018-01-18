/******************************************************************************
 * Copyright (C) 2018 by Deepankar Maithani 
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Deepankar Maithani is not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.c> 
 * @brief < This code displays the statastic about input numbers >
 *
 * <The code prompts the user to enter 5 numbers than it sorts the numbers using bubble swap algorithm. Further it also claculates
    mean median,maximum and minimum number >
 *
 * @author <Maithani Deepankar>
 * @date <15 january 2018 >
 *
 */



#include <stdio.h>
#include "stats.h"


float val1,val2,val3,val4;
float numbers[HOW_MANY];
void main() {

 

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

printf("please enter %d numbers\n(Note: You can change the number of inputs by changing the HOW_MANY constant defined in the stats.h file)\n",HOW_MANY);

for(int i=0;i<HOW_MANY;i++){
scanf("%f",&numbers[i]);
}
sort_array(numbers,HOW_MANY);
val1=find_mean(numbers,HOW_MANY);
val2=find_minimum(numbers, HOW_MANY);
val3=find_maximum(numbers, HOW_MANY);
val4=find_median(numbers, HOW_MANY);
arrayPrinter(numbers, HOW_MANY);
print_statastics(val1,val2,val3,val4,numbers);

 

}

/* Add other Implementation File Code Here */
float find_mean(float *ptr, int count)
{

            float addition=0;
	    for(int i=0;i<count;i++)
	       {
	         addition+= * ptr; 
	         ptr++;
               }

	  float average=(addition/(float)count);
          return average;

}
float sort_array(float *ptr,int count){

while(1){
         int temp;
         int swapped=0;
         for(int i=0;i<count-1;i++){
               if(numbers[i]<numbers[i+1])
                   {
                     temp=numbers[i];
                     numbers[i]=numbers[i+1];
                     numbers[i+1]=temp;
                     swapped=1;
                   }
                }
               if(swapped==0){
                  break;
               }

       }

	

}
float find_minimum(float *ptr, int count)
{
	int i=0;
	float min=0;
	 while (i < HOW_MANY ){
	    if (  i == 0 ) {
	   
	     min = numbers[0];    // Move to second item and start comparisons
	    }
	    
	    if ( numbers[i] <= min){
	      min = numbers[i];
	    }
	    
	    i++;
	  }	
return min;

}

float find_maximum(float *ptr, int count)
{
	int i=0;
	float max=0;
	 while (i < HOW_MANY ){
	    if (  i == 0 ) {
	   
	     max = numbers[0];    // Move to second item and start comparisons
	    }
	    
	    if ( numbers[i] >= max){
	      max = numbers[i];
	    }
	    
	    i++;
return max;
  }


}
float find_median(float *ptr, int count)
{
float median;
   int temp=(int)count;
    if((temp%2)==0 )
        {
            median= (numbers[(temp/2)-1]+numbers[(temp/2)])/2;

        }

     else
       {
median=numbers[((temp+1)/2)-1];


     }
return median;

}

void arrayPrinter(float *ptr, int count){
printf("The elements of array are\n");

for (int i=0;i<count;i++)
	{
	printf("Character no %d after sorting is %f\n",i,numbers[i]);
	}


}

float print_statastics(float val1,float val2,float val3,float val4,float *point)
{
	printf("*********************Priting statatics about the numbers you just entered***********************\n");
	 printf("The mean is %f\nThe minimum value is %f\nThe maximum value is %f\nThe median is %f\n",val1,val2,val3,val4); 
	
}
