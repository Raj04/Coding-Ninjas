import java.util.Scanner;
import java.util.Queue;
import java.util.*;

public class Solution {

    public static void printHelper(int edges[][], int sv,boolean visited[]){
        Queue<Integer> q = new LinkedList<>();
        q.add(sv);
        while(q.size()!=0){
            int firstelem = q.remove();
            System.out.print(firstelem+" ");
            visited[sv] = true;
            for(int i=0; i<edges[0].length; i++){
                if(edges[firstelem][i]==1 && !visited[i]){
                    q.add(i);
                    visited[i]=true;
                }       
            }
        }   
    }
    // we have to deal with both connected and non connected
    public static void print(int edges[][]){
        boolean visited[] = new boolean[edges.length];
        for(int i=0; i< edges.length; i++){
            if(!visited[i]){
                printHelper(edges, i, visited);   
            }
        }
    }
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int V = s.nextInt();
		int E = s.nextInt();
        int edges[][] = new int[V][V];
        for(int i =0; i< E; i++){
            int fv = s.nextInt();
            int sv = s.nextInt();
            edges[fv][sv] = 1;   
            edges[sv][fv] =1;
        }
        print(edges);
	}
}
