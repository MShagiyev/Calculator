#include <iostream>
//Test
int main()
{
    int a = 1;
    int b = 2;
    int c = 0;


    c = a + b;    
    std::cout << a << " + " << b << " = " << c << '\n';
    
   
    c = a - b;    
    std::cout << a << " - " << b << " = " << c << '\n';
    
    
    c = a * b;    
    std::cout << a << " * " << b << " = " << c << '\n';

    
    if(b != 0){
	    c = a / b;
	    std::cout << a << " / " << b << " = " << c << '\n';
    }
    else 
	 std::cout << "Error" << '\n';

    c = 1;
    for(int i = 0; i < b; ++i){
	    c  *= a;
    }
     std::cout << a << " ^ " << b << " = " << c << '\n';



}
