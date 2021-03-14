package keyword.This;

public class one {
    String name;

    //this.成员变量名可以直接访问成员变量
    public void sayHello(String name) {
        System.out.println(name + "，你好，我是：" + this.name);
    }
}
