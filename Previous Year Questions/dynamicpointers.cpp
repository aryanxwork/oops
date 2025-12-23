// Question: Design a system for managing a collection of Worker objects.

// Define an abstract base class, Worker, with a pure virtual function execute().

// Define two derived concrete classes: DataWorker and LogicWorker, each implementing execute().

// In main:

// Dynamically allocate an array of 5 Worker class pointers using the new operator.

// Use a loop to dynamically create and assign a mix of DataWorker and LogicWorker objects to the elements of this array.

// Use a second loop to iterate through the array, calling the execute() function on each element via the base class pointer.

// Write the necessary code to correctly deallocate all objects and then the pointer array itself.
#include <iostream>
using namespace std;
class Worker
{
public:
virtual ~Worker() {}
    virtual void execute() = 0;
};
class Dataworker : public Worker
{
public:
    virtual ~Dataworker() {}
    void execute()
    {
        cout << "I am a Dataworker" << endl;
    }
};
class Logicworker : public Worker
{
public:
    virtual ~Logicworker() {}
    void execute()
    {
        cout << "I am a Logicworker" << endl;
    }
};
int main()
{
    Worker **ptr = new Worker *[5];
    for (int i = 0; i < 5; i++)
    {
        if (i % 2 == 0)
        {
            ptr[i] = new Logicworker;
        }
        else
            ptr[i] = new Dataworker;
    }
    for (int i = 0; i < 5; i++)
    {
        ptr[i]->execute();
    }
    delete[] ptr;
    return 0;
}
