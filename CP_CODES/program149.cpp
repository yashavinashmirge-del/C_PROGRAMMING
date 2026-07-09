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

int Frequency(PNODE Head,int No)
{
    int Count = 0;

    while(Head != NULL)
    {
        if(Head->Data == No)
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
    InsertLast(First,20);
    InsertLast(First,30);
    InsertLast(First,20);
    InsertLast(First,40);
    InsertLast(First,20);

    cout<<"Search 20 : "<<Search(First,20)<<endl;
    cout<<"Even Count : "<<CountEven(First)<<endl;
    cout<<"Odd Count : "<<CountOdd(First)<<endl;
    cout<<"Frequency of 20 : "<<Frequency(First,20);

    return 0;
}