/* reads employee data */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Employee
{
private:
  string name;
  int id;
  double payRate;
  int hours;
  double salary;

public:
  Employee(int empId, double empRate, string empName)
  {
    id = empId;
    payRate = empRate;
    name = empName;
    hours = 0;
    salary = 0;
  }

  void setHours(int hr)
  {
    hours = hr;
    salary = hours * payRate;
  }

  double getSalary()
  {
    return salary;
  }

  string getName()
  {
    return name;
  }

  int getId()
  {
    return id;
  }

  int getHours()
  {
    return hours;
  }
};

class LinkedList
{
private:
  struct Node
  {
    Employee *emp;
    Node *next;
  };

  Node *first, *last;
  int count;

public:
  LinkedList()
  {
    first = nullptr;
    last = nullptr;
    count = 0;
  }
  LinkedList(const LinkedList &other)
  {
    first = nullptr;
    last = nullptr;
    count = 0;
    *this = other;
  }
  LinkedList &operator=(const LinkedList &other)
  {
    if (this != &other)
    {
      clear();
      Node *current = other.first;
      while (current != nullptr)
      {
        add(current->emp);
        current = current->next;
      }
    }

    return *this;
  }

  int size() const { return count; }

  bool empty() const { return first == nullptr; }

  void add(Employee *e)
  {
    Node *n = new Node;
    n->emp = e;
    n->next = nullptr;
    if (empty())
      first = last = n;
    else
    {
      last->next = n;
      last = n;
    }
    count++;
  }

  Employee *find(int id) const
  {
    Node *current = first;
    while (current != nullptr)
    {
      if (current->emp->getId() == id)
        return current->emp;
      current = current->next;
    }
    return nullptr;
  }

  Employee *get(int index) const
  {
    Node *current = first;

    for (int pos = 0; pos < index && current != nullptr; pos++)
      current = current->next;
    return current->emp;
  }
  void sort()
  {
    for (Node *i = first; i != nullptr; i = i->next)
    {
      Node *maxNode = i;
      for (Node *j = i->next; j != nullptr; j = j->next)
      {
        if (j->emp->getSalary() > maxNode->emp->getSalary())
          maxNode = j;
      }

      if (i != maxNode)
      {
        Employee *temp = i->emp;
        i->emp = maxNode->emp;
        maxNode->emp = temp;
      }
    }
  }

  void clear()
  {
    Node *temp;
    while (first != nullptr)
    {
      temp = first->next;
      delete first;
      first = temp;
    }
    last = nullptr;
    count = 0;
  }

  ~LinkedList()
  {
    clear();
  }
};

void readEmpFile(string filename, LinkedList &empList);
void readHoursFile(string filename, LinkedList &empList);
void print(const LinkedList &empList);

int main()
{
  string empFile, hoursFile;
  LinkedList empList;

  cout << "Enter the employee data file: ";
  cin >> empFile;

  cout << "Enter the hours data file: ";
  cin >> hoursFile;

  readEmpFile(empFile, empList);
  readHoursFile(hoursFile, empList);
  empList.sort();
  print(empList);
}

void readEmpFile(string filename, LinkedList &empList)
{
  ifstream inFile(filename);
  if (!inFile)
  {
    cout << "Error, could not read file " << filename << endl;
    exit(1);
  }

  string name;
  int id;
  double rate;

  while (inFile >> id >> rate >> name)
  {
    auto *e = new Employee(id, rate, name);
    getline(inFile, name);
    empList.add(e);
  }
  inFile.close();
}

void readHoursFile(string filename, LinkedList &empList)
{
  ifstream inFile(filename);
  if (!inFile)
  {
    cout << "Error, could not read file: " << filename << endl;
    exit(1);
  }

  int id;
  int hours;

  while (inFile >> id)
  {
    inFile >> hours;
    Employee *e = empList.find(id);
    if (e == nullptr)
      cout << "No employee with id = " << id << endl;
    else
      e->setHours(e->getHours() + hours);
  }
  inFile.close();
}
void print(const LinkedList &empList)
{
  cout << "********* Payroll Information ********" << endl;
  for (int i = 0; i < empList.size(); i++)
  {
    Employee *e = empList.get(i);
    cout << e->getName() << ", $" << e->getSalary() << endl;
  }
  cout << "********** End Payroll ***************" << endl;
}