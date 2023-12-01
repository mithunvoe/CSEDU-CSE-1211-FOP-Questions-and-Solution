#include <stdio.h>
#include <math.h>
struct File
{
    int f;
    char name[101];
    int size;
    char content[6969];
};
struct Job
{
    int id;
    struct File file;
    int copyNumber;
    int bothSided;
};
struct Node
{
    Job job;
    struct Node *Next;
};
void addJob(Node *&head)
{
    struct Node *n = (Node *)malloc(sizeof(Node));
    // n->job = newJob;
    Job jb;
    char dummy;
    printf("Enter ID: ");
    scanf("%d", &jb.id);
    printf("Enter Name: ");
    // fgets(jb.file.name, 100, stdin);
    scanf("%c", &dummy);// this one is dummy
    scanf("%[^\n]", jb.file.name);
    // scanf("%d", &jb.file.f);
    printf("Page size A4 or legal(0/1): ");
    scanf("%d", &jb.file.size);
    printf("Enter Content: ");
    scanf("%c", &dummy); //another dummy input
    scanf("%[^\n]", jb.file.content);

    // fgets(jb.file.content, 6968, stdin);
    printf("Enter Number of Copies: ");
    scanf("%d", &jb.copyNumber);
    printf("Is Both-sided?(0/1): ");
    scanf("%d", &jb.bothSided);

    n->job = jb;
    n->Next = NULL;
    if (head == NULL)
    {
        head = n;
    }
    else
    {
        struct Node *tHead = head;
        while (tHead->Next != NULL)
        {
            tHead = tHead->Next;
        }
        tHead->Next = n;
    }
}
void printOldest(Node *&head)
{
    Job jb = head->job;
    printf("Job ID: %d\nName: %s\nPage Size: %s\nContent: %s\nNumber of Copies: %d\nBoth Sided? %s\n", jb.id, jb.file.name, (jb.file.size?"Legal":"A4"), jb.file.content, jb.copyNumber, (jb.bothSided ? "Yes" : "No"));
}
void abortJob(Node *&head, int jobId)
{
    Node *tHead = head;
    Node *prev = NULL;
    while (tHead != NULL)
    {
        if (tHead->job.id == jobId)
        {
            if (tHead == head)
                head = head->Next;
            else
                prev->Next = tHead->Next;
            return;
        }
        prev = tHead;
        tHead = tHead->Next;
    }
}
void kire()
{
    Node *head;
    addJob(head);
    addJob(head);
    printOldest(head);
}

int main()
{
    int t = 1;
    // scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        // printf("Case %d: ",i );
        kire();
    }
}