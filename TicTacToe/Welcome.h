#pragma once
#pragma comment(lib, "winmm.lib")

#include <Windows.h>
#include <iostream>
#include <mmsystem.h>
#include <tchar.h>
#include <conio.h>
#include "About.h"
#include "PVAGame.h"
#include "PVPGame.h"

namespace TicTacToe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Welcome
	/// </summary>
	public ref class Welcome : public System::Windows::Forms::Form
	{

	public:
		Welcome(void)
		{
			mciSendString(TEXT("play music/bgmusic.wav"), NULL, 0, 0);
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			/*PlaySound(L"music/bgmusic.wav", NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP | SND_LOOP);*/

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Welcome()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ welcomeTxt;
	private: System::Windows::Forms::Label^ areYouReadyTxt;
	private: System::Windows::Forms::Button^ onePlayerBtn;


	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ twoPlayer;
	private: System::Windows::Forms::PictureBox^ PVAIndicator;
	private: System::Windows::Forms::PictureBox^ PVPIndicator;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ about;
	private: System::Windows::Forms::Label^ label1;

	private: System::ComponentModel::IContainer^ components;

	protected:

	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Welcome::typeid));
			this->welcomeTxt = (gcnew System::Windows::Forms::Label());
			this->areYouReadyTxt = (gcnew System::Windows::Forms::Label());
			this->onePlayerBtn = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->twoPlayer = (gcnew System::Windows::Forms::Button());
			this->PVAIndicator = (gcnew System::Windows::Forms::PictureBox());
			this->PVPIndicator = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->about = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PVAIndicator))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PVPIndicator))->BeginInit();
			this->SuspendLayout();
			// 
			// welcomeTxt
			// 
			this->welcomeTxt->BackColor = System::Drawing::Color::Transparent;
			this->welcomeTxt->Font = (gcnew System::Drawing::Font(L"8BIT WONDER", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->welcomeTxt->ForeColor = System::Drawing::Color::White;
			this->welcomeTxt->Location = System::Drawing::Point(12, 46);
			this->welcomeTxt->Name = L"welcomeTxt";
			this->welcomeTxt->Size = System::Drawing::Size(567, 73);
			this->welcomeTxt->TabIndex = 0;
			this->welcomeTxt->Text = L"Tic Tac Toe";
			this->welcomeTxt->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// areYouReadyTxt
			// 
			this->areYouReadyTxt->BackColor = System::Drawing::Color::Transparent;
			this->areYouReadyTxt->Font = (gcnew System::Drawing::Font(L"8BIT WONDER", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->areYouReadyTxt->ForeColor = System::Drawing::Color::White;
			this->areYouReadyTxt->Location = System::Drawing::Point(17, 128);
			this->areYouReadyTxt->Name = L"areYouReadyTxt";
			this->areYouReadyTxt->Size = System::Drawing::Size(567, 23);
			this->areYouReadyTxt->TabIndex = 1;
			this->areYouReadyTxt->Text = L"Select to Start";
			this->areYouReadyTxt->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// onePlayerBtn
			// 
			this->onePlayerBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->onePlayerBtn->FlatAppearance->BorderSize = 0;
			this->onePlayerBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->onePlayerBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->onePlayerBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->onePlayerBtn->Font = (gcnew System::Drawing::Font(L"8BIT WONDER", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->onePlayerBtn->ForeColor = System::Drawing::Color::Transparent;
			this->onePlayerBtn->Location = System::Drawing::Point(162, 3);
			this->onePlayerBtn->Name = L"onePlayerBtn";
			this->onePlayerBtn->Size = System::Drawing::Size(242, 88);
			this->onePlayerBtn->TabIndex = 0;
			this->onePlayerBtn->Text = L"Player vs AI";
			this->onePlayerBtn->UseVisualStyleBackColor = true;
			this->onePlayerBtn->Click += gcnew System::EventHandler(this, &Welcome::onePlayerBtn_Click);
			this->onePlayerBtn->MouseEnter += gcnew System::EventHandler(this, &Welcome::showPVAIndicator);
			this->onePlayerBtn->MouseLeave += gcnew System::EventHandler(this, &Welcome::hidePVAIndicator);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->BackColor = System::Drawing::Color::Transparent;
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				28.08989F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				43.82022F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				28.08989F)));
			this->tableLayoutPanel1->Controls->Add(this->onePlayerBtn, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->twoPlayer, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->PVAIndicator, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->PVPIndicator, 0, 1);
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 203);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(567, 189);
			this->tableLayoutPanel1->TabIndex = 2;
			// 
			// twoPlayer
			// 
			this->twoPlayer->Cursor = System::Windows::Forms::Cursors::Hand;
			this->twoPlayer->FlatAppearance->BorderSize = 0;
			this->twoPlayer->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->twoPlayer->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->twoPlayer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->twoPlayer->Font = (gcnew System::Drawing::Font(L"8BIT WONDER", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->twoPlayer->ForeColor = System::Drawing::Color::White;
			this->twoPlayer->Location = System::Drawing::Point(162, 97);
			this->twoPlayer->Name = L"twoPlayer";
			this->twoPlayer->Size = System::Drawing::Size(242, 89);
			this->twoPlayer->TabIndex = 1;
			this->twoPlayer->Text = L"Player vs Player";
			this->twoPlayer->UseVisualStyleBackColor = true;
			this->twoPlayer->Click += gcnew System::EventHandler(this, &Welcome::twoPlayer_Click);
			this->twoPlayer->MouseEnter += gcnew System::EventHandler(this, &Welcome::showPVPIndicator);
			this->twoPlayer->MouseLeave += gcnew System::EventHandler(this, &Welcome::hidePVPIndicator);
			// 
			// PVAIndicator
			// 
			this->PVAIndicator->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->PVAIndicator->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PVAIndicator.BackgroundImage")));
			this->PVAIndicator->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->PVAIndicator->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PVAIndicator.Image")));
			this->PVAIndicator->Location = System::Drawing::Point(120, 29);
			this->PVAIndicator->Name = L"PVAIndicator";
			this->PVAIndicator->Size = System::Drawing::Size(36, 35);
			this->PVAIndicator->TabIndex = 2;
			this->PVAIndicator->TabStop = false;
			this->PVAIndicator->Visible = false;
			// 
			// PVPIndicator
			// 
			this->PVPIndicator->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->PVPIndicator->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PVPIndicator.BackgroundImage")));
			this->PVPIndicator->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->PVPIndicator->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PVPIndicator.Image")));
			this->PVPIndicator->Location = System::Drawing::Point(120, 124);
			this->PVPIndicator->Name = L"PVPIndicator";
			this->PVPIndicator->Size = System::Drawing::Size(36, 35);
			this->PVPIndicator->TabIndex = 3;
			this->PVPIndicator->TabStop = false;
			this->PVPIndicator->Visible = false;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Welcome::timer1_Tick);
			// 
			// about
			// 
			this->about->BackColor = System::Drawing::Color::Transparent;
			this->about->Cursor = System::Windows::Forms::Cursors::Hand;
			this->about->FlatAppearance->BorderSize = 0;
			this->about->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->about->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->about->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->about->Font = (gcnew System::Drawing::Font(L"8BIT WONDER", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->about->ForeColor = System::Drawing::Color::White;
			this->about->Location = System::Drawing::Point(504, 400);
			this->about->Name = L"about";
			this->about->Size = System::Drawing::Size(75, 23);
			this->about->TabIndex = 3;
			this->about->Text = L"About";
			this->about->UseVisualStyleBackColor = false;
			this->about->Click += gcnew System::EventHandler(this, &Welcome::about_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(9, 402);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(393, 23);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Mark Kenneth Calendario | Pre-Release Version";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// Welcome
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(591, 435);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->about);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->areYouReadyTxt);
			this->Controls->Add(this->welcomeTxt);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Welcome";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Welcome";
			this->tableLayoutPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PVAIndicator))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PVPIndicator))->EndInit();
			this->ResumeLayout(false);

		}

