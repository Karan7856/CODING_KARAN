import java.io.FileReader;

class File_reader {
    public static void main(String[] args) throws Exception {
        FileReader fr = new FileReader("sample.txt");
        int i;
        while ((i = fr.read()) != -1) {
            System.out.print((char) i);
        }
        fr.close(); // Always good practice to close the file
    }
}
