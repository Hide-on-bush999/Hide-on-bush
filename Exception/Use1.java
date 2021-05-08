package Exception;

import javax.imageio.spi.RegisterableService;
import java.rmi.registry.Registry;
import java.util.Scanner;

public class Use1 {
    static String[] usernames = {"张三", "李四", "王五"};


    public static void main(String[] args) throws MyException {
        Scanner sc = new Scanner(System.in);
        System.out.println("请输入您想要注册的用户名：");
        String username = sc.next();
        checkUsername(username);
    }

    public static void checkUsername(String username) throws MyException {
        for (String name : usernames) {
            if (name.equals(username)) {
                throw new MyException("该用户已经被注册！");
            }
        }

        System.out.println("注册成功！");
    }
}
