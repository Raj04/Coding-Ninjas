import java.util.*;
class Abc
{
    public static void main(String[] args) 
	 {
		Scanner sc=new Scanner(System.in);
		try{
		 int t=sc.nextInt();
		 while(t!=0)
		 {
		     int n,i,j,k,sl=0,sr=0;
		     n=sc.nextInt();
		     int[][] a=new int [n][n];
		     Vector<Integer> v = new Vector<Integer>();
		     for(i=0;i<n;i++)
		     {
		         for(j=0;j<n;j++)
		         {
		             a[i][j]=sc.nextInt();
		         }
		     }
		     for(i=0;i<n;i++)
		     {    k=i;
		         for(j=0;k<n;j++)
		         {
                    sl=sl+a[k][j];
                    sr=sr+a[j][k];k++;
		         }
		         v.add(sl);
		         v.add(sr);sl=0;sr=0;
		     }
		     Comparator comparator = Collections.reverseOrder();
		     Collections.sort(v,comparator);
		     System.out.println(v.firstElement());t--;
		 }
		 }catch(Exception e){}
	 }
}
