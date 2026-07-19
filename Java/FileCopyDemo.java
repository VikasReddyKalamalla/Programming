// File: FileCopyDemo.java

import java.io.*;

public class FileCopyDemo {
    public static void main(String[] args) {
        // Source file and destination file
        String sourceFile = "input.txt";
        String destFile = "output.txt";

        try {
            FileInputStream fin = new FileInputStream(sourceFile);
            FileOutputStream fout = new FileOutputStream(destFile);

            int c;
            while ((c = fin.read()) != -1) {
                fout.write(c); // write each byte to destination
            }

            System.out.println("✅ File copied successfully from " + sourceFile + " to " + destFile);

            fin.close();
            fout.close();
        } catch (IOException e) {
            System.out.println("⚠️ Error occurred: " + e.getMessage());
        }
    }
}
