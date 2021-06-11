#pragma once
#pragma comment(lib, "winmm.lib")

#include <iostream>
#include <string>
#include <time.h>
#include <Windows.h>
#include <string>

#include "gameStats.h"
#include "ResultAnnounce.h"

namespace TicTacToe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Summary for PVAGame
	/// </summary>
	/// 

	public ref class PVAGame : public System::Windows::Forms::Form
	{

	public:
		PVAGame(void)
		{
			PlaySound(TEXT("music/firstround.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			updateGameState();
			this->MinimizeBox = false;
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PVAGame()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Timer^ opponentTurn;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ turnText;
	private: System::Windows::Forms::PictureBox^ aDiamond2;
	private: System::Windows::Forms::PictureBox^ aDiamond1;
	private: System::Windows::Forms::PictureBox^ youDiamond2;
	private: System::Windows::Forms::PictureBox^ youDiamond1;
	private: System::Windows::Forms::Button^ quitBtn;
	private: System::Windows::Forms::Label^ draw;
	private: System::Windows::Forms::Label^ round;
	private: System::Windows::Forms::Label^ scoreboard;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ player1Txt;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Button^ eightBtn;
	private: System::Windows::Forms::Button^ sevenBtn;
	private: System::Windows::Forms::Button^ sixBtn;
	private: System::Windows::Forms::Button^ fiveBtn;
	private: System::Windows::Forms::Button^ fourBtn;
	private: System::Windows::Forms::Button^ threeBtn;
	private: System::Windows::Forms::Button^ twoBtn;
	private: System::Windows::Forms::Button^ oneBtn;
	private: System::Windows::Forms::Button^ zeroBtn;
	private: System::Windows::Forms::TableLayoutPanel^ gamePanel;
	private: System::Windows::Forms::Button^ gameAgainBtn;
	private: System::Windows::Forms::Label^ label2;



	private: System::ComponentModel::IContainer^ components;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PVAGame::typeid));
			this->opponentTurn = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->gameAgainBtn = (gcnew System::Windows::Forms::Button());
			this->turnText = (gcnew System::Windows::Forms::Label());
			this->aDiamond2 = (gcnew System::Windows::Forms::PictureBox());
			this->aDiamond1 = (gcnew System::Windows::Forms::PictureBox());
			this->youDiamond2 = (gcnew System::Windows::Forms::PictureBox());
			this->youDiamond1 = (gcnew System::Windows::Forms::PictureBox());
			this->quitBtn = (gcnew System::Windows::Forms::Button());
			this->draw = (gcnew System::Windows::Forms::Label());
			this->round = (gcnew System::Windows::Forms::Label());
			this->scoreboard = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->player1Txt = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->eightBtn = (gcnew System::Windows::Forms::Button());
			this->sevenBtn = (gcnew System::Windows::Forms::Button());
			this->sixBtn = (gcnew System::Windows::Forms::Button());
			this->fiveBtn = (gcnew System::Windows::Forms::Button());
			this->fourBtn = (gcnew System::Windows::Forms::Button());
			this->threeBtn = (gcnew System::Windows::Forms::Button());
			this->twoBtn = (gcnew System::Windows::Forms::Button());
			this->oneBtn = (gcnew System::Windows::Forms::Button());
			this->zeroBtn = (gcnew System::Windows::Forms::Button());
			this->gamePanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->aDiamond2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->aDiamond1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->youDiamond2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->youDiamond1))->BeginInit();
			this->tableLayoutPanel2->SuspendLayout();
			this->gamePanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// opponentTurn
			// 
			this->opponentTurn->Interval = 1000;
			this->opponentTurn->Tick += gcnew System::EventHandler(this, &PVAGame::opponentTurn_Tick);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->panel1->Controls->Add(this->gameAgainBtn);
			this->panel1->Controls->Add(this->turnText);
			this->panel1->Controls->Add(this->aDiamond2);
			this->panel1->Controls->Add(this->aDiamond1);
			this->panel1->Controls->Add(this->youDiamond2);
			this->panel1->Controls->Add(this->youDiamond1);
			this->panel1->Controls->Add(this->quitBtn);
			this->panel1->Controls->Add(this->draw);
			this->panel1->Controls->Add(this->round);
			this->panel1->Controls->Add(this->scoreboard);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->player1Txt);
			this->panel1->Location = System::Drawing::Point(500, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(213, 431);
			this->panel1->TabIndex = 2;
			// 
			// gameAgainBtn
			// 
			this->gameAgainBtn->BackColor = System::Drawing::Color::Green;
			this->gameAgainBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->gameAgainBtn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->gameAgainBtn->FlatAppearance->BorderSize = 0;
			this->gameAgainBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->gameAgainBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->gameAgainBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->gameAgainBtn->Font = (gcnew System::Drawing::Font(L"8BIT WONDER", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gameAgainBtn->ForeColor = System::Drawing::Color::White;
			this->gameAgainBtn->Location = System::Drawing::Point(2, 347);
			this->gameAgainBtn->Name = L"gameAgainBtn";
			this->gameAgainBtn->Size = System::Drawing::Size(210, 40);
			this->gameAgainBtn->TabIndex = 15;
			this->gameAgainBtn->Text = L"Next Round";
			this->gameAgainBtn->UseVisualStyleBackColor = false;
			this->gameAgainBtn->Visible = false;
			this->gameAgainBtn->Click += gcnew System::EventHandler(this, &PVAGame::gameAgainBtn_Click);
			// 
			// turnText
			// 
			this->turnText->BackColor = System::Drawing::Color::Transparent;
			this->turnText->Font = (gcnew System::Drawing::Font(L"8BIT WONDER", 12));
			this->turnText->ForeColor = System::Drawing::Color::White;
			this->turnText->Location = System::Drawing::Point(3, 262);
			this->turnText->Name = L"turnText";
			this->turnText->Size = System::Drawing::Size(207, 42);
			this->turnText->TabIndex = 14;
			this->turnText->Text = L"Your Turn";
			this->turnText->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// aDiamond2
			// 
			this->aDiamond2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"aDiamond2.BackgroundImage")));
			this->aDiamond2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->aDiamond2->Location = System::Drawing::Point(146, 172);
			this->aDiamond2->Name = L"aDiamond2";
			this->aDiamond2->Size = System::Drawing::Size(32, 30);
			this->aDiamond2->TabIndex = 13;
			this->aDiamond2->TabStop = false;
			this->aDiamond2->Visible = false;
			// 
			// aDiamond1
			// 
			this->aDiamond1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"aDiamond1.BackgroundImage")));
			this->aDiamond1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->aDiamond1->Location = System::Drawing::Point(108, 172);
			this->aDiamond1->Name = L"aDiamond1";
			this->aDiamond1->Size = System::Drawing::Size(32, 30);
			this->aDiamond1->TabIndex = 12;
			this->aDiamond1->TabStop = false;
			this->aDiamond1->Visible = false;
			// 
			// youDiamond2
			// 
			this->youDiamond2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"youDiamond2.BackgroundImage")));
			this->youDiamond2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->youDiamond2->Location = System::Drawing::Point(146, 136);
			this->youDiamond2->Name = L"youDiamond2";
			this->youDiamond2->Size = System::Drawing::Size(32, 30);
			this->youDiamond2->TabIndex = 11;
			this->youDiamond2->TabStop = false;
			this->youDiamond2->Visible = false;
			// 
			// youDiamond1
			// 
			this->youDiamond1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"youDiamond1.BackgroundImage")));
			this->youDiamond1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->youDiamond1->Location = System::Drawing::Point(108, 136);
			this->youDiamond1->Name = L"youDiamond1";
			this->youDiamond1->Size = System::Drawing::Size(32, 30);
			this->youDiamond1->TabIndex = 10;
			this->youDiamond1->TabStop = false;
			this->youDiamond1->Visible = false;
			// 
			// quitBtn
			// 
			this->quitBtn->BackColor = System::Drawing::Color::Maroon;
			this->quitBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->quitBtn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->quitBtn->FlatAppearance->BorderSize = 0;
			this->quitBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->quitBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->quitBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->quitBtn->Font = (gcnew System::Drawing::Font(L"8BIT WONDER", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->quitBtn->ForeColor = System::Drawing::Color::White;
			this->quitBtn->Location = System::Drawing::Point(2, 389);
			this->quitBtn->Name = L"quitBtn";
			this->quitBtn->Size = System::Drawing::Size(210, 40);
			this->quitBtn->TabIndex = 9;
			this->quitBtn->Text = L"Quit";
			this->quitBtn->UseVisualStyleBackColor = false;
			this->quitBtn->Click += gcnew System::EventHandler(this, &PVAGame::quitBtn_Click);
			// 
			// draw
			// 
			this->draw->BackColor = System::Drawing::Color::Transparent;
			this->draw->Font = (gcnew System::Drawing::Font(L"8BIT WONDER", 12));
			this->draw->ForeColor = System::Drawing::Color::White;
			this->draw->Location = System::Drawing::Point(3, 77);
			this->draw->Name = L"draw";
			this->draw->Size = System::Drawing::Size(191, 42);
			this->draw->TabIndex = 5;
			this->draw->Text = L"Draw: 0";
			this->draw->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// round
			// 
			this->round->BackColor = System::Drawing::Color::Transparent;
			this->round->Font = (gcnew System::Drawing::Font(L"8BIT WONDER", 12));
			this->round->ForeColor = System::Drawing::Color::RoyalBlue;
			this->round->Location = System::Drawing::Point(3, 47);
			this->round->Name = L"round";
			this->round->Size = System::Drawing::Size(191, 42);
			this->round->TabIndex = 4;
			this->round->Text = L"Round: 1";
			this->round->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// scoreboard
			// 
			this->scoreboard->BackColor = System::Drawing::Color::RoyalBlue;
			this->scoreboard->Font = (gcnew System::Drawing::Font(L"8BIT WONDER", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->scoreboard->ForeColor = System::Drawing::Color::White;
			this->scoreboard->Location = System::Drawing::Point(3, 3);
			this->scoreboard->Name = L"scoreboard";
			this->scoreboard->Size = System::Drawing::Size(207, 42);
			this->scoreboard->TabIndex = 3;
			this->scoreboard->Text = L"Scoreboard";
			this->scoreboard->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"8BIT WONDER", 12));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(3, 162);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(191, 42);
			this->label1->TabIndex = 2;
			this->label1->Text = L"AI (O):";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// player1Txt
			// 
			this->player1Txt->BackColor = System::Drawing::Color::Transparent;
			this->player1Txt->Font = (gcnew System::Drawing::Font(L"8BIT WONDER", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->player1Txt->ForeColor = System::Drawing::Color::White;
			this->player1Txt->Location = System::Drawing::Point(3, 129);
			this->player1Txt->Name = L"player1Txt";
			this->player1Txt->Size = System::Drawing::Size(171, 42);
			this->player1Txt->TabIndex = 1;
			this->player1Txt->Text = L"You (x):";
			this->player1Txt->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 3;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33334F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33334F)));
			this->tableLayoutPanel2->Controls->Add(this->eightBtn, 2, 2);
			this->tableLayoutPanel2->Controls->Add(this->sevenBtn, 1, 2);
			this->tableLayoutPanel2->Controls->Add(this->sixBtn, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->fiveBtn, 2, 1);
			this->tableLayoutPanel2->Controls->Add(this->fourBtn, 1, 1);
			this->tableLayoutPanel2->Controls->Add(this->threeBtn, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->twoBtn, 2, 0);
			this->tableLayoutPanel2->Controls->Add(this->oneBtn, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->zeroBtn, 0, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 3;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(491, 431);
			this->tableLayoutPanel2->TabIndex = 0;
			// 
			// eightBtn
			// 
			this->eightBtn->BackColor = System::Drawing::Color::Transparent;
			this->eightBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->eightBtn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->eightBtn->FlatAppearance->BorderSize = 5;
			this->eightBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->eightBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->eightBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->eightBtn->Font = (gcnew System::Drawing::Font(L"8BIT WONDER", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->eightBtn->ForeColor = System::Drawing::Color::White;
			this->eightBtn->Location = System::Drawing::Point(329, 289);
			this->eightBtn->Name = L"eightBtn";
			this->eightBtn->Size = System::Drawing::Size(157, 139);
			this->eightBtn->TabIndex = 8;
			this->eightBtn->UseVisualStyleBackColor = false;
			this->eightBtn->Click += gcnew System::EventHandler(this, &PVAGame::eightBtn_Click);
			// 
			// sevenBtn
			// 
			this->sevenBtn->BackColor = System::Drawing::Color::Transparent;
			this->sevenBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->sevenBtn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->sevenBtn->FlatAppearance->BorderSize = 5;
			this->sevenBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->sevenBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->sevenBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->sevenBtn->Font = (gcnew System::Drawing::Font(L"8BIT WONDER", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sevenBtn->ForeColor = System::Drawing::Color::White;
			this->sevenBtn->Location = System::Drawing::Point(166, 289);
			this->sevenBtn->Name = L"sevenBtn";
			this->sevenBtn->Size = System::Drawing::Size(157, 139);
			this->sevenBtn->TabIndex = 7;
			this->sevenBtn->UseVisualStyleBackColor = false;
			this->sevenBtn->Click += gcnew System::EventHandler(this, &PVAGame::sevenBtn_Click);
			// 
			// sixBtn
			// 
			this->sixBtn->BackColor = System::Drawing::Color::Transparent;
			this->sixBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->sixBtn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->sixBtn->FlatAppearance->BorderSize = 5;
			this->sixBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->sixBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->sixBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->sixBtn->Font = (gcnew System::Drawing::Font(L"8BIT WONDER", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sixBtn->ForeColor = System::Drawing::Color::White;
			this->sixBtn->Location = System::Drawing::Point(3, 289);
			this->sixBtn->Name = L"sixBtn";
			this->sixBtn->Size = System::Drawing::Size(157, 139);
			this->sixBtn->TabIndex = 6;
			this->sixBtn->UseVisualStyleBackColor = false;
			this->sixBtn->Click += gcnew System::EventHandler(this, &PVAGame::sixBtn_Click);
			// 
			// fiveBtn
			// 
			this->fiveBtn->BackColor = System::Drawing::Color::Transparent;
			this->fiveBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->fiveBtn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->fiveBtn->FlatAppearance->BorderSize = 5;
			this->fiveBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->fiveBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->fiveBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->fiveBtn->Font = (gcnew System::Drawing::Font(L"8BIT WONDER", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fiveBtn->ForeColor = System::Drawing::Color::White;
			this->fiveBtn->Location = System::Drawing::Point(329, 146);
			this->fiveBtn->Name = L"fiveBtn";
			this->fiveBtn->Size = System::Drawing::Size(157, 137);
			this->fiveBtn->TabIndex = 5;
			this->fiveBtn->UseVisualStyleBackColor = false;
			this->fiveBtn->Click += gcnew System::EventHandler(this, &PVAGame::fiveBtn_Click);
			// 
			// fourBtn
			// 
			this->fourBtn->BackColor = System::Drawing::Color::Transparent;
			this->fourBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->fourBtn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->fourBtn->FlatAppearance->BorderSize = 5;
			this->fourBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->fourBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->fourBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->fourBtn->Font = (gcnew System::Drawing::Font(L"8BIT WONDER", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fourBtn->ForeColor = System::Drawing::Color::White;
			this->fourBtn->Location = System::Drawing::Point(166, 146);
			this->fourBtn->Name = L"fourBtn";
			this->fourBtn->Size = System::Drawing::Size(157, 137);
			this->fourBtn->TabIndex = 4;
			this->fourBtn->UseVisualStyleBackColor = false;
			this->fourBtn->Click += gcnew System::EventHandler(this, &PVAGame::fourBtn_Click);
			// 
			// threeBtn
			// 
			this->threeBtn->BackColor = System::Drawing::Color::Transparent;
			this->threeBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->threeBtn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->threeBtn->FlatAppearance->BorderSize = 5;
			this->threeBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->threeBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->threeBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->threeBtn->Font = (gcnew System::Drawing::Font(L"8BIT WONDER", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->threeBtn->ForeColor = System::Drawing::Color::White;
			this->threeBtn->Location = System::Drawing::Point(3, 146);
			this->threeBtn->Name = L"threeBtn";
			this->threeBtn->Size = System::Drawing::Size(157, 137);
			this->threeBtn->TabIndex = 3;
			this->threeBtn->UseVisualStyleBackColor = false;
			this->threeBtn->Click += gcnew System::EventHandler(this, &PVAGame::threeBtn_Click);
			// 
			// twoBtn
			// 
			this->twoBtn->BackColor = System::Drawing::Color::Transparent;
			this->twoBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->twoBtn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->twoBtn->FlatAppearance->BorderSize = 5;
			this->twoBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->twoBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->twoBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->twoBtn->Font = (gcnew System::Drawing::Font(L"8BIT WONDER", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->twoBtn->ForeColor = System::Drawing::Color::White;
			this->twoBtn->Location = System::Drawing::Point(329, 3);
			this->twoBtn->Name = L"twoBtn";
			this->twoBtn->Size = System::Drawing::Size(157, 137);
			this->twoBtn->TabIndex = 2;
			this->twoBtn->UseVisualStyleBackColor = false;
			this->twoBtn->Click += gcnew System::EventHandler(this, &PVAGame::twoBtn_Click);
			// 
			// oneBtn
			// 
			this->oneBtn->BackColor = System::Drawing::Color::Transparent;
			this->oneBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->oneBtn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->oneBtn->FlatAppearance->BorderSize = 5;
			this->oneBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->oneBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->oneBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->oneBtn->Font = (gcnew System::Drawing::Font(L"8BIT WONDER", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->oneBtn->ForeColor = System::Drawing::Color::White;
			this->oneBtn->Location = System::Drawing::Point(166, 3);
			this->oneBtn->Name = L"oneBtn";
			this->oneBtn->Size = System::Drawing::Size(157, 137);
			this->oneBtn->TabIndex = 1;
			this->oneBtn->UseVisualStyleBackColor = false;
			this->oneBtn->Click += gcnew System::EventHandler(this, &PVAGame::oneBtn_Click);
			// 
			// zeroBtn
			// 
			this->zeroBtn->BackColor = System::Drawing::Color::Transparent;
			this->zeroBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->zeroBtn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->zeroBtn->FlatAppearance->BorderSize = 5;
			this->zeroBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->zeroBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->zeroBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->zeroBtn->Font = (gcnew System::Drawing::Font(L"8BIT WONDER", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->zeroBtn->ForeColor = System::Drawing::Color::White;
			this->zeroBtn->Location = System::Drawing::Point(3, 3);
			this->zeroBtn->Name = L"zeroBtn";
			this->zeroBtn->Size = System::Drawing::Size(157, 137);
			this->zeroBtn->TabIndex = 0;
			this->zeroBtn->UseVisualStyleBackColor = false;
			this->zeroBtn->Click += gcnew System::EventHandler(this, &PVAGame::zeroBtn_Click);
			// 
			// gamePanel
			// 
			this->gamePanel->BackColor = System::Drawing::Color::Transparent;
			this->gamePanel->ColumnCount = 2;
			this->gamePanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 69.55307F)));
			this->gamePanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 30.44693F)));
			this->gamePanel->Controls->Add(this->label2, 0, 1);
			this->gamePanel->Controls->Add(this->tableLayoutPanel2, 0, 0);
			this->gamePanel->Controls->Add(this->panel1, 1, 0);
			this->gamePanel->Location = System::Drawing::Point(12, 12);
			this->gamePanel->Name = L"gamePanel";
			this->gamePanel->RowCount = 2;
			this->gamePanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->gamePanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->gamePanel->Size = System::Drawing::Size(716, 457);
			this->gamePanel->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(3, 437);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(126, 19);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Player vs. AI";
			// 
			// PVAGame
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(740, 481);
			this->Controls->Add(this->gamePanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"PVAGame";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Player vs. AI";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->aDiamond2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->aDiamond1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->youDiamond2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->youDiamond1))->EndInit();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->gamePanel->ResumeLayout(false);
			this->gamePanel->PerformLayout();
			this->ResumeLayout(false);

		}

#pragma endregion


	private: System::Void quitBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Restart();
	}

	private: System::Void zeroBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (gStats.isBoxAvailable(0))
		{
			updateBoardBox(0);
		}
		else {
			showNotAvailableIndicator();
		}
		updateGameState();
	}
	private: System::Void oneBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (gStats.isBoxAvailable(1))
		{
			updateBoardBox(1);
		}
		else {
			showNotAvailableIndicator();
		}
		updateGameState();

	}

	public: static Void showNotAvailableIndicator() {
		MessageBox::Show("This box is not available.", "Nice try!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
	private: System::Void twoBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (gStats.isBoxAvailable(2))
		{
			updateBoardBox(2);
		}
		else {
			showNotAvailableIndicator();
		}
		updateGameState();
	}
	private: System::Void threeBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (gStats.isBoxAvailable(3))
		{
			updateBoardBox(3);
		}
		else {
			showNotAvailableIndicator();
		}
		updateGameState();
	}
	private: System::Void fourBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (gStats.isBoxAvailable(4))
		{
			updateBoardBox(4);
		}
		else {
			showNotAvailableIndicator();
		}
		updateGameState();
	}
	private: System::Void fiveBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (gStats.isBoxAvailable(5))
		{
			updateBoardBox(5);
		}
		else {
			showNotAvailableIndicator();
		}
		updateGameState();
	}

	private: System::Void sixBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (gStats.isBoxAvailable(6))
		{
			updateBoardBox(6);
		}
		else {
			showNotAvailableIndicator();
		}
		updateGameState();
	}
	private: System::Void sevenBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (gStats.isBoxAvailable(7))
		{
			updateBoardBox(7);
		}
		else {
			showNotAvailableIndicator();
		}
		updateGameState();
	}
	private: System::Void eightBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (gStats.isBoxAvailable(8))
		{
			updateBoardBox(8);
		}
		else {
			showNotAvailableIndicator();
		}
		updateGameState();
	}

	private: System::Void opponentTurn_Tick(System::Object^ sender, System::EventArgs^ e) {
		// Artificial Intelligence Turn
		opponentTurn->Stop();

		// ROW 1
		if (gStats.board[0] == "X" && gStats.board[1] == "X" && gStats.isBoxAvailable(2))
		{
			updateBoardBox(2);
		}
		else if (gStats.board[1] == "X" && gStats.board[2] == "X" && gStats.isBoxAvailable(0)) {
			updateBoardBox(0);
		}
		else if (gStats.board[0] == "X" && gStats.board[2] == "X" && gStats.isBoxAvailable(1)) {
			updateBoardBox(1);
		}
		// ROW 2
		else if (gStats.board[3] == "X" && gStats.board[4] == "X" && gStats.isBoxAvailable(5))
		{
			updateBoardBox(5);
		}
		else if (gStats.board[4] == "X" && gStats.board[5] == "X" && gStats.isBoxAvailable(3))
		{
			updateBoardBox(3);
		}
		else if (gStats.board[3] == "X" && gStats.board[5] == "X" && gStats.isBoxAvailable(4)) {
			updateBoardBox(4);
		}
		// ROW 3
		else if (gStats.board[6] == "X" && gStats.board[7] == "X" && gStats.isBoxAvailable(8))
		{
			updateBoardBox(8);
		}
		else if (gStats.board[7] == "X" && gStats.board[8] == "X" && gStats.isBoxAvailable(6))
		{
			updateBoardBox(6);
		}
		else if (gStats.board[6] == "X" && gStats.board[8] == "X" && gStats.isBoxAvailable(7))
		{
			updateBoardBox(7);
		}
		// DIAGONAL FROM TOP LEFT TO BOTTOM RIGHT
		else if (gStats.board[0] == "X" && gStats.board[4] == "X" && gStats.isBoxAvailable(8))
		{
			updateBoardBox(8);
		}
		else if (gStats.board[0] == "X" && gStats.board[8] == "X" && gStats.isBoxAvailable(4))
		{
			updateBoardBox(4);
		}
		else if (gStats.board[8] == "X" && gStats.board[4] == "X" && gStats.isBoxAvailable(0))
		{
			updateBoardBox(0);
		}
		// DIAGONAL FROM TOP RIGHT TO BOTTOM LEFT
		else if (gStats.board[2] == "X" && gStats.board[4] == "X" && gStats.isBoxAvailable(6))
		{
			updateBoardBox(6);
		}
		else if (gStats.board[2] == "X" && gStats.board[6] == "X" && gStats.isBoxAvailable(4))
		{
			updateBoardBox(4);
		}
		else if (gStats.board[4] == "X" && gStats.board[6] == "X" && gStats.isBoxAvailable(2))
		{
			updateBoardBox(2);
		}
		// COLUMN 1
		else if (gStats.board[0] == "X" && gStats.board[3] == "X" && gStats.isBoxAvailable(6))
		{
			updateBoardBox(6);
		}
		else if (gStats.board[0] == "X" && gStats.board[6] == "X" && gStats.isBoxAvailable(3))
		{
			updateBoardBox(3);
		}
		else if (gStats.board[3] == "X" && gStats.board[6] == "X" && gStats.isBoxAvailable(0))
		{
			updateBoardBox(0);
		}
		// COLUMN 2
		else if (gStats.board[1] == "X" && gStats.board[4] == "X" && gStats.isBoxAvailable(7))
		{
			updateBoardBox(7);
		}
		else if (gStats.board[1] == "X" && gStats.board[7] == "X" && gStats.isBoxAvailable(4))
		{
			updateBoardBox(4);
		}
		else if (gStats.board[4] == "X" && gStats.board[7] == "X" && gStats.isBoxAvailable(1))
		{
			updateBoardBox(1);
		}
		// COLUMN 3
		else if (gStats.board[2] == "X" && gStats.board[5] == "X" && gStats.isBoxAvailable(8))
		{
			updateBoardBox(8);
		}
		else if (gStats.board[2] == "X" && gStats.board[8] == "X" && gStats.isBoxAvailable(5))
		{
			updateBoardBox(5);
		}
		else if (gStats.board[5] == "X" && gStats.board[8] == "X" && gStats.isBoxAvailable(2))
		{
			updateBoardBox(2);
		}
		else {
			updateBoardBox(gStats.randomizeAIAttack());
		}
		updateGameState();
	}


	private: void updateGameState() {
		this->updateScores();
		this->checkAITurn();
		this->isGameOnGoing();
		this->updateTurnText();
		this->checkThreeDiamondWinner();
	}

	private: void checkThreeDiamondWinner() {
		if (gStats.getPlayerScore() == 3 || gStats.getAIScore() == 3)
		{
			ResultAnnounce^ resultAnnounce = gcnew ResultAnnounce();
			resultAnnounce->Show();
			this->Close();
		}
	}

	private: void updateTurnText() {
		turnText->ForeColor = Color::White;

		if (gStats.isUserTurn())
		{
			turnText->Text = "Your Turn";
		}
		else {
			turnText->Text = "Computer's Turn";
		}

		if (gStats.hasAWinner(gStats.getUserAnswer()) && gStats.isUserTurn()) {
			turnText->Text = "You Win!";
			turnText->ForeColor = Color::Yellow;
		}
		else if (gStats.hasAWinner(gStats.getUserAnswer()) && !gStats.isUserTurn()){
			turnText->Text = "You Lose!";
			turnText->ForeColor = Color::Red;
		}
		else if (gStats.isDraw()) {
			turnText->Text = "Draw!";
			turnText->ForeColor = Color::RoyalBlue;
		}
	}
	private: void updateSounds() {
		if ((gStats.getRound() - gStats.getDraw()) == 2) {
			PlaySound(TEXT("music/secondround.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
		}
		else if ((gStats.getRound() - gStats.getDraw()) >= 3){
			PlaySound(TEXT("music/finalround.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
		}
	}

	private: void isGameOnGoing() {
		if (gStats._isGameOnGoing())
		{
			gameAgainBtn->Visible = false;
		}
		else {
			gameAgainBtn->Visible = true;
			disableAllButtons();
			//clearBoard();
		}
	}

	private: void clearBoard() {
		zeroBtn->Text = "";
		oneBtn->Text = "";
		twoBtn->Text = "";
		threeBtn->Text = "";
		fourBtn->Text = "";
		fiveBtn->Text = "";
		sixBtn->Text = "";
		sevenBtn->Text = "";
		eightBtn->Text = "";

		for (int i = 0; i < 9; i++)
		{
			gStats.board[i] = "";
		}
	}

	private: void updateRound() {
		std::string roundCount = "ROUND: " + std::to_string(gStats.getRound());
		round->Text = gcnew System::String(roundCount.c_str());
		std::string drawCount = "DRAW: " + std::to_string(gStats.getDraw());
		draw->Text = gcnew System::String(drawCount.c_str());
	}

	private: void updateScores() {
		if (gStats.getPlayerScore() == 1)
		{
			youDiamond1->Visible = true;
		}
		else if (gStats.getPlayerScore() == 2) {
			youDiamond2->Visible = true;
		}

		if (gStats.getAIScore() == 1) {
			aDiamond1->Visible = true;
		}
		else if (gStats.getAIScore() == 2) {
			aDiamond2->Visible = true;
		}
	}

	private: void checkAITurn() {
		if (!gStats.isUserTurn() && gStats._isGameOnGoing())
		{
			opponentTurn->Start();
			disableAllButtons();
		}
		else {
			enableAllButtons();
		}
	}

	private: void updateBoardBox(int num) {
		if (num == 0)
		{
			zeroBtn->Text = gcnew System::String(gStats.getUserAnswer().c_str());
		}
		else if (num == 1) {
			oneBtn->Text = gcnew System::String(gStats.getUserAnswer().c_str());
		}
		else if (num == 2)
		{
			twoBtn->Text = gcnew System::String(gStats.getUserAnswer().c_str());
		}
		else if (num == 3)
		{
			threeBtn->Text = gcnew System::String(gStats.getUserAnswer().c_str());
		}
		else if (num == 4)
		{
			fourBtn->Text = gcnew System::String(gStats.getUserAnswer().c_str());
		}
		else if (num == 5)
		{
			fiveBtn->Text = gcnew System::String(gStats.getUserAnswer().c_str());
		}
		else if (num == 6)
		{
			sixBtn->Text = gcnew System::String(gStats.getUserAnswer().c_str());
		}
		else if (num == 7)
		{
			sevenBtn->Text = gcnew System::String(gStats.getUserAnswer().c_str());
		}
		else if (num == 8)
		{
			eightBtn->Text = gcnew System::String(gStats.getUserAnswer().c_str());
		}
		gStats.updateBoard(num);
	}

	private: void enableAllButtons() {
		zeroBtn->Enabled = true;
		oneBtn->Enabled = true;
		twoBtn->Enabled = true;
		threeBtn->Enabled = true;
		fourBtn->Enabled = true;
		fiveBtn->Enabled = true;
		sixBtn->Enabled = true;
		sevenBtn->Enabled = true;
		eightBtn->Enabled = true;
	}

	private: void disableAllButtons() {
		zeroBtn->Enabled = false;
		oneBtn->Enabled = false;
		twoBtn->Enabled = false;
		threeBtn->Enabled = false;
		fourBtn->Enabled = false;
		fiveBtn->Enabled = false;
		sixBtn->Enabled = false;
		sevenBtn->Enabled = false;
		eightBtn->Enabled = false;
	}
	private: System::Void gameAgainBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		updateSounds();
		enableAllButtons();
		updateRound();
		gStats.startGame();
		gameAgainBtn->Visible = false;
		clearBoard();
		updateGameState();
	}
};
}

