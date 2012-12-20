package contactsmanager;

import org.eclipse.ui.IPageLayout;
import org.eclipse.ui.IPerspectiveFactory;

public class Perspective implements IPerspectiveFactory {

	public void createInitialLayout(IPageLayout layout) {
		layout.addView("contacts_manager.comnav", IPageLayout.LEFT, 0.10f,
				layout.getEditorArea());
	}

}
