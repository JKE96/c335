#include <stdio.h>
#include <string.h>

//author Jarod England

char binary[2000];

int main(){
  char hexidec[2000];

  char *regnames[] = {"r0","r1", "pc"}; //names for the registries
  
  char *opname[] = {"ands", "eors"}; //names for the opcodes

  printf(".text\n");
  printf(".syntax unified\n");
  printf(".thumb\n");  //required text
  
  while(scanf("%s", hexidec) != EOF && strncmp(hexidec, "q", 1) != 0){ //keeps scanning until the end of file or q is input
    hexToBinary(hexidec); //converts the hex to binary
    printf("%s\n", binary); //prints the binary after conversion
    

    /////////////Main part of the function////////////////////////
    if(binary[0]=='0' && binary[1]=='0' &&binary[2]=='0' && binary[3]!='1' && binary[4]!='1'){
      printf("shift by immediate/move register");
    }
    else if(binary[0]=='0' && binary[1]=='0' && binary[2]=='0' && binary[3]=='1' && binary[4]=='1' && binary[5]=='0'){
      printf("add/subtract register\n");
      if(binary[6]=='0'){
	printf("adding");
      }
      else{
	printf("subtracting");
      }
    }
    
    else if(binary[0]=='0' && binary[1]=='1' && binary[2]=='0' && binary[3]=='0' && binary[4]=='0' && binary[5]=='0'){ //this means that it will be a data processing register                      
      printf("data processing register\n");
    }

    else{
      printf(".hexword 0x%s\n",hexidec);
    }

    /////////////////////////////////

    strcpy(binary, "");//resets binary back to empty string
  }
  
  printf("CLOSING PROGRAM! BYE!\n");
  return 0;
}


void hexToBinary(char hexistr[]){ //converts the given hex string to a binary string, the binary string stored to global var binary
  int count =0;
  char sbin[2000];
  
  while ( hexistr[count]){
      char part = hexistr[count];
      switch(part){
      case '0': strcat(sbin,"0000"); break;
      case '1': strcat(sbin,"0001"); break;
      case '2': strcat(sbin,"0010"); break;
      case '3': strcat(sbin,"0011"); break;
      case '4': strcat(sbin,"0100"); break;
      case '5': strcat(sbin,"0101"); break;
      case '6': strcat(sbin,"0110"); break;
      case '7': strcat(sbin,"0111"); break;
      case '8': strcat(sbin,"1000"); break;
      case '9': strcat(sbin,"1001"); break;
      case 'A': strcat(sbin,"1010"); break;
      case 'B': strcat(sbin,"1011"); break;
      case 'C': strcat(sbin,"1100"); break;
      case 'D': strcat(sbin,"1101"); break;
      case 'E': strcat(sbin,"1110"); break;
      case 'F': strcat(sbin,"1111"); break;
      case 'a': strcat(sbin,"1010"); break;
      case 'b': strcat(sbin,"1011"); break;
      case 'c': strcat(sbin,"1100"); break;
      case 'd': strcat(sbin,"1101"); break;
      case 'e': strcat(sbin,"1110"); break;
      default:  strcat(sbin,"1111"); break;
      }
      ++count;
  }  
  strcpy(binary, sbin);
  strcpy(sbin,""); //resets sbin back to an empty string
}
