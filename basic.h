/*
 * Hal: basic.h
 * Part of BRO Project, 2014 <<https://github.com/BRO-FHV>>
 *
 * Created on: Mar 14, 2014
 * Description: 
 * Define basic register operations and standard type bool, ture/false
 * and null
 *
 */



#ifndef BASIC_H_
#define BASIC_H_

#include <inttypes.h>

#ifndef NULL
#define NULL ((void*) 0)
#endif

/** Define a boolean type, and values for true and false. */

typedef unsigned char tBoolean;

#ifndef true
#define true 1
#endif

#ifndef false
#define false 0
#endif

#ifndef TRUE
#define TRUE    1
#endif

#ifndef FALSE
#define FALSE   0
#endif

#define wait(x)	while(x);
#define reg32r(b, r) (*(volatile uint32_t *)((b)+(r)))
#define reg32w(b, r, v) (*((volatile uint32_t *)((b)+(r))) = (v))
#define reg32m(b, r, v) (*((volatile uint32_t *)((b)+(r))) |= (v))
#define reg32a(b, r, v) (*((volatile uint32_t *)((b)+(r))) &= (v))
#define reg32an(b, r, v) (*((volatile uint32_t *)((b)+(r))) &= ~(v))
#define reg32wor(b, r, v) (*((volatile uint32_t *)((b)+(r))) |= (v))
#define reg32wxor(b, r, v) (*((volatile uint32_t *)((b)+(r))) ^= (v))

#endif /* BASIC_H_ */
