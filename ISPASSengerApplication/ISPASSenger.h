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

	private:
		bool isTermsAgreed = false;



	private: System::Windows::Forms::Panel^ passwordPanel;

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
			this->usernamePanel->Size = System::Drawing::Size(250, 2);
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
			this->signInButton->Font = (gcnew System::Drawing::Font(L"Rockwell", 20.25F, System::Drawing::FontStyle::Bold));
			this->signInButton->ForeColor = System::Drawing::Color::White;
			this->signInButton->Location = System::Drawing::Point(51, 580);
			this->signInButton->Name = L"signInButton";
			this->signInButton->Size = System::Drawing::Size(119, 53);
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
			this->exitButton->Font = (gcnew System::Drawing::Font(L"Rockwell", 20.25F, System::Drawing::FontStyle::Bold));
			this->exitButton->ForeColor = System::Drawing::Color::White;
			this->exitButton->Location = System::Drawing::Point(202, 580);
			this->exitButton->Name = L"exitButton";
			this->exitButton->Size = System::Drawing::Size(119, 53);
			this->exitButton->TabIndex = 11;
			this->exitButton->Text = L"Exit";
			this->exitButton->UseVisualStyleBackColor = false;
			this->exitButton->Click += gcnew System::EventHandler(this, &ISPASSenger::exitButton_Click);
			// 
			// passwordPanel
			// 
			this->passwordPanel->Location = System::Drawing::Point(51, 495);
			this->passwordPanel->Name = L"passwordPanel";
			this->passwordPanel->Size = System::Drawing::Size(250, 2);
			this->passwordPanel->TabIndex = 12;
			// 
			// ISPASSenger
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSize = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(801, 743);
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	/// exitButton
	private: System::Void exitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	/// termsCheckBox
	private: System::Void termsCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (termsCheckBox->Checked == true) {
			isTermsAgreed = true;
			signInButton->Enabled = true;
		}
		else {
			isTermsAgreed = false;
			signInButton->Enabled = false;
		}
	}
	
	/// creem conex la baza de date
	OleDbConnection^ conn = gcnew OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\ispas\\Documents\\UsersDatabase.accdb");

	private: System::Void signInButton_Click(System::Object^ sender, System::EventArgs^ e) {
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
			}
			else {
				MessageBox::Show("Invalid username or password.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

			reader->Close();	/// inchide readerul
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "C++ Acces Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
};
}
