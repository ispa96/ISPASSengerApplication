#pragma once

namespace ISPASSengerApplication {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TermsAndConditionsForm
	/// </summary>
	public ref class TermsAndConditionsForm : public System::Windows::Forms::Form
	{
	public:
		TermsAndConditionsForm(void)
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
		~TermsAndConditionsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ okTermsButton;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TermsAndConditionsForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->okTermsButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Rockwell", 20.25F, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(299, 158);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(314, 33);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Terms And Conditions";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Rockwell", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(54, 268);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(796, 162);
			this->label2->TabIndex = 1;
			this->label2->Text = resources->GetString(L"label2.Text");
			// 
			// okTermsButton
			// 
			this->okTermsButton->BackColor = System::Drawing::Color::Black;
			this->okTermsButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->okTermsButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->okTermsButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->okTermsButton->Font = (gcnew System::Drawing::Font(L"Rockwell", 15.25F, System::Drawing::FontStyle::Bold));
			this->okTermsButton->ForeColor = System::Drawing::Color::White;
			this->okTermsButton->Location = System::Drawing::Point(561, 521);
			this->okTermsButton->Name = L"okTermsButton";
			this->okTermsButton->Size = System::Drawing::Size(230, 44);
			this->okTermsButton->TabIndex = 8;
			this->okTermsButton->Text = L"OK";
			this->okTermsButton->UseVisualStyleBackColor = false;
			this->okTermsButton->Click += gcnew System::EventHandler(this, &TermsAndConditionsForm::okTermsButton_Click);
			// 
			// TermsAndConditionsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(882, 743);
			this->Controls->Add(this->okTermsButton);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Rockwell", 10.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"TermsAndConditionsForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TermsAndConditionsForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void okTermsButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
