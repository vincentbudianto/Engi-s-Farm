import static org.junit.Assert.*;

import org.junit.Test;

public class GoatTest {

    @Test
    public void multiplicationOfZeroIntegersShouldReturnZero() {
        GoatMeat tester = new GoatMeat(); // MyClass is tested
		assertEquals("", "Goat Meat", tester.getName());
		assertEquals("", 13, tester.getPrice());
		tester.setName("Goat Meatmu");
		assertEquals("", "Goat Meatmu", tester.getName());
        // assert statements
		//assertEquals("","Goat 1: Mbeee",tester.sound());
      //  assertEquals("must be 1 because its the first goat\n",1, tester.getId() );
      //  assertEquals("should be not hungry cos it's just build\n",false, tester.getHunger());
      //  assertEquals("should be 100 bcoz the goat belom move\n",20, tester.getX() );
    }
}