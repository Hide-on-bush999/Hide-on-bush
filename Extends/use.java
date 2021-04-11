package Extends;

public class use {
    public static void main(String[] args) {
        zi z = new zi();
        fu f = new fu();

        //子类和父类中，有重名的方法或者是变量的时候，优先使用等号左边的类当中的方法或变量
        System.out.println(z.num);//999
        z.m();//子类方法执行！
        System.out.println(f.num);//666
        f.m();//父类方法执行！

        //可以通过子类来调用父类中的方法或变量
        System.out.println(z.numFu);//100
        z.mFu();//父类方法执行！
    }
}
