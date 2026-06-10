public class LibraryInterfaceDemo {
    public static void main(String[] args){
        KidUser kid = new KidUser(10, "kids");
        kid.registeredAccount();
        kid.requestBook();
        System.out.println();

        KidUser kid2 = new KidUser(18, "Fiction");
        kid2.registeredAccount();
        kid2.requestBook();
        System.out.println();
        AdultUser adult = new AdultUser(5, "Kids");
        adult.registeredAccount();
        adult.requestBook();
        System.out.println();
        AdultUser adult2 = new AdultUser(23, "Fiction");
        adult2.registeredAccount();
        adult2.requestBook();
        System.out.println();
    }
}
