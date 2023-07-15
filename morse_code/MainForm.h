#pragma once

namespace morsecode {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^ rb1;
	protected:

	private: System::Windows::Forms::RadioButton^ rb2;

	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ button1;
	private: System::IO::FileSystemWatcher^ fileSystemWatcher1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;


	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Button^ button2;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->rb1 = (gcnew System::Windows::Forms::RadioButton());
			this->rb2 = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->fileSystemWatcher1 = (gcnew System::IO::FileSystemWatcher());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileSystemWatcher1))->BeginInit();
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// rb1
			// 
			this->rb1->AutoSize = true;
			this->rb1->Checked = true;
			this->rb1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rb1->Location = System::Drawing::Point(27, 6);
			this->rb1->Name = L"rb1";
			this->rb1->Size = System::Drawing::Size(153, 32);
			this->rb1->TabIndex = 0;
			this->rb1->TabStop = true;
			this->rb1->Text = L"В код Морзе";
			this->rb1->UseVisualStyleBackColor = true;
			this->rb1->CheckedChanged += gcnew System::EventHandler(this, &MainForm::radioButton1_CheckedChanged);
			// 
			// rb2
			// 
			this->rb2->AutoSize = true;
			this->rb2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rb2->Location = System::Drawing::Point(230, 6);
			this->rb2->Name = L"rb2";
			this->rb2->Size = System::Drawing::Size(106, 32);
			this->rb2->TabIndex = 1;
			this->rb2->Text = L"В Текст";
			this->rb2->UseVisualStyleBackColor = true;
			this->rb2->CheckedChanged += gcnew System::EventHandler(this, &MainForm::rb2_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(352, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 16);
			this->label1->TabIndex = 2;
			this->label1->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(273, 115);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(83, 47);
			this->button1->TabIndex = 4;
			this->button1->Text = L"->";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// fileSystemWatcher1
			// 
			this->fileSystemWatcher1->EnableRaisingEvents = true;
			this->fileSystemWatcher1->SynchronizingObject = this;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox1->BackColor = System::Drawing::Color::White;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(3, 3);
			this->richTextBox1->MinimumSize = System::Drawing::Size(148, 181);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(264, 272);
			this->richTextBox1->TabIndex = 5;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MainForm::richTextBox1_TextChanged);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->AutoSize = true;
			this->tableLayoutPanel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				42.88165F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				14.23671F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				42.88165F)));
			this->tableLayoutPanel1->Controls->Add(this->button1, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->richTextBox2, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->richTextBox1, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(24, 53);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(631, 278);
			this->tableLayoutPanel1->TabIndex = 7;
			// 
			// richTextBox2
			// 
			this->richTextBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox2->Location = System::Drawing::Point(362, 3);
			this->richTextBox2->MinimumSize = System::Drawing::Size(148, 181);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->ReadOnly = true;
			this->richTextBox2->Size = System::Drawing::Size(266, 272);
			this->richTextBox2->TabIndex = 6;
			this->richTextBox2->Text = L"";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(438, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(171, 41);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Очистить всё";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(682, 337);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->rb2);
			this->Controls->Add(this->rb1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(700, 384);
			this->Name = L"MainForm";
			this->Text = L"Переводчик";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileSystemWatcher1))->EndInit();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->richTextBox1->Text = "";
		this->richTextBox2->Text = "";
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

String^ to_morse(int num){
	String^ res;
	switch (num) {
	case 16:
	case 48: res = ".-"; break; //а
	case 17:
	case 49: res = "-..."; break; //б
	case 18:
	case 50: res = ".--"; break; //в
	case 19:
	case 51: res = "--."; break; //г
	case 20:
	case 52: res = "-.."; break; //д
	case 21:
	case 1:  //Ё
	case 81: //ё
	case 53: res = "."; break; //е
	case 22:
	case 54: res = "...-"; break; //ж
	case 23:
	case 55: res = "--.."; break; //з
	case 24:
	case 56: res = ".."; break; //и
	case 25:
	case 57: res = ".---"; break; //й
	case 26:
	case 58: res = "-.-"; break; //к
	case 27:
	case 59: res = ".-.."; break; //л
	case 28:
	case 60: res = "--"; break; //м
	case 29:
	case 61: res = "-."; break; //н
	case 30:
	case 62: res = "---"; break; //о
	case 31:
	case 63: res = ".--."; break; //п
	case 32:
	case 64: res = ".-."; break; //р
	case 33:
	case 65: res = "..."; break; //с
	case 34:
	case 66: res = "-"; break; //т
	case 35:
	case 67: res = "..-"; break; //у
	case 36:
	case 68: res = "..-."; break; //ф
	case 37:
	case 69: res = "...."; break; //х
	case 38:
	case 70: res = "-.-."; break; //ц
	case 39:
	case 71: res = "---."; break; //ч
	case 40:
	case 72: res = "----"; break; //ш
	case 41:
	case 73: res = "--.-"; break; //щ
	case 42:
	case 74: res = "--.--"; break; //ъ
	case 43:
	case 75: res = "-.--"; break; //ы
	case 44:
	case 76: res = "-..-"; break; //ь
	case 45:
	case 77: res = "..-.."; break; //э
	case 46:
	case 78: res = "..--"; break; //ю
	case 47:
	case 79: res = ".-.-"; break; //я
	default: res = "Error";
	}
	return res;
}

String^ to_morse2(char let) {
	String^ res;
	switch (let) {
	case '?': res = "..--.."; break;
	case '.': res = ".-.-.-"; break;
	case ',': res = "--..--"; break;
	case '-': res = "-....-"; break;
	case '!': res = "-.-.--"; break;
	case '\n' : res = "\n"; break; //\n
	case ' ': res = "/"; break; //Пробел
	default: res = "Error";
	}
	return res;
}

String^ to_text(String^ let) {
	String^ res;
	if (let == ".-") res = "А";
	else if (let == "-...") res = "Б";
	else if (let == ".--") res = "В";
	else if (let == "--.") res = "Г";
	else if (let == "-..") res = "Д";
	else if (let == ".") res = "Е";
	else if (let == "...-") res = "Ж";
	else if (let == "--..") res = "З";
	else if (let == "..") res = "И";
	else if (let == ".---") res = "Й";
	else if (let == "-.-") res = "К";
	else if (let == ".-..") res = "Л";
	else if (let == "--") res = "М";
	else if (let == "-.") res = "Н";
	else if (let == "---") res = "О";
	else if (let == ".--.") res = "П";
	else if (let == ".-.") res = "Р";
	else if (let == "...") res = "С";
	else if (let == "-") res = "Т";
	else if (let == "..-") res = "У";
	else if (let == "..-.") res = "Ф";
	else if (let == "....") res = "Х";
	else if (let == "-.-.") res = "Ц";
	else if (let == "---.") res = "Ч";
	else if (let == "----") res = "Ш";
	else if (let == "--.-") res = "Щ";
	else if (let == "-..-") res = "Ь";
	else if (let == "-.--") res = "Ы";
	else if (let == "..-..") res = "Э";
	else if (let == "..--") res = "Ю";
	else if (let == ".-.-") res = "Я";
	else if (let == "-.-.--") res = "!";
	else if (let == "..--..") res = "?";
	else if (let == "--..--") res = ",";
	else if (let == "-....-") res = "-";
	else if (let == ".-.-.-") res = ".";
	else res = "Error";

	return res;
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ text;
	String^ result = "";
	String^ word = "";
	String^ temp;
	int word_length = 0;
	int num;
	int length;
	text = this->richTextBox1->Text;
	length = this->richTextBox1->Text->Length;
	if (this->rb1->Checked == true) {
		for (int i = 0; i < length; i++) {
			if (text[i].IsLetter(text[i])) {
				num = (unsigned char)text[i];
				temp = to_morse(num);
			}
			else {
				temp = to_morse2(text[i]);
			}
			if (temp == "Error") {
				result = temp + " - " + text[i] + " - " + ((unsigned char)text[i]).ToString();
				break;
			}
			result += temp;
			if (i != length - 1) result += " ";
		}
	}
	else {
		for (int i = 0; i < length; i++) {
			if (text[i] == ' ' || text[i] == '/' || i == length - 1 || text[i] == '\n') {
				if ((i == length - 1) && text[i] != ' ' && text[i] != '/' && text[i] != '\n') {
					word += text[i];
					word_length++;
				}
				if (word_length > 0) {
					temp = to_text(word);
					if (temp == "Error") {
						result = temp + " - " + word;
						break;
					}
					word = "";
					word_length = 0;
					result += temp;
					
				}
				if (text[i] == '/') result += " ";
				if (text[i] == '\n') result += "\n";

			}
			else {
				word += text[i];
				word_length++;
			}
		}

	}
	
	this->richTextBox2->Text = result;
}
private: System::Void rb2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->richTextBox1->Text = "";
	this->richTextBox2->Text = "";
}
private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->richTextBox1->Text = "";
	this->richTextBox2->Text = "";
}
};
}
