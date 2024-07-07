public class CountNodes {
    //Represents the mode of list
    public class Node{
        int data;
        Node next;
        public Node(int data){
            this.data = data;
        }
    }
    public int count;
    //Declaring head and tail pointer as null
    public Node head = null;
    public Node tail = null;

    //This function will add the new node at the end of the list

    public void add(int data){
        //Create new node
        Node newNode = new Node(data);
        //Checks of the list is empty
        if(head == null){
            //If list is empty, both head and tail would poin to new node.
            head = newNode;
            tail = newNode;
            newNode.next = head;
        }
        else{
            //tail will point to new node.
            tail.next = newNode;
            //New node will become new tail.
            tail = newNode;
            //Since, it is circular linked list tial will point to head
            tail.next = head;

        }
    }

    //This function will count the nodes of circular linked list
    public void countNodes(){
        Node current = head;
        do{
            //Increment the cound variable by 1 for each node
            count++;
            current = current.next;
        }while(current != head);
        System.out.println("Count of nodes present in circular  inked list: "+count);
    }
    public static void main(String[] args){
        CountNodes cl = new CountNodes();
        cl.add(1);
        cl.add(2);
        cl.add(4);
        cl.add(1);
        cl.add(2);
        cl.add(3);
        //Counts the number of nodes present in the list
        cl.countNodes();
    }
}
