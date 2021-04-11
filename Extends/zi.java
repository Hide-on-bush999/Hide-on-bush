package Extends;

public class zi extends fu {
    int numZi = 10;
    int num = 999;

    public static void mZi() {
        System.out.println("子类方法执行！");
    }

    public static void m() {
        System.out.println("子类方法执行！");
    }

    public void a(){
        int num = 6;
        System.out.println(num);//6（局部变量）
        System.out.println(this.num);//999（本类当中的成员变量）
        //super关键字可以用来在子类的成员方法或构造方法中访问父类的成员方法，成员变量或构造方法
        //super调用父类，this调用本类
        System.out.println(super.num);//666（父类当中的成员变量）
    }
}
