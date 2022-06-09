#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>


int main() {
    system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n;
    scanf("%d", &n);
    if(n < 2){
        printf("\n%d is not a prime number", n);
        return 0;
    }
    int count = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            count++;
        }
    }
    int octNumber = 0;
    if(count == 0){
        int p = 0;        
        while(n > 0){
            octNumber += (n % 8) * pow(10, p);
            p++;
            n /= 8;
        };    
    }else{
        printf("\n%d is not a prime number", n);
    }
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf("%d", octNumber);
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}