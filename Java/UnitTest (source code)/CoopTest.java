import static org.junit.Assert.*;

import org.junit.Test;

public class CoopTest {

    @Test
    public void multiplicationOfZeroIntegersShouldReturnZero() {
        Coop tester = new Coop(); // MyClass is tested
		if (tester.isGrass()){
			assertEquals("",(char) '*', (char)tester.render() );
			tester.setGrassStatus(false);
			assertEquals("",false, tester.isGrass());
		}
		else{
			assertEquals("",(char) 'o', (char)tester.render() );
			tester.setGrassStatus(true);
			assertEquals("",true, tester.isGrass());
		}
    }
}