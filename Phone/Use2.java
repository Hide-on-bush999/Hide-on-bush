package Phone;

//使用对象类型作为方法的返回值

public class Use2 {
    public static void main(String[] args) {
        Basic two = zz();
        System.out.println(two.name);
        System.out.println(two.price);
    }
    public static Basic zz() {
        Basic one = new Basic();
        one.name = "红米K40";
        one.price = 2499;
        return one;
    }
}
