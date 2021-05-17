#include <stdio.h>
#include <stdlib.h>
  int main(){
      char c;
      while(c !='0'){
          printf("\n문자 입력:");
          scanf("%c", &c);
          if(c>='A' && c<='Z'){
             printf("%c의 소문자는 %c입니다.", c, c+32);
          }
          else if(c>='a' && c<='z'){
              printf("%c의 대문자는 %c입니다.", c, c-32);
          }
          getchar();
      }
  }
