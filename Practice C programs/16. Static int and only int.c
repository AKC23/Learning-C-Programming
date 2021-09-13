#include<stdio.h>
/*/
void func()
{
    int i = 0;
    i++;
    printf("i = %d\n",i);
}
int main()
{
    func();
    func();
    func();
    func();
    return 0;
}
/*/

void func(){
 	static int i = 0;
 	i++;
 	printf("i = %d\n",i);
 }
int main(){
	func();
	func();
	func();
	func();
	return 0;
}
