#pragma once

namespace XeTuHanh {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			getAvailablePort();
		
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::IO::Ports::SerialPort^ serialPort1;
	protected:
	private: System::Windows::Forms::ComboBox^ cbPort;
	private: System::Windows::Forms::ComboBox^ cbBaudrate;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ bOpen;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;





	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ bTien;
	private: System::Windows::Forms::Button^ bTrai;
	private: System::Windows::Forms::Button^ bPhai;
	private: System::Windows::Forms::Button^ bTuhanh;




	private: System::Windows::Forms::Button^ bLui;
	private: System::Windows::Forms::Button^ bDung;
	private: System::Windows::Forms::Button^ bClose;



	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label7;





	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->cbPort = (gcnew System::Windows::Forms::ComboBox());
			this->cbBaudrate = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->bOpen = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->bTien = (gcnew System::Windows::Forms::Button());
			this->bTrai = (gcnew System::Windows::Forms::Button());
			this->bPhai = (gcnew System::Windows::Forms::Button());
			this->bTuhanh = (gcnew System::Windows::Forms::Button());
			this->bLui = (gcnew System::Windows::Forms::Button());
			this->bDung = (gcnew System::Windows::Forms::Button());
			this->bClose = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// serialPort1
			// 
			this->serialPort1->PortName = L"COM14";
			// 
			// cbPort
			// 
			this->cbPort->FormattingEnabled = true;
			this->cbPort->Location = System::Drawing::Point(34, 41);
			this->cbPort->Name = L"cbPort";
			this->cbPort->Size = System::Drawing::Size(115, 21);
			this->cbPort->TabIndex = 0;
			// 
			// cbBaudrate
			// 
			this->cbBaudrate->FormattingEnabled = true;
			this->cbBaudrate->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"4800", L"9600", L"11200" });
			this->cbBaudrate->Location = System::Drawing::Point(196, 41);
			this->cbBaudrate->Name = L"cbBaudrate";
			this->cbBaudrate->Size = System::Drawing::Size(115, 21);
			this->cbBaudrate->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(31, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"PORT";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(193, 25);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"BAUD RATE";
			// 
			// bOpen
			// 
			this->bOpen->Location = System::Drawing::Point(34, 79);
			this->bOpen->Name = L"bOpen";
			this->bOpen->Size = System::Drawing::Size(85, 24);
			this->bOpen->TabIndex = 4;
			this->bOpen->Text = L"OPEN";
			this->bOpen->UseVisualStyleBackColor = true;
			this->bOpen->Click += gcnew System::EventHandler(this, &MyForm::bOpen_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(193, 79);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Trạng thái:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(193, 105);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"label4";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(335, 41);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox1->Size = System::Drawing::Size(271, 289);
			this->textBox1->TabIndex = 12;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(332, 25);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(50, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"ACTION:";
			// 
			// bTien
			// 
			this->bTien->Location = System::Drawing::Point(105, 19);
			this->bTien->Name = L"bTien";
			this->bTien->Size = System::Drawing::Size(75, 53);
			this->bTien->TabIndex = 14;
			this->bTien->Text = L"TIẾN";
			this->bTien->UseVisualStyleBackColor = true;
			this->bTien->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::bTien_MouseDown);
			this->bTien->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::bTien_MouseUp);
			// 
			// bTrai
			// 
			this->bTrai->Location = System::Drawing::Point(24, 78);
			this->bTrai->Name = L"bTrai";
			this->bTrai->Size = System::Drawing::Size(75, 53);
			this->bTrai->TabIndex = 15;
			this->bTrai->Text = L"QUAY TRÁI";
			this->bTrai->UseVisualStyleBackColor = true;
			this->bTrai->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::bTrai_MouseDown);
			this->bTrai->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::bTrai_MouseUp);
			// 
			// bPhai
			// 
			this->bPhai->Location = System::Drawing::Point(186, 78);
			this->bPhai->Name = L"bPhai";
			this->bPhai->Size = System::Drawing::Size(75, 53);
			this->bPhai->TabIndex = 16;
			this->bPhai->Text = L"QUAY PHẢI";
			this->bPhai->UseVisualStyleBackColor = true;
			this->bPhai->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::bPhai_MouseDown);
			this->bPhai->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::bPhai_MouseUp);
			// 
			// bTuhanh
			// 
			this->bTuhanh->Location = System::Drawing::Point(81, 196);
			this->bTuhanh->Name = L"bTuhanh";
			this->bTuhanh->Size = System::Drawing::Size(122, 32);
			this->bTuhanh->TabIndex = 17;
			this->bTuhanh->Text = L"DÒ LINE";
			this->bTuhanh->UseVisualStyleBackColor = true;
			this->bTuhanh->Click += gcnew System::EventHandler(this, &MyForm::bTuhanh_Click);
			// 
			// bLui
			// 
			this->bLui->Location = System::Drawing::Point(105, 137);
			this->bLui->Name = L"bLui";
			this->bLui->Size = System::Drawing::Size(75, 53);
			this->bLui->TabIndex = 18;
			this->bLui->Text = L"LÙI";
			this->bLui->UseVisualStyleBackColor = true;
			this->bLui->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::bLui_MouseDown);
			this->bLui->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::bLui_MouseUp);
			// 
			// bDung
			// 
			this->bDung->Location = System::Drawing::Point(104, 78);
			this->bDung->Name = L"bDung";
			this->bDung->Size = System::Drawing::Size(75, 53);
			this->bDung->TabIndex = 19;
			this->bDung->Text = L"DỪNG LẠI";
			this->bDung->UseVisualStyleBackColor = true;
			// 
			// bClose
			// 
			this->bClose->Location = System::Drawing::Point(521, 352);
			this->bClose->Name = L"bClose";
			this->bClose->Size = System::Drawing::Size(85, 24);
			this->bClose->TabIndex = 20;
			this->bClose->Text = L"CLOSE";
			this->bClose->UseVisualStyleBackColor = true;
			this->bClose->Click += gcnew System::EventHandler(this, &MyForm::bClose_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(208, 389);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 13);
			this->label6->TabIndex = 21;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->bDung);
			this->groupBox1->Controls->Add(this->bLui);
			this->groupBox1->Controls->Add(this->bTuhanh);
			this->groupBox1->Controls->Add(this->bPhai);
			this->groupBox1->Controls->Add(this->bTrai);
			this->groupBox1->Controls->Add(this->bTien);
			this->groupBox1->Location = System::Drawing::Point(25, 123);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(286, 246);
			this->groupBox1->TabIndex = 22;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Controller:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(251, 389);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(86, 13);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Produced: Cừ dz";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(644, 406);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->bClose);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->bOpen);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cbBaudrate);
			this->Controls->Add(this->cbPort);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(660, 445);
			this->MinimumSize = System::Drawing::Size(660, 445);
			this->Name = L"MyForm";
			this->Text = L"Line Follower Bluetooth Robot";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load_1);
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void getAvailablePort() {
		array<Object^>^ ports = SerialPort::GetPortNames();
		this->cbPort->Items->AddRange(ports);
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->cbBaudrate->SelectedIndex = 1; //dat Baud rate mac dinh la 9600
		this->label4->Text = L"Chưa kết nối!";
		this->label4->ForeColor = Color::Red;
	}

	private: System::Void bOpen_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			if (this->cbPort->Text == String::Empty || this->cbBaudrate->Text == String::Empty) {
				this->textBox1->Text = "Vui lòng chọn cổng kết nối!";
			}
			else {
				if (!this->serialPort1->IsOpen) {
					this->serialPort1->PortName = this->cbPort->Text;
					this->serialPort1->BaudRate = Int32::Parse(this->cbBaudrate->Text);
					this->serialPort1->Open();
 					this->label4->Text = L"Đã kết nối!";
					this->label4->ForeColor = Color::Green;
					this->cbBaudrate->Enabled = false;
					this->cbPort->Enabled = false;
					this->bOpen->Enabled = false;

				}
				else {
					this->textBox1->Text = L"Không mở được cổng kết nối!";
				}
			}
		}
		catch (UnauthorizedAccessException^) {
			this->textBox1->Text = "Error!!";
		}
	}
private: System::Void MyForm_Load_1(System::Object^ sender, System::EventArgs^ e) {
	this->cbBaudrate->SelectedIndex = 1; //dat Baud rate mac dinh la 9600
	this->label4->Text = L"Chưa kết nối!";
	this->label4->ForeColor = Color::Red;
}


private: System::Void bTuhanh_Click(System::Object^ sender, System::EventArgs^ e) {
	this->serialPort1->Write("f");
	this->textBox1->Text = L"Bật chế độ Dò line!";
	//this->textBox1->Text += serialPort1->ReadExisting();
	//this->textBox1->SelectionStart = textBox1->TextLength;
	//this->textBox1->ScrollToCaret();
}


private: System::Void bTien_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->serialPort1->Write("w");
	this->textBox1->Text = L"Tiến";
}
private: System::Void bTien_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->serialPort1->Write("e");
}

private: System::Void bLui_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->serialPort1->Write("s");
	this->textBox1->Text = L"Lùi";
}
private: System::Void bLui_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->serialPort1->Write("e");
}

private: System::Void bTrai_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->serialPort1->Write("a");
	this->textBox1->Text = L"Rẽ trái";
}
private: System::Void bTrai_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->serialPort1->Write("e");
}

private: System::Void bPhai_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->serialPort1->Write("d");
	this->textBox1->Text = L"Rẽ phải";
}
private: System::Void bPhai_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->serialPort1->Write("e");
} 

private: System::Void bClose_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
