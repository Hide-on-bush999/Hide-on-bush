package Phone;

public class Use {
    public static void main(String[] args) {
        //把Basic中的成员变量和成员方法导入到Use的one中
        Basic one = new Basic();

        System.out.println(one.name);
        System.out.println(one.price);
        System.out.println("----------");

        //修改one中的成员变量
        one.name = "红魔6Pro";
        one.price = 4799;
        System.out.println(one.name);
        System.out.println(one.price);
        System.out.println("----------");

        //调用成员方法
        one.call("赵泽鑫");
        one.game("火影忍者手游");
    }
}
