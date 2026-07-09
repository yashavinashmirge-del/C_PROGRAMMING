#include<iostream>
using namespace std;

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node *PNODE;

void InsertLast(PNODE &Head,int No)
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

bool Search(PNODE Head,int No)
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

int CountEven(PNODE Head)
{
    int Count = 0;

    while(Head != NULL)
    {
        if(Head->Data % 2 == 0)
        {
            Count++;
        }

        Head = Head->Next;
    }

    return Count;
}

int CountOdd(PNODE Head)
{
    int Count = 0;

    while(Head != NULL)
    {
        if(Head->Data % 2 != 0)
        {
            Count++;
        }

        Head = Head->Next;
    }

    return Count;
}

int main()
{
    PNODE First = NULL;

    InsertLast(First,10);
    InsertLast(First,21);
    InsertLast(First,30);
    InsertLast(First,45);
    InsertLast(First,50);

    cout<<"Search 30 : "<<Search(First,30)<<endl;
    cout<<"Even Count : "<<CountEven(First)<<endl;
    cout<<"Odd Counmt : "<<CountOdd(First);

    return 0;
}