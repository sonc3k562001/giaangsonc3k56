/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Student;
/**
 *
 * @author NGUYEN GIANG SON
 */
public class Student {
    private String name ;
    private double  gpa;
 
    public String getName(){
        return name;
    }
    public void setName(String name){
        this.name=name;
    }
    public double getGpa(){
        return gpa;
    }
    public void setGpa(double gpa){
        this.gpa=gpa;
    }   
   
    public static void main (String[] args){
        Student stu= new Student();
        stu.setName("Paul Lee");
        stu.setGpa(3.5);
        Student stu1 = new Student();
        stu1.setName("Peter Tan");
        stu1.setGpa(3.9);
        System.out.println("stt1_name:"+stu.getGpa());
        System.out.println("stt1_gpa:"+stu.getName());
       System.out.println("stt1_name:"+stu1.getGpa());
        System.out.println("stt1_gpa:"+stu1.getName());
    }

    
}
