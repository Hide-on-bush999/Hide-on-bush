package keyword.Static;

public class use2 {
    public static void main(String[] args) {
        aaa z = new aaa();
        z.method();//没有加static关键字修饰的普通方法，需要先创建对象，然后通过对象名称来使用

        z.methodStatic();//正确，但是不推荐
        aaa.methodStatic();//正确，直接通过类名称来调用加了static关键字修饰的方法

        myMothod();//直接调用自己的类当中的方法
    }

    public static void myMothod() {
        System.out.println("自己的方法");
    }
}