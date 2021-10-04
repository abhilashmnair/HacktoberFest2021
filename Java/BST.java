import java.io.*;
public class BST
{
    static Node curr,prev,root;
    public static void main(String[] args)throws IOException
    {
        int option,element;
        String choise = "y";
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        while(choise.equals("y"))
        {
            System.out.println();
            System.out.println("MENU");
            System.out.println("1. Add");
            System.out.println("2. Delete");
            System.out.println("3. In order");
            System.out.println("4. Pre order");
            System.out.println("5. Post order");
            System.out.println("6. Search");
            System.out.println("ENTER OPTION");
            option = Integer.parseInt(br.readLine());
            switch(option)
            {
                case 1:
                    System.out.println("Enter element");
                    element = Integer.parseInt(br.readLine());
                    add(element);
                    break;

                case 2:
                    System.out.println("Enter element");
                    element = Integer.parseInt(br.readLine());
                    delete(element);
                    break;

                case 3:
                    System.out.println("The nodes are:");
                    inorder(root);
                    break;

                case 4:
                    System.out.println("The nodes are:");
                    preorder(root);
                    break;

                case 5:
                    System.out.println("The nodes are:");
                    postorder(root);
                    break;

                case 6:
                    System.out.println("Enter element");
                    element = Integer.parseInt(br.readLine());
                    search(element);
                    break;

                default:
                    System.out.println("Invalid option");
            }
            System.out.println();
            System.out.println("Continue ? (y/n)");
            choise = br.readLine();
        }
    }

    public static void add(int n)
    {
        boolean flag = true;
        Node x = new Node();
        x.item = n;
        if(root == null)
        {
            root = x;
            System.out.println("Element added");
        }
        else
        {
            curr = root;
            prev = root;
            while(curr != null)
            {
                prev = curr;
                if(n == curr.item)
                {
                    System.out.println("Element already present");
                    flag = false;
                    break;
                }
                if(n < curr.item)
                    curr = curr.lc;
                else
                    curr = curr.rc;
            }
            if(flag)
            {
                if(n < prev.item)
                    prev.lc = x;
                else
                    prev.rc = x;
                x.parent = prev;
                System.out.println("Element added");
            }     
        }
    }

    public static void delete(int n)
    {
        curr = root;
        while(curr != null && curr.item != n)
        {
            if(n < curr.item)
                curr = curr.lc;
            else
                curr = curr.rc;
        }

        if(curr == null)
            System.out.println("Element not present");
        else
        {
            Node replace = null;
            if(curr.lc == null && curr.rc == null)
                replace = null;
            else
            {
                if(curr.lc != null && curr.rc == null)
                    replace = curr.lc;
                else
                {
                    if(curr.lc == null && curr.rc != null)
                        replace = curr.rc;
                    else
                    {
                        replace = curr.rc;
                        while(replace.lc != null) // replace points to inorder successor
                            replace = replace.lc;

                        Node replace_parent = replace.parent;

                        if(curr != replace_parent)
                        {
                            replace_parent.lc = replace.rc;
                            replace.rc = curr.rc;
                        }
                        replace.lc = curr.lc;
                    }
                }
            }

            Node par = curr.parent;
            if(par == null)
                root = replace;
            else
            {
                if(curr == par.lc)
                    par.lc = replace;
                else
                    par.rc = replace;
            }
            System.out.println("Element deleted");
        }
    }

    public static void inorder(Node n)
    {
        if(n == null)
            return;
        else
        {
            inorder(n.lc);
            System.out.print(n.item + " ");
            inorder(n.rc);
        }
    }

    public static void preorder(Node n)
    {
        if(n == null)
            return;
        else
        {
            System.out.print(n.item + " ");
            preorder(n.lc);
            preorder(n.rc);
        }
    }

    public static void postorder(Node n)
    {
        if(n == null)
            return;
        else
        {
            postorder(n.lc);
            postorder(n.rc);
            System.out.print(n.item + " ");      
        }
    }

    public static void search(int n)
    {
        curr = root;
        while(curr != null && curr.item != n)
        {
            if(n < curr.item)
                curr = curr.lc;
            else
                curr = curr.rc;
        }

        if(curr == null)
            System.out.println("Element not present");
        else
            System.out.println("Element present");
    }
}
    
class Node
{
    int item;
    Node parent,lc,rc;
}
