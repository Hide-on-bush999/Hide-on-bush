package String;

public class basic {
    public static void main(String[] args) {
        //空参构造
        String s1 = new String();
        System.out.println("字符串1为:" + s1);

        //根据字符串数组创建字符串
        char[] cr = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
        String s2 = new String(cr);
        System.out.println("字符串2为:" + s2);

        //根据字节数组创建字符串
        byte[] by = {97, 98, 99, 100, 101, 102, 103, 104};
        String s3 = new String(by);
        System.out.println("字符串3为:" + s3);

        //直接创建字符串
        String s4 = "abcefgh";
        System.out.println("字符串4为:" + s4);

        System.out.println("------------------");

        //字符串内容的比较(区分字母的大小写),比较时一般将常量写在前面，将变量写在后面
        System.out.println(s1.equals(s2));//false
        System.out.println(s2.equals(s3));//flase
        System.out.println(s3.equals(s4));//true

        System.out.println("------------------");

        //字符串内容的比较(不区分字母的大小写),比较时一般将常量写在前面，将变量写在后面
        System.out.println(s2.equalsIgnoreCase(s3));//ture

        System.out.println("------------------");

        //获取字符串s2的长度
        int ai = s2.length();
        System.out.println("字符串s2的长度为：" + ai);

        //拼接字符串s2和s3
        String s5 = s2.concat(s3);
        System.out.println("字符串s2和s3拼接后的字符串为：" + s5);

        //获取字符串s2中索引值为1的单个字符
        char ch = s2.charAt(1);
        System.out.println("字符串s2索引值为1的位置的字符为：" + ch);

        //获取字符串第一次出现位置的索引值,如何没找到就返回-1
        String as = "Hide on bush King ZZX bush";
        int bi = as.indexOf("bush");
        System.out.println("字符串\"bush\"第一次出现的位置的索引值为：" + bi);

        //从截取字符串
        String bs = s2.substring(5);
        System.out.println("从字符串s2的索引值为5的地方开始截取直到结束的结果为：" + bs);
        String cs = s2.substring(3, 6);
        System.out.println("从字符串s2的索引值为3的地方开始截取直到6的结果为(左闭右开)：" + cs);

        System.out.println("-------------------");

        //将字符串拆分为字符数组
        char[] ac = s2.toCharArray();
        for (int i = 0; i < ac.length; i++) {
            System.out.print(ac[i] + " ");
        }

        System.out.println();
        System.out.println("-------------------");

        //将字符串拆分为字节数组
        byte[] ab = s2.getBytes();
        for (int i = 0; i < ab.length; i++) {
            System.out.print(ab[i] + " ");
        }

        System.out.println();
        System.out.println("-------------------");

        //字符串中单个字符的替换
        String ds = "nmsl! 你个sb!!!";
        String es = ds.replace("nmsl", "****");
        String fs = es.replace("sb", "**");
        System.out.println("字符串ds原本为：" + ds);
        System.out.println("字符串ds被和谐为：" + fs);

        //字符串的分割
        String gs = "123,456,789";
        String[] sa1 = gs.split(",");
        System.out.println("gs原本为:" + gs);
        System.out.print("分割后为：");
        for (int i = 0; i < sa1.length; i++) {
            System.out.print(sa1[i] + " ");
        }

        System.out.println();

        String hs = "123.456.789";
        String[] sa2 = hs.split("\\.");//注意分割"."时需要写"\\."
        System.out.println("hs原本为:" + hs);
        System.out.print("分割后为：");
        for (int i = 0; i < sa2.length; i++) {
            System.out.print(sa2[i] + " ");
        }
    }
}
