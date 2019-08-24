public class new1 {
    public static void main(String args []){
        String str1 = "Hello";
        String str2 = "World";
        String str3 = "Hello";

        System.out.println("Str1 is "+str1.toUpperCase());
        System.out.println("Str1 is "+str2.toLowerCase());
        System.out.println("Str1 is "+str1);
        System.out.println("xyz is "+str1 + str2);
        System.out.println(str1.concat(str2));
        System.out.println(str2.concat(str1));

        if (str1 == str2){
            System.out.println("Str1 == str2"); // asci value

        }
        else {
            System.out.println("Str1 is not equals to str2");
        }

        if(str1.equals(str2)){
            System.out.println("Str1 == str2");
        }

        else {
            System.out.println("Str1 is not equals to str2");
        }
        if(str1.compareTo(str3)==0){
            System.out.println("Str1 == str3");
        }

        else {
            System.out.println("Str1 is not equals to str2");
        }

        System.out.println(str1);

        StringBuffer buffer = new StringBuffer("Hello");    // Thread-Safe i.e. Synchronized
        System.out.println(">> buffer is: "+buffer);
        buffer.append("World");

        System.out.println(">> buffer is: "+buffer);

    }
}
