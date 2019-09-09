#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#define SKIPLIST_MAX_LEVEL

typedef struct snode
{
        int key;
        int value;
        struct snode **forward;
} snode;

typedef struct skiplist
{
        int level;
        int size;
        struct snode *header;
} skiplist;

skiplist *skiplist_init(skiplist *list)
{
        int i;
        snode *header = (snode *) malloc(sizeof(struct snode));
        list->header = header;
        header->key = INT_MAX;
        header->forward = (snode **) malloc(
                sizeof(snode*) * (SKIPLIST_MAX_LEVEL +  ));
        for (i =; i <= SKIPLIST_MAX_LEVEL; i++)
        {
                header->forward[i] = list->header;
        }

        list->level =;
        list->size =;

        return list;
}

static int rand_level()
{
        int level =;
        while (rand() < RAND_MAX /   && level < SKIPLIST_MAX_LEVEL)
                level++;
        return level;
}
int skiplist_insert(skiplist *list, int key, int value)
{
        snode *update[SKIPLIST_MAX_LEVEL +  ];
        snode *x = list->header;
        int i, level;
        for (i = list->level; i >=; i--)
        {
                while (x->forward[i]->key < key)
                        x = x->forward[i];
                update[i] = x;
        }
        x = x->forward[];

        if (key == x->key)
        {
                x->value = value;
                return;
        }
        else {
                level = rand_level();
                if (level > list->level)
                {
                        for (i = list->level +; i <= level; i++)
                        {
                                update[i] = list->header;
                        }
                        list->level = level;
                }

                x = (snode *) malloc(sizeof(snode));
                x->key = key;
                x->value = value;
                x->forward = (snode **) malloc(sizeof(snode*) * (level +  ));
                for (i =; i <= level; i++)
                {
                        x->forward[i] = update[i]->forward[i];
                        update[i]->forward[i] = x;
                }
        }
        return;
}

//skip list search
snode *skiplist_search(skiplist *list, int key)
{
        snode *update[SKIPLIST_MAX_LEVEL +  ];
        snode *x = list->header;
        int i, level;
        for (i = list->level; i >=; i--)
        {
                while (x->forward[i]->key < key)
                        x = x->forward[i];
                update[i] = x;
        }
        x = x->forward[];

        if (key == x->key)
        {
                return x;
        }
        else
        {
                return NULL;
        }
}


static void skiplist_node_free(snode *x)
{
        if (x)
        {
                free(x->forward);
                free(x);
        }
}

static void skiplist_dump(skiplist *list)
{
        snode *x = list->header;
        while (x && x->forward[] != list->header)
        {
                printf("%d[%d]->", x->forward[]->key, x->forward[]->value);
                x = x->forward[];
        }
        printf("NIL\n");
}

int main()
{
        int arr[] = {,  ,  ,  ,   ,  ,   }, i;
        skiplist list;
        skiplist_init(&list);

        printf("Insert:--------------------\n");
        for (i =; i < sizeof(arr) / sizeof(arr[] ); i++)
        {
                skiplist_insert(&list, arr[i], arr[i]);
        }
        skiplist_dump(&list);

        printf("Search:--------------------\n");
        int keys[] = {,  ,  ,   ,     };

        for (i =; i < sizeof(keys) / sizeof(keys[] ); i++)
        {
                snode *x = skiplist_search(&list, keys[i]);
                if (x)
                {
                        printf("key = %d, value = %d\n", keys[i], x->value);
                }
                else
                {
                        printf("key = %d, not fuound\n", keys[i]);
                }
        }

        return;
}
