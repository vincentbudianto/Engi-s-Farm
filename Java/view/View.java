/**
 * View.java
 * <p>
 * File berisi implementasi GUI JavaSwing untuk Engi's Farm
 * </p>
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @version 2.0
 * @since 2019-04-21
 */

import java.util.*;

import java.awt.Dimension;
import java.awt.Color;

import javax.swing.BorderFactory;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JScrollPane;
import javax.swing.JSplitPane;
import javax.swing.JTable;
import javax.swing.JTextField;
import javax.swing.border.TitledBorder;


/**
 * <p>
 * Class for JavaSwing GUI
 * </p>
 */
public class View {

	public View() {
		// Create views swing UI components 
		JTextField searchTermTextField = new JTextField(26);
		
		JButton upButton = new JButton("▲");
		JButton downButton = new JButton("▼");
		JButton leftButton = new JButton("◄");
		JButton rightButton = new JButton("►");
		JButton talkButton = new JButton("T");
		JButton interactButton = new JButton("I");
		JButton killButton = new JButton("K");
		JButton growButton = new JButton("G");
		JButton stayButton = new JButton("Stay");
		
		JTable table = new JTable();
		JTable inventoryTable = new JTable();
		JTable resourceTable = new JTable();

		// Create model + controller
		Map map = new Map();
		table.setModel(map);

		Inventory inventory = new Inventory();
		inventoryTable.setModel(inventory);

		Resource resource = new Resource();
		resourceTable.setModel(resource);

		Player player = new Player("Mr. Semalam Jadi");
		Cell [][] cell = new Cell[map.DATA.length][map.DATA[0].length];
		ArrayList<FarmAnimal> animal = new ArrayList<>();
		ArrayList<Facility> facility = new ArrayList<>();

		Initializer initializer = new Initializer();
		initializer.initCell(cell, map);
		initializer.initAnimal(animal, map);
		initializer.initPlayer(player, map);
		initializer.initInventory(player, inventory);
		initializer.initResource(player, animal, resource);
		initializer.initFacility(facility, map);

		CommandListener listener = new CommandListener(map, player, cell, 
			animal, inventory, resource, facility);
		upButton.addActionListener(listener);
		downButton.addActionListener(listener);
		leftButton.addActionListener(listener);
		rightButton.addActionListener(listener);
		talkButton.addActionListener(listener);
		interactButton.addActionListener(listener);
		killButton.addActionListener(listener);
		growButton.addActionListener(listener);
		stayButton.addActionListener(listener);

		// Header layout
		JPanel ctrlPane = new JPanel();
		ctrlPane.add(talkButton);
		ctrlPane.add(interactButton);
		ctrlPane.add(killButton);
		ctrlPane.add(growButton);
		ctrlPane.add(leftButton);
		ctrlPane.add(downButton);
		ctrlPane.add(upButton);
		ctrlPane.add(rightButton);
		ctrlPane.add(stayButton);

		// Status bar layout
        JScrollPane inventoryPane = new JScrollPane(inventoryTable);
		inventoryPane.setPreferredSize(new Dimension(100, 200));

		JScrollPane resourcePane = new JScrollPane(resourceTable);
		resourcePane.setPreferredSize(new Dimension(100, 50));

		JSplitPane barPane = new JSplitPane(JSplitPane.VERTICAL_SPLIT, inventoryPane, resourcePane);
		barPane.setDividerLocation(200);

		// Main farm layout
		JScrollPane tableScrollPane = new JScrollPane(table);
		tableScrollPane.setPreferredSize(new Dimension(400, 300));
		tableScrollPane.setBorder(BorderFactory.createTitledBorder(BorderFactory.createEtchedBorder(), "Engi's Farm Java",
				TitledBorder.CENTER, TitledBorder.TOP));

		JSplitPane splitPane = new JSplitPane(JSplitPane.VERTICAL_SPLIT, tableScrollPane, ctrlPane);
		splitPane.setDividerLocation(250);
		splitPane.setEnabled(false);

        JSplitPane fullPane = new JSplitPane(JSplitPane.HORIZONTAL_SPLIT, barPane, splitPane);
        fullPane.setDividerLocation(120);

		// Display
		JFrame frame = new JFrame("Engi's Farm Java");
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.add(fullPane);
		frame.pack();
		frame.setLocationRelativeTo(null);
		frame.setVisible(true);
	}

}
