#include<stdio.h>

int func(); // function prototype or declaration 

int main(){ 
    int a;
    func();     //function calling

    return 0;
}

int func()              //funtion definition
{
    printf("Hi i am under function\n");
}




/*function declaration is optional thing 
                    but yadi function declaration nhi kiya hai to function ko main fucntion ke phele hi likhna pdega ni to error dega*/


//function declaration krne ke baad function definition ko kahi bi likh skte ke --main function ke phele baad kbi bi
