#pragma once

namespace ISPASSengerApplication {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

	/// <summary>
	/// Summary for ISPASSenger
	/// </summary>
	public ref class ISPASSenger : public System::Windows::Forms::Form
	{
	public:
		ISPASSenger(void)
		{
			InitializeComponent();

			createAccountPanel->Visible = false;

			this->DoubleBuffered = true; // Prevent flickering

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ISPASSenger()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ usernameLabel;
	private: System::Windows::Forms::Label^ signInLabel;

	private: System::Windows::Forms::TextBox^ usernameTextBox;
	private: System::Windows::Forms::Label^ passwordLabel;
	private: System::Windows::Forms::Panel^ usernamePanel;

	private: System::Windows::Forms::TextBox^ passwordTextBox;

	private: System::Windows::Forms::CheckBox^ termsCheckBox;

	private: System::Windows::Forms::Label^ termsLabel1;
	private: System::Windows::Forms::Label^ termsLabel2;
	private: System::Windows::Forms::Button^ signInButton;
	private: System::Windows::Forms::Button^ exitButton;

	private: System::Windows::Forms::Panel^ passwordPanel;
	private: System::Windows::Forms::Button^ registerButton;
	private: System::Windows::Forms::Panel^ createAccountPanel;

	private: System::Windows::Forms::Label^ createrUsernameLabel;

	private: System::Windows::Forms::Label^ createrAccountLabel;
	private: System::Windows::Forms::TextBox^ createUsernameTextBox;

	private: System::Windows::Forms::Panel^ createPasswordPanel;


	private: System::Windows::Forms::TextBox^ createPasswordTextBox;
	private: System::Windows::Forms::Label^ createrPasswordLabel;
	private: System::Windows::Forms::Panel^ createUsernamePanel;
	private: System::Windows::Forms::Button^ registerMeButton;

	private: System::Windows::Forms::Button^ returnToBeginingButton;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ISPASSenger::typeid));
			this->usernameLabel = (gcnew System::Windows::Forms::Label());
			this->signInLabel = (gcnew System::Windows::Forms::Label());
			this->usernameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->passwordLabel = (gcnew System::Windows::Forms::Label());
			this->usernamePanel = (gcnew System::Windows::Forms::Panel());
			this->passwordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->termsCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->termsLabel1 = (gcnew System::Windows::Forms::Label());
			this->termsLabel2 = (gcnew System::Windows::Forms::Label());
			this->signInButton = (gcnew System::Windows::Forms::Button());
			this->exitButton = (gcnew System::Windows::Forms::Button());
			this->passwordPanel = (gcnew System::Windows::Forms::Panel());
			this->registerButton = (gcnew System::Windows::Forms::Button());
			this->createAccountPanel = (gcnew System::Windows::Forms::Panel());
			this->returnToBeginingButton = (gcnew System::Windows::Forms::Button());
			this->registerMeButton = (gcnew System::Windows::Forms::Button());
			this->createUsernamePanel = (gcnew System::Windows::Forms::Panel());
			this->createPasswordPanel = (gcnew System::Windows::Forms::Panel());
			this->createPasswordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->createrPasswordLabel = (gcnew System::Windows::Forms::Label());
			this->createUsernameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->createrUsernameLabel = (gcnew System::Windows::Forms::Label());
			this->createrAccountLabel = (gcnew System::Windows::Forms::Label());
			this->createAccountPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// usernameLabel
			// 
			this->usernameLabel->AutoSize = true;
			this->usernameLabel->BackColor = System::Drawing::Color::Transparent;
			this->usernameLabel->Font = (gcnew System::Drawing::Font(L"Rockwell", 10.25F, System::Drawing::FontStyle::Bold));
			this->usernameLabel->ForeColor = System::Drawing::Color::White;
			this->usernameLabel->Location = System::Drawing::Point(48, 331);
			this->usernameLabel->Name = L"usernameLabel";
			this->usernameLabel->Size = System::Drawing::Size(78, 18);
			this->usernameLabel->TabIndex = 0;
			this->usernameLabel->Text = L"Username";
			// 
			// signInLabel
			// 
			this->signInLabel->AutoSize = true;
			this->signInLabel->BackColor = System::Drawing::Color::Transparent;
			this->signInLabel->Font = (gcnew System::Drawing::Font(L"Rockwell", 32.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signInLabel->ForeColor = System::Drawing::Color::White;
			this->signInLabel->Location = System::Drawing::Point(42, 212);
			this->signInLabel->Name = L"signInLabel";
			this->signInLabel->Size = System::Drawing::Size(157, 49);
			this->signInLabel->TabIndex = 1;
			this->signInLabel->Text = L"Sign in";
			// 
			// usernameTextBox
			// 
			this->usernameTextBox->BackColor = System::Drawing::Color::Black;
			this->usernameTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->usernameTextBox->Font = (gcnew System::Drawing::Font(L"Rockwell", 15.25F, System::Drawing::FontStyle::Bold));
			this->usernameTextBox->ForeColor = System::Drawing::Color::White;
			this->usernameTextBox->Location = System::Drawing::Point(51, 362);
			this->usernameTextBox->Name = L"usernameTextBox";
			this->usernameTextBox->Size = System::Drawing::Size(237, 24);
			this->usernameTextBox->TabIndex = 2;
			// 
			// passwordLabel
			// 
			this->passwordLabel->AutoSize = true;
			this->passwordLabel->BackColor = System::Drawing::Color::Transparent;
			this->passwordLabel->Font = (gcnew System::Drawing::Font(L"Rockwell", 10.25F, System::Drawing::FontStyle::Bold));
			this->passwordLabel->ForeColor = System::Drawing::Color::White;
			this->passwordLabel->Location = System::Drawing::Point(48, 436);
			this->passwordLabel->Name = L"passwordLabel";
			this->passwordLabel->Size = System::Drawing::Size(73, 18);
			this->passwordLabel->TabIndex = 3;
			this->passwordLabel->Text = L"Password";
			// 
			// usernamePanel
			// 
			this->usernamePanel->Location = System::Drawing::Point(51, 390);
			this->usernamePanel->Name = L"usernamePanel";
			this->usernamePanel->Size = System::Drawing::Size(237, 2);
			this->usernamePanel->TabIndex = 4;
			// 
			// passwordTextBox
			// 
			this->passwordTextBox->BackColor = System::Drawing::Color::Black;
			this->passwordTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->passwordTextBox->Font = (gcnew System::Drawing::Font(L"Rockwell", 15.25F, System::Drawing::FontStyle::Bold));
			this->passwordTextBox->ForeColor = System::Drawing::Color::White;
			this->passwordTextBox->Location = System::Drawing::Point(51, 467);
			this->passwordTextBox->Name = L"passwordTextBox";
			this->passwordTextBox->PasswordChar = '*';
			this->passwordTextBox->Size = System::Drawing::Size(237, 24);
			this->passwordTextBox->TabIndex = 5;
			this->passwordTextBox->UseSystemPasswordChar = true;
			// 
			// termsCheckBox
			// 
			this->termsCheckBox->BackColor = System::Drawing::Color::Transparent;
			this->termsCheckBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->termsCheckBox->Location = System::Drawing::Point(51, 530);
			this->termsCheckBox->Name = L"termsCheckBox";
			this->termsCheckBox->Size = System::Drawing::Size(13, 14);
			this->termsCheckBox->TabIndex = 7;
			this->termsCheckBox->UseVisualStyleBackColor = false;
			this->termsCheckBox->CheckedChanged += gcnew System::EventHandler(this, &ISPASSenger::termsCheckBox_CheckedChanged);
			// 
			// termsLabel1
			// 
			this->termsLabel1->AutoSize = true;
			this->termsLabel1->BackColor = System::Drawing::Color::Transparent;
			this->termsLabel1->Font = (gcnew System::Drawing::Font(L"Rockwell", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->termsLabel1->ForeColor = System::Drawing::Color::White;
			this->termsLabel1->Location = System::Drawing::Point(72, 527);
			this->termsLabel1->Name = L"termsLabel1";
			this->termsLabel1->Size = System::Drawing::Size(103, 17);
			this->termsLabel1->TabIndex = 8;
			this->termsLabel1->Text = L"I agree to the";
			// 
			// termsLabel2
			// 
			this->termsLabel2->AutoSize = true;
			this->termsLabel2->BackColor = System::Drawing::Color::Transparent;
			this->termsLabel2->Font = (gcnew System::Drawing::Font(L"Rockwell", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->termsLabel2->ForeColor = System::Drawing::Color::Blue;
			this->termsLabel2->Location = System::Drawing::Point(175, 527);
			this->termsLabel2->Name = L"termsLabel2";
			this->termsLabel2->Size = System::Drawing::Size(157, 17);
			this->termsLabel2->TabIndex = 9;
			this->termsLabel2->Text = L"Terms and Condition";
			// 
			// signInButton
			// 
			this->signInButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->signInButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->signInButton->Enabled = false;
			this->signInButton->FlatAppearance->BorderSize = 0;
			this->signInButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->signInButton->Font = (gcnew System::Drawing::Font(L"Rockwell", 15.25F, System::Drawing::FontStyle::Bold));
			this->signInButton->ForeColor = System::Drawing::Color::White;
			this->signInButton->Location = System::Drawing::Point(51, 580);
			this->signInButton->Name = L"signInButton";
			this->signInButton->Size = System::Drawing::Size(124, 53);
			this->signInButton->TabIndex = 10;
			this->signInButton->Text = L"Sign in";
			this->signInButton->UseVisualStyleBackColor = false;
			this->signInButton->Click += gcnew System::EventHandler(this, &ISPASSenger::signInButton_Click);
			// 
			// exitButton
			// 
			this->exitButton->BackColor = System::Drawing::Color::Black;
			this->exitButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->exitButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->exitButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exitButton->Font = (gcnew System::Drawing::Font(L"Rockwell", 10.25F, System::Drawing::FontStyle::Bold));
			this->exitButton->ForeColor = System::Drawing::Color::White;
			this->exitButton->Location = System::Drawing::Point(754, 0);
			this->exitButton->Name = L"exitButton";
			this->exitButton->Size = System::Drawing::Size(46, 30);
			this->exitButton->TabIndex = 11;
			this->exitButton->Text = L"Exit";
			this->exitButton->UseVisualStyleBackColor = false;
			this->exitButton->Click += gcnew System::EventHandler(this, &ISPASSenger::exitButton_Click);
			// 
			// passwordPanel
			// 
			this->passwordPanel->Location = System::Drawing::Point(51, 495);
			this->passwordPanel->Name = L"passwordPanel";
			this->passwordPanel->Size = System::Drawing::Size(237, 2);
			this->passwordPanel->TabIndex = 12;
			// 
			// registerButton
			// 
			this->registerButton->BackColor = System::Drawing::Color::Black;
			this->registerButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->registerButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->registerButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->registerButton->Font = (gcnew System::Drawing::Font(L"Rockwell", 15.25F, System::Drawing::FontStyle::Bold));
			this->registerButton->ForeColor = System::Drawing::Color::White;
			this->registerButton->Location = System::Drawing::Point(210, 580);
			this->registerButton->Name = L"registerButton";
			this->registerButton->Size = System::Drawing::Size(122, 53);
			this->registerButton->TabIndex = 13;
			this->registerButton->Text = L"Register";
			this->registerButton->UseVisualStyleBackColor = false;
			this->registerButton->Click += gcnew System::EventHandler(this, &ISPASSenger::registerButton_Click);
			// 
			// createAccountPanel
			// 
			this->createAccountPanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"createAccountPanel.BackgroundImage")));
			this->createAccountPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->createAccountPanel->Controls->Add(this->returnToBeginingButton);
			this->createAccountPanel->Controls->Add(this->registerMeButton);
			this->createAccountPanel->Controls->Add(this->createUsernamePanel);
			this->createAccountPanel->Controls->Add(this->createPasswordPanel);
			this->createAccountPanel->Controls->Add(this->createPasswordTextBox);
			this->createAccountPanel->Controls->Add(this->createrPasswordLabel);
			this->createAccountPanel->Controls->Add(this->createUsernameTextBox);
			this->createAccountPanel->Controls->Add(this->createrUsernameLabel);
			this->createAccountPanel->Controls->Add(this->createrAccountLabel);
			this->createAccountPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->createAccountPanel->Font = (gcnew System::Drawing::Font(L"Rockwell", 20, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->createAccountPanel->Location = System::Drawing::Point(0, 0);
			this->createAccountPanel->Name = L"createAccountPanel";
			this->createAccountPanel->Size = System::Drawing::Size(801, 743);
			this->createAccountPanel->TabIndex = 14;
			// 
			// returnToBeginingButton
			// 
			this->returnToBeginingButton->BackColor = System::Drawing::Color::Black;
			this->returnToBeginingButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->returnToBeginingButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->returnToBeginingButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->returnToBeginingButton->Font = (gcnew System::Drawing::Font(L"Rockwell", 10.25F, System::Drawing::FontStyle::Bold));
			this->returnToBeginingButton->ForeColor = System::Drawing::Color::White;
			this->returnToBeginingButton->Location = System::Drawing::Point(744, 0);
			this->returnToBeginingButton->Name = L"returnToBeginingButton";
			this->returnToBeginingButton->Size = System::Drawing::Size(56, 25);
			this->returnToBeginingButton->TabIndex = 8;
			this->returnToBeginingButton->Text = L"Back";
			this->returnToBeginingButton->UseVisualStyleBackColor = false;
			this->returnToBeginingButton->Click += gcnew System::EventHandler(this, &ISPASSenger::returnToBeginingButton_Click);
			// 
			// registerMeButton
			// 
			this->registerMeButton->BackColor = System::Drawing::Color::Black;
			this->registerMeButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->registerMeButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->registerMeButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->registerMeButton->Font = (gcnew System::Drawing::Font(L"Rockwell", 15.25F, System::Drawing::FontStyle::Bold));
			this->registerMeButton->ForeColor = System::Drawing::Color::White;
			this->registerMeButton->Location = System::Drawing::Point(38, 589);
			this->registerMeButton->Name = L"registerMeButton";
			this->registerMeButton->Size = System::Drawing::Size(230, 44);
			this->registerMeButton->TabIndex = 7;
			this->registerMeButton->Text = L"Register Me";
			this->registerMeButton->UseVisualStyleBackColor = false;
			this->registerMeButton->Click += gcnew System::EventHandler(this, &ISPASSenger::registerMeButton_Click);
			// 
			// createUsernamePanel
			// 
			this->createUsernamePanel->Location = System::Drawing::Point(38, 472);
			this->createUsernamePanel->Name = L"createUsernamePanel";
			this->createUsernamePanel->Size = System::Drawing::Size(263, 2);
			this->createUsernamePanel->TabIndex = 6;
			// 
			// createPasswordPanel
			// 
			this->createPasswordPanel->Location = System::Drawing::Point(38, 563);
			this->createPasswordPanel->Name = L"createPasswordPanel";
			this->createPasswordPanel->Size = System::Drawing::Size(263, 2);
			this->createPasswordPanel->TabIndex = 5;
			// 
			// createPasswordTextBox
			// 
			this->createPasswordTextBox->BackColor = System::Drawing::Color::Black;
			this->createPasswordTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->createPasswordTextBox->Font = (gcnew System::Drawing::Font(L"Rockwell", 15.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->createPasswordTextBox->ForeColor = System::Drawing::Color::White;
			this->createPasswordTextBox->Location = System::Drawing::Point(37, 535);
			this->createPasswordTextBox->Name = L"createPasswordTextBox";
			this->createPasswordTextBox->PasswordChar = '*';
			this->createPasswordTextBox->Size = System::Drawing::Size(263, 24);
			this->createPasswordTextBox->TabIndex = 4;
			this->createPasswordTextBox->UseSystemPasswordChar = true;
			// 
			// createrPasswordLabel
			// 
			this->createrPasswordLabel->AutoSize = true;
			this->createrPasswordLabel->BackColor = System::Drawing::Color::Black;
			this->createrPasswordLabel->Font = (gcnew System::Drawing::Font(L"Rockwell", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->createrPasswordLabel->ForeColor = System::Drawing::Color::White;
			this->createrPasswordLabel->Location = System::Drawing::Point(35, 500);
			this->createrPasswordLabel->Name = L"createrPasswordLabel";
			this->createrPasswordLabel->Size = System::Drawing::Size(80, 18);
			this->createrPasswordLabel->TabIndex = 3;
			this->createrPasswordLabel->Text = L"Password";
			// 
			// createUsernameTextBox
			// 
			this->createUsernameTextBox->BackColor = System::Drawing::Color::Black;
			this->createUsernameTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->createUsernameTextBox->Font = (gcnew System::Drawing::Font(L"Rockwell", 15.25F, System::Drawing::FontStyle::Bold));
			this->createUsernameTextBox->ForeColor = System::Drawing::Color::White;
			this->createUsernameTextBox->Location = System::Drawing::Point(38, 444);
			this->createUsernameTextBox->Name = L"createUsernameTextBox";
			this->createUsernameTextBox->Size = System::Drawing::Size(263, 24);
			this->createUsernameTextBox->TabIndex = 2;
			// 
			// createrUsernameLabel
			// 
			this->createrUsernameLabel->AutoSize = true;
			this->createrUsernameLabel->BackColor = System::Drawing::Color::Black;
			this->createrUsernameLabel->Font = (gcnew System::Drawing::Font(L"Rockwell", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->createrUsernameLabel->ForeColor = System::Drawing::Color::White;
			this->createrUsernameLabel->Location = System::Drawing::Point(35, 410);
			this->createrUsernameLabel->Name = L"createrUsernameLabel";
			this->createrUsernameLabel->Size = System::Drawing::Size(84, 18);
			this->createrUsernameLabel->TabIndex = 1;
			this->createrUsernameLabel->Text = L"Username";
			// 
			// createrAccountLabel
			// 
			this->createrAccountLabel->AutoSize = true;
			this->createrAccountLabel->BackColor = System::Drawing::Color::Black;
			this->createrAccountLabel->Font = (gcnew System::Drawing::Font(L"Rockwell", 20, System::Drawing::FontStyle::Bold));
			this->createrAccountLabel->ForeColor = System::Drawing::Color::White;
			this->createrAccountLabel->Location = System::Drawing::Point(31, 307);
			this->createrAccountLabel->Name = L"createrAccountLabel";
			this->createrAccountLabel->Size = System::Drawing::Size(256, 33);
			this->createrAccountLabel->TabIndex = 0;
			this->createrAccountLabel->Text = L"Create an account";
			// 
			// ISPASSenger
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSize = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(801, 743);
			this->Controls->Add(this->createAccountPanel);
			this->Controls->Add(this->registerButton);
			this->Controls->Add(this->passwordPanel);
			this->Controls->Add(this->exitButton);
			this->Controls->Add(this->signInButton);
			this->Controls->Add(this->termsLabel2);
			this->Controls->Add(this->termsLabel1);
			this->Controls->Add(this->termsCheckBox);
			this->Controls->Add(this->passwordTextBox);
			this->Controls->Add(this->usernamePanel);
			this->Controls->Add(this->passwordLabel);
			this->Controls->Add(this->usernameTextBox);
			this->Controls->Add(this->signInLabel);
			this->Controls->Add(this->usernameLabel);
			this->Font = (gcnew System::Drawing::Font(L"Rockwell", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ISPASSenger";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"ISPASSenger";
			this->createAccountPanel->ResumeLayout(false);
			this->createAccountPanel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void exitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void termsCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (termsCheckBox->Checked == true) {
			signInButton->Enabled = true;
		}
		else {
			signInButton->Enabled = false;
		}
	}

	/// creem conex la baza de date
	OleDbConnection^ conn = gcnew OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\ispas\\Documents\\UsersDatabase.accdb");

	private: System::Void signInButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (usernameTextBox->Text == "" || passwordTextBox->Text == "") {
			MessageBox::Show("Invalid username or password.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

			usernameTextBox->Text = "";
			passwordTextBox->Text = "";
			termsCheckBox->Checked = false;

			return;
		}

		try {
			conn->Open();	/// deschidem conexiunea la baza de date

			String^ username = usernameTextBox->Text;
			String^ password = passwordTextBox->Text;

			/// creem comanda sql pentru a veridica username si parola
			OleDbCommand^ cmd = conn->CreateCommand();
			cmd->CommandType = CommandType::Text;
			cmd->CommandText = "SELECT * FROM Users WHERE Username = ? AND Password = ?";

			cmd->Parameters->Add("?", OleDbType::VarWChar)->Value = username;
			cmd->Parameters->Add("?", OleDbType::VarWChar)->Value = password;

			OleDbDataReader^ reader = cmd->ExecuteReader();	/// executa comanda si obtine un reader

			if (reader->Read()) {
				MessageBox::Show("Login successful!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				// this->Close();
			}
			else {
				MessageBox::Show("Invalid username or password.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

			reader->Close();	/// inchide readerul
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "C++ Acces Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			conn->Close();	/// inchidem conexiunea
		}

		/// resetam casutele dupa ce apasam sa intram in cont
		usernameTextBox->Text = "";
		passwordTextBox->Text = "";
		termsCheckBox->Checked = false;
	}
	
	private: System::Void registerButton_Click(System::Object^ sender, System::EventArgs^ e) {
		createAccountPanel->SuspendLayout();	/// opreste redibuirea temporar

		createAccountPanel->Visible = true;
		usernameTextBox->Text = "";
		passwordTextBox->Text = "";
		termsCheckBox->Checked = false;

		createAccountPanel->ResumeLayout();	/// permite redibuirea dupa ce am facut modificari
	}

	private: System::Void registerMeButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (createUsernameTextBox->Text == "" || createPasswordTextBox->Text == "") {
			MessageBox::Show("Invalid username or password.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

			usernameTextBox->Text = "";
			passwordTextBox->Text = "";
			termsCheckBox->Checked = false;

			return;
		}

		try {
			conn->Open();	/// deshciden conexiunea la baza de date

			String^ username = createUsernameTextBox->Text;
			String^ password = createPasswordTextBox->Text;

			OleDbCommand^ cmd = conn->CreateCommand();	/// cream o comanda SQL pentru a insera date
			cmd->CommandType = CommandType::Text;
			cmd->CommandText = "INSERT INTO [Users] (Username, [Password]) VALUES (?, ?)";

			cmd->Parameters->Add("?", OleDbType::VarWChar)->Value = username;
			cmd->Parameters->Add("?", OleDbType::VarWChar)->Value = password;

			int rowsAffected = cmd->ExecuteNonQuery();	/// executam comanda

			if (rowsAffected > 0) {	/// daca a functionat
				MessageBox::Show("Account created successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else {	/// daca nu a functionat
				MessageBox::Show("Failed to create account.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			conn->Close();	/// inchidem conexiunea
		}

		/// resetam casutele dupa ce introducem o data
		createUsernameTextBox->Text = "";
		createPasswordTextBox->Text = "";

		createAccountPanel->Visible = false;	/// inchidem panelul de register
	}

	private: System::Void returnToBeginingButton_Click(System::Object^ sender, System::EventArgs^ e) {
		createAccountPanel->Visible = false;
		createUsernameTextBox->Text = "";
		createPasswordTextBox->Text = "";
	}
};
}