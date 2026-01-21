package javaprograms;
// Write a program in java
// To create a class A
// With in the class declare two integer instance variable a and b 
// Define one instance method to initialise a and b by passing local values

// Define another two method to calculate gcd and lcm of a and b

// At the end define another class Demo
// And with in Demo call all the methods of class A
class A{
    int a,b;
    void getter(int a,int b){
        this.a=a;
        this.b=b;
    }
    int gcd(){
        int a = this.a;
        int b = this.b;
        while(b!=0){
            int x=b;
            b=a%b;
            a=x;
        }
        return a;
    }
    int lcm(){
        return(this.a/gcd())*this.b;
    }
}
class Demo{
    public static void main(String[] args) {
        A obj = new A();
        obj.getter(20,10);
        System.out.println("GCD :"+obj.gcd()+" LCM :"+obj.lcm());
    }
}