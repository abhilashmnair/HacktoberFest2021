
// A complete working Java program to demonstrate  
// Doubly Linked List 

public class DoublyLinkedList { 
    Node head; // head of list 

    /* Doubly Linked list Node*/
    class Node { 
        int data; 
        Node prev; 
        Node next; 

        // Constructor to create a new node 
        // next and prev is by default initialized as null 
        Node(int d) { data = d; } 
    } 
 
    // Add a node at the end of the list 
    void append(int new_data) 
    { 
        /* 1. allocate node 
           2. put in the data */
        Node new_node = new Node(new_data); 

        Node last = head; /* used in step 5 */

        /* 3. This new node is going to be the last node, so 
              make next of it as NULL */
        new_node.next = null; 

        /* 4. If the Linked List is empty, then make the new 
              node as head */
        if (head == null) { 
            new_node.prev = null; 
            head = new_node; 
            return; 
        } 

        /* 5. Else traverse till the last node */
        while (last.next != null) 
            last = last.next; 

        /* 6. Change the next of last node */
        last.next = new_node; 

        /* 7. Make last node as previous of new node */
        new_node.prev = last; 
    } 

    // This function prints contents of linked list
    //  starting from the given node 
    public void printlist(Node node) 
    { 
        Node last = null; 

        // Traverse the linked list in forward direction
        // using the next node's pointer present 
        // at each node
        System.out.println("Traversal in forward Direction"); 
        while (node != null) { 
            System.out.print(node.data + " "); 
            last = node; 
            node = node.next; 
        } 
        System.out.println(); 
        
        // Traverse the linked list in reverse direction 
        // starting from the last node using the previous
        // node's pointer present at each node
        System.out.println("Traversal in reverse direction"); 
        while (last != null) { 
            System.out.print(last.data + " "); 
            last = last.prev; 
        } 
    } 

    /* Driver program to test above functions*/
    public static void main(String[] args) 
    { 
        /* Start with the empty list */
        DoublyLinkedList dll = new DoublyLinkedList(); 

        // Insert 6. So linked list becomes 6->NULL 
        dll.append(6); 

        // Insert 7. So linked list becomes 6->7->NULL 
        dll.append(7); 

        // Insert 1. So linked list becomes 6->7->1->NULL 
        dll.append(1); 

        // Insert 4. So linked list becomes 6->7->1->4->NULL 
        dll.append(4); 

        System.out.println("Created DLL is: "); 
        dll.printlist(dll.head); 
    } 
} 