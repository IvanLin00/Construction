#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cost{
	int price; 
	char *name;
};

int main(){
	//conflicting type error so can't put example() outside main()
	struct cost example(){
		srand(time(NULL));
		struct cost ex;
		ex.price = rand() % 100;
		int randint = rand() % 3;
		if (randint == 0) ex.name = "Pizza";
		if (randint == 1) ex.name = "Pasta";
		if (randint == 2) ex.name ="Burger";
		return ex;
	}
	struct cost c0 = example();
	printStruct(c0);
	printf("Changing price to 10 and name to Turkey\n");
	changePrice(&c0,10,"Turkey");
	printStruct(c0);
	return 0;
}
	struct cost example(){
		srand(time(NULL));
		struct cost ex;
		ex.price = rand() % 100;
		int randint = rand() % 3;
		if (randint == 0) ex.name = "Pizza";
		if (randint == 1) ex.name = "Pasta";
		if (randint == 2) ex.name ="Burger";
		return ex;
	}

void printStruct(struct cost c){
	printf("Name of food is %s\nPrice of food is %d\n",c.name, c.price);
}

void changePrice(struct cost *c, int p, char *n){
	c->price = p;
	c->name = n;
}



