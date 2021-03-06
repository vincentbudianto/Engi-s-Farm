import static org.junit.Assert.*;

import org.junit.Test;

public class CowMilkTest {

    @Test
    public void multiplicationOfZeroIntegersShouldReturnZero() {
        CowMilk tester = new CowMilk(); // MyClass is tested
		assertEquals("", "Cow Milk", tester.getName());
		assertEquals("", 5, tester.getPrice());
		tester.setName("Goat Meatmu");
		assertEquals("", "Goat Meatmu", tester.getName());
		assertEquals("", 0 , tester.prio);
        // assert statements
		//assertEquals("","Goat 1: Mbeee",tester.sound());
      //  assertEquals("must be 1 because its the first goat\n",1, tester.getId() );
      //  assertEquals("should be not hungry cos it's just build\n",false, tester.getHunger());
      //  assertEquals("should be 100 bcoz the goat belom move\n",20, tester.getX() );
    }
}