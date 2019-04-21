/**
 * Legend.java
 * <p>
 * File berisi class legend
 * </p>
 * @author 13515125/Muhammad Rafid Amrullah, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @version 2.0
 * @since 2019-04-21
 */

package resource;

import javax.swing.table.DefaultTableModel;

/**
 * <p>
 * Class for legend symbol
 * </p>
 */
@SuppressWarnings("serial")
public class Legend extends DefaultTableModel {

	public static String[] TABLE_HEADER = { "Symbol", "Description" };

	public static String[][] DATA = {
									{ "P", " Player" },
									{ "c / C", " Chicken" },
									{ "q / Q", " Cow" },
									{ "d / D", " Duck" },
									{ "g / G", " Goat" },
									{ "h / H", " Horse" },
									{ "s / S", " Sheep" },
									{ "x / @", " Barn" },
									{ "o / *", " Coop" },
									{ "- / #", " Grassland" },
									{ "@ / * / #", " Grass" },
									{ "M", " Mixer" },
									{ "T", " Truck" },
									{ "W", " Well" }};

	public Legend() {
		super(DATA, TABLE_HEADER);
	}

}
