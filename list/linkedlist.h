/*
 * Util: linkedlist.h
 * Part of BRO Project, 2014 <<https://github.com/BRO-FHV>>
 *
 * Created on: Mar 17, 2014
 * Description: 
 * TODO
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

typedef struct LinkedListNode llnode_t;

typedef struct LinkedList {
	llnode_t* front;
	llnode_t* back;
} ll_t;

typedef struct LinkedListNode {
	void* data;
	llnode_t* next;
	llnode_t* parent;
} llnode_t;

ll_t* LinkedListCreate();

void LinkedListAppendFront(ll_t* list, void* data);
void LinkedListAppendBack(ll_t* list, void* data);

void* LinkedListGetFront(ll_t* list);
void* LinkedListGetBack(ll_t* list);

#endif /* LINKEDLIST_H_ */
