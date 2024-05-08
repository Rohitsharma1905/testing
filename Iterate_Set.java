import java.util.Set;
import java.util.HashSet;


class Main {
  public static void main(String[] args) {
    // Creating an set
    Set<String> languages = new HashSet<>();
    languages.add("Java");
    languages.add("JavaScript");
    languages.add("Python");
    System.out.println("Set: " + languages);

    // Using forEach loop
    System.out.println("Iterating over Set using for-each loop:");
    for(String language : languages) {
      System.out.print(language);
      System.out.print(", ");
    }
  }
}
