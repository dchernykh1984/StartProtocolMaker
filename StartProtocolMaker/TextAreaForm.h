#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace StartProtocolMaker {

	/// <summary>
	/// Summary for TextAreaForm
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class TextAreaForm : public System::Windows::Forms::Form
	{
	public:
		TextAreaForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TextAreaForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: static bool isMyResultOk = false;
	private: System::Windows::Forms::RichTextBox^  richTextBoxData;

	private: System::Windows::Forms::Button^  buttonCancel;
	private: System::Windows::Forms::Button^  buttonOk;
	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TextAreaForm::typeid));
			this->richTextBoxData = (gcnew System::Windows::Forms::RichTextBox());
			this->buttonCancel = (gcnew System::Windows::Forms::Button());
			this->buttonOk = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// richTextBoxData
			// 
			this->richTextBoxData->Location = System::Drawing::Point(3, 3);
			this->richTextBoxData->Name = L"richTextBoxData";
			this->richTextBoxData->Size = System::Drawing::Size(548, 330);
			this->richTextBoxData->TabIndex = 0;
			this->richTextBoxData->Text = L"";
			// 
			// buttonCancel
			// 
			this->buttonCancel->Location = System::Drawing::Point(476, 339);
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->Size = System::Drawing::Size(75, 23);
			this->buttonCancel->TabIndex = 2;
			this->buttonCancel->Text = L"Cancel";
			this->buttonCancel->UseVisualStyleBackColor = true;
			this->buttonCancel->Click += gcnew System::EventHandler(this, &TextAreaForm::buttonCancel_Click);
			// 
			// buttonOk
			// 
			this->buttonOk->Location = System::Drawing::Point(3, 339);
			this->buttonOk->Name = L"buttonOk";
			this->buttonOk->Size = System::Drawing::Size(75, 23);
			this->buttonOk->TabIndex = 3;
			this->buttonOk->Text = L"Ok";
			this->buttonOk->UseVisualStyleBackColor = true;
			this->buttonOk->Click += gcnew System::EventHandler(this, &TextAreaForm::buttonOk_Click);
			// 
			// TextAreaForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(553, 364);
			this->Controls->Add(this->buttonOk);
			this->Controls->Add(this->buttonCancel);
			this->Controls->Add(this->richTextBoxData);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"TextAreaForm";
			this->Text = L"TextAreaForm";
			this->Load += gcnew System::EventHandler(this, &TextAreaForm::TextAreaForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void buttonCancel_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }
	private: System::Void buttonOk_Click(System::Object^  sender, System::EventArgs^  e) {
				 isMyResultOk = true;
				 this->Close();
			 }
	public: bool getMyResult() {
				return isMyResultOk;
			}
	public: String^ getText() {
				return richTextBoxData->Text;
			}
	public: void setText(String^ inputString) {
				richTextBoxData->Text = inputString;
			}

	private: System::Void TextAreaForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 isMyResultOk = false;
			 }
};
}
