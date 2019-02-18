
//run on https://ide.geeksforgeeks.org/


import java.io.*;

class GFG {
    
    public static int[] quickSort(int a[],int p,int r){
        
        int q;
        if(p<r){
            q=partition(a,p,r);
            quickSort(a,p,q-1);
            quickSort(a,q+1,r);
        }
        return a;
    }
    public static int partition(int a[],int p,int r){
        
        int x=a[r];
        int i=p-1,j;
        int temp;
        for(j=p;j<=r-1;j++){
            if(a[j]<=x){//i want the lesser elements(<=x) to be on left side and on right higher elements
                i=i+1;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        temp=a[i+1];
        a[i+1]=a[r];
        a[r]=temp;
        return i+1;
    }
    
	public static void main (String[] args) {
		
		int a[]={9,16,18,5,11};
		int b[]=quickSort(a,0,a.length-1);
		for(int i=0;i<b.length;i++){
		    System.out.println(b[i]);
		}
	}
}
