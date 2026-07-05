#pragma once

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

// typedef long long ssize_t;
// typedef unsigned long long size_t;

struct list_head {
    struct list_head *prev, *next;
};

struct hlist_head {
	struct hlist_node *first;
};

struct hlist_node {
	struct hlist_node *next, **pprev;
};

#define WRITE_ONCE(var, val)                          \
    do {                                              \
	    *((volatile typeof(val) *)(&(var))) = (val);  \
    } while (0)

#define READ_ONCE(var) ({                 \
    *((volatile typeof(var) *)(&(var)));  \
})
