#include <stdio.h>
#include "ds.h"

int main(){
	
	Stack s;
	init(&s, sizeof(char), 30);
	
	for(char c = 'a'; c <= 'z'; c++){
		push(&s, &c);
	}
	for(int i = 1; i <= 26; i++)
		printf("Topo da pilha: %c\n", *((char*)stack_pop(&s)));
	
	Queue q;
	init(&q, 20);
	
	node* ll;
	init(&ll);
	
	for(int i = 1; i <= 10; i++){
		push(&ll, i*7);
	}
	printds(ll);
	
	Dll dll;
	init(&dll);
	
	for(int i = 1; i <= 10; i++){
		push(&dll, i*13);
	}
	printds(dll);
	
	cl_node* cl;
	init(&cl);
	
	delete(&s);
	delete(&q);
	delete(&ll);
	delete(&cl);
	delete(&dll);
	
	return 0;
}