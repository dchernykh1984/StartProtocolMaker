#pragma once
#include <sys/timeb.h>
#include < stdio.h >
#include < string.h >
#include < stdlib.h >
#include < vcclr.h >
#include < direct.h >
#include < math.h >
#include "TextAreaForm.h"


namespace StartProtocolMaker {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Net;
	using namespace System::Text::RegularExpressions;
	using namespace System::IO;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

		static const int numberOfCharsInString = 500;
//	private: FILE* outPutProtocolFile;
	private: static String^ startProtocolFileName = String::Empty;
	private: System::Windows::Forms::ListBox^  listBoxGroups;
	protected: 

	private: System::Windows::Forms::Button^  buttonAddGroup;
	protected: 

	private: System::Windows::Forms::Button^  buttonRemoveGroup;
	private: System::Windows::Forms::TextBox^  textBoxAddGroup;




	private: System::Windows::Forms::Button^  buttonSaveToFile;

	private: System::Windows::Forms::ComboBox^  comboBoxGroup;

	private: System::Windows::Forms::TextBox^  textBoxStartNumber;
	private: System::Windows::Forms::TextBox^  textBoxName;
	private: System::Windows::Forms::TextBox^  textBoxYearOfBirth;

	private: System::Windows::Forms::Label^  labelGroups;





	private: System::Windows::Forms::Label^  labelName;
	private: System::Windows::Forms::Label^  labelGroup;
	private: System::Windows::Forms::Label^  labelYearOfBirth;









	private: System::Windows::Forms::TextBox^  textBoxStageNumber;



	private: System::Windows::Forms::Label^  labelAddLaps;
	private: System::Windows::Forms::TextBox^  textBoxAddLaps;
	private: System::Windows::Forms::Label^  labelTeam;
	private: System::Windows::Forms::Label^  labelCity;
	private: System::Windows::Forms::TextBox^  textBoxTeam;
	private: System::Windows::Forms::TextBox^  textBoxCity;
	private: System::Windows::Forms::ListBox^  listBoxCompetitorsListOpen;
	private: System::Windows::Forms::ListBox^  listBoxCompetitorsListSaveAs;

	private: System::Windows::Forms::Button^  buttonCompetitorsListOpen;
	private: System::Windows::Forms::Button^  buttonCompetitorsListSaveAs;




	private: System::Windows::Forms::TextBox^  textBoxSearch;
	private: System::Windows::Forms::Button^  buttonSearch;
	private: System::Windows::Forms::Button^  buttonCompetitorsListEdit;
	private: System::Windows::Forms::Button^  buttonCompetitorsDelete;
	private: System::Windows::Forms::Button^  buttonCometitorsOpenEdit;
	private: System::Windows::Forms::Button^  buttonOpenToStartProtocol;
	private: System::Windows::Forms::Label^  labelErrorMessage;
	private: System::Windows::Forms::Button^  buttonAllToStartProtocol;
	private: System::Windows::Forms::Button^  buttonSaveBackUp;
	private: System::Windows::Forms::Button^  buttonLoadBackup;

	private: System::Windows::Forms::Label^  labelComment;
	private: System::Windows::Forms::TextBox^  textBoxComment;


	private: System::Windows::Forms::TextBox^  textBoxTimeShift;
	private: System::Windows::Forms::CheckBox^  checkBoxStageNumber;
	private: System::Windows::Forms::Button^  buttonAutoUpdateDelayFromStart;
	private: System::Windows::Forms::TextBox^  textBoxOneNumberDelay;

	private: System::Windows::Forms::Button^  buttonClearDelayFromGroupStart;
private: System::Windows::Forms::Button^  buttonSaveConfiguration;
private: System::Windows::Forms::TextBox^  textBoxFirstNumber;
private: System::Windows::Forms::Button^  buttonSaveStart;
private: System::Windows::Forms::Button^  buttonUpload;
private: System::Windows::Forms::TextBox^  textBoxUploadAddress;
private: System::Windows::Forms::Label^  labelNumbers;
private: System::Windows::Forms::TextBox^  textBoxNumbers;
private: System::Windows::Forms::ListBox^  listBoxNumbers;
private: System::Windows::Forms::Button^  buttonGetNumber;
private: System::Windows::Forms::CheckBox^  checkBoxUseAllNumbers;
private: System::Windows::Forms::Button^  buttonAddIntoTeam;
private: System::Windows::Forms::Button^  buttonParseNewCompetitor;

private: System::Windows::Forms::Button^  buttonSetRegExp;
private: System::Windows::Forms::Button^  buttonSetTo;



private: static String^ replaceFrom = String::Empty;
private: static String^ replaceTo = String::Empty;
private: System::Windows::Forms::Button^  buttonSearchSaveAs;

private: System::Windows::Forms::TextBox^  textBoxSearchSaveAs;
private: System::Windows::Forms::Button^  buttonCurrentTime;
private: System::Windows::Forms::CheckBox^  checkBoxAutoShift;
private: System::Windows::Forms::Button^  buttonCheckDoubleNames;
private: System::Windows::Forms::Button^  buttonCheckMail;











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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->listBoxGroups = (gcnew System::Windows::Forms::ListBox());
			this->buttonAddGroup = (gcnew System::Windows::Forms::Button());
			this->buttonRemoveGroup = (gcnew System::Windows::Forms::Button());
			this->textBoxAddGroup = (gcnew System::Windows::Forms::TextBox());
			this->buttonSaveToFile = (gcnew System::Windows::Forms::Button());
			this->comboBoxGroup = (gcnew System::Windows::Forms::ComboBox());
			this->textBoxStartNumber = (gcnew System::Windows::Forms::TextBox());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxYearOfBirth = (gcnew System::Windows::Forms::TextBox());
			this->labelGroups = (gcnew System::Windows::Forms::Label());
			this->labelName = (gcnew System::Windows::Forms::Label());
			this->labelGroup = (gcnew System::Windows::Forms::Label());
			this->labelYearOfBirth = (gcnew System::Windows::Forms::Label());
			this->textBoxStageNumber = (gcnew System::Windows::Forms::TextBox());
			this->labelAddLaps = (gcnew System::Windows::Forms::Label());
			this->textBoxAddLaps = (gcnew System::Windows::Forms::TextBox());
			this->labelTeam = (gcnew System::Windows::Forms::Label());
			this->labelCity = (gcnew System::Windows::Forms::Label());
			this->textBoxTeam = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCity = (gcnew System::Windows::Forms::TextBox());
			this->listBoxCompetitorsListOpen = (gcnew System::Windows::Forms::ListBox());
			this->listBoxCompetitorsListSaveAs = (gcnew System::Windows::Forms::ListBox());
			this->buttonCompetitorsListOpen = (gcnew System::Windows::Forms::Button());
			this->buttonCompetitorsListSaveAs = (gcnew System::Windows::Forms::Button());
			this->textBoxSearch = (gcnew System::Windows::Forms::TextBox());
			this->buttonSearch = (gcnew System::Windows::Forms::Button());
			this->buttonCompetitorsListEdit = (gcnew System::Windows::Forms::Button());
			this->buttonCompetitorsDelete = (gcnew System::Windows::Forms::Button());
			this->buttonCometitorsOpenEdit = (gcnew System::Windows::Forms::Button());
			this->buttonOpenToStartProtocol = (gcnew System::Windows::Forms::Button());
			this->labelErrorMessage = (gcnew System::Windows::Forms::Label());
			this->buttonAllToStartProtocol = (gcnew System::Windows::Forms::Button());
			this->buttonSaveBackUp = (gcnew System::Windows::Forms::Button());
			this->buttonLoadBackup = (gcnew System::Windows::Forms::Button());
			this->labelComment = (gcnew System::Windows::Forms::Label());
			this->textBoxComment = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTimeShift = (gcnew System::Windows::Forms::TextBox());
			this->checkBoxStageNumber = (gcnew System::Windows::Forms::CheckBox());
			this->buttonAutoUpdateDelayFromStart = (gcnew System::Windows::Forms::Button());
			this->textBoxOneNumberDelay = (gcnew System::Windows::Forms::TextBox());
			this->buttonClearDelayFromGroupStart = (gcnew System::Windows::Forms::Button());
			this->buttonSaveConfiguration = (gcnew System::Windows::Forms::Button());
			this->textBoxFirstNumber = (gcnew System::Windows::Forms::TextBox());
			this->buttonSaveStart = (gcnew System::Windows::Forms::Button());
			this->buttonUpload = (gcnew System::Windows::Forms::Button());
			this->textBoxUploadAddress = (gcnew System::Windows::Forms::TextBox());
			this->labelNumbers = (gcnew System::Windows::Forms::Label());
			this->textBoxNumbers = (gcnew System::Windows::Forms::TextBox());
			this->listBoxNumbers = (gcnew System::Windows::Forms::ListBox());
			this->buttonGetNumber = (gcnew System::Windows::Forms::Button());
			this->checkBoxUseAllNumbers = (gcnew System::Windows::Forms::CheckBox());
			this->buttonAddIntoTeam = (gcnew System::Windows::Forms::Button());
			this->buttonParseNewCompetitor = (gcnew System::Windows::Forms::Button());
			this->buttonSetRegExp = (gcnew System::Windows::Forms::Button());
			this->buttonSetTo = (gcnew System::Windows::Forms::Button());
			this->buttonSearchSaveAs = (gcnew System::Windows::Forms::Button());
			this->textBoxSearchSaveAs = (gcnew System::Windows::Forms::TextBox());
			this->buttonCurrentTime = (gcnew System::Windows::Forms::Button());
			this->checkBoxAutoShift = (gcnew System::Windows::Forms::CheckBox());
			this->buttonCheckDoubleNames = (gcnew System::Windows::Forms::Button());
			this->buttonCheckMail = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listBoxGroups
			// 
			this->listBoxGroups->FormattingEnabled = true;
			this->listBoxGroups->Location = System::Drawing::Point(384, 57);
			this->listBoxGroups->Name = L"listBoxGroups";
			this->listBoxGroups->Size = System::Drawing::Size(211, 69);
			this->listBoxGroups->TabIndex = 10;
			// 
			// buttonAddGroup
			// 
			this->buttonAddGroup->Location = System::Drawing::Point(601, 31);
			this->buttonAddGroup->Name = L"buttonAddGroup";
			this->buttonAddGroup->Size = System::Drawing::Size(75, 23);
			this->buttonAddGroup->TabIndex = 9;
			this->buttonAddGroup->Text = L"Add Group";
			this->buttonAddGroup->UseVisualStyleBackColor = true;
			this->buttonAddGroup->Click += gcnew System::EventHandler(this, &Form1::buttonAddGroup_Click);
			// 
			// buttonRemoveGroup
			// 
			this->buttonRemoveGroup->Location = System::Drawing::Point(601, 57);
			this->buttonRemoveGroup->Name = L"buttonRemoveGroup";
			this->buttonRemoveGroup->Size = System::Drawing::Size(75, 23);
			this->buttonRemoveGroup->TabIndex = 11;
			this->buttonRemoveGroup->Text = L"Remove Group";
			this->buttonRemoveGroup->UseVisualStyleBackColor = true;
			this->buttonRemoveGroup->Click += gcnew System::EventHandler(this, &Form1::buttonRemoveGroup_Click);
			// 
			// textBoxAddGroup
			// 
			this->textBoxAddGroup->Location = System::Drawing::Point(384, 33);
			this->textBoxAddGroup->Name = L"textBoxAddGroup";
			this->textBoxAddGroup->Size = System::Drawing::Size(154, 20);
			this->textBoxAddGroup->TabIndex = 7;
			// 
			// buttonSaveToFile
			// 
			this->buttonSaveToFile->Location = System::Drawing::Point(601, 211);
			this->buttonSaveToFile->Name = L"buttonSaveToFile";
			this->buttonSaveToFile->Size = System::Drawing::Size(75, 23);
			this->buttonSaveToFile->TabIndex = 18;
			this->buttonSaveToFile->Text = L"Register";
			this->buttonSaveToFile->UseVisualStyleBackColor = true;
			this->buttonSaveToFile->Click += gcnew System::EventHandler(this, &Form1::buttonSaveToFile_Click);
			// 
			// comboBoxGroup
			// 
			this->comboBoxGroup->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxGroup->FormattingEnabled = true;
			this->comboBoxGroup->Location = System::Drawing::Point(317, 158);
			this->comboBoxGroup->Name = L"comboBoxGroup";
			this->comboBoxGroup->Size = System::Drawing::Size(359, 21);
			this->comboBoxGroup->TabIndex = 13;
			// 
			// textBoxStartNumber
			// 
			this->textBoxStartNumber->Location = System::Drawing::Point(323, 132);
			this->textBoxStartNumber->Name = L"textBoxStartNumber";
			this->textBoxStartNumber->Size = System::Drawing::Size(50, 20);
			this->textBoxStartNumber->TabIndex = 12;
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(414, 132);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(262, 20);
			this->textBoxName->TabIndex = 14;
			// 
			// textBoxYearOfBirth
			// 
			this->textBoxYearOfBirth->Location = System::Drawing::Point(317, 185);
			this->textBoxYearOfBirth->Name = L"textBoxYearOfBirth";
			this->textBoxYearOfBirth->Size = System::Drawing::Size(78, 20);
			this->textBoxYearOfBirth->TabIndex = 15;
			// 
			// labelGroups
			// 
			this->labelGroups->AutoSize = true;
			this->labelGroups->Location = System::Drawing::Point(381, 15);
			this->labelGroups->Name = L"labelGroups";
			this->labelGroups->Size = System::Drawing::Size(41, 13);
			this->labelGroups->TabIndex = 10;
			this->labelGroups->Text = L"Groups";
			// 
			// labelName
			// 
			this->labelName->AutoSize = true;
			this->labelName->Location = System::Drawing::Point(373, 135);
			this->labelName->Name = L"labelName";
			this->labelName->Size = System::Drawing::Size(35, 13);
			this->labelName->TabIndex = 12;
			this->labelName->Text = L"Name";
			// 
			// labelGroup
			// 
			this->labelGroup->AutoSize = true;
			this->labelGroup->Location = System::Drawing::Point(242, 161);
			this->labelGroup->Name = L"labelGroup";
			this->labelGroup->Size = System::Drawing::Size(36, 13);
			this->labelGroup->TabIndex = 13;
			this->labelGroup->Text = L"Group";
			// 
			// labelYearOfBirth
			// 
			this->labelYearOfBirth->AutoSize = true;
			this->labelYearOfBirth->Location = System::Drawing::Point(242, 188);
			this->labelYearOfBirth->Name = L"labelYearOfBirth";
			this->labelYearOfBirth->Size = System::Drawing::Size(65, 13);
			this->labelYearOfBirth->TabIndex = 14;
			this->labelYearOfBirth->Text = L"Year of Birth";
			// 
			// textBoxStageNumber
			// 
			this->textBoxStageNumber->Location = System::Drawing::Point(509, 211);
			this->textBoxStageNumber->Name = L"textBoxStageNumber";
			this->textBoxStageNumber->ReadOnly = true;
			this->textBoxStageNumber->Size = System::Drawing::Size(86, 20);
			this->textBoxStageNumber->TabIndex = 25;
			this->textBoxStageNumber->Text = L"1";
			// 
			// labelAddLaps
			// 
			this->labelAddLaps->AutoSize = true;
			this->labelAddLaps->Location = System::Drawing::Point(541, 15);
			this->labelAddLaps->Name = L"labelAddLaps";
			this->labelAddLaps->Size = System::Drawing::Size(30, 13);
			this->labelAddLaps->TabIndex = 22;
			this->labelAddLaps->Text = L"Laps";
			// 
			// textBoxAddLaps
			// 
			this->textBoxAddLaps->Location = System::Drawing::Point(544, 33);
			this->textBoxAddLaps->Name = L"textBoxAddLaps";
			this->textBoxAddLaps->Size = System::Drawing::Size(51, 20);
			this->textBoxAddLaps->TabIndex = 8;
			// 
			// labelTeam
			// 
			this->labelTeam->AutoSize = true;
			this->labelTeam->Location = System::Drawing::Point(401, 188);
			this->labelTeam->Name = L"labelTeam";
			this->labelTeam->Size = System::Drawing::Size(34, 13);
			this->labelTeam->TabIndex = 24;
			this->labelTeam->Text = L"Team";
			// 
			// labelCity
			// 
			this->labelCity->AutoSize = true;
			this->labelCity->Location = System::Drawing::Point(242, 214);
			this->labelCity->Name = L"labelCity";
			this->labelCity->Size = System::Drawing::Size(24, 13);
			this->labelCity->TabIndex = 25;
			this->labelCity->Text = L"City";
			// 
			// textBoxTeam
			// 
			this->textBoxTeam->Location = System::Drawing::Point(441, 185);
			this->textBoxTeam->Name = L"textBoxTeam";
			this->textBoxTeam->Size = System::Drawing::Size(236, 20);
			this->textBoxTeam->TabIndex = 16;
			// 
			// textBoxCity
			// 
			this->textBoxCity->Location = System::Drawing::Point(317, 211);
			this->textBoxCity->Name = L"textBoxCity";
			this->textBoxCity->Size = System::Drawing::Size(105, 20);
			this->textBoxCity->TabIndex = 17;
			// 
			// listBoxCompetitorsListOpen
			// 
			this->listBoxCompetitorsListOpen->FormattingEnabled = true;
			this->listBoxCompetitorsListOpen->HorizontalScrollbar = true;
			this->listBoxCompetitorsListOpen->Location = System::Drawing::Point(12, 38);
			this->listBoxCompetitorsListOpen->Name = L"listBoxCompetitorsListOpen";
			this->listBoxCompetitorsListOpen->Size = System::Drawing::Size(224, 238);
			this->listBoxCompetitorsListOpen->TabIndex = 3;
			// 
			// listBoxCompetitorsListSaveAs
			// 
			this->listBoxCompetitorsListSaveAs->FormattingEnabled = true;
			this->listBoxCompetitorsListSaveAs->HorizontalScrollbar = true;
			this->listBoxCompetitorsListSaveAs->Location = System::Drawing::Point(683, 36);
			this->listBoxCompetitorsListSaveAs->Name = L"listBoxCompetitorsListSaveAs";
			this->listBoxCompetitorsListSaveAs->Size = System::Drawing::Size(236, 238);
			this->listBoxCompetitorsListSaveAs->TabIndex = 21;
			// 
			// buttonCompetitorsListOpen
			// 
			this->buttonCompetitorsListOpen->Location = System::Drawing::Point(242, 38);
			this->buttonCompetitorsListOpen->Name = L"buttonCompetitorsListOpen";
			this->buttonCompetitorsListOpen->Size = System::Drawing::Size(75, 23);
			this->buttonCompetitorsListOpen->TabIndex = 3;
			this->buttonCompetitorsListOpen->Text = L"Open";
			this->buttonCompetitorsListOpen->UseVisualStyleBackColor = true;
			this->buttonCompetitorsListOpen->Click += gcnew System::EventHandler(this, &Form1::buttonCompetitorsListOpen_Click);
			// 
			// buttonCompetitorsListSaveAs
			// 
			this->buttonCompetitorsListSaveAs->Location = System::Drawing::Point(789, 280);
			this->buttonCompetitorsListSaveAs->Name = L"buttonCompetitorsListSaveAs";
			this->buttonCompetitorsListSaveAs->Size = System::Drawing::Size(63, 23);
			this->buttonCompetitorsListSaveAs->TabIndex = 24;
			this->buttonCompetitorsListSaveAs->Text = L"Save as";
			this->buttonCompetitorsListSaveAs->UseVisualStyleBackColor = true;
			this->buttonCompetitorsListSaveAs->Click += gcnew System::EventHandler(this, &Form1::buttonCompetitorsListSaveAs_Click);
			// 
			// textBoxSearch
			// 
			this->textBoxSearch->Location = System::Drawing::Point(12, 12);
			this->textBoxSearch->Name = L"textBoxSearch";
			this->textBoxSearch->Size = System::Drawing::Size(224, 20);
			this->textBoxSearch->TabIndex = 1;
			this->textBoxSearch->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::textBoxSearch_KeyDown);
			// 
			// buttonSearch
			// 
			this->buttonSearch->Location = System::Drawing::Point(242, 10);
			this->buttonSearch->Name = L"buttonSearch";
			this->buttonSearch->Size = System::Drawing::Size(75, 23);
			this->buttonSearch->TabIndex = 2;
			this->buttonSearch->Text = L"Find";
			this->buttonSearch->UseVisualStyleBackColor = true;
			this->buttonSearch->Click += gcnew System::EventHandler(this, &Form1::buttonSearch_Click);
			// 
			// buttonCompetitorsListEdit
			// 
			this->buttonCompetitorsListEdit->Location = System::Drawing::Point(683, 280);
			this->buttonCompetitorsListEdit->Name = L"buttonCompetitorsListEdit";
			this->buttonCompetitorsListEdit->Size = System::Drawing::Size(47, 23);
			this->buttonCompetitorsListEdit->TabIndex = 22;
			this->buttonCompetitorsListEdit->Text = L"Edit";
			this->buttonCompetitorsListEdit->UseVisualStyleBackColor = true;
			this->buttonCompetitorsListEdit->Click += gcnew System::EventHandler(this, &Form1::buttonCompetitorsListEdit_Click);
			// 
			// buttonCompetitorsDelete
			// 
			this->buttonCompetitorsDelete->Location = System::Drawing::Point(736, 280);
			this->buttonCompetitorsDelete->Name = L"buttonCompetitorsDelete";
			this->buttonCompetitorsDelete->Size = System::Drawing::Size(47, 23);
			this->buttonCompetitorsDelete->TabIndex = 23;
			this->buttonCompetitorsDelete->Text = L"Delete";
			this->buttonCompetitorsDelete->UseVisualStyleBackColor = true;
			this->buttonCompetitorsDelete->Click += gcnew System::EventHandler(this, &Form1::buttonCompetitorsDelete_Click);
			// 
			// buttonCometitorsOpenEdit
			// 
			this->buttonCometitorsOpenEdit->Location = System::Drawing::Point(113, 280);
			this->buttonCometitorsOpenEdit->Name = L"buttonCometitorsOpenEdit";
			this->buttonCometitorsOpenEdit->Size = System::Drawing::Size(75, 23);
			this->buttonCometitorsOpenEdit->TabIndex = 5;
			this->buttonCometitorsOpenEdit->Text = L"Edit";
			this->buttonCometitorsOpenEdit->UseVisualStyleBackColor = true;
			this->buttonCometitorsOpenEdit->Click += gcnew System::EventHandler(this, &Form1::buttonCometitorsOpenEdit_Click);
			// 
			// buttonOpenToStartProtocol
			// 
			this->buttonOpenToStartProtocol->Location = System::Drawing::Point(12, 280);
			this->buttonOpenToStartProtocol->Name = L"buttonOpenToStartProtocol";
			this->buttonOpenToStartProtocol->Size = System::Drawing::Size(95, 23);
			this->buttonOpenToStartProtocol->TabIndex = 4;
			this->buttonOpenToStartProtocol->Text = L"To Start Protocol";
			this->buttonOpenToStartProtocol->UseVisualStyleBackColor = true;
			this->buttonOpenToStartProtocol->Click += gcnew System::EventHandler(this, &Form1::buttonOpenToStartProtocol_Click);
			// 
			// labelErrorMessage
			// 
			this->labelErrorMessage->AutoSize = true;
			this->labelErrorMessage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelErrorMessage->ForeColor = System::Drawing::Color::Red;
			this->labelErrorMessage->Location = System::Drawing::Point(238, 287);
			this->labelErrorMessage->Name = L"labelErrorMessage";
			this->labelErrorMessage->Size = System::Drawing::Size(251, 20);
			this->labelErrorMessage->TabIndex = 38;
			this->labelErrorMessage->Text = L"Double numbers in Result List!!!";
			this->labelErrorMessage->Visible = false;
			// 
			// buttonAllToStartProtocol
			// 
			this->buttonAllToStartProtocol->Location = System::Drawing::Point(113, 307);
			this->buttonAllToStartProtocol->Name = L"buttonAllToStartProtocol";
			this->buttonAllToStartProtocol->Size = System::Drawing::Size(122, 23);
			this->buttonAllToStartProtocol->TabIndex = 6;
			this->buttonAllToStartProtocol->Text = L"All To Start Protocol";
			this->buttonAllToStartProtocol->UseVisualStyleBackColor = true;
			this->buttonAllToStartProtocol->Click += gcnew System::EventHandler(this, &Form1::buttonAllToStartProtocol_Click);
			// 
			// buttonSaveBackUp
			// 
			this->buttonSaveBackUp->Location = System::Drawing::Point(588, 287);
			this->buttonSaveBackUp->Name = L"buttonSaveBackUp";
			this->buttonSaveBackUp->Size = System::Drawing::Size(88, 23);
			this->buttonSaveBackUp->TabIndex = 20;
			this->buttonSaveBackUp->Text = L"Save BackUp";
			this->buttonSaveBackUp->UseVisualStyleBackColor = true;
			this->buttonSaveBackUp->Click += gcnew System::EventHandler(this, &Form1::buttonBackUp_Click);
			// 
			// buttonLoadBackup
			// 
			this->buttonLoadBackup->Location = System::Drawing::Point(588, 261);
			this->buttonLoadBackup->Name = L"buttonLoadBackup";
			this->buttonLoadBackup->Size = System::Drawing::Size(89, 23);
			this->buttonLoadBackup->TabIndex = 19;
			this->buttonLoadBackup->Text = L"Load Backup";
			this->buttonLoadBackup->UseVisualStyleBackColor = true;
			this->buttonLoadBackup->Click += gcnew System::EventHandler(this, &Form1::buttonLoadBackup_Click);
			// 
			// labelComment
			// 
			this->labelComment->AutoSize = true;
			this->labelComment->Location = System::Drawing::Point(243, 244);
			this->labelComment->Name = L"labelComment";
			this->labelComment->Size = System::Drawing::Size(51, 13);
			this->labelComment->TabIndex = 40;
			this->labelComment->Text = L"Comment";
			// 
			// textBoxComment
			// 
			this->textBoxComment->Location = System::Drawing::Point(317, 238);
			this->textBoxComment->Name = L"textBoxComment";
			this->textBoxComment->Size = System::Drawing::Size(359, 20);
			this->textBoxComment->TabIndex = 41;
			// 
			// textBoxTimeShift
			// 
			this->textBoxTimeShift->Location = System::Drawing::Point(469, 263);
			this->textBoxTimeShift->Name = L"textBoxTimeShift";
			this->textBoxTimeShift->Size = System::Drawing::Size(113, 20);
			this->textBoxTimeShift->TabIndex = 43;
			this->textBoxTimeShift->Text = L"0 00:00:00.000";
			// 
			// checkBoxStageNumber
			// 
			this->checkBoxStageNumber->AutoSize = true;
			this->checkBoxStageNumber->Location = System::Drawing::Point(428, 213);
			this->checkBoxStageNumber->Name = L"checkBoxStageNumber";
			this->checkBoxStageNumber->Size = System::Drawing::Size(79, 17);
			this->checkBoxStageNumber->TabIndex = 44;
			this->checkBoxStageNumber->Text = L"Stage Num";
			this->checkBoxStageNumber->UseVisualStyleBackColor = true;
			this->checkBoxStageNumber->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBoxStageNumber_CheckedChanged);
			// 
			// buttonAutoUpdateDelayFromStart
			// 
			this->buttonAutoUpdateDelayFromStart->Location = System::Drawing::Point(311, 261);
			this->buttonAutoUpdateDelayFromStart->Name = L"buttonAutoUpdateDelayFromStart";
			this->buttonAutoUpdateDelayFromStart->Size = System::Drawing::Size(126, 23);
			this->buttonAutoUpdateDelayFromStart->TabIndex = 45;
			this->buttonAutoUpdateDelayFromStart->Text = L"AutoSetDelayFromStart";
			this->buttonAutoUpdateDelayFromStart->UseVisualStyleBackColor = true;
			this->buttonAutoUpdateDelayFromStart->Click += gcnew System::EventHandler(this, &Form1::buttonAutoUpdateDelayFromStart_Click);
			// 
			// textBoxOneNumberDelay
			// 
			this->textBoxOneNumberDelay->Location = System::Drawing::Point(242, 263);
			this->textBoxOneNumberDelay->Name = L"textBoxOneNumberDelay";
			this->textBoxOneNumberDelay->Size = System::Drawing::Size(26, 20);
			this->textBoxOneNumberDelay->TabIndex = 46;
			// 
			// buttonClearDelayFromGroupStart
			// 
			this->buttonClearDelayFromGroupStart->Location = System::Drawing::Point(443, 261);
			this->buttonClearDelayFromGroupStart->Name = L"buttonClearDelayFromGroupStart";
			this->buttonClearDelayFromGroupStart->Size = System::Drawing::Size(20, 23);
			this->buttonClearDelayFromGroupStart->TabIndex = 47;
			this->buttonClearDelayFromGroupStart->Text = L"X";
			this->buttonClearDelayFromGroupStart->UseVisualStyleBackColor = true;
			this->buttonClearDelayFromGroupStart->Click += gcnew System::EventHandler(this, &Form1::buttonClearDelayFromGroupStart_Click);
			// 
			// buttonSaveConfiguration
			// 
			this->buttonSaveConfiguration->Location = System::Drawing::Point(569, 310);
			this->buttonSaveConfiguration->Name = L"buttonSaveConfiguration";
			this->buttonSaveConfiguration->Size = System::Drawing::Size(107, 23);
			this->buttonSaveConfiguration->TabIndex = 48;
			this->buttonSaveConfiguration->Text = L"Save Configuration";
			this->buttonSaveConfiguration->UseVisualStyleBackColor = true;
			this->buttonSaveConfiguration->Click += gcnew System::EventHandler(this, &Form1::buttonSaveConfiguration_Click);
			// 
			// textBoxFirstNumber
			// 
			this->textBoxFirstNumber->Location = System::Drawing::Point(274, 263);
			this->textBoxFirstNumber->Name = L"textBoxFirstNumber";
			this->textBoxFirstNumber->Size = System::Drawing::Size(31, 20);
			this->textBoxFirstNumber->TabIndex = 49;
			this->textBoxFirstNumber->Text = L"1";
			// 
			// buttonSaveStart
			// 
			this->buttonSaveStart->Location = System::Drawing::Point(844, 309);
			this->buttonSaveStart->Name = L"buttonSaveStart";
			this->buttonSaveStart->Size = System::Drawing::Size(75, 23);
			this->buttonSaveStart->TabIndex = 50;
			this->buttonSaveStart->Text = L"Save";
			this->buttonSaveStart->UseVisualStyleBackColor = true;
			this->buttonSaveStart->Click += gcnew System::EventHandler(this, &Form1::buttonSaveStart_Click);
			// 
			// buttonUpload
			// 
			this->buttonUpload->Location = System::Drawing::Point(763, 309);
			this->buttonUpload->Name = L"buttonUpload";
			this->buttonUpload->Size = System::Drawing::Size(75, 23);
			this->buttonUpload->TabIndex = 51;
			this->buttonUpload->Text = L"Upload";
			this->buttonUpload->UseVisualStyleBackColor = true;
			this->buttonUpload->Click += gcnew System::EventHandler(this, &Form1::buttonUpload_Click);
			// 
			// textBoxUploadAddress
			// 
			this->textBoxUploadAddress->Location = System::Drawing::Point(682, 310);
			this->textBoxUploadAddress->Name = L"textBoxUploadAddress";
			this->textBoxUploadAddress->Size = System::Drawing::Size(76, 20);
			this->textBoxUploadAddress->TabIndex = 52;
			// 
			// labelNumbers
			// 
			this->labelNumbers->AutoSize = true;
			this->labelNumbers->Location = System::Drawing::Point(320, 15);
			this->labelNumbers->Name = L"labelNumbers";
			this->labelNumbers->Size = System::Drawing::Size(49, 13);
			this->labelNumbers->TabIndex = 53;
			this->labelNumbers->Text = L"Numbers";
			// 
			// textBoxNumbers
			// 
			this->textBoxNumbers->Location = System::Drawing::Point(324, 33);
			this->textBoxNumbers->Name = L"textBoxNumbers";
			this->textBoxNumbers->Size = System::Drawing::Size(54, 20);
			this->textBoxNumbers->TabIndex = 54;
			this->textBoxNumbers->Text = L"1-200";
			// 
			// listBoxNumbers
			// 
			this->listBoxNumbers->FormattingEnabled = true;
			this->listBoxNumbers->Location = System::Drawing::Point(323, 57);
			this->listBoxNumbers->Name = L"listBoxNumbers";
			this->listBoxNumbers->Size = System::Drawing::Size(51, 69);
			this->listBoxNumbers->TabIndex = 55;
			// 
			// buttonGetNumber
			// 
			this->buttonGetNumber->Location = System::Drawing::Point(242, 130);
			this->buttonGetNumber->Name = L"buttonGetNumber";
			this->buttonGetNumber->Size = System::Drawing::Size(75, 23);
			this->buttonGetNumber->TabIndex = 56;
			this->buttonGetNumber->Text = L"Get Number";
			this->buttonGetNumber->UseVisualStyleBackColor = true;
			this->buttonGetNumber->Click += gcnew System::EventHandler(this, &Form1::buttonGetNumber_Click);
			// 
			// checkBoxUseAllNumbers
			// 
			this->checkBoxUseAllNumbers->AutoSize = true;
			this->checkBoxUseAllNumbers->Location = System::Drawing::Point(242, 108);
			this->checkBoxUseAllNumbers->Name = L"checkBoxUseAllNumbers";
			this->checkBoxUseAllNumbers->Size = System::Drawing::Size(73, 17);
			this->checkBoxUseAllNumbers->TabIndex = 57;
			this->checkBoxUseAllNumbers->Text = L"Use All ¹";
			this->checkBoxUseAllNumbers->UseVisualStyleBackColor = true;
			// 
			// buttonAddIntoTeam
			// 
			this->buttonAddIntoTeam->Location = System::Drawing::Point(12, 307);
			this->buttonAddIntoTeam->Name = L"buttonAddIntoTeam";
			this->buttonAddIntoTeam->Size = System::Drawing::Size(95, 23);
			this->buttonAddIntoTeam->TabIndex = 58;
			this->buttonAddIntoTeam->Text = L"Add into Team";
			this->buttonAddIntoTeam->UseVisualStyleBackColor = true;
			this->buttonAddIntoTeam->Click += gcnew System::EventHandler(this, &Form1::buttonAddIntoTeam_Click);
			// 
			// buttonParseNewCompetitor
			// 
			this->buttonParseNewCompetitor->Location = System::Drawing::Point(274, 309);
			this->buttonParseNewCompetitor->Name = L"buttonParseNewCompetitor";
			this->buttonParseNewCompetitor->Size = System::Drawing::Size(124, 23);
			this->buttonParseNewCompetitor->TabIndex = 59;
			this->buttonParseNewCompetitor->Text = L"Parse New Competitor";
			this->buttonParseNewCompetitor->UseVisualStyleBackColor = true;
			this->buttonParseNewCompetitor->Click += gcnew System::EventHandler(this, &Form1::buttonParseNewCompetitor_Click);
			// 
			// buttonSetRegExp
			// 
			this->buttonSetRegExp->Location = System::Drawing::Point(404, 309);
			this->buttonSetRegExp->Name = L"buttonSetRegExp";
			this->buttonSetRegExp->Size = System::Drawing::Size(75, 23);
			this->buttonSetRegExp->TabIndex = 60;
			this->buttonSetRegExp->Text = L"Set RegExp";
			this->buttonSetRegExp->UseVisualStyleBackColor = true;
			this->buttonSetRegExp->Click += gcnew System::EventHandler(this, &Form1::buttonSetRegExp_Click);
			// 
			// buttonSetTo
			// 
			this->buttonSetTo->Location = System::Drawing::Point(485, 309);
			this->buttonSetTo->Name = L"buttonSetTo";
			this->buttonSetTo->Size = System::Drawing::Size(53, 23);
			this->buttonSetTo->TabIndex = 61;
			this->buttonSetTo->Text = L"Set To";
			this->buttonSetTo->UseVisualStyleBackColor = true;
			this->buttonSetTo->Click += gcnew System::EventHandler(this, &Form1::buttonSetTo_Click);
			// 
			// buttonSearchSaveAs
			// 
			this->buttonSearchSaveAs->Location = System::Drawing::Point(844, 10);
			this->buttonSearchSaveAs->Name = L"buttonSearchSaveAs";
			this->buttonSearchSaveAs->Size = System::Drawing::Size(75, 23);
			this->buttonSearchSaveAs->TabIndex = 62;
			this->buttonSearchSaveAs->Text = L"Find";
			this->buttonSearchSaveAs->UseVisualStyleBackColor = true;
			this->buttonSearchSaveAs->Click += gcnew System::EventHandler(this, &Form1::buttonSearchSaveAs_Click);
			// 
			// textBoxSearchSaveAs
			// 
			this->textBoxSearchSaveAs->Location = System::Drawing::Point(682, 12);
			this->textBoxSearchSaveAs->Name = L"textBoxSearchSaveAs";
			this->textBoxSearchSaveAs->Size = System::Drawing::Size(156, 20);
			this->textBoxSearchSaveAs->TabIndex = 63;
			this->textBoxSearchSaveAs->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::textBoxSearchSaveAs_KeyDown);
			// 
			// buttonCurrentTime
			// 
			this->buttonCurrentTime->Location = System::Drawing::Point(488, 287);
			this->buttonCurrentTime->Name = L"buttonCurrentTime";
			this->buttonCurrentTime->Size = System::Drawing::Size(75, 23);
			this->buttonCurrentTime->TabIndex = 64;
			this->buttonCurrentTime->Text = L"Current Time";
			this->buttonCurrentTime->UseVisualStyleBackColor = true;
			this->buttonCurrentTime->Click += gcnew System::EventHandler(this, &Form1::buttonCurrentTime_Click);
			// 
			// checkBoxAutoShift
			// 
			this->checkBoxAutoShift->AutoSize = true;
			this->checkBoxAutoShift->Location = System::Drawing::Point(242, 85);
			this->checkBoxAutoShift->Name = L"checkBoxAutoShift";
			this->checkBoxAutoShift->Size = System::Drawing::Size(69, 17);
			this->checkBoxAutoShift->TabIndex = 65;
			this->checkBoxAutoShift->Text = L"AutoShift";
			this->checkBoxAutoShift->UseVisualStyleBackColor = true;
			// 
			// buttonCheckDoubleNames
			// 
			this->buttonCheckDoubleNames->Location = System::Drawing::Point(858, 280);
			this->buttonCheckDoubleNames->Name = L"buttonCheckDoubleNames";
			this->buttonCheckDoubleNames->Size = System::Drawing::Size(61, 23);
			this->buttonCheckDoubleNames->TabIndex = 66;
			this->buttonCheckDoubleNames->Text = L"Doubles\?";
			this->buttonCheckDoubleNames->UseVisualStyleBackColor = true;
			this->buttonCheckDoubleNames->Click += gcnew System::EventHandler(this, &Form1::buttonCheckDoubleNames_Click);
			// 
			// buttonCheckMail
			// 
			this->buttonCheckMail->Location = System::Drawing::Point(628, 85);
			this->buttonCheckMail->Name = L"buttonCheckMail";
			this->buttonCheckMail->Size = System::Drawing::Size(49, 39);
			this->buttonCheckMail->TabIndex = 67;
			this->buttonCheckMail->Text = L"Check Mail >";
			this->buttonCheckMail->UseVisualStyleBackColor = true;
			this->buttonCheckMail->Click += gcnew System::EventHandler(this, &Form1::buttonCheckMail_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(931, 338);
			this->Controls->Add(this->buttonCheckMail);
			this->Controls->Add(this->buttonCheckDoubleNames);
			this->Controls->Add(this->checkBoxAutoShift);
			this->Controls->Add(this->buttonCurrentTime);
			this->Controls->Add(this->textBoxSearchSaveAs);
			this->Controls->Add(this->buttonSearchSaveAs);
			this->Controls->Add(this->buttonSetTo);
			this->Controls->Add(this->buttonSetRegExp);
			this->Controls->Add(this->buttonParseNewCompetitor);
			this->Controls->Add(this->buttonAddIntoTeam);
			this->Controls->Add(this->checkBoxUseAllNumbers);
			this->Controls->Add(this->buttonGetNumber);
			this->Controls->Add(this->listBoxNumbers);
			this->Controls->Add(this->textBoxNumbers);
			this->Controls->Add(this->labelNumbers);
			this->Controls->Add(this->textBoxUploadAddress);
			this->Controls->Add(this->buttonUpload);
			this->Controls->Add(this->buttonSaveStart);
			this->Controls->Add(this->textBoxFirstNumber);
			this->Controls->Add(this->buttonSaveConfiguration);
			this->Controls->Add(this->buttonClearDelayFromGroupStart);
			this->Controls->Add(this->textBoxOneNumberDelay);
			this->Controls->Add(this->buttonAutoUpdateDelayFromStart);
			this->Controls->Add(this->checkBoxStageNumber);
			this->Controls->Add(this->textBoxTimeShift);
			this->Controls->Add(this->textBoxComment);
			this->Controls->Add(this->labelComment);
			this->Controls->Add(this->buttonLoadBackup);
			this->Controls->Add(this->buttonSaveBackUp);
			this->Controls->Add(this->buttonAllToStartProtocol);
			this->Controls->Add(this->labelErrorMessage);
			this->Controls->Add(this->buttonOpenToStartProtocol);
			this->Controls->Add(this->buttonCometitorsOpenEdit);
			this->Controls->Add(this->buttonCompetitorsDelete);
			this->Controls->Add(this->buttonCompetitorsListEdit);
			this->Controls->Add(this->buttonSearch);
			this->Controls->Add(this->textBoxSearch);
			this->Controls->Add(this->buttonCompetitorsListSaveAs);
			this->Controls->Add(this->buttonCompetitorsListOpen);
			this->Controls->Add(this->listBoxCompetitorsListSaveAs);
			this->Controls->Add(this->listBoxCompetitorsListOpen);
			this->Controls->Add(this->textBoxCity);
			this->Controls->Add(this->textBoxTeam);
			this->Controls->Add(this->labelCity);
			this->Controls->Add(this->labelTeam);
			this->Controls->Add(this->textBoxAddLaps);
			this->Controls->Add(this->labelAddLaps);
			this->Controls->Add(this->textBoxStageNumber);
			this->Controls->Add(this->labelYearOfBirth);
			this->Controls->Add(this->labelGroup);
			this->Controls->Add(this->labelName);
			this->Controls->Add(this->labelGroups);
			this->Controls->Add(this->textBoxYearOfBirth);
			this->Controls->Add(this->textBoxName);
			this->Controls->Add(this->textBoxStartNumber);
			this->Controls->Add(this->comboBoxGroup);
			this->Controls->Add(this->buttonSaveToFile);
			this->Controls->Add(this->textBoxAddGroup);
			this->Controls->Add(this->buttonRemoveGroup);
			this->Controls->Add(this->buttonAddGroup);
			this->Controls->Add(this->listBoxGroups);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"Start Protocol Maker(pulse-sports.ru)";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void saveAllDataToHDD(System::Object^  sender, System::EventArgs^  e) {
				 chechDoubleNumbersInSaveAsList(0,false);
				 buttonBackUp_Click(sender,e);
				 buttonSaveConfiguration_Click(sender,e);
				 if(startProtocolFileName != String::Empty) {
					 buttonSaveStart_Click(sender, e);
				 }

		}
	private: System::Void buttonSaveToFile_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(textBoxName->Text!="" && textBoxStartNumber->Text!=""&&comboBoxGroup->Text!="") {
					 if(writeToStartProtocolFile(textBoxStartNumber->Text,textBoxName->Text,comboBoxGroup->Text,textBoxStageNumber->Text,textBoxYearOfBirth->Text,textBoxTeam->Text,textBoxCity->Text, textBoxComment->Text, textBoxTimeShift->Text)) {
					 textBoxName->Text = "";
					 textBoxStartNumber->Text = "";
					 }
				 }
				 saveAllDataToHDD(sender, e);

			 }

			 			 private: char* getCharArrayFromString(String^ inputString) {
							char* pString = (char*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(inputString).ToPointer();
							return pString;
						 }

/*private: System::Void checkBoxDisableGroupsAndOutputFile_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(checkBoxDisableGroupsAndOutputFile->Checked) {
				 textBoxOutputFile->Enabled = false;
				 buttonSelectFile->Enabled = false;
				 textBoxAddGroup->Enabled = false;
				 buttonAddGroup->Enabled = false;
				 buttonRemoveGroup->Enabled = false;
				 listBoxGroups->Enabled = false;
			 } else {
				 textBoxOutputFile->Enabled = true;
				 buttonSelectFile->Enabled = true;
				 textBoxAddGroup->Enabled = true;
				 buttonAddGroup->Enabled = true;
				 buttonRemoveGroup->Enabled = true;
				 listBoxGroups->Enabled = true;
			 }
		 }*/
/*private: System::Void buttonSelectFile_Click(System::Object^  sender, System::EventArgs^  e) {
			 SaveFileDialog^ groupFileDialog = gcnew SaveFileDialog();
			 groupFileDialog->RestoreDirectory = true;
			 groupFileDialog->ShowDialog();
			 if(groupFileDialog->FileName != String::Empty) {
				 textBoxOutputFile->Text = groupFileDialog->FileName;
					 if(outPutProtocolFile!=NULL) {
						 fclose(outPutProtocolFile);
					 }
			 if((outPutProtocolFile = fopen(getCharArrayFromString(textBoxOutputFile->Text),"w+"))==NULL) {
				 MessageBox::Show("Unable to open file: \"" + textBoxOutputFile->Text + "\".");
			 }
				 }

		 }*/
		 private: System::Void buttonAddGroup_Click(System::Object^  sender, System::EventArgs^  e) {
					  if(textBoxAddGroup->Text!="" && textBoxAddLaps->Text!="") {
						  listBoxNumbers->Items->Add(textBoxNumbers->Text);
						  listBoxGroups->Items->Add(textBoxAddGroup->Text+"#"+textBoxAddLaps->Text);
						  comboBoxGroup->Items->Add(textBoxAddGroup->Text+"#"+textBoxAddLaps->Text);
						  textBoxAddGroup->Text = "";
						  textBoxAddLaps->Text = "";
					  }
				  }
private: System::Void buttonRemoveGroup_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(listBoxGroups->SelectedIndex != -1) {
					 listBoxNumbers->Items->RemoveAt(listBoxGroups->SelectedIndex);
				 }
				 comboBoxGroup->Items->Remove(listBoxGroups->SelectedItem);
				 listBoxGroups->Items->Remove(listBoxGroups->SelectedItem);
		 }

		 private: bool writeToStartProtocolFile(String^ numberToProtocol, String^ nameToProtocol, String^ groupToProtocol,String^ stageNumber, String^ yearOfBirth, String^ team, String^ city, String^ comment, String^ timeShift) {
					  listBoxCompetitorsListSaveAs->Items->Add(numberToProtocol + 
						  gcnew String("#") + nameToProtocol + gcnew String("#") + 
						  groupToProtocol + gcnew String("#") + stageNumber + 
						  gcnew String("#") + yearOfBirth + gcnew String("#") + 
						  team + gcnew String("#") + city + gcnew String("#") + 
						  comment + gcnew String("#") + timeShift + gcnew String("#"));
				 return true;
				  }
		 private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			 if(MessageBox::Show("Are you sure to exit?","Warning!",MessageBoxButtons::YesNo)==System::Windows::Forms::DialogResult::Yes) {
//					  if(outPutProtocolFile!=NULL) {
//						  fclose(outPutProtocolFile);
//					  }
					  saveBackupFile(gcnew String("data"), gcnew String("spm_backup.txt"));
			 } else {
				 e->Cancel = true;
			 }
				  }
private: System::Void buttonCompetitorsListOpen_Click(System::Object^  sender, System::EventArgs^  e) {
			 OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
			 openFileDialog->RestoreDirectory = true;
			 openFileDialog->ShowDialog();
			 if(openFileDialog->FileName != String::Empty) {
				 char* tempString = new char[numberOfCharsInString];
				 FILE* openCompetitorsList;
				 if((openCompetitorsList = fopen(getCharArrayFromString(openFileDialog->FileName),"r+"))==NULL) {
					 MessageBox::Show("Unable to open file: \"" + openFileDialog->FileName + "\".");
				 } else {
					 listBoxCompetitorsListOpen->Items->Clear();
					 while (readStringFromFile(openCompetitorsList, tempString)!=EOF) {
						 listBoxCompetitorsListOpen->Items->Add(gcnew String(tempString));
					 }
					 fclose(openCompetitorsList);
				 }
				 buttonSearch->Text = gcnew String("Find (") + listBoxCompetitorsListOpen->Items->Count.ToString() + gcnew String(")");
			 delete tempString;
			 }
		 }
				  public: int readStringFromFile(FILE* fileFrom, char* stringTo) {
					  char tempChar;
					  int fscanfResult;
					  for(int i = 0;i<numberOfCharsInString;i++) {
						  fscanfResult = fscanf(fileFrom,"%c", &tempChar);
						  if(fscanfResult == EOF) {
							  if(i==0) {
								return EOF;
							  } else {
								  stringTo[i] = 0;
								  return 0;
							  }
						  }
						  if(tempChar == '\n') {
								  stringTo[i] = 0;
								  return 0;
						  }
						  stringTo[i] = tempChar;
						  }
					  return EOF;
				  }


private: System::Void buttonOpenToStartProtocol_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(listBoxCompetitorsListOpen->SelectedItems->Count==1) {
				listBoxCompetitorsListSaveAs->Items->Add(listBoxCompetitorsListOpen->SelectedItem);
				}
			 chechDoubleNumbersInSaveAsList(0,false);
		 }

		 private: System::Void parseInputString(String^ inputString,System::Object^  sender, System::EventArgs^  e) {

				 textBoxStartNumber->Text = getFieldByNumber(inputString, 0, '#', true);
				 textBoxName->Text = getFieldByNumber(inputString, 1, '#', false);
				 if(!comboBoxGroup->Items->Contains(getFieldByNumber(inputString, 2, '#', false) + 
					 gcnew String("#") + getFieldByNumber(inputString, 3, '#', false))) {
					 listBoxGroups->Items->Add(getFieldByNumber(inputString, 2, '#', false) + 
						 gcnew String("#") + 
						 getFieldByNumber(inputString, 3, '#', false));
					 comboBoxGroup->Items->Add(getFieldByNumber(inputString, 2, '#', false) + 
						 gcnew String("#") + 
						 getFieldByNumber(inputString, 3, '#', false));
					 listBoxNumbers->Items->Add(gcnew String("1-10000"));
				 }
				 comboBoxGroup->Text = getFieldByNumber(inputString, 2, '#', false) + 
					 gcnew String("#") + getFieldByNumber(inputString, 3, '#', false);
				 textBoxYearOfBirth->Text = getFieldByNumber(inputString, 5, '#', false);
				 textBoxTeam->Text = getFieldByNumber(inputString, 6, '#', false);
				 textBoxCity->Text = getFieldByNumber(inputString, 7, '#', false);
				 textBoxStageNumber->Text = getFieldByNumber(inputString, 4, '#', false);
				 if(getNumberOfFields(inputString,'#')>8) {
					textBoxComment->Text = getFieldByNumber(inputString, 8, '#', false);
				 } else {
					 textBoxComment->Text = "";
				 }
				 if(checkBoxAutoShift->Checked) {
					 buttonGetNumber_Click(sender,e);
					 buttonAutoUpdateDelayFromStart_Click(sender,e);
				 } else {
					 if(getNumberOfFields(inputString,'#')>9) {
						textBoxTimeShift->Text = getFieldByNumber(inputString, 9, '#', false);
					 } else {
						 textBoxComment->Text = "0 00:00:00.00";
					 }
				 }

				  }
private: System::Void buttonCometitorsOpenEdit_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(listBoxCompetitorsListOpen->SelectedItems->Count==1) {
				 parseInputString((String^)listBoxCompetitorsListOpen->SelectedItem,sender,e);
			 }
		 }

		 static String^ getFieldByNumber(String^ inputString, int fieldNumber, char parser, bool resetMessageBox) {
				 bool static showMessageBox = true;
				 if(resetMessageBox) {
					 showMessageBox = true;
				 }
				 if(fieldNumber >= getNumberOfFields(inputString,parser)) {
					 if(showMessageBox) {
					 MessageBox::Show("ERROR: Trying to get field \""+fieldNumber.ToString()+"\" that is more than number of fields in string \""+inputString+"\", using parser \"#\".");
					 showMessageBox = false;
					 }
					 return String::Empty;
				 }
				 return (String^)inputString->Split(parser)->GetValue(fieldNumber);
		 }
		 static int getNumberOfFields(String^ inputString, char parser) {
			 return inputString->Split(parser)->Length - 1;

		 }
			 static int getNumberOfFields(char* inputString, char parser) {
				 int i = 0;
				 int numberOfFields = 0;
				 while(inputString[i]!=0) {
					 if(inputString[i]==parser) {
						 numberOfFields++;
					 }
					 i++;
				 }
				 return numberOfFields;
			 }
			 static char* getFieldByNumber(char* inputString,int fieldNubmer, char parser, bool resetMessageBox) {
				 bool static showMessageBox = true;
				 if(resetMessageBox) {
					 showMessageBox = true;
				 }
				 int fieldCounter = 0;
				 int stringStart;
				 int stringFinish;
				 char* fieldValue;
				 int i = 0;
				 if(fieldNubmer >= getNumberOfFields(inputString,parser)) {
					 if(showMessageBox) {
					 MessageBox::Show("ERROR: Trying to get field \""+fieldNubmer.ToString()+"\" that is more than number of fields in string \""+(gcnew String(inputString))+"\", using parser \"#\".");
					 showMessageBox = false;
					 }
					fieldValue = new char[1];
					fieldValue[0] = 0;
					return fieldValue;
				 }
				 while(inputString[i]!=0) {
					 if(fieldNubmer==0) {
						 stringStart = 0;
						 break;
					 }
					 if(inputString[i]==parser) {
						 fieldCounter++;
						 if(fieldCounter == fieldNubmer) {
							 stringStart = i+1;
							 i++;
							 break;
						 }
					 }
					 i++;
				 }
				 while(inputString[i]!=0) {
					 if(inputString[i]==parser) {
						 stringFinish = i-1;
						 break;
					 }
					 i++;
				 }
				 fieldValue = new char[stringFinish-stringStart+2];
				 for(int j = 0;j<stringFinish-stringStart+1;j++) {
					 fieldValue[j] = inputString[stringStart+j];
				 }
				 fieldValue[stringFinish-stringStart+1] =0;
				 return fieldValue;
			 }


private: System::Void buttonCompetitorsListEdit_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(listBoxCompetitorsListSaveAs->SelectedItems->Count==1) {
				 parseInputString((String^)listBoxCompetitorsListSaveAs->SelectedItem,sender,e);
			 }
			 saveAllDataToHDD(sender, e);
		 }
private: System::Void buttonCompetitorsDelete_Click(System::Object^  sender, System::EventArgs^  e) {
			 listBoxCompetitorsListSaveAs->Items->Remove(listBoxCompetitorsListSaveAs->SelectedItem);
			 saveAllDataToHDD(sender, e);
		 }
private: System::Void buttonCompetitorsListSaveAs_Click(System::Object^  sender, System::EventArgs^  e) {
			 SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();
			 saveFileDialog->RestoreDirectory = true;
			 saveFileDialog->ShowDialog();
			 if(saveFileDialog->FileName != String::Empty) {
				 startProtocolFileName = saveFileDialog->FileName;
				 buttonSaveStart_Click(sender, e);
			 }

		 }
		 private: void chechDoubleNumbersInSaveAsList(int fieldNumber, bool splitBySpace) {
	  				 buttonSearch->Text = gcnew String("Find (") + listBoxCompetitorsListOpen->Items->Count.ToString() + gcnew String(")");
					 buttonSearchSaveAs->Text = gcnew String("Find (") + listBoxCompetitorsListSaveAs->Items->Count.ToString() + gcnew String(")");

					  int firstNumber = 0;
					  if(fieldNumber != 0 && listBoxCompetitorsListSaveAs->Items->Count >= 1 && listBoxCompetitorsListSaveAs->SelectedItems->Count != 0){
						  firstNumber = listBoxCompetitorsListSaveAs->SelectedIndex;
					  }
					  bool doubleNumbersFound = false;
					  int selectedItem = listBoxCompetitorsListSaveAs->SelectedIndex;
					  ArrayList^ listOfNumbers = gcnew ArrayList();
					  for(int i = firstNumber; i<listBoxCompetitorsListSaveAs->Items->Count; i++) {
						  if(getNumberOfFields((String^)listBoxCompetitorsListSaveAs->Items[i],'#')>=fieldNumber+1) {
							  String ^tempValue = getFieldByNumber((String^)listBoxCompetitorsListSaveAs->Items[i],fieldNumber,'#', true);
							  if(splitBySpace) {
								  tempValue = getFieldByNumber(tempValue,0,' ',true);
							  }
							  listOfNumbers->Add(tempValue->ToLower());
						  }
					  }
					  for(int i = 0;i<listOfNumbers->Count;i++) {
						  for(int j = i+1;j<listOfNumbers->Count;j++) {
							  if(listOfNumbers[i]->Equals(listOfNumbers[j])){
								doubleNumbersFound = true;
						  }
						  }
					  }
  				 labelErrorMessage->Visible = doubleNumbersFound;
				 if(!doubleNumbersFound) {
					 return;
				 }

				 for(int i = firstNumber; i<listBoxCompetitorsListSaveAs->Items->Count; i++) {
					 for(int j = i+1; j < listBoxCompetitorsListSaveAs->Items->Count; j++) {
						 if(getNumberOfFields((String^)listBoxCompetitorsListSaveAs->Items[i],'#')>=fieldNumber+1
							 && getNumberOfFields((String^)listBoxCompetitorsListSaveAs->Items[j],'#')>=fieldNumber+1) {
								 if((getFieldByNumber((String^)listBoxCompetitorsListSaveAs->Items[i],fieldNumber,'#', true)->ToLower()->Equals(
									 getFieldByNumber((String^)listBoxCompetitorsListSaveAs->Items[j],fieldNumber,'#', true)->ToLower()))||(splitBySpace &&
									 getFieldByNumber(getFieldByNumber((String^)listBoxCompetitorsListSaveAs->Items[i],fieldNumber,'#', true),0,' ',true)->ToLower()->Equals(
									 getFieldByNumber(getFieldByNumber((String^)listBoxCompetitorsListSaveAs->Items[j],fieldNumber,'#', true),0,' ',true)->ToLower()))) {
										 if(getNumberOfFields((String^)listBoxCompetitorsListSaveAs->Items[i],'#')>4
											 && getNumberOfFields((String^)listBoxCompetitorsListSaveAs->Items[j],'#')>4
											 && getFieldByNumber((String^)listBoxCompetitorsListSaveAs->Items[i],4,'#', true)->Equals(
												getFieldByNumber((String^)listBoxCompetitorsListSaveAs->Items[j],4,'#', true))) {
											doubleNumbersFound = true;
											listBoxCompetitorsListSaveAs->SelectedItems->Clear();
											listBoxCompetitorsListSaveAs->SelectedItems->Add(listBoxCompetitorsListSaveAs->Items[i]);
											 labelErrorMessage->Visible = doubleNumbersFound;
											 listBoxCompetitorsListSaveAs->SelectedIndex = i;
											return;
											}
										 
							 }
						 }
					 }
				 }
				 labelErrorMessage->Visible = doubleNumbersFound;
				 listBoxCompetitorsListSaveAs->SelectedIndex = selectedItem;
				  }


private: System::Void buttonSearch_Click(System::Object^  sender, System::EventArgs^  e) {
			 int startPosition;
			 if(listBoxCompetitorsListOpen->Items->Count >= 1) {
			 if(listBoxCompetitorsListOpen->SelectedItems->Count == 0) {
				 startPosition = 0;
			 } else {
				 startPosition = listBoxCompetitorsListOpen->SelectedIndex;
			 }
			 for(int i = startPosition+1;i<listBoxCompetitorsListOpen->Items->Count;i++) {
				 if(((String^)(listBoxCompetitorsListOpen->Items[i]))->ToLower()->Contains(textBoxSearch->Text->ToLower())) {
					 listBoxCompetitorsListOpen->SetSelected(i,true);
					 return;
				 }
			 }
//			 MessageBox::Show("End of list reached");
			 for(int i = 0;i<=startPosition;i++) {
				 if(((String^)(listBoxCompetitorsListOpen->Items[i]))->ToLower()->Contains(textBoxSearch->Text->ToLower())) {
					 listBoxCompetitorsListOpen->SetSelected(i,true);
					 return;
				 }
			 }
			 MessageBox::Show("No matches found");
			 } else {
				 MessageBox::Show("No matches found");
			 }
		 }
private: System::Void textBoxSearch_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
 			 if(e->KeyCode == Keys::Enter) {
				 buttonSearch_Click(sender,e);
			 }

		 }
private: System::Void buttonAllToStartProtocol_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(MessageBox::Show("Are you sure?","Warning!",MessageBoxButtons::YesNo)==System::Windows::Forms::DialogResult::Yes) {
				 if(listBoxCompetitorsListOpen->Items->Count >= 1) {
					 for(int i = 0;i<listBoxCompetitorsListOpen->Items->Count;i++) {
						listBoxCompetitorsListSaveAs->Items->Add(listBoxCompetitorsListOpen->Items[i]);
					}
				 }
			 }
			chechDoubleNumbersInSaveAsList(0,false);
			}
private: System::Void buttonBackUp_Click(System::Object^  sender, System::EventArgs^  e) {
		 	 struct _timeb timer;
			 _ftime(&timer);
			 saveBackupFile(gcnew String("temp"), gcnew String("spm") + timer.time.ToString() + gcnew String(".txt"));
		 }

 		 private: void saveBackupFile(String^ folder, String^ filename) {
					 _mkdir(getCharArrayFromString(folder));

				 String^ backupFilePath = (folder + gcnew String("\\") + filename);
				 StreamWriter^ pwriter = gcnew StreamWriter(backupFilePath,false,System::Text::Encoding::GetEncoding(1251));

				 int i;
				 pwriter->WriteLine(gcnew String("List of opened competitors"));
				 for(i = 0; i<listBoxCompetitorsListOpen->Items->Count; i++) {
					 pwriter->WriteLine((String^)listBoxCompetitorsListOpen->Items[i]);
				 }
				 pwriter->WriteLine(gcnew String("List of competitors to save"));
				 for(i = 0; i<listBoxCompetitorsListSaveAs->Items->Count; i++) {
					 pwriter->WriteLine((String^)listBoxCompetitorsListSaveAs->Items[i]);
				 }
				 pwriter->WriteLine(gcnew String("List of groups"));
				 for(i = 0; i<listBoxGroups->Items->Count; i++) {
					 pwriter->WriteLine((String^)listBoxGroups->Items[i]);
				 }
				 pwriter->WriteLine(gcnew String("List of numbers"));
				 for(i = 0; i<listBoxNumbers->Items->Count; i++) {
					 pwriter->WriteLine((String^)listBoxNumbers->Items[i]);
				 }
				 pwriter->WriteLine(gcnew String("RegExp From"));
				 pwriter->Write(replaceFrom->Replace("\n", "\r\n"));

				 pwriter->WriteLine(gcnew String("\r\nRegExp To"));
				 pwriter->Write(replaceTo->Replace("\n", "\r\n"));

				 pwriter->WriteLine(gcnew String("\r\nFTP Configuration"));
				 pwriter->WriteLine(textBoxUploadAddress->Text);
	 			 if(startProtocolFileName != String::Empty) {
					 pwriter->WriteLine(gcnew String("StartProtocolFile"));
					 pwriter->WriteLine(startProtocolFileName);
				 }
				 if(checkBoxUseAllNumbers->Checked) {
					 pwriter->WriteLine(gcnew String("UseAllNumbers"));
				 }
				 if(checkBoxAutoShift->Checked) {
					 pwriter->WriteLine(gcnew String("AutoShift"));
				 }
				 pwriter->Close();
				 delete pwriter;
				  }

private: System::Void buttonLoadBackup_Click(System::Object^  sender, System::EventArgs^  e) {
			 OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
			 openFileDialog->RestoreDirectory = true;
			 openFileDialog->ShowDialog();
			 replaceFrom = String::Empty;
			 replaceTo = String::Empty;
			 if(openFileDialog->FileName != String::Empty) {
				 loadBackup(openFileDialog->FileName);
 			 }
		 }

private: System::Void loadBackup(String^ fileName) {
/*			 StreamReader^ preader = gcnew StreamReader(fileName);
			 String^ tempString2 = gcnew String("");
					 tempString2 = preader->ReadToEnd();
					 MessageBox::Show(tempString2);
					 if(!tempString2->Equals(gcnew String("List of opened competitors"))){
							 MessageBox::Show(gcnew String("Wrong format of input file: first string should be \"List of opened competitors\"! Actual value is ") + tempString2);
							 return;
					 }
					 preader->Close();
*/
				 char* tempString = new char[numberOfCharsInString];
				 FILE* openCompetitorsList;
				 if((openCompetitorsList = fopen(getCharArrayFromString(fileName),"r+"))==NULL) {
					 MessageBox::Show("Unable to open file: \"" + fileName + "\".");
				 } else {
					 checkBoxUseAllNumbers->Checked = false;
					 listBoxCompetitorsListOpen->Items->Clear();
					 listBoxCompetitorsListSaveAs->Items->Clear();
					 listBoxGroups->Items->Clear();
					 listBoxNumbers->Items->Clear();
					 comboBoxGroup->Items->Clear();
					 


					 if(readStringFromFile(openCompetitorsList, tempString)==EOF || strcmp(tempString, "List of opened competitors") !=0) {
						 MessageBox::Show(gcnew String("Wrong format of input file: first string should be \"List of opened competitors\"!"));
						 fclose(openCompetitorsList);
						 return;

					 }
					 int loadStringResult = readStringFromFile(openCompetitorsList, tempString);

					 while (loadStringResult!=EOF && strcmp(tempString, "List of competitors to save") !=0) {
						 listBoxCompetitorsListOpen->Items->Add(gcnew String(tempString));
						 loadStringResult = readStringFromFile(openCompetitorsList, tempString);
					 }
					 if(loadStringResult == EOF) {
						 MessageBox::Show(gcnew String("Wrong format of input file: string \"List of competitors to save\" not found!"));
						 fclose(openCompetitorsList);
						 return;
					 }
					 loadStringResult = readStringFromFile(openCompetitorsList, tempString);
					 while (loadStringResult!=EOF && strcmp(tempString, "List of groups") !=0) {
						 listBoxCompetitorsListSaveAs->Items->Add(gcnew String(tempString));
						 loadStringResult = readStringFromFile(openCompetitorsList, tempString);
					 }
					 if(loadStringResult == EOF) {
						 MessageBox::Show(gcnew String("Wrong format of input file: string \"List of groups\" not found!"));
						 fclose(openCompetitorsList);
						 return;
					 }
					 loadStringResult = readStringFromFile(openCompetitorsList, tempString);
					 while (loadStringResult!=EOF && 
						 strcmp(tempString, "FTP Configuration") !=0 && strcmp(tempString, "List of numbers") !=0) {
						 listBoxGroups->Items->Add(gcnew String(tempString));
						 comboBoxGroup->Items->Add(gcnew String(tempString));
						 loadStringResult = readStringFromFile(openCompetitorsList, tempString);
					 }
					 if(strcmp(tempString, "List of numbers") ==0) {
						 loadStringResult = readStringFromFile(openCompetitorsList, tempString);
						 while (loadStringResult!=EOF && 
							 strcmp(tempString, "RegExp From") !=0) {
							 listBoxNumbers->Items->Add(gcnew String(tempString));
							 loadStringResult = readStringFromFile(openCompetitorsList, tempString);
						 }
						 for(int i = 0; i< listBoxGroups->Items->Count - listBoxNumbers->Items->Count; i++) {
							 listBoxNumbers->Items->Add(gcnew String(""));
						 }
					 } else {
						 for(int i = 0; i<listBoxGroups->Items->Count; i++) {
							 listBoxNumbers->Items->Add(gcnew String(""));
						 }
					 }

					 if( loadStringResult != EOF && strcmp(tempString, "RegExp From") ==0)
					 {
						 loadStringResult = readStringFromFile(openCompetitorsList, tempString);
						 while (loadStringResult!=EOF && 
							 strcmp(tempString, "RegExp To") !=0) {
								 replaceFrom = replaceFrom + ((replaceFrom==String::Empty)?(gcnew String("")):(gcnew String("\n"))) + gcnew String(tempString);
							 loadStringResult = readStringFromFile(openCompetitorsList, tempString);
						 }
					 }
					 if( loadStringResult != EOF && strcmp(tempString, "RegExp To") ==0)
					 {
						 loadStringResult = readStringFromFile(openCompetitorsList, tempString);
						 while (loadStringResult!=EOF && 
							 strcmp(tempString, "FTP Configuration") !=0) {
							 replaceTo = replaceTo + ((replaceTo==String::Empty)?(gcnew String("")):(gcnew String("\n"))) + gcnew String(tempString);
							 loadStringResult = readStringFromFile(openCompetitorsList, tempString);
						 }
					 }

					 if (loadStringResult!=EOF && strcmp(tempString, "FTP Configuration") ==0) {
						 loadStringResult = readStringFromFile(openCompetitorsList, tempString);
						 if(loadStringResult!=EOF) {
							 textBoxUploadAddress->Text = gcnew String(gcnew String(tempString));
							 loadStringResult = readStringFromFile(openCompetitorsList, tempString);
						 }
					 }
					 if (loadStringResult!=EOF && strcmp(tempString, "StartProtocolFile") ==0) {
						 loadStringResult = readStringFromFile(openCompetitorsList, tempString);
						 if(loadStringResult!=EOF) {
							 startProtocolFileName = gcnew String(tempString);
							 loadStringResult = readStringFromFile(openCompetitorsList, tempString);
						 }
					 } else {
						 startProtocolFileName = String::Empty;
					 }
					 if (loadStringResult!=EOF) {
						if(strcmp(tempString, "UseAllNumbers") ==0) {
							checkBoxUseAllNumbers->Checked = true;
						}
						loadStringResult = readStringFromFile(openCompetitorsList, tempString);
					 }
					 if (loadStringResult!=EOF) {
						if(strcmp(tempString, "AutoShift") ==0) {
							checkBoxAutoShift->Checked = true;
						}
						loadStringResult = readStringFromFile(openCompetitorsList, tempString);
					 }
					 

					 fclose(openCompetitorsList);

				 }
			 delete tempString;
			 chechDoubleNumbersInSaveAsList(0,false);
		 }
private: System::Void checkBoxStageNumber_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 textBoxStageNumber->ReadOnly = !checkBoxStageNumber->Checked;
		 }
private: System::Void buttonAutoUpdateDelayFromStart_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(checkBoxAutoShift->Checked) {
	 			 int selectedGroupNumber = listBoxGroups->Items->IndexOf(comboBoxGroup->Text);
				 if(selectedGroupNumber == -1) {
					 MessageBox::Show("Please, select group");
					 return;
				 }
				 textBoxFirstNumber->Text = getFieldByNumber((String^)listBoxNumbers->Items[selectedGroupNumber],1,'#',false);
				 textBoxOneNumberDelay->Text = getFieldByNumber((String^)listBoxNumbers->Items[selectedGroupNumber],2,'#',false);
			 }
			 double number = getIntByString(textBoxStartNumber->Text);
			 double firstNumber = getIntByString(textBoxFirstNumber->Text);
			 double singleTime = getIntByString(textBoxOneNumberDelay->Text);
			 if(number >= 0 && singleTime >=0) {
				textBoxTimeShift->Text = getTimeFromSeconds((number-firstNumber) * singleTime);
			 }
		 }
private: System::Void buttonClearDelayFromGroupStart_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBoxTimeShift->Text = getTimeFromSeconds(0);
		 }
private: String^ getTimeFromSeconds(double originalTime) {
				 Int64 originalSeconds = originalTime;
				 double originalMilliseconds = originalTime - originalSeconds;
			 	 Int64 seconds = originalSeconds;
				 seconds %= 60;
				 Int64 minutes = (originalSeconds) / 60;
				 minutes %= 60;
				 Int64 hours = (originalSeconds) / 3600;
				 hours %=24;
				 Int64 days = (originalSeconds)/86400;
				 Int64 milliseconds = originalMilliseconds*pow(10.0,3);
				 String^ timeString = days.ToString() + gcnew String(" ") + gcnew String((hours<=9)?"0":"") + hours.ToString() + gcnew String(":") + gcnew String((minutes<=9)?"0":"") + minutes.ToString() + gcnew String(":") + gcnew String((seconds<=9)?"0":"") + seconds.ToString();
				 String^ millisecondsString = milliseconds.ToString();
					 while (millisecondsString->Length < 3) millisecondsString = gcnew String("0") + millisecondsString;
					 timeString += (gcnew String(".") + millisecondsString);
				 return timeString;
		 }

		 static int getIntByString(char* inputString) {
				 int result = 0;
				 int i = 0;
				 while(inputString[i]!=0) {
					 if(getDigitFromChar(inputString[i]) == -1) {
						 char nonDigitChar = inputString[i];
						 MessageBox::Show(gcnew String(inputString) + gcnew String(" includes non-digit symbol \"") + gcnew String(&nonDigitChar) + gcnew String("\""));
						 return -1;
					 }
					 result = result*10+getDigitFromChar(inputString[i]);
					 i++;
				 }
				 return result;
			 }

		 static int getIntByString(String^ inputString) {
			 int result = -1;
			 try {
				 result = Int32::Parse(inputString);
			 } catch (Object^ e) {
					 MessageBox::Show(gcnew String("Exception during string to int parse:") + e->ToString());
			 }
			 return result;
			 }

			 static int getDigitFromChar(char digitChar) {
				 if(digitChar<='9' && digitChar>='0') {
					return digitChar-'0';
				 } else {
					 return -1;
				 }
			 }


