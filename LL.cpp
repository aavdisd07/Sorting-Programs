#include <iostream>
#include <stdlib.h>

using namespace std;

struct node
{
  int data;
  struct node *next;
};
class Linked_list
{
  struct node *newnode = (struct node *)malloc(sizeof(struct node));

  struct node *temp = NULL;
  struct node *head = (struct node *)malloc(sizeof(struct node *));

public:
  void insertnode()
  {
    int i;
    cout << "Enter digit in node\n";
    cin >> i;
    if (temp == NULL)
    {

      head->data = i;

      temp = head;
      temp->next = newnode;
    }

      else
      {
        newnode->data = i;
        temp = newnode;
        newnode->next = newnode;
        // temp->next=newnode;
      }
    }
  
    void display()
    {
      struct node *trav = head;
      while (trav== NULL)
      {
        cout << trav->data << "\t";
        trav = trav->next;
      }
    }
  };
  int main()
  {
    Linked_list s1;
    int p;
    cout << "enter value to run for loop";
    cin >> p;
    for (int q = 0; q < p; q++)
    {
      s1.insertnode();
    }
    for (int q = 0; q < p; q++)
    {
      s1.display();
    }
  }
