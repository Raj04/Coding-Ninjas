
import java.util.LinkedList; 
import java.util.Queue; 

public class Solution {

	/*	Binary Tree Node class
	 * 
	 * class BinaryTreeNode<T> {
		T data;
		BinaryTreeNode<T> left;
		BinaryTreeNode<T> right;

		public BinaryTreeNode(T data) {
			this.data = data;
		}
	}
	 */

	public static void printLevelWise(BinaryTreeNode<Integer> root){
		
		// Write your code here
        
      QueueUsingLL<BinaryTreeNode<Integer>> queue = new QueueUsingLL<BinaryTreeNode<Intger>>(); 
      queue.enqueue(root);
      while(!queue.isEmpty()){
          BinaryTreeNode<Intger> temp=queue.dequeue();
          System.out.println(temp.data);
          if(temp.left!=null){
              queue.add(temp.left);
          }
          if(temp.right!=null){
              queue.add(queue.right);
          }
      }          
	}



}
