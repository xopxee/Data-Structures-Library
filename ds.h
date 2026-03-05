#ifndef DS_H
#define DS_H

#include "../Stack Library/stack.h"
#include "../Queue Library/queue.h"
#include "../Linked List Library/linked_list.h"
#include "../Doubly Linked List Library/doubly_linked_list.h"
#include "../Circular List Library/circular_list.h"

//init functions.

#define GET_INIT(_1, _2, _3, NAME, ...) NAME

#define init3(a, b, c) init_stack(a, b, c)
#define init2(a, b) init_queue(a, b)

#define init1(a) _Generic((a),     		\
	node**: 	init_linked_list,  		\
	Dll*:		init_dll,				\
	cl_node**:	init_circular_list 		\
	)(a)

#define init(...) GET_INIT(__VA_ARGS__, init3, init2, init1)(__VA_ARGS__)

/////////////////////////////////////////////////////////////////////////////

//is_empty functions

#define is_empty(a) _Generic((a), 		\
	node*:		is_empty_ll,			\
	cl_node*:	is_empty_cl, 	  		\
	Dll:		is_empty_dll,			\
	Queue:		is_empty_q,				\
	Stack:		is_empty_s				\
	)(a) 
	
/////////////////////////////////////////////////////////////////////////////

//delete functions

#define delete(a) _Generic((a), 		\
	node**:		delete_linked_list,		\
	cl_node**:	delete_circular_list,	\
	Dll*:		delete_dll,				\
	Queue*:		delete_queue,			\
	Stack*: 	delete_stack			\
	)(a)

/////////////////////////////////////////////////////////////////////////////

//is_full functions
	
#define is_full(a) _Generic((a), 		\
	Queue:		is_full_q,				\
	Stack:		is_full_s				\
	)(a)

/////////////////////////////////////////////////////////////////////////////

//print functions

#define GET_PRINT(_1, _2, NAME, ...) NAME

#define print2(a, b) print_circ(a, b)

#define print1(a) _Generic((a), 		\
	node*:		print_nodes,			\
	Dll:		print_dll				\
	)(a)

#define printds(...) GET_PRINT(__VA_ARGS__, print2, print1)(__VA_ARGS__)

/////////////////////////////////////////////////////////////////////////////

//push functions

#define push(a, b) _Generic((a), 		\
	node**:		push_node,				\
	Dll*:	push_dll,				\
	Stack*:		stack_push				\
	)(a, b)

/////////////////////////////////////////////////////////////////////////////


#endif