#pending problem

/*
Given a binary tree, check if its balanced i.e. depth of left and right subtrees of every node differ by at max 1. 
Return true if given binary tree is balanced, false otherwise.
*/



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
	
	public static boolean checkBalanced(BinaryTreeNode<Integer> root){
		
		// Write your code here
		if(root==null){
            return true;
        }
        int ldepth=height(root.left);
        int rdepth=height(root.right);
        if(ldepth-rdepth<=1){
            return true;
        }
        return false;
	}
    public static int height(BinaryTreeNode<Integer> root){
        if(root==null){
            return 0;
        }
        int ldepth=height(root.left);
        int rdepth=height(root.right);
        if(ldepth>rdepth){
            return ldepth+1;
        }else{
            return rdepth+1;
        }
        
        
    }

	
	
}
