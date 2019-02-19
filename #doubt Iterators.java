import java.util.*;  

public class UserDefinedClassInArrayList {

    public static void main(String[] args) {

        //Creating user defined class objects  
        Student s1=new Student(1,"AAA",13);  
        Student s2=new Student(2,"BBB",14);  
        Student s3=new Student(3,"CCC",15); 

        ArrayList<Student> al=new ArrayList<Student>();
        al.add(s1);
        al.add(s2);  
        al.add(s3);  

        Iterator itr=al.iterator();  

        //traverse elements of ArrayList object  
        while(itr.hasNext()){  
            Student st=itr.next();  //typecasting required
            System.out.println(st.rollno+" "+st.name+" "+st.age);  
        }  
    }
}

class Student{  
    int rollno;  
    String name;  
    int age;  
    Student(int rollno,String name,int age){  
        this.rollno=rollno;  
        this.name=name;  
        this.age=age;  
    }  
} 
