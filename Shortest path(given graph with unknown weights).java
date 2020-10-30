import java.util.*;
class Abc {
	static class Node {
		int x;
		String y;
		Node(int a, String b) {
			x = a;
			y = b;
		}
		void print() {
			System.out.print("X ");
			for(int i = 0; i < y.length(); i++) {
				System.out.print(y.charAt(i) + " ");
			}
			System.out.println("Y");
		}
	}
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		try {
    		Node ar[] = new Node[7];
    		int a = in.nextInt();
    		int b = in.nextInt();
    		int c = in.nextInt();
    		int d = in.nextInt();
    		ar[0] = new Node(18, "bcfj");
    		ar[1] = new Node(9 + c, "bci");
    		ar[2] = new Node(16, "ei");
    		ar[3] = new Node(25 + c, "eicfj");
    		ar[4] = new Node(d + 4,"gk");
    		ar[5] = new Node(6 + b, "adh");
    		ar[6] = new Node(6 + a, "adm");
    		Arrays.sort(ar, new Comparator<Node>() {
    			public int compare(Node a, Node b) {
    				if(a.x <= b.x) {
    					return -1;
    				}
    				return 1;
    			}
    		});
    		ar[0].print();
		} catch (Exception e) {
		    
		}
	}
}
