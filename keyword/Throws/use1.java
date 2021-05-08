package keyword.Throws;

import java.io.FileNotFoundException;

public class use1 {
    public static void main(String[] args) throws FileNotFoundException {
        readFile("C:\\a.tx");
    }

    public static void readFile(String fileName) throws FileNotFoundException {
        if (!fileName.equals("C:\\a.txt")) {
            throw new FileNotFoundException("传递的文件路径不是C:\\a.txt");
        }
    }
}
