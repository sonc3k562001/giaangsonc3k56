/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package lap1;

/**
 *
 * @author NGUYEN GIANG SON
 */
public class Product {
    
    private int id;
    private String name;
    private double price ;
    private String qty;
    private String description;
    
    public Product(){
      id=1234; 
      name = "mobie_phone";
      price = 12.3;
      qty="ABC";
      description = "BHgdsgns";
    }
    
    //public method 
    public int getId(){
        return id;
    }
    public String getName(){
        return name;
   
    }
    public double getPice(){
        return price;
    }  
    public String getQty(){
        return qty;
    }
    public String getDescription(){
        return description;
    }
    
    public static void main(String[] args) {
       // TODO code application logic here
        Product pro1 = new Product();
        System.out.println("Id:"+ pro1.getId());
        System.out.println("name:"+pro1.getName());
        System.out.println("price:"+pro1.getPice());
        System.out.println("qty:"+pro1.getQty());
        System.out.println("description:"+pro1.getDescription());
    
        Product pro2 = new Product();
        pro2.id=6789;
        pro2.name="laptop";
        pro2.price=34.5;
        pro2.qty="BHG";
        System.out.println("Id:"+ pro2.getId());
        System.out.println("name:"+pro2.getName());
        System.out.println("price:"+pro2.getPice());
        System.out.println("qty:"+pro2.getQty());
        System.out.println("description:"+pro2.getDescription());
    }
    
}
