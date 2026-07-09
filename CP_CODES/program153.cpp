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

void DisplayEven(PNODE Head)
{
    while(Head != NULL)
    {
        if(Head->Data % 2 == 0)
        {
            cout<<Head->Data<<" ";
        }

        Head = Head->Next;
    }
}

void DisplayOdd(PNODE Head)
{
    while(Head != NULL)
    {
        if(Head->Data % 2 != 0)
        {
            cout<<Head->Data<<" ";
        }

        Head = Head->Next;
    }
}


int FirstOccur(PNODE Head,int No)
{
    int iCnt = 1;

    while(Head != NULL)
    {
        if(Head->Data == No)
        {
            return iCnt;
        }

        iCnt++;
        Head = Head->Next;
    }

    return -1;
}

int LastOccur(PNODE Head,int No)
{
    int iCnt = 1;
    int Position = -1;

    while(Head != NULL)
    {
        if(Head->Data == No)
        {
            Position = iCnt;
        }

        iCnt++;
        Head = Head->Next;
    }

    return Position;
}

int main()
{
    PNODE First = NULL;

    InsertLast(First,10);
    InsertLast(First,21);
    InsertLast(First,30);
    InsertLast(First,45);
    InsertLast(First,30);
    InsertLast(First,50);

    if(Search(First,30))
    {
        cout<<"30 is Present"<<endl;
    }
    else
    {
        cout<<"30 is Not Present"<<endl;
    }

    cout<<"Even Count : "<<CountEven(First)<<endl;
    cout<<"Odd Count : "<<CountOdd(First)<<endl;
    cout<<"Frequency of 30 : "<<Frequency(First,30)<<endl;

    cout<<"Even Elements : ";
    DisplayEven(First);
    cout<<endl;

    cout<<"Odd Elements : ";
    DisplayOdd(First);
    cout<<endl;

    cout<<"First Occurrence of 30 : "<<FirstOccur(First,30)<<endl;
    cout<<"Last Occurrence of 30 : "<<LastOccur(First,30)<<endl;

    return 0;
}