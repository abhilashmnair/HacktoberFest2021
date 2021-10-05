import java.io.*;
public class DoublyLinkedList
{
    static Node first,last;
    public static void main(String[] args)throws IOException
    {
        int option,element,index;
        String choise = "y";
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        while(choise.equals("y"))
        {
            System.out.println();
            System.out.println("MENU");
            System.out.println("1. Create list");
            System.out.println("2. Display list");
            System.out.println("3. Add at beginning");
            System.out.println("4. Remove from beginning");
            System.out.println("5. Add at end");
            System.out.println("6. Remove from end");
            System.out.println("7. Add at an index");
            System.out.println("8. Remove from an index");
            System.out.println("9. Reverse");
            System.out.println("ENTER OPTION");
            option = Integer.parseInt(br.readLine());
            switch(option)
            {
                case 1:
                    System.out.println("Enter element");
                    element = Integer.parseInt(br.readLine());
                    create(element);
                    break;

                case 2:
                    display();
                    break;

                case 3:
                    System.out.println("Enter element");
                    element = Integer.parseInt(br.readLine());
                    addBeginning(element);
                    break;

                case 4:
                    removeBeginning();
                    break;

                case 5:
                    System.out.println("Enter element");
                    element = Integer.parseInt(br.readLine());
                    addEnd(element);
                    break; 

                case 6:
                    removeEnd();
                    break;

                case 7:
                    System.out.println("Enter element");
                    element = Integer.parseInt(br.readLine());
                    System.out.println("Enter index");
                    index = Integer.parseInt(br.readLine());
                    addIndex(element,index);
                    break;

                case 8:
                    System.out.println("Enter index");
                    index = Integer.parseInt(br.readLine());
                    removeIndex(index);
                    break;

                case 9:
                    reverse();
                    break;

                default:
                    System.out.println("Invalid option");
            }
            System.out.println();
            System.out.println("Continue ? (y/n)");
            choise = br.readLine();
        }
    }

    public static void create(int n)
    {
        first = new Node();
        last = new Node();
        first.item = n;
        last = first;
        System.out.println("List created");
    }

    public static void display()
    {
        System.out.println("The list is:");
        for (Node x = first; x != null; x = x.next)
            System.out.print(x.item + " ");
        System.out.println();
    }

    public static void addBeginning(int n)
    {
        Node oldfirst = first;
        first = new Node();
        first.item = n;
        first.next = oldfirst;
        oldfirst.prev = first;
        System.out.println("Element added");
    }

    public static void removeBeginning()
    {
        first = first.next;
        first.prev = null;
        System.out.println("Element removed");
    }

    public static void addEnd(int n)
    {
        Node oldlast = last;
        last = new Node();
        last.item = n;
        oldlast.next = last;
        last.prev = oldlast;
        System.out.println("Element added");
    }

    public static void removeEnd()
    {
        Node x = first;
        if(first == last)
        {
            first = null;
        }
        else
        {
            last.prev.next = null;
            last = last.prev;
        }
        System.out.println("Element removed");
    }

    public static void addIndex(int n, int index)
    {
        Node x = first;
        Node back = new Node();
        int count = 0;
        while(count < index)
        {
            back = x;
            x = x.next;
            count ++;
        }
        Node add = new Node();
        add.item = n;
        add.next = x;
        add.prev = back;
        back.next = add;
        x.prev = add;
        System.out.println("Element added");
    }

    public static void removeIndex(int index)
    {
        Node x = first;
        Node back = new Node();
        int count = 0;
        while(count < index)
        {
            back = x;
            x = x.next;
            count ++;
        }
        back.next = x.next;
        x.next.prev = back;
        System.out.println("Element removed");
    }

    public static void reverse()
    {
        Node reverse = null;
        while (first != null)
        {
            Node second = first.next;
            first.next = reverse;
            if(reverse != null)
                reverse.prev = first;
            reverse = first;
            first = second;
        }
        first = reverse;
    }
}
class Node
{
    int item;
    Node next;
    Node prev;
}
