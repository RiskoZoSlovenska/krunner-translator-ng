/******************************************************************************
 *  Copyright (C) 2013 – 2020 by David Baum <david.baum@naraesk.eu>           *
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

#include "LanguageRepository.h"

QList<Language *> *LanguageRepository::supportedLanguages = new QList<Language*>;

void LanguageRepository::initialize() {
    addSupportedLanguage("Afrikaans", "af");
    addSupportedLanguage("Albanian", "sq");
    addSupportedLanguage("Arabic", "ar");
    addSupportedLanguage("Armenian", "hy");
    addSupportedLanguage("Azerbaijan", "az");
    addSupportedLanguage("Basque", "eu");
    addSupportedLanguage("Belarusian", "be");
    addSupportedLanguage("Bosnian", "bs");
    addSupportedLanguage("Bulgarian", "bg");
    addSupportedLanguage("Catalan", "ca");
    addSupportedLanguage("Chinese", "zh");
    addSupportedLanguage("Croatian", "hr");
    addSupportedLanguage("Czech", "cs");
    addSupportedLanguage("Danish", "da");
    addSupportedLanguage("Dutch", "nl");
    addSupportedLanguage("English", "en");
    addSupportedLanguage("Estonian", "et");
    addSupportedLanguage("Finish", "fi");
    addSupportedLanguage("French", "fr");
    addSupportedLanguage("Galician", "gl");
    addSupportedLanguage("Georgian", "ka");
    addSupportedLanguage("German", "de");
    addSupportedLanguage("Greek", "el");
    addSupportedLanguage("Haitian (Creole)", "ht");
    addSupportedLanguage("Hungarian", "hu");
    addSupportedLanguage("Icelandic", "is");
    addSupportedLanguage("Indonesian", "id");
    addSupportedLanguage("Irish", "ga");
    addSupportedLanguage("Italian", "it");
    addSupportedLanguage("Japanese", "ja");
    addSupportedLanguage("Kazakh", "kk");
    addSupportedLanguage("Korean", "ko");
    addSupportedLanguage("Kyrgyz", "ky");
    addSupportedLanguage("Latin", "la");
    addSupportedLanguage("Latvian", "lv");
    addSupportedLanguage("Lithuanian", "lt");
    addSupportedLanguage("Macedonian", "mk");
    addSupportedLanguage("Malagasy", "mg");
    addSupportedLanguage("Malay", "ms");
    addSupportedLanguage("Maltese", "mt");
    addSupportedLanguage("Mongolian", "mn");
    addSupportedLanguage("Norwegian", "no");
    addSupportedLanguage("Persian", "fa");
    addSupportedLanguage("Polish", "pl");
    addSupportedLanguage("Portuguese", "pt");
    addSupportedLanguage("Romanian", "ro");
    addSupportedLanguage("Russian", "ru");
    addSupportedLanguage("Serbian", "sr");
    addSupportedLanguage("Slovakian", "sk");
    addSupportedLanguage("Slovenian", "sl");
    addSupportedLanguage("Spanish", "es");
    addSupportedLanguage("Swahili", "sw");
    addSupportedLanguage("Swedish", "sv");
    addSupportedLanguage("Tagalog", "tl");
    addSupportedLanguage("Tajik", "tg");
    addSupportedLanguage("Tatar", "tt");
    addSupportedLanguage("Thai", "th");
    addSupportedLanguage("Turkish", "tr");
    addSupportedLanguage("Ukrainian", "uk");
    addSupportedLanguage("Uzbek", "uz");
    addSupportedLanguage("Vietnamese", "vi");
    addSupportedLanguage("Welsh", "cy");
    addSupportedLanguage("Yiddish", "he");
}

void LanguageRepository::addSupportedLanguage(QString name, QString abbreviation) {
    Language *language = new Language(name, abbreviation);
    supportedLanguages->push_back(language);
}

QList<Language *> *LanguageRepository::getSupportedLanguages() {
    return supportedLanguages;
}

QString LanguageRepository::getCombinedName(QString abbreviation) {
    for(auto language : *supportedLanguages) {
        if(language->getAbbreviation() == abbreviation) {
            return language->getCombinedName();
        }
    }
    return "";
}