package contactsmanager.editors;

import java.io.ByteArrayInputStream;
import java.io.IOException;

import org.eclipse.core.resources.IFile;
import org.eclipse.core.runtime.CoreException;
import org.eclipse.swt.SWT;
import org.eclipse.swt.events.SelectionAdapter;
import org.eclipse.swt.events.SelectionEvent;
import org.eclipse.swt.widgets.Button;
import org.eclipse.swt.widgets.Composite;
import org.eclipse.swt.widgets.Label;
import org.eclipse.swt.widgets.Text;
import org.eclipse.ui.forms.IManagedForm;
import org.eclipse.ui.forms.editor.FormEditor;
import org.eclipse.ui.forms.editor.FormPage;
import org.eclipse.ui.forms.widgets.FormToolkit;
import org.eclipse.ui.forms.widgets.ScrolledForm;
import org.eclipse.ui.part.FileEditorInput;

import contactsmanager.proto.Contact.PContact;

public class ContactFormPage extends FormPage {
	private Text txtFirstName;
	private Text txtMiddleName;
	private Text txtLastName;
	private Text txtMobile;
	private Text txtHomePage;

	/**
	 * Create the form page.
	 * 
	 * @param id
	 * @param title
	 */
	public ContactFormPage(String id, String title) {
		super(id, title);
	}

	/**
	 * Create the form page.
	 * 
	 * @param editor
	 * @param id
	 * @param title
	 * @wbp.parser.constructor
	 * @wbp.eval.method.parameter id "Some id"
	 * @wbp.eval.method.parameter title "Some title"
	 */
	public ContactFormPage(FormEditor editor, String id, String title) {
		super(editor, id, title);
	}

	/**
	 * Create contents of the form.
	 * 
	 * @param managedForm
	 */
	@Override
	protected void createFormContent(IManagedForm managedForm) {
		FormToolkit toolkit = managedForm.getToolkit();
		ScrolledForm form = managedForm.getForm();
		form.setText("Simple Contact Manager");
		Composite body = form.getBody();
		toolkit.decorateFormHeading(form.getForm());
		toolkit.paintBordersFor(body);

		Label lblFirstName = managedForm.getToolkit().createLabel(
				managedForm.getForm().getBody(), "First Name", SWT.NONE);
		lblFirstName.setBounds(10, 13, 59, 14);

		txtFirstName = managedForm.getToolkit().createText(
				managedForm.getForm().getBody(), "New Text", SWT.NONE);
		txtFirstName.setText("");
		txtFirstName.setBounds(105, 10, 211, 19);

		Label lblMiddleName = managedForm.getToolkit().createLabel(
				managedForm.getForm().getBody(), "Middle Name", SWT.NONE);
		lblMiddleName.setBounds(10, 38, 74, 14);

		Label lblLastName = managedForm.getToolkit().createLabel(
				managedForm.getForm().getBody(), "Last Name", SWT.NONE);
		lblLastName.setBounds(10, 61, 59, 14);

		txtMiddleName = managedForm.getToolkit().createText(
				managedForm.getForm().getBody(), "New Text", SWT.NONE);
		txtMiddleName.setText("");
		txtMiddleName.setBounds(105, 35, 211, 19);

		txtLastName = managedForm.getToolkit().createText(
				managedForm.getForm().getBody(), "New Text", SWT.NONE);
		txtLastName.setText("");
		txtLastName.setBounds(105, 58, 211, 19);

		Label lblMobile = managedForm.getToolkit().createLabel(
				managedForm.getForm().getBody(), "Mobile", SWT.NONE);
		lblMobile.setBounds(10, 111, 59, 14);

		txtMobile = managedForm.getToolkit().createText(
				managedForm.getForm().getBody(), "New Text", SWT.NONE);
		txtMobile.setText("");
		txtMobile.setBounds(105, 106, 211, 19);

		txtHomePage = managedForm.getToolkit().createText(
				managedForm.getForm().getBody(), "New Text", SWT.NONE);
		txtHomePage.setText("");
		txtHomePage.setBounds(105, 131, 211, 19);

		Label lblNewLabel = managedForm.getToolkit().createLabel(
				managedForm.getForm().getBody(), "Homepage", SWT.NONE);
		lblNewLabel.setBounds(10, 136, 59, 14);

		Button btnSave = managedForm.getToolkit().createButton(
				managedForm.getForm().getBody(), "Save", SWT.NONE);
		btnSave.addSelectionListener(new SelectionAdapter() {
			@Override
			public void widgetSelected(SelectionEvent e) {
				performSave();
			}
		});
		btnSave.setBounds(105, 156, 72, 22);
		
		//
		loadContact();
	}

	private void loadContact() {
		IFile file = ((FileEditorInput) getEditorInput()).getFile();
		try {
			PContact contact = PContact.parseFrom(file.getContents());
			
			txtFirstName.setText(contact.getFirstName());
			txtMiddleName.setText(contact.getMiddleName());
			txtLastName.setText(contact.getLastName());
			
			txtMobile.setText(contact.getMobile());
			txtHomePage.setText(contact.getHomepage());
			
		} catch (IOException e) {
			e.printStackTrace();
		} catch (CoreException e) {
			e.printStackTrace();
		}
	}

	private void performSave() {
		String firstName = txtFirstName.getText().trim();
		String middleName = txtMiddleName.getText().trim();
		String lastName = txtLastName.getText().trim();
		String mobile = txtMobile.getText().trim();
		String homepage = txtHomePage.getText().trim();
		
		//the compiled java class has in-built builder for creating
		//objects of the PContact class
		PContact contact = PContact.newBuilder().setFirstName(firstName)
				.setMiddleName(middleName).setLastName(lastName)
				.setMobile(mobile).setHomepage(homepage).build();

		//save the contents of contact (byte array) to file using eclipse resources api
		IFile file = ((FileEditorInput) getEditorInput()).getFile();
		ByteArrayInputStream baio = new ByteArrayInputStream(
				contact.toByteArray());
		try {
			file.setContents(baio, false, false, null);
		} catch (CoreException e) {
			e.printStackTrace();
		}

	}
}
