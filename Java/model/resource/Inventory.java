/**
 * Inventory.java
 * <p>
 * File berisi class inventory
 * </p>
 * @author 13515125/Muhammad Rafid Amrullah, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @version 2.0
 * @since 2019-04-21
 */

package resource;

import javax.swing.table.DefaultTableModel;

/**
 * <p>
 * Class for player inventory
 * </p>
 */
@SuppressWarnings("serial")
public class Inventory extends DefaultTableModel {

	public static String[] TABLE_HEADER = { "Inventory" };

	public static String[][] DATA = {
									{ " " },
									{ " " },
									{ " " },
									{ " " },
									{ " " },
									{ " " },
									{ " " },
									{ " " },
									{ " " },
									{ " " }};

	public Inventory() {
		super(DATA, TABLE_HEADER);
	}

}
