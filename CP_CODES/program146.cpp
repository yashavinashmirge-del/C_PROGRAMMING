#include <iostream>
using namespace std;

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node *PNODE;

void InsertLast(PNODE &Head, int No)
{
    PNODE newn = new NODE;

    newn->Data = No;
    newn->Next = NULL;

    if(Head == NULL)
    {
        Head = newn;
    }
    else
    {
        PNODE Temp = Head;

        while(Temp->Next != NULL)
        {
            Temp = Temp->Next;
        }

        Temp->Next = newn;
    }
}

bool Search(PNODE Head, int No)
{
    while(Head != NULL)
    {
        if(Head->Data == No)
        {
            return true;
        }

        Head = Head->Next;
    }

    return false;
}

int main()
{
    PNODE First = NULL;

    InsertLast(First,10);
    InsertLast(First,20);
    InsertLast(First,30);
    InsertLast(First,40);

    if(Search(First,30))
    {
        cout<<"Element Found";
    }
    else
    {
        cout<<"Element Not Found";
    }

    return 0;
}