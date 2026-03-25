#include <iostream>
using namespace std;
#define MVNUM 100
int map[1000][1000];
 struct ArcNode {
	int data;
	struct ArcNode* next;
}ArcNode,*ALGrapht[MVNUM];
int* visit;
int ptr;
//邻接矩阵
void DFSA(int n, int v, int* out) {
	if (visit[v] == 1)return;
	visit[v] = 1;
	out[ptr++] =v;
	for (int w = 0; w < n; w++) {
		if ((map[v][w] != 0) && (visit[w] != 1))
			DFSA(n, w, out);
	}
	return;
}
void solveA(int n, int m, int e[][2], int out[]) {
	int i, j;
	visit = (int*)malloc(sizeof(int) * n);
	ptr = 0;
	for (i = 0; i < n; i++) {
		visit[i] = 0;
		for (int j = 0; i < n; i++)
			map[i][j] = 0;
	}
	for (int k = 0; k < m; k++) {
		i = e[k][0];
		j = e[k][1];
		map[i][j] = 1;
		map[j][i] = map[i][j];
	}
	DFSA(n, 0, out);
}
//邻接表
void DFSB(int* out, int i) {
	struct ArcNode* p = new struct ArcNode();
	if (visit[i] == 1)return;
	visit[i] = 1;
	out[ptr++] = i;
	p = ALGrapht[i]->next;
	while (p) {
		if (visit[p->data] != 1)
			DFSB(out, p->data);
		p = p->next;
	}
	return;
}
void solveB(int n, int m, int e[][2], int out[]) {
	int i = 0, j = 0;
	visit = (int*)malloc(sizeof(int) * n);
	ptr = 0;
	for (i = 0; i < n; i++) {
		visit[i] = 0;
		ALGrapht[i] = new struct ArcNode();
		ALGrapht[i]->data = i;
		ALGrapht[i]->next = NULL;
	}
	for (int k = 0; k < m; k++) {
		struct ArcNode* r, * q;
		i = e[k][0];
		j = e[k][1];
		struct ArcNode* p1 = new struct ArcNode();
		struct ArcNode* p2 = new struct ArcNode();
		p1->data = j;
		p1->next = NULL;
		r = ALGrapht[i]->next;
		if (r == NULL) {
			ALGrapht[i]->next= p1;
		}
		else {
			while (r->next != NULL) {
				r = r->next;
			}
			r->next = p1;
		}
		p2->data = i;
		p2->next = NULL;
		q = ALGrapht[j]->next;
		if (q == NULL) {
			ALGrapht[j]->next= p2;
		}
		else {
			while (q->next != NULL) {
				q = q->next;
			}
			q->next = p2;
		}
	}
	DFSB(out, 0);
	return;
}
