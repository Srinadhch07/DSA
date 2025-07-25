public class Double
{
	class Node
	{
		int data;
		Node prev;
		Node next;
		public Node(int data)
		{	this.data=data;
		}
	}
	Node head,tail=null;
	public  void  addNode(int data)
	{	Node newNode=new Node(data);
		if(head==null)
		{
			head=tail=newNode;
			head.prev=null;
			head.next=null;
		}
		else
		{
		tail.next=newNode;
		newNode.prev=tail;
		tail=newNode;
		tail.next=null;
		}
	}
	public void display()
	{
		Node current=head;
		if(head==null)
		{System.out.println("List is Empty");
		return;
		}
		System.out.println("Nodes of Doubly linked list: ");
		while(current!=null)
		{
		System.out.print(current.data+" 	");
		current=current.next;
		}
	
	}
	public static void main(String [] sri)
	{
	Double dList=new Double();
	dList.addNode(1);
	dList.addNode(2);
	dList.addNode(3);
	dList.addNode(4);
	dList.addNode(5);
	dList.display();
	}
}