// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

long long m = 1e9 + 7;
long long multiplyTwoLists(Node *l1, Node *l2)
{
    Node *cur1 = l1;
    Node *cur2 = l2;
    long long p1 = 0;
    long long p2 = 0;

    while (cur1)
    {
        p1 = (p1 * 10 + cur1->data) % m;
        cur1 = cur1->next;
    }

    while (cur2)
    {
        p2 = (p2 * 10 + cur2->data) % m;
        cur2 = cur2->next;
    }

    long long ans = (p1 * p2) % m;

    return ans;
}