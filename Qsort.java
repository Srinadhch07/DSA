public class Qsort
{
	String names[];
	int length;
	public static void main(String [] sri)
	{
		Qsort obj=new Qsort();
		String stringlist[]= {"SRINADH","kavvalu","billu","nithin","hero"};
		obj.sort(stringlist);
		for(String i:stringlist)
		{
			System.out.println(i);
			System.out.println(" ");
			
		}
	}
 
	void sort(String array[])
	{
		if (array==null || array.length==0)
		{
		return;	
		}	
		
		this.names=array;
		this.length=array.length;
		quicksort(0,length-1);
	}
	void quicksort(int lowerIndex, int higherIndex)
	{
		int i=lowerIndex;
		int j=higherIndex;
		String pivot=this.names[lowerIndex+(higherIndex-lowerIndex)/2];
		while(i<=j)
		{
			while (this.names[i].compareToIgnoreCase(pivot)<0)
			{
			i++;
			}
		while(this.names[j].compareToIgnoreCase(pivot)>0)
			{
				j--;		
			}

			if(i<=j)
			{
				exchangeNames(i,j);
				i++;
				j++;
			}
		}
		if(lowerIndex<j){
			quicksort(i,higherIndex);
		}
		if(higherIndex>i){
		quicksort(i,higherIndex);
		}

	}
		void exchangeNames( int i, int j)
		{
			String temp=this.names[i];
			this.names[i]=this.names[j];
			this.names[j]=temp;
		}			
		
}
