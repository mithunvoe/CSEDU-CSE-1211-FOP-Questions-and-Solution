#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tata return 0
#define all(v) v.begin(), v.end()
#define endl '\n'
#define gap ' '

struct Node
{
    int val;
    Node *next;
};

void addValueBack(Node *&head, int value)
{
    Node *n = (Node *)malloc(sizeof(Node));
    n->val = value;
    n->next = NULL;
    if (head == NULL)
    {
        head = n;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = n;
        temp = NULL;
    }
    n = NULL;
}
void addValueFront(Node *&head, int value)
{
    Node *n = (Node *)malloc(sizeof(Node));
    n->val = value;
    n->next = head;
    head = n;
    n = NULL;
}

void addAfterX(Node *&head, int x, int value)
{
    Node *thead = head;
    while (thead != NULL)
    {
        if (thead->val == x)
        {
            Node *n = (Node *)malloc(sizeof(Node));
            n->val = value;
            Node *nxt = thead->next;
            thead->next = n;
            n->next = nxt;
            return;
        }
        thead = thead->next;
    }
    cout << x << " Not found in the list" << endl;
}
void replaceX(Node *&head, int x, int v)
{
    Node *thead = head;
    while (thead != NULL)
    {
        if (thead->val == x)
        {
            Node *n = (Node *)malloc(sizeof(Node));
            thead->val = v;
            return;
        }
        thead = thead->next;
    }
    cout << x << " Not found in the list" << endl;
}
void deleteX(Node *&head, int x)
{
    Node *thead = head;
    Node *prev = NULL;
    while (thead != NULL)
    {

        if (thead->val == x)
        {
            if (head == thead)
            {
                head = head->next;
                return;
            }
            prev->next = thead->next;
            return;
        }
        prev = thead;
        thead = thead->next;
    }
}
void printList(Node *head)
{
    if (head == NULL)
    {
        cout << "EMPTY" << endl;
        return;
    }
    // Node *n = head;
    while (head != NULL)
    {
        cout << head->val << gap;
        head = head->next;
    }
    cout << endl;
    head = NULL;
}
void kire()
{
    Node *head = NULL;
    int n, x, value;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        addValueBack(head, x);
    }
    cin >> x;
    addValueFront(head, x);
    cin >> x >> value;
    addAfterX(head, x, value);
    printList(head);

    // cin >> x >> value;
    // replaceX(head, x, value);
    // cin >> x;
    // deleteX(head, x);
    // deleteX(head, 9);
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t = 1;
    // cin>>t;

    for (int i = 1; i <= t; i++)
    {
        // cout<<"Case "<<i<<": ";
        kire();
    }

    tata;
}