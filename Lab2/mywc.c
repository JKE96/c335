#include <stdio.h>

int main(){

int lines=1;
int words=1;
int b=0;

int c=0;

while ((c = getchar()) != EOF) {
b= b+1;
if(c == ' ') ++words;
else if(c == '\t') ++words;
else if(c == '\r'){
++lines;
++words;
}

else if(c == '\n') {
++lines;
++words;
}

else if(c == '\f'){
++lines;
++words; 
}
else if(c == '\v'){
++lines;
++words;
}

}

printf("%d lines, %d words, %d characters (bytes)\n",lines,words,b);

return 0;
}
