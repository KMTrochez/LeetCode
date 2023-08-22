public class ExcelColumnTitle {

    public static String convertToTitle(int columnNumber) {
        StringBuilder result = new StringBuilder();
        while (columnNumber > 0) {
            int remainder = (columnNumber - 1) % 26;
            char columnChar = (char) ('A' + remainder);
            result.insert(0, columnChar);
            columnNumber = (columnNumber - 1) / 26;
        }
        return result.toString();
    }

    public static void main(Stirng [] args){
        int columnNumber1 = 1;
        System.out.println("Column " + columnNumber1 + ": " + convertToTitle(columnNumber1));

        int columnNumber2 = 5;
        System.out.println("Column " + columnNumber2 + ": " + convertToTitle(columnNumber2));

        int columnNumber3 = 53;
        System.out.println("Column " + columnNumber3 + ": " + convertToTitle(columnNumber3));

    }
}