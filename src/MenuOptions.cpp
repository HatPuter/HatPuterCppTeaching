#include "../include/Menu.h"
#include "ui_Menu.h"

#include <QkeyEvent>

// 键盘事件
void Menu::keyPressEvent(QKeyEvent *event)
{
    // 上键
    if (event->key() == Qt::Key_Up) {
        switch (m_menuOptions) {
        case MenuOptions::StartGame:
            m_menuOptions = MenuOptions::Exit;
            break;
        case MenuOptions::ContinueGame:
            m_menuOptions = MenuOptions::StartGame;
            break;
        case MenuOptions::Settings:
            m_menuOptions = MenuOptions::ContinueGame;
            break;
        case MenuOptions::Exit:
            m_menuOptions = MenuOptions::Settings;
            break;
        }
    }
    // 下键
    else if (event->key() == Qt::Key_Down) {
        switch (m_menuOptions) {
        case MenuOptions::StartGame:
            m_menuOptions = MenuOptions::ContinueGame;
            break;
        case MenuOptions::ContinueGame:
            m_menuOptions = MenuOptions::Settings;
            break;
        case MenuOptions::Settings:
            m_menuOptions = MenuOptions::Exit;
            break;
        case MenuOptions::Exit:
            m_menuOptions = MenuOptions::StartGame;
            break;
        }
    }
    // 回车确认键
    else if (event->key() == Qt::Key_Return || event->key() == Qt::Key_Enter) {
        switch (m_menuOptions) {
        case MenuOptions::StartGame:
            break;
        case MenuOptions::ContinueGame:
            break;
        case MenuOptions::Settings:
            break;
        case MenuOptions::Exit:
            QApplication::quit();
            break;
        }
    }

    DisplayOptions();
}

// 显示选项
void Menu::DisplayOptions()
{
    switch (m_menuOptions) {
    case MenuOptions::StartGame:
        ui->StartGame->setStyleSheet("QLabel#StartGame {color: Yellow; font-size: 32px;}");
        ui->ContinueGame->setStyleSheet("QLabel#ContinueGame {color: White; font-size: 32px;}");
        ui->Settings->setStyleSheet("QLabel#Settings {color: White; font-size: 32px;}");
        ui->Exit->setStyleSheet("QLabel#Exit {color: White; font-size: 32px;}");
        break;
    case MenuOptions::ContinueGame:
        ui->StartGame->setStyleSheet("QLabel#StartGame {color: White; font-size: 32px;}");
        ui->ContinueGame->setStyleSheet("QLabel#ContinueGame {color: Yellow; font-size: 32px;}");
        ui->Settings->setStyleSheet("QLabel#Settings {color: White; font-size: 32px;}");
        ui->Exit->setStyleSheet("QLabel#Exit {color: White; font-size: 32px;}");
        break;
    case MenuOptions::Settings:
        ui->StartGame->setStyleSheet("QLabel#StartGame {color: White; font-size: 32px;}");
        ui->ContinueGame->setStyleSheet("QLabel#ContinueGame {color: White; font-size: 32px;}");
        ui->Settings->setStyleSheet("QLabel#Settings {color: Yellow; font-size: 32px;}");
        ui->Exit->setStyleSheet("QLabel#Exit {color: White; font-size: 32px;}");
        break;
    case MenuOptions::Exit:
        ui->StartGame->setStyleSheet("QLabel#StartGame {color: White; font-size: 32px;}");
        ui->ContinueGame->setStyleSheet("QLabel#ContinueGame {color: White; font-size: 32px;}");
        ui->Settings->setStyleSheet("QLabel#Settings {color: White; font-size: 32px;}");
        ui->Exit->setStyleSheet("QLabel#Exit {color: Yellow; font-size: 32px;}");
        break;
    }
}
