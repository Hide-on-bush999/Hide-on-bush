package creatMethod;

public class two {
    public static void main(String[] args) {
        one a = new one();
        System.out.println("----------");

        one b = new one("赵泽鑫", 18);
        System.out.println("姓名：" + b.getName());
        System.out.println("年龄：" + b.getAge());
    }
}
