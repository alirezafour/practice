#include<iostream>
using namespace std;

/* Queue - Circular Array implementation in C++*/
#define MAX_SIZE 20  //maximum size of the array that will store Queue.

// Creating a class named Queue.
class Queue
{
private:
    int A[MAX_SIZE];
    int m_front, m_rear;
public:
    // Constructor - set m_front and m_rear as -1.
    // We are assuming that for an empty Queue, both m_front and m_rear will be -1.
    Queue()
    {
        m_front = -1;
        m_rear = -1;
    }

    // To check wheter Queue is empty or not
    bool IsEmpty()
    {
        return (m_front == -1 && m_rear == -1);
    }

    // To check whether Queue is full or not
    bool IsFull()
    {
        return (m_rear + 1) % MAX_SIZE == m_front ? true : false;
    }

    // Inserts an element in queue at m_rear end
    void push(int x)
    {
        cout << "Enqueuing " << x << " \n";
        if (IsFull())
        {
            cout << "Error: Queue is Full\n";
            return;
        }
        if (IsEmpty())
        {
            m_front = m_rear = 0;
        }
        else
        {
            m_rear = (m_rear + 1) % MAX_SIZE;
        }
        A[m_rear] = x;
    }

    // Removes an element in Queue from m_front end.
    void del()
    {
        cout << "Dequeuing \n";
        if (IsEmpty())
        {
            cout << "Error: Queue is Empty\n";
            return;
        }
        else if (m_front == m_rear)
        {
            m_rear = m_front = -1;
        }
        else
        {
            m_front = (m_front + 1) % MAX_SIZE;
        }
    }

    // Returns element at m_front of queue.
    int front()
    {
        if (m_front == -1)
        {
            cout << "Error: cannot return m_front from empty queue\n";
            return -1;
        }
        return A[m_front];
    }
    /*
    Printing the elements in queue from m_front to m_rear.
    This function is only to test the code.
    This is not a standard function for Queue implementation.
    */
    void Print()
    {
        // Finding number of elements in queue
        int count = (m_rear + MAX_SIZE - m_front) % MAX_SIZE + 1;
        cout << "Queue       : ";
        for (int i = 0; i < count; i++)
        {
            int index = (m_front + i) % MAX_SIZE; // Index of element while travesing circularly from m_front
            cout << A[index] << " ";
        }
        cout << "\n\n";
    }
};
//Main
int printMenuList();
int main()
{
    int num;
    Queue odd, even;
    int c = printMenuList();

    while (c) {
        switch (c) {
        case 1:
            odd.Print();
            break;
        case 2:
            even.Print();
            break;
        case 3:
            cout << "enter number: ";
            cin >> num;
            if(num % 2 == 0)
                odd.push(num);
            else
                even.push(num);
            break;
        case 4:
            odd.del();
            break;
        case 5:
            even.del();
            break;
        default:
            cout << "Wrong Number. Try again.\n";
        }
        c = printMenuList();
    }

    cout << "even Queue.\n";
    even.Print();

    cout << "odd Queue.\n";
    odd.Print();

    return 0;
}

int printMenuList()
{
    cout << "\n\t 1- Print Odd Queue."
         << "\n\t 2- Print Even Queue."
         << "\n\t 3- Add Number Queue."
         << "\n\t 4- Delete From Odd Queue."
         << "\n\t 5- Delete From Even Queue."
         << "\n\t 0- Exit.";
    int x = 0;
    cout << "Enter number of the list: ";
    cin >> x;
    return x;
}
