package Math;

public class use {
    public static void main(String[] args) {
        //取绝对值
        System.out.println(Math.abs(-10));//10

        //向上取整
        System.out.println(Math.ceil(3.9));//4.0
        System.out.println(Math.ceil(3.1));//4.0

        //向下取整（抹零）
        System.out.println(Math.floor(31.5));//31.0
        System.out.println(Math.floor(31.9));//31.0

        //四舍五入
        System.out.println(Math.round(12.5));//13
        System.out.println(Math.round(12.4));//12

        //圆周率
        System.out.println(Math.PI);//3.141592653589793
    }
}
