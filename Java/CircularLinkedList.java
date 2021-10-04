
// A complete Java program to demonstrate the 
// working of Circular Linked Lists

class CLL 
{ 
    // A circular linked list node
    static class Node 
    { 
        int data; 
        Node next; 
    }; 

    // Function to insert a node in a Circular
    // linked list at the end
    static Node addEnd(Node last, int data) 
    { 
        if (last == null) 
        {
            // Creating a node dynamically. 
            Node temp = new Node(); 
        
            // Assigning the data. 
            temp.data = data; 
            last = temp; 
        
            // Creating the link. 
            last.next = last; 
        
            return last; 
        } 
        
        Node temp = new Node(); 
    
        temp.data = data; 
        temp.next = last.next; 
        last.next = temp; 
        last = temp; 
    
        return last; 
    } 
    
    // Function to traverse a given Circular Linked 
    // List using the Last pointer
    static void traverse(Node last) 
    { 
        Node p; 
    
        // If list is empty, return. 
        if (last == null) 
        { 
            System.out.println("List is empty."); 
            return; 
        } 
    
        // Pointing to first Node of the list. 
        p = last.next; 
    
        // Traversing the list. 
        do
        { 
            System.out.print(p.data + " "); 
            p = p.next; 
    
        } 
        while(p != last.next); 
    
    } 
    
    // Driver code 
    public static void main(String[] args) 
    { 
        Node last = null; 
    
        last = addEnd(last, 6); 
        last = addEnd(last, 4); 
        last = addEnd(last, 2); 
        last = addEnd(last, 8); 
        last = addEnd(last, 12); 
        last = addEnd(last, 10); 
    
        traverse(last); 
    } 
} 