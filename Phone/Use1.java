package Phone;
//使用对象类型作为方法的参数
public class Use1 {
    public static void main(String[] args) {
        Basic one = new Basic();
        one.name = "小米11";
        one.price = 4699;

        med(one);

    }
    public static void med(Basic pa) {
        System.out.println(pa.name);
        System.out.println(pa.price);
    }
}
