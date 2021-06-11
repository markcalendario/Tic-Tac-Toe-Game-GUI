#pragma once

#include "gameStats.h"

namespace TicTacToe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ResultAnnounce
	/// </summary>
	public ref class ResultAnnounce : public System::Windows::Forms::Form
	{
	public:
		ResultAnnounce(void)
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
		~ResultAnnounce()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ winnerBadges;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::PictureBox^ medal1;
	private: System::Windows::Forms::PictureBox^ medal2;
	private: System::Windows::Forms::PictureBox^ medal3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ finish;
	private: System::Windows::Forms::TableLayoutPanel^ loserBadges;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ResultAnnounce::typeid));
			this->winnerBadges = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->medal1 = (gcnew System::Windows::Forms::PictureBox());
			this->medal2 = (gcnew System::Windows::Forms::PictureBox());
			this->medal3 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->finish = (gcnew System::Windows::Forms::Button());
			this->loserBadges = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->winnerBadges->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->medal1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->medal2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->medal3))->BeginInit();
			this->tableLayoutPanel1->SuspendLayout();
			this->loserBadges->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// winnerBadges
			// 
			this->winnerBadges->BackColor = System::Drawing::Color::Transparent;
			this->winnerBadges->ColumnCount = 5;
			this->winnerBadges->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 35.84905F)));
			this->winnerBadges->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 9.433964F)));
			this->winnerBadges->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 9.433964F)));
			this->winnerBadges->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 9.433964F)));
			this->winnerBadges->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 35.84906F)));
			this->winnerBadges->Controls->Add(this->medal1, 1, 0);
			this->winnerBadges->Controls->Add(this->medal2, 2, 0);
			this->winnerBadges->Controls->Add(this->medal3, 3, 0);
			this->winnerBadges->Location = System::Drawing::Point(13, 50);
			this->winnerBadges->Name = L"winnerBadges";
			this->winnerBadges->RowCount = 1;
			this->winnerBadges->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->winnerBadges->Size = System::Drawing::Size(537, 53);
			this->winnerBadges->TabIndex = 0;
			// 
			// medal1
			// 
			this->medal1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"medal1.BackgroundImage")));
			this->medal1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->medal1->Location = System::Drawing::Point(195, 3);
			this->medal1->Name = L"medal1";
			this->medal1->Size = System::Drawing::Size(44, 47);
			this->medal1->TabIndex = 0;
			this->medal1->TabStop = false;
			// 
			// medal2
			// 
			this->medal2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"medal2.BackgroundImage")));
			this->medal2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->medal2->Location = System::Drawing::Point(245, 3);
			this->medal2->Name = L"medal2";
			this->medal2->Size = System::Drawing::Size(44, 47);
			this->medal2->TabIndex = 1;
			this->medal2->TabStop = false;
			// 
			// medal3
			// 
			this->medal3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"medal3.BackgroundImage")));
			this->medal3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->medal3->Location = System::Drawing::Point(295, 3);
			this->medal3->Name = L"medal3";
			this->medal3->Size = System::Drawing::Size(44, 47);
			this->medal3->TabIndex = 2;
			this->medal3->TabStop = false;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"8BIT WONDER", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(12, 110);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(537, 88);
			this->label1->TabIndex = 1;
			this->label1->Text = L"YOU WIN";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->BackColor = System::Drawing::Color::Transparent;
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel1->Controls->Add(this->finish, 1, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(13, 261);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(536, 56);
			this->tableLayoutPanel1->TabIndex = 2;
			// 
			// finish
			// 
			this->finish->FlatAppearance->BorderSize = 0;
			this->finish->FlatAppearance->MouseDownBackColor = System::Drawing::Color::RoyalBlue;
			this->finish->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->finish->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->finish->Font = (gcnew System::Drawing::Font(L"8BIT WONDER", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->finish->ForeColor = System::Drawing::Color::White;
			this->finish->Location = System::Drawing::Point(181, 3);
			this->finish->Name = L"finish";
			this->finish->Size = System::Drawing::Size(172, 50);
			this->finish->TabIndex = 0;
			this->finish->Text = L"OK";
			this->finish->UseVisualStyleBackColor = true;
			this->finish->Click += gcnew System::EventHandler(this, &ResultAnnounce::finish_Click);
			// 
			// loserBadges
			// 
			this->loserBadges->BackColor = System::Drawing::Color::Transparent;
			this->loserBadges->ColumnCount = 5;
			this->loserBadges->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 35.84905F)));
			this->loserBadges->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 9.433964F)));
			this->loserBadges->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 9.433964F)));
			this->loserBadges->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 9.433964F)));
			this->loserBadges->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 35.84906F)));
			this->loserBadges->Controls->Add(this->pictureBox1, 1, 0);
			this->loserBadges->Controls->Add(this->pictureBox2, 2, 0);
			this->loserBadges->Controls->Add(this->pictureBox3, 3, 0);
			this->loserBadges->Location = System::Drawing::Point(13, 45);
			this->loserBadges->Name = L"loserBadges";
			this->loserBadges->RowCount = 1;
			this->loserBadges->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->loserBadges->Size = System::Drawing::Size(537, 53);
			this->loserBadges->TabIndex = 3;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(195, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(44, 47);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Location = System::Drawing::Point(245, 3);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(44, 47);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox3->Location = System::Drawing::Point(295, 3);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(44, 47);
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			// 
			// ResultAnnounce
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(562, 334);
			this->Controls->Add(this->loserBadges);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->winnerBadges);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"ResultAnnounce";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Winner";
			this->Load += gcnew System::EventHandler(this, &ResultAnnounce::ResultAnnounce_Load);
			this->winnerBadges->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->medal1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->medal2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->medal3))->EndInit();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->loserBadges->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ResultAnnounce_Load(System::Object^ sender, System::EventArgs^ e) {
		if (gStats.isUserTurn())
		{
			label1->Text = "YOU WIN!";
			label1->ForeColor = Color::Yellow;
			this->Text = "Winner";
			winnerBadges->Visible = true;
			loserBadges->Visible = false;
		}
		else {
			label1->Text = "YOU LOSE";
			label1->ForeColor = Color::Red;
			this->Text = "Lose";
			winnerBadges->Visible = false;
			loserBadges->Visible = true;
		}
	}
	private: System::Void finish_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Restart();
	}
};

}
