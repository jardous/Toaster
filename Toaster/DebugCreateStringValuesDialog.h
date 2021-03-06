/*  This file is part of Toaster, the editor and remote control for Kemper profiling amplifier.
*
*   Copyright (C) 2016  Thomas Langer
*
*   Toaster is free software: you can redistribute it and/or modify it under the terms of the
*   GNU General Public License as published by the Free Software Foundation, either version 3
*   of the License, or (at your option) any later version.
*
*   Toaster is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without
*   even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
*   See the GNU General Public License for more details.
*
*   You should have received a copy of the GNU General Public License along with Toaster.
*   If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef DEBUGCREATESTRINGVALUESDIALOG_H
#define DEBUGCREATESTRINGVALUESDIALOG_H

#include <QDialog>
#include <QTimer>
#include "ui_DebugCreateStringValuesDialog.h"
#include <memory>

class DebugCreateStringValuesDialog : public QDialog
{
  Q_OBJECT

public:
  explicit DebugCreateStringValuesDialog(QWidget *parent = 0);

private slots:
  void on_raw2ValFileButton_clicked();
  void on_val2rawFileButton_clicked();
  void on_startButton_clicked();
  void on_closeButton_clicked();
  void onTimer();

private:
  Ui::DebugCreateStringValuesDialog ui;

  unsigned char mAdressPage;
  unsigned char mParameter;
  int mLowerRange;
  int mUpperRange;

  int mCurrValue;

  std::unique_ptr<QTimer> mTimer;
};

#endif // DEBUGCREATESTRINGVALUESDIALOG_H