#pragma endregion

private: System::Void showPVAIndicator(System::Object^ sender, System::EventArgs^ e) {
	PVAIndicator->Visible = Visible;
	PlaySound(TEXT("music/hovermenu.wav"), NULL, SND_FILENAME | SND_ASYNC);
}

private: System::Void hidePVAIndicator(System::Object^ sender, System::EventArgs^ e) {
	PVAIndicator->Visible = false;

}
private: System::Void showPVPIndicator(System::Object^ sender, System::EventArgs^ e) {
	PVPIndicator->Visible = Visible;
	PlaySound(TEXT("music/hovermenu.wav"), NULL, SND_FILENAME | SND_ASYNC);
}
private: System::Void hidePVPIndicator(System::Object^ sender, System::EventArgs^ e) {
	PVPIndicator->Visible = false;
}
private: System::Void onePlayerBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	mciSendString(TEXT("stop music/bgmusic.wav"), NULL, 0, 0);
	PVAGame^ pvaGame = gcnew PVAGame();
	pvaGame->Show();
	this->Hide();
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	timer1->Stop();
	//MessageBox::Show(
	//	"Thank you for using my first GUI application project. I hope you enjoy. -Kenneth", 
	//	"Thank you", 
	//	MessageBoxButtons::OK, 
	//	MessageBoxIcon::Information
	//);
}
private: System::Void about_Click(System::Object^ sender, System::EventArgs^ e) {
	About^ about = gcnew About();
	about->Show();
}
	private: System::Void twoPlayer_Click(System::Object^ sender, System::EventArgs^ e) {
		mciSendString(TEXT("stop music/bgmusic.wav"), NULL, 0, 0);
		PVPGame^ pvp = gcnew PVPGame();
		pvp->Show();
		this->Hide();
	}
};
}
