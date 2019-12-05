/******************************************************************************
 *  Copyright (C) 2013 – 2018 by David Baum <david.baum@naraesk.eu>           *
 *                                                                            *
 *  This library is free software; you can redistribute it and/or modify      *
 *  it under the terms of the GNU Lesser General Public License as published  *
 *  by the Free Software Foundation; either version 2 of the License or (at   *
 *  your option) any later version.                                           *
 *                                                                            *
 *  This library is distributed in the hope that it will be useful,           *
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of            *
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 *  Library General Public License for more details.                          *
 *                                                                            *
 *  You should have received a copy of the GNU Lesser General Public License  *
 *  along with this library; see the file COPYING.LIB.                        *
 *  If not, see <http://www.gnu.org/licenses/>.                               *
 *****************************************************************************/

#ifndef TRANSLATORCONFIG_H
#define TRANSLATORCONFIG_H

#include "ui_translator_config.h"
#include <KCModule>

static const char CONFIG_PRIMARY[] = "primaryLanguage";
static const char CONFIG_SECONDARY[] = "secondaryLanguage";
static const char CONFIG_YANDEX_KEY[] = "yandexKey";
static const char CONFIG_GLOSBE_WORD[] = "glosbeWord";
static const char CONFIG_GLOSBE_PHRASE[] = "glosbePhrase";
static const char CONFIG_YANDEX_WORD[] = "yandexWord";
static const char CONFIG_YANDEX_PHRASE[] = "yandexPhrase";
static const char CONFIG_GLOSBE_EXAMPLES[] = "glosbeExamples";

class TranslatorConfigForm : public QWidget, public Ui::TranslatorConfigUi
{
    Q_OBJECT

public:
    explicit TranslatorConfigForm(QWidget* parent);
};

class TranslatorConfig : public KCModule
{
    Q_OBJECT

public:
    explicit TranslatorConfig(QWidget* parent = nullptr, const QVariantList& args = QVariantList());
    
public Q_SLOTS:
    void save() override;
    void load() override;

private:
    TranslatorConfigForm* m_ui;
    const static QVector<QString> m_abbr;
};

#endif
