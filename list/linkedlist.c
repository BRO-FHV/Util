/*
 * Util: linkedlist.c
 * Part of BRO Project, 2014 <<https://github.com/BRO-FHV>>
 *
 * Created on: Mar 17, 2014
 * Description: 
 * TODO
 */

#include <stdlib.h>
#include "linkedlist.h"

ll_t* LinkedListCreate() {
	ll_t* ll = (ll_t*) malloc(sizeof(ll_t));
	ll->back = NULL;
	ll->front = NULL;

	return ll;
}

void LinkedListAppendFront(ll_t* list, void* data) {
	llnode_t* node = (llnode_t*) malloc(sizeof(llnode_t));
	node->data = data;
	if (list->front == list->back) {
		if (list->front == NULL) {
			list->front = node;
			list->back = node;
		} else {
			node->parent = list->back;
			list->back->parent = node;
			list->front = node;
		}
	} else {
		node->next = list->front;
		list->front->parent = node;
		list->front = node;
	}
}
void LinkedListAppendBack(ll_t* list, void* data) {
}

void* LinkedListGetFront(ll_t* list) {
	if (list->front == list->back) {
		if (list->front == NULL) {
			return NULL;
		} else {
			llnode_t* tmp = list->front;
			void* data=tmp->data;
			list->front = NULL;
			list->back = NULL;
			free(tmp);
			return data;
		}
	} else {
		llnode_t* tmp = list->front;
		void* data=tmp->data;
		list->front = tmp->next;
		list->front->parent = NULL;
		free(tmp);
		return data;
	}
}
void* LinkedListGetBack(ll_t* list) {
	return NULL;
}
