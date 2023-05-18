#pragma once

namespace TareaProgramada3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SubMenuClnc
	/// </summary>
	public ref class SubMenuClnc : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::Form^ menu;

	public:
		SubMenuClnc(System::Windows::Forms::Form^ m)
		{
			menu = m; 
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SubMenuClnc()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();
			// 
			// SubMenuClnc
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(1110, 650);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Name = L"SubMenuClnc";
			this->Text = L"SubMenuClnc";
			this->Load += gcnew System::EventHandler(this, &SubMenuClnc::SubMenuClnc_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void SubMenuClnc_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
