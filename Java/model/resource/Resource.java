/**
 * Resource.java
 * <p>
 * File berisi resource Engi's Farm
 * </p>
 * @author 13515125/Muhammad Rafid Amrullah, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @version 2.0
 * @since 2019-04-21
 */

package resource;

import javax.swing.table.DefaultTableModel;

/**
 * <p>
 * Class for Engi's Farm resource
 * </p>
 */
@SuppressWarnings("serial")
public class Resource extends DefaultTableModel {

	public static String[] TABLE_HEADER = { "Resource", "Amount" };

	public static String[][] DATA = {
									{ "Money", " " },
									{ "Water", " " },
									{ "Animal", " " }};

	public Resource() {
		super(DATA, TABLE_HEADER);
	}

}