private: System::Void buttonSaveConfiguration_Click(System::Object^  sender, System::EventArgs^  e) {
			 saveBackupFile(gcnew String("data"), gcnew String("spm_backup.txt"));
		 }
private: System::Void buttonSaveStart_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(startProtocolFileName != String::Empty) {
				 StreamWriter^ pwriter = gcnew StreamWriter(startProtocolFileName,false,System::Text::Encoding::GetEncoding(1251));
				for(int i = 0; i<listBoxCompetitorsListSaveAs->Items->Count; i++) {
					pwriter->WriteLine((String^)listBoxCompetitorsListSaveAs->Items[i]);
				}
				pwriter->Close();
			 } else {
				 MessageBox::Show("File with start protocol not selected. Click \"Save as\"");
			 }

		 }
private: System::Void buttonUpload_Click(System::Object^  sender, System::EventArgs^  e) {
			 buttonSaveStart_Click(sender,e);
			 if(startProtocolFileName != String::Empty) {
				 try {
				  WebClient^ myWebClient = gcnew WebClient;
				  String^ intermediateString = textBoxUploadAddress->Text;
				  String^ ftpPath = intermediateString->Substring(0, intermediateString->IndexOf("#"));
				  intermediateString = intermediateString->Substring(intermediateString->IndexOf("#")+1);
				  String^ ftpLogin = intermediateString->Substring(0, intermediateString->IndexOf("#"));
				  String^ ftpPassword = intermediateString->Substring(intermediateString->IndexOf("#")+1);
				  myWebClient->Credentials = gcnew NetworkCredential(ftpLogin, ftpPassword);
				  String^ uploadFileName = startProtocolFileName->Substring(startProtocolFileName->LastIndexOf("\\")+1);
				  myWebClient->UploadFile(ftpPath + uploadFileName, startProtocolFileName);
				 } catch (Object^ e) {
					 MessageBox::Show(gcnew String("Exception during file upload:") + e->ToString());
				 }
			 }


		 }
private: System::Void buttonGetNumber_Click(System::Object^  sender, System::EventArgs^  e) {
			 int selectedGroupNumber = listBoxGroups->Items->IndexOf(comboBoxGroup->Text);
			 if(selectedGroupNumber == -1) {
				 MessageBox::Show("Please, select group");
				 return;
			 }
//			 listBoxNumbers->SetSelected(selectedGroupNumber, true);
			 String^ numbersInterval = (String^)listBoxNumbers->Items[selectedGroupNumber];
			 if(listBoxNumbers->Items[selectedGroupNumber]->ToString()->Contains("#")) {
				 numbersInterval = getFieldByNumber((String^)listBoxNumbers->Items[selectedGroupNumber],0,'#',false);
			 }
			 int minusPosition = numbersInterval->IndexOf("-");
			 if(minusPosition == -1) {
				 MessageBox::Show("Numbers interval format should be number-number. \"-\" not found");
				 return;
			 }
			 int firstNumber = 0;
			 int lastNumber = 0;
			 try {
				 firstNumber = Int32::Parse(numbersInterval->Substring(0, minusPosition));
				 lastNumber = Int32::Parse(numbersInterval->Substring(minusPosition+1));
			 } catch (Object^ e) {
				 MessageBox::Show("Numbers interval format should be number-number. One of values is not digit");
				 return;
			 }
			 delete numbersInterval;
			 if(firstNumber>lastNumber) {
				 MessageBox::Show("Empty interval: first number is more than last number");
				 return;
			 }
			 String^ allNumbers = gcnew String("#");
			 for(int i = firstNumber;i<=lastNumber;i++) {
				 allNumbers = allNumbers + i.ToString() + gcnew String("#");
			 }
			 for(int i = 0;i<listBoxCompetitorsListSaveAs->Items->Count;i++) {
				 String^ toRemove = (String^)listBoxCompetitorsListSaveAs->Items[i];
				 toRemove = toRemove->Substring(0,toRemove->IndexOf("#"));
				 allNumbers = removeSubstring(allNumbers, gcnew String("#") + toRemove + gcnew String("#"));
			 }
			 if(!checkBoxUseAllNumbers->Checked) {
				 for(int i = 0;i<listBoxCompetitorsListOpen->Items->Count;i++) {
					 String^ toRemove = (String^)listBoxCompetitorsListOpen->Items[i];
					 toRemove = toRemove->Substring(0,toRemove->IndexOf("#"));
					 allNumbers = removeSubstring(allNumbers, gcnew String("#") + toRemove + gcnew String("#"));
				 }
			 }
			 allNumbers = allNumbers->Substring(1);
			 if(allNumbers->Length == 0) {
				 if(checkBoxUseAllNumbers->Checked) {
					 MessageBox::Show("No free numbers for competitor");
				 } else {
					 MessageBox::Show("No free numbers but try to set checkbox \"Use all ¹\"");
				 }
			 } else {
				 textBoxStartNumber->Text = allNumbers->Substring(0,allNumbers->IndexOf("#"));
			 }


		 }
			 private: String^ removeSubstring(String^ bigString, String^ subString) {
						  if(bigString->IndexOf(subString) != -1) {
							  String^ firstPart = bigString->Substring(0,bigString->IndexOf(subString) + 1);
							  String^ lastPart = bigString->Substring(bigString->IndexOf(subString) + subString->Length);
							  return firstPart + lastPart;
						  }
						  return bigString;
			 }
private: System::Void buttonAddIntoTeam_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(listBoxCompetitorsListOpen->SelectedItems->Count==1) {
				 String^ competitorName = textBoxName->Text;
				 String^ yearOfBirth = textBoxYearOfBirth->Text;
				 String^ competitorCity = textBoxCity->Text;
				 String^ competitorTeam = textBoxTeam->Text;
				 parseInputString((String^)listBoxCompetitorsListOpen->SelectedItem,sender,e);
				 textBoxName->Text = competitorName + gcnew String(" / ") + textBoxName->Text;
				 textBoxYearOfBirth->Text = yearOfBirth + gcnew String(" / ") + textBoxYearOfBirth->Text;
				 if(textBoxTeam->Text != competitorTeam) {
					 if(textBoxTeam->Text == String::Empty) {
						 textBoxTeam->Text = competitorTeam;
					 } else {
						 if(competitorTeam != String::Empty) {
							textBoxTeam->Text = competitorTeam + gcnew String(" / ") + textBoxTeam->Text;
						 }
					 }
				 }
				 if(textBoxCity->Text != competitorCity) {
					textBoxCity->Text = competitorCity + gcnew String(" / ") + textBoxCity->Text;
				 }
			 }



		 }
private: System::Void buttonParseNewCompetitor_Click(System::Object^  sender, System::EventArgs^  e) {
			 TextAreaForm^ myForm = gcnew TextAreaForm();
			 myForm->Text = "Registration Form";
			 myForm->ShowDialog();
			 if(myForm->getMyResult()) {
 				 Regex^ myRegexp = gcnew Regex(replaceFrom);
				 parseInputString(myRegexp->Replace(myForm->getText(), replaceTo),sender,e);
				 buttonGetNumber_Click(sender,e);
			 }


		 }
private: System::Void buttonSetRegExp_Click(System::Object^  sender, System::EventArgs^  e) {
			 TextAreaForm^ myForm = gcnew TextAreaForm();
			 myForm->setText(replaceFrom);
			 myForm->Text = "\"RegExp From\" Form";
			 myForm->ShowDialog();
			 if(myForm->getMyResult()) {
				 replaceFrom = myForm->getText();
			 }
		 }
private: System::Void buttonSetTo_Click(System::Object^  sender, System::EventArgs^  e) {
 			 TextAreaForm^ myForm = gcnew TextAreaForm();
			 myForm->setText(replaceTo);
			 myForm->Text = "\"RegExp To\" Form";
			 myForm->ShowDialog();
			 if(myForm->getMyResult()) {
				 replaceTo = myForm->getText();
			 }
		 }
private: System::Void buttonSearchSaveAs_Click(System::Object^  sender, System::EventArgs^  e) {
			 int startPosition;
			 if(listBoxCompetitorsListSaveAs->Items->Count >= 1) {
			 if(listBoxCompetitorsListSaveAs->SelectedItems->Count == 0) {
				 startPosition = 0;
			 } else {
				 startPosition = listBoxCompetitorsListSaveAs->SelectedIndex;
			 }
			 for(int i = startPosition+1;i<listBoxCompetitorsListSaveAs->Items->Count;i++) {
				 if(((String^)(listBoxCompetitorsListSaveAs->Items[i]))->ToLower()->Contains(textBoxSearchSaveAs->Text->ToLower())) {
					 listBoxCompetitorsListSaveAs->SetSelected(i,true);
					 return;
				 }
			 }
//			 MessageBox::Show("End of list reached");
			 for(int i = 0;i<=startPosition;i++) {
				 if(((String^)(listBoxCompetitorsListSaveAs->Items[i]))->ToLower()->Contains(textBoxSearchSaveAs->Text->ToLower())) {
					 listBoxCompetitorsListSaveAs->SetSelected(i,true);
					 return;
				 }
			 }
			 MessageBox::Show("No matches found");
			 } else {
				 MessageBox::Show("No matches found");
			 }

		 }
private: System::Void textBoxSearchSaveAs_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
 			 if(e->KeyCode == Keys::Enter) {
				 buttonSearchSaveAs_Click(sender,e);
			 }
		 }
private: System::Void buttonCurrentTime_Click(System::Object^  sender, System::EventArgs^  e) {
 		 	 struct _timeb timer;
			 _ftime(&timer);
			 double currentTime = timer.time + timer.millitm/1000.0 - (timer.timezone*60.0);
			 textBoxTimeShift->Text = getTimeFromSeconds(currentTime);
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 loadBackup(gcnew String("data\\spm_backup.txt"));
		 }
private: System::Void buttonCheckDoubleNames_Click(System::Object^  sender, System::EventArgs^  e) {
			 chechDoubleNumbersInSaveAsList(1,false);
		 }
private: System::Void buttonCheckMail_Click(System::Object^  sender, System::EventArgs^  e) {
			 chechDoubleNumbersInSaveAsList(8,true);
		 }
};

}

