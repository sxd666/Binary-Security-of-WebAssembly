#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <emscripten.h>

EM_JS(void,overflowAlert,(),{
    alert("overflow");
});

int main() 
{
    char bof0[] = "abc";
    char bof1[] = "123";
    strcpy(bof1,"BBBBBBB");
    if(strcmp(bof0,"abc"))
        overflowAlert();
return 0;
}