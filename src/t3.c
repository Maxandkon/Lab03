#include <stdio.h>
int main()
{
	int a, a1, a2, a3, a4; //Змінні
	a = 2; //Число
	
	a1 = a * a; //1 дія для а^4
	a1 = a1 * a1;  //2 дія для а^4
	
	a2 = a * a * a; //1 і 2 дія для а^6
	a2 = a2 * a2; //3 дія для а^6
	
	a3 = a * a; //1 дія для а^8
	a3 = a3 * a3; //2 дія для а^8
	a3 = a3 * a3; //3 дія для а^8
	
	a4 = a * a; //1 дія для а^10
	a4 = a4 * a4 * a; //2 і 3 дія для а^10
	a4 = a4 * a4; //4 дія для а^10
}