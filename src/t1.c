#include <stdio.h>
int main()
{
	int r1, r2, r3, r; //Змінні
	r1 = 12; //Опір (перший резистор)
	r2 = 2; //Опір (Другий резистор)
	r3 = 6; //Опір (Третій резистор)
	r = (r1 * r2 * r3) / (r1 + r2 + r3); //Загальний опір
}