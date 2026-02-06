#include <bits/stdc++.h>
using namespace std;

struct s10
{
    int y;
    s10 *z;
};

struct s9
{
    s9 *w;
    int x;
};

struct s8
{
    s9 *t;
    int u;
    s10 *v;
};

struct s6
{
    int n;
    char o;
    s8 *p;
};

struct s7
{
    s6 *q;
    int r;
    s7 *s;
};

struct s5
{
    int e;
    s7 *m;
};

struct s4
{
    s6 *j;
    s5 *k;
};

struct s3
{
    s4 *g;
    s3 *h;
    s5 *i;
};

struct s2
{
    char e;
    s3 *f;
};

struct s1
{
    s1 *a;
    int b;
    s2 *c;
    s1 *d;
};

int main()
{
    s1 *p = new (s1);
    p->c = new (s2);
    p->c->f = new (s3);
    p->c->f->g = new (s4);
    p->c->f->i = new (s5);
    p->c->f->g->j = new (s6);
    p->c->f->i->m = new (s7);
    p->c->f->g->j->p = new (s8);
    p->c->f->g->j->p->t = new (s9);
    p->c->f->g->j->p->v = new (s10);

    cin >> p->c->f->g->j->n;
    cin >> p->c->f->i->m->r;
    cin >> p->c->f->g->j->p->u;

    if ((p->c->f->g->j->p->u) % 2 == 0)
    {
        p->c->f->g->j->p->t->x = p->c->f->g->j->n;
        p->c->f->g->j->p->v->y = p->c->f->i->m->r;
    }
    else
    {
        p->c->f->g->j->p->v->y = p->c->f->g->j->n;
        p->c->f->g->j->p->t->x = p->c->f->i->m->r;
    }

    cout << p->c->f->g->j->n << " " << p->c->f->i->m->r << " " << p->c->f->g->j->p->u << " " << p->c->f->g->j->p->t->x << " " << p->c->f->g->j->p->v->y;
}