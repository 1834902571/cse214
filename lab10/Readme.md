## Introduction:

Circular doubly linked list is a more complexed type of data structure in which a node contains pointers to its previous node as well as the next node. Circular doubly linked list doesn't contain NULL in any of the node. The last node of the list contains the address of the first node of the list. The first node of the list also contains address of the last node in its previous pointer.



## Uses:

1.	Empty List (start = NULL): A node (Say N) is inserted with data = 5, so previous pointer of N points to N and next pointer of N also points to N. But now start pointer points to the first node the list.

2.	List initially contain some nodes, start points to first node of the List: A node (Say M) is inserted with data = 7, so previous pointer of M points to last node, next pointer of M points to first node and last node’s next pointer points to this M node and first node’s previous pointer points to this M node.


3.	Insertion at the beginning of the list: To insert a node at the beginning of the list, create a node (Say T) with data = 5, T next pointer points to first node of the list, T previous pointer points to last node the list, last node’s next pointer points to this T node, first node’s previous pointer also points this T node and at last don’t forget to shift ‘Start’ pointer to this T node.


4.	Insertion in between the nodes of the list: To insert a node in between the list, two data values are required one after which new node will be inserted and another is the data of the new node
