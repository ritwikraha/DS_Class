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
	
	
	
	//using a pointer in the structure
	struct record * ptr= (struct record *)malloc(sizeof(struct record));
	ptr->name="Gautam";
	ptr->address="81-Miln Park";
	ptr->age=60;
	
	printf("%s\n",ptr->name);
	printf("%s\n",ptr->address);
	printf("%d\n",ptr->age);
}
