package contactsmanager.editors;

import org.eclipse.core.runtime.IProgressMonitor;
import org.eclipse.ui.IEditorInput;
import org.eclipse.ui.PartInitException;
import org.eclipse.ui.forms.editor.FormEditor;

public class ContactEditor extends FormEditor {

	ContactFormPage cfp;

	@Override
	protected void addPages() {
		try {
			cfp = new ContactFormPage(this, "ContactFormPage", "Contacts");

			addPage(cfp);
		} catch (PartInitException e) {
			e.printStackTrace();
		}
	}

	@Override
	protected void setInput(IEditorInput input) {
		super.setInput(input);

		setPartName("Simple Contact Editor");
	}

	@Override
	public void doSave(IProgressMonitor monitor) {
	}

	@Override
	public void doSaveAs() {
	}

	@Override
	public boolean isSaveAsAllowed() {
		return false;
	}

}