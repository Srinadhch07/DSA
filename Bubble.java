import java.util.Scanner;
public class Bubble
{
	public static void main(String [] sri)
	{
		Scanner read= new Scanner(System.in);
		int s,count=0;
		System.out.println("Enter list size: ");
		s=read.nextInt();
		int list[]=new int[s];
		System.out.println("Enter any "+s+" integer numbers: ");
		for( int i=0;i<s;i++)
		{
		list[i]=read.nextInt();
		}
		int temp=0;
		for( int i=0; i<s-1;i++)
		for(int j=0;j<s-i-1;j++)
		{
			if(list[j]<list[j+1])
			{
				temp=list[j];
				list[j]=list[j+1];
				list[j+1]=temp;
				count++;
			}
		}
		System.out.println("List of sorted Elements :");
		for(int x:list)
		System.out.println(x+" ");
		System.out.println("\nTotal number of Intert changes is "+count);
		
	}
}