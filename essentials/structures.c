#include <stdio.h>

void main(){
	
	//creating a structure,look at the elements
	struct record{
		char * name;
		char * address;
		int age;
	}aritra={"aritra","81-Milan park,Kolkata,700084",20};
	//two structures created namely aritra and momo with valuse initialised
	struct record momo={"Moniseeta","81-Milan park,Kolkata,700084",27};
	//structure elements are accessed with . operators
	printf("%s\n",momo.name);
	printf("%s\n",aritra.address);
	printf("%d\n",momo.age);
}
