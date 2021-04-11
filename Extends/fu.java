package Extends;
/*
继承的三个特点：
            1.单继承：一个子类只能继承一个父类
            2.多级继承：子类继承父类，父类继承爷类
            3.一个子类只能拥有一个父类，但是一个父类可以拥有很多个子类
 */
public class fu {
    int numFu = 100;
    int num = 666;

    public static void mFu() {
        System.out.println("父类方法执行！");
    }

    public static void m() {
        System.out.println("父类方法执行！");
    }
}
