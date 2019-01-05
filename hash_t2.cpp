#include <stdio.h>
#include <iostream>
#include "malloc.h"

using namespace std;

#define MAX_N 100
#define MAX_STR_LEN 15
#define MAX_NUM_HASH 200

typedef struct plan_t_
{
	char name[MAX_STR_LEN];
	int val;
	struct plan_t_ *prev;
	struct plan_t_ *next;
}plan_t;

typedef struct hash_t_
{
	int unique;
	char key[MAX_STR_LEN];
	struct plan_t_ *hnext;
	struct plan_t_ *hprev;
}hash_t;

typedef struct grp_t_
{
	struct hash_t_ hash[MAX_NUM_HASH];
}grp_t;

int N;

grp_t grp[10];

int generate_plan()
{
	int ret = 0;

	return ret;
}

void list_add(plan_t *head, plan_t *target)
{
	target->prev = head;
	target->next = head->next;
	head->next->prev = target;
	head->next = target;
}

void list_del(plan_t *target)
{


}

int main(void)
{
	int ret = 0;
	int i;
	char in_name[MAX_N][MAX_STR_LEN] = {};
	int in_val[MAX_N] = {};
	int in_grpid[MAX_N] = {};

	printf("dongju start\n");
	freopen("hash_t2.txt", "r", stdin);
	scanf("%d", &N);
	printf("N(%d)\n", N);
	for (i = 0; i < N; i++) {
		scanf("%d", &in_grpid[i]);
		scanf("%s", &in_name[i][0]);
		scanf("%d", &in_val[i]);
		printf("grpid(%d), name(%s), val(%d)\n", in_grpid[i], &in_name[i][0], in_val[i]);
		generate_plan();
	}

	return ret;
}
