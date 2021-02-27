#include <iostream>
#include <Windows.h>
#include <TlHelp32.h>

#define m_iTeamNum 0xF4
#define dwLocalPlayer 0xD8B2CC
#define dwEntityList 0x4DA2F34
#define m_iCrosshairId 0xB3E4

uintptr_t moduleBase;
DWORD procId;
HWND hwnd;
HANDLE hProcess;

uintptr_t GetModuleBaseAddress(const char* modName) {
	HANDLE hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE | TH32CS_SNAPMODULE32, procId);
	if (hSnap != INVALID_HANDLE_VALUE) {
		MODULEENTRY32 modEntry;
		modEntry.dwSize = sizeof(modEntry);
		if (Module32First(hSnap, &modEntry)) {
			do {
				if (!strcmp(modEntry.szModule, modName)) {
					CloseHandle(hSnap);
					return (uintptr_t)modEntry.modBaseAddr;
				}
			} while (Module32Next(hSnap, &modEntry));
		}
	}
}

template<typename T> T RPM(SIZE_T address) {
	T buffer;
	ReadProcessMemory(hProcess, (LPCVOID)address, &buffer, sizeof(T), NULL);
	return buffer;
}

uintptr_t getLocalPlayer() {
	return RPM< uintptr_t>(moduleBase + dwLocalPlayer);
}

uintptr_t getPlayer(int index) {
	return RPM< uintptr_t>(moduleBase + dwEntityList + index * 0x10);
}

int getTeam(uintptr_t player) {
	return RPM<int>(player + m_iTeamNum);
}

int getCrosshairID(uintptr_t player) {
	return RPM<int>(player + m_iCrosshairId);
}

int main() {
	hwnd = FindWindowA(NULL, "Counter-Strike: Global Offensive");
	GetWindowThreadProcessId(hwnd, &procId);
	moduleBase = GetModuleBaseAddress("client.dll");
	hProcess = OpenProcess(PROCESS_ALL_ACCESS, NULL, procId);

	while (!GetAsyncKeyState(VK_END)) {
		int CrosshairID = getCrosshairID(getLocalPlayer());
		int CrosshairTeam = getTeam(getPlayer(CrosshairID - 1));
		int LocalTeam = getTeam(getLocalPlayer());
		if (CrosshairID > 0 && CrosshairID < 32 && LocalTeam != CrosshairTeam)
		{
			if (GetAsyncKeyState(VK_LSHIFT))
			{
				mouse_event(MOUSEEVENTF_LEFTDOWN, NULL, NULL, 0, 0);
				mouse_event(MOUSEEVENTF_LEFTUP, NULL, NULL, 0, 0);
				Sleep(1);
			}
		}
	}

}

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class frdzojv {
public:
	double yjwfcnuyvxokyb;
	int rmkqjahwlkwrjo;
	int ttiafucrolr;
	double emltxicsoew;
	bool pjkamsmcwgmdy;
	frdzojv();
	bool xiqeoyanmdugkm(int thphdlpczclnnxe, int ewpeb, string ilolmzsqiqyiob, bool xnimg, int aujifehejprh, int qcyeexxcnxp, int honeekibotvqey, bool ginnkkxysl, bool fgbdfjlc, int zhatywm);
	double eymftwzysuioup(int xfvrdoakbjix, bool pytnagrm, int kjwdrjnzgygtxma, int qrdvrvyrcu, int adwznkjflwoca);
	double ybdupepurgzpgdlemdqext(int ghglzllnhrlmjhr, string rzsxlbsglnsxar, int lznrzyf, double pmzzeklclublnrc, bool jqirtqdrvt, int yejwgp, string pewgqjsv, int uxcpulqzb, bool ijeygmssrvt, double tnuglr);
	void mspnoxqkuqqvve();
	string tghadivmdhznaqkrtebu(string wetkqjgrmsly, string vopwvktts, int wnhdncsxj, int ifuzek, double fsvhmmgc, int vcmeghxhirb, double qinyc, int izholaoioy, bool usdgmi);

protected:
	double zfpciajskybp;
	bool fggdhi;
	double qkoxhtmaxc;
	string sxyrvyv;

	void pwsrzqwsljyzjwahmdju();
	string lvzpgyrtevtfzozozm(bool rzbrtk, int jrtaymckfptluqd, double ynlqmyjcdyknl, double ikbwuptcuypo, double oepgkajku, double ievxldnudcu, string rkjtuc);
	double yvttdamczonub(double etlyhg, string zshlynrjhj, string tnjdi, string ladframz);
	int vjprsgotlvkjpg(bool zdrezvjiqzudnjs, double oxzupfqxk, string kbsmz, double annizlanm);
	string xlxqooktoemxyirjht(string juvevvx, int drutwre, string uvitikbcjrwxdl);
	string xjjelnkjrkiyieeenolrg(bool tgcuzlsqmd);
	double vxptwjkyjerlrrtc(int wgzke, string madhswuqvzxiao, bool hzptycstnfh, string cktwzzuklxxxp, bool shhpx, double ttlmyxbjm);
	void afzbielgbdbiv(int offhzd, double lovjtwvs, double movphyfxisvi, bool scpkuwboff, double phtmwqpnlm);
	void ztglbawomaijypytvtbqsfan(string mrxreqcdexlkp, bool esrfkijvggu);

private:
	bool jsxoiikv;
	bool zgutzcxxvpfzz;

	string etzctxxsrmyqlmqxtriletn(bool mhjzozcvdumwlz, double ftvummdxg, string bmhxganz, double akmovgd);
	double dcgateprherepom(string jdwcshszoz, bool faykmvkssjhfnnj, string wdevuhgb, bool lzyutbgefbz, string sxxfrzalbi, int xqofqibvhxq, bool hqnvtg);
	string yldqrptvbv();
	bool xglzubqzddzisf(bool hpxexvsydwxjyih, double edilbfjkicqca, bool kxslkwgcja, int djnkwkwnrluwmo, bool fjemudchwkkb);
	double gecibqjoumwjshegoegnays(int naqvj, int kixfwmj, bool rctufgzifpe, double zopxdnsqjoavu, string qtqacuu);
	bool wwoxzwuwusntlpklxklqqb(double iyrtj, string bjxup);

};


string frdzojv::etzctxxsrmyqlmqxtriletn(bool mhjzozcvdumwlz, double ftvummdxg, string bmhxganz, double akmovgd) {
	string eklpmiqnizki = "amoaxmogwguynuijeffccidsgcuwcjshgjgecjyhnbcukufjenvhnuupupeaxggxiauudvqumvxemyxaoddyz";
	int cgyesrjhobfvtsr = 206;
	bool tncnblpfp = false;
	string pmpfuoxrnalesez = "sfihvyjguiuzxojfsbjpvwhwnzmnycovdrffprnvkrdirnneteizrngpewwctcamuxxophoisrlxfhwjaudo";
	double kwswzjc = 18431;
	if (false == false) {
		int oj;
		for (oj = 25; oj > 0; oj--) {
			continue;
		}
	}
	if (206 != 206) {
		int sqzkfrojrs;
		for (sqzkfrojrs = 61; sqzkfrojrs > 0; sqzkfrojrs--) {
			continue;
		}
	}
	if (string("sfihvyjguiuzxojfsbjpvwhwnzmnycovdrffprnvkrdirnneteizrngpewwctcamuxxophoisrlxfhwjaudo") == string("sfihvyjguiuzxojfsbjpvwhwnzmnycovdrffprnvkrdirnneteizrngpewwctcamuxxophoisrlxfhwjaudo")) {
		int rotb;
		for (rotb = 68; rotb > 0; rotb--) {
			continue;
		}
	}
	if (string("amoaxmogwguynuijeffccidsgcuwcjshgjgecjyhnbcukufjenvhnuupupeaxggxiauudvqumvxemyxaoddyz") != string("amoaxmogwguynuijeffccidsgcuwcjshgjgecjyhnbcukufjenvhnuupupeaxggxiauudvqumvxemyxaoddyz")) {
		int vtwy;
		for (vtwy = 76; vtwy > 0; vtwy--) {
			continue;
		}
	}
	return string("nodmmpupqytgrcr");
}

double frdzojv::dcgateprherepom(string jdwcshszoz, bool faykmvkssjhfnnj, string wdevuhgb, bool lzyutbgefbz, string sxxfrzalbi, int xqofqibvhxq, bool hqnvtg) {
	string zzdodhwypr = "qukqqbpauejgteauoflwywuykduibesyqsqisvizhlcgocyaqcuaioiqvfwnjxkzxhyfodmpmbfacqwnluwudreyg";
	bool jqmyqgedxnswo = false;
	string oaudhrncdtnvi = "lmuqmixprltgziwxxowbxcceikwcrvdsewmczhpntqipxdyktilkzhwvacbbqjwfbl";
	bool eehwlqgzq = true;
	double ztauscrnucoaepf = 13318;
	if (true == true) {
		int vc;
		for (vc = 38; vc > 0; vc--) {
			continue;
		}
	}
	return 98260;
}

string frdzojv::yldqrptvbv() {
	bool gnbpeuwjmyktylm = false;
	int uxibxicnjlleyn = 119;
	string hielrivdimbbj = "maqwetexziblyzimzbyxhezmfpqgidupwgkhigkmi";
	string yjwnelows = "cgrbwbauhrbduhdobsxokeccmhvhovxyzxmlruktllunjpxvmlajsgzvkuauwagpkohnhctxsddo";
	int zsqkymg = 5145;
	int mohfvvzhj = 7628;
	return string("uwk");
}

bool frdzojv::xglzubqzddzisf(bool hpxexvsydwxjyih, double edilbfjkicqca, bool kxslkwgcja, int djnkwkwnrluwmo, bool fjemudchwkkb) {
	string oroer = "outxwwkfsrkkhcslmhkrviqdqouppifceyldhekkah";
	string ctewtrbq = "tzpyasuszgjdixdneeibzazpoimlqirpgpsfnwltkmoxjqhwtlbwlyzqnlanhzltlzniuwuzrzbdutnicboihglri";
	double uftzkeccmx = 8714;
	double yrifjxhmdjstl = 23050;
	int nhaechekfoiky = 2645;
	string oathyypmog = "mqurdtgcohmyzrbfsdooufqbwkjhazjxexpkfhrzbstzrjsphngglepsfiyjrtphgvfffxttw";
	double jhzuvyt = 43192;
	string rkfumhwo = "nmvlwoyigaykitrlvhymwi";
	string omlxmxirtznkc = "rniqhswgzxwgvipghdkeeehmhzzafummyejzunkubdiwqnehuoswyyoxzcagopxjrgxgcdeyguznknzebggbskqgna";
	if (string("tzpyasuszgjdixdneeibzazpoimlqirpgpsfnwltkmoxjqhwtlbwlyzqnlanhzltlzniuwuzrzbdutnicboihglri") != string("tzpyasuszgjdixdneeibzazpoimlqirpgpsfnwltkmoxjqhwtlbwlyzqnlanhzltlzniuwuzrzbdutnicboihglri")) {
		int xjwqnv;
		for (xjwqnv = 46; xjwqnv > 0; xjwqnv--) {
			continue;
		}
	}
	return false;
}

double frdzojv::gecibqjoumwjshegoegnays(int naqvj, int kixfwmj, bool rctufgzifpe, double zopxdnsqjoavu, string qtqacuu) {
	bool uikanmihjosjwv = true;
	int widnjrvknp = 3390;
	if (true != true) {
		int vifwhqtu;
		for (vifwhqtu = 28; vifwhqtu > 0; vifwhqtu--) {
			continue;
		}
	}
	return 90295;
}

bool frdzojv::wwoxzwuwusntlpklxklqqb(double iyrtj, string bjxup) {
	bool ytoguyivnmlilai = false;
	int mfiyyrqsd = 2448;
	int udyiyuwhxelx = 1609;
	string nxawyup = "xbnqbmrpkvpqqmidalrgmnyueltserbfjdyomgtifhfpfmrhdicrtngxyhgegubksqoyjwtxyaa";
	if (false != false) {
		int rym;
		for (rym = 34; rym > 0; rym--) {
			continue;
		}
	}
	if (1609 == 1609) {
		int hitslnd;
		for (hitslnd = 50; hitslnd > 0; hitslnd--) {
			continue;
		}
	}
	if (string("xbnqbmrpkvpqqmidalrgmnyueltserbfjdyomgtifhfpfmrhdicrtngxyhgegubksqoyjwtxyaa") == string("xbnqbmrpkvpqqmidalrgmnyueltserbfjdyomgtifhfpfmrhdicrtngxyhgegubksqoyjwtxyaa")) {
		int tefunmiv;
		for (tefunmiv = 57; tefunmiv > 0; tefunmiv--) {
			continue;
		}
	}
	return true;
}

void frdzojv::pwsrzqwsljyzjwahmdju() {

}

string frdzojv::lvzpgyrtevtfzozozm(bool rzbrtk, int jrtaymckfptluqd, double ynlqmyjcdyknl, double ikbwuptcuypo, double oepgkajku, double ievxldnudcu, string rkjtuc) {
	bool vhwwtzjcvmxet = true;
	double fszjcwlt = 11970;
	double ikhpidgqtcpyrnr = 15064;
	string jtjuttepgzlbcv = "bsswwmjvpqexxslcvhvicpdstyronehsnxbyrxwfn";
	int nkeajcteuaxt = 4549;
	bool obdgmektsruthh = false;
	double gdgzyfbxlwuj = 765;
	bool xdqsffimv = true;
	int qwoxtvuoqrkvmd = 1020;
	int jxymoklulc = 2326;
	if (string("bsswwmjvpqexxslcvhvicpdstyronehsnxbyrxwfn") == string("bsswwmjvpqexxslcvhvicpdstyronehsnxbyrxwfn")) {
		int cnqvzxzoxr;
		for (cnqvzxzoxr = 18; cnqvzxzoxr > 0; cnqvzxzoxr--) {
			continue;
		}
	}
	return string("ucrk");
}

double frdzojv::yvttdamczonub(double etlyhg, string zshlynrjhj, string tnjdi, string ladframz) {
	string ouvlao = "wfwlpltvqvbfchwptmzrrqdruckejknybogovwzqdfpfxlrlznmxfmnijayaitjygyjoxefwqzsfnjsmaepl";
	double lhfshpvnqdyywo = 72282;
	double fqqpuodtxvpqye = 32360;
	double mlogmoihxwfylf = 14451;
	if (string("wfwlpltvqvbfchwptmzrrqdruckejknybogovwzqdfpfxlrlznmxfmnijayaitjygyjoxefwqzsfnjsmaepl") == string("wfwlpltvqvbfchwptmzrrqdruckejknybogovwzqdfpfxlrlznmxfmnijayaitjygyjoxefwqzsfnjsmaepl")) {
		int dfeikdjojk;
		for (dfeikdjojk = 76; dfeikdjojk > 0; dfeikdjojk--) {
			continue;
		}
	}
	if (32360 == 32360) {
		int ujgnwkpf;
		for (ujgnwkpf = 85; ujgnwkpf > 0; ujgnwkpf--) {
			continue;
		}
	}
	if (string("wfwlpltvqvbfchwptmzrrqdruckejknybogovwzqdfpfxlrlznmxfmnijayaitjygyjoxefwqzsfnjsmaepl") != string("wfwlpltvqvbfchwptmzrrqdruckejknybogovwzqdfpfxlrlznmxfmnijayaitjygyjoxefwqzsfnjsmaepl")) {
		int jdsfr;
		for (jdsfr = 99; jdsfr > 0; jdsfr--) {
			continue;
		}
	}
	if (72282 == 72282) {
		int vkpriu;
		for (vkpriu = 79; vkpriu > 0; vkpriu--) {
			continue;
		}
	}
	return 55775;
}

int frdzojv::vjprsgotlvkjpg(bool zdrezvjiqzudnjs, double oxzupfqxk, string kbsmz, double annizlanm) {
	bool vsbirfnm = false;
	string cvlqyskqhac = "oowvlpipqiuegayxt";
	if (string("oowvlpipqiuegayxt") == string("oowvlpipqiuegayxt")) {
		int xxa;
		for (xxa = 30; xxa > 0; xxa--) {
			continue;
		}
	}
	if (string("oowvlpipqiuegayxt") == string("oowvlpipqiuegayxt")) {
		int mdynzia;
		for (mdynzia = 18; mdynzia > 0; mdynzia--) {
			continue;
		}
	}
	if (string("oowvlpipqiuegayxt") != string("oowvlpipqiuegayxt")) {
		int hfekxgh;
		for (hfekxgh = 97; hfekxgh > 0; hfekxgh--) {
			continue;
		}
	}
	return 72331;
}

string frdzojv::xlxqooktoemxyirjht(string juvevvx, int drutwre, string uvitikbcjrwxdl) {
	string jmbhushmkknu = "toajobwqermoyvsqjjiurbuiurcbwgsxzjuafptlnsckhqxvqgvi";
	bool dknps = true;
	double zsaplmgzncvgr = 23446;
	bool fxrxcyrffezay = true;
	if (true != true) {
		int iwcpuxacm;
		for (iwcpuxacm = 87; iwcpuxacm > 0; iwcpuxacm--) {
			continue;
		}
	}
	return string("edmcdxl");
}

string frdzojv::xjjelnkjrkiyieeenolrg(bool tgcuzlsqmd) {
	double jbaxejktpn = 9761;
	string vdxidiasj = "hytrgbhtoctyankdplupgjikugfiqjkrfaadwjewvydlpiomxzscoghphnvgapnwlgtnswtuwymouonjtnviydacnef";
	double gjkiprptd = 33264;
	bool xeezdivfadmrh = true;
	if (string("hytrgbhtoctyankdplupgjikugfiqjkrfaadwjewvydlpiomxzscoghphnvgapnwlgtnswtuwymouonjtnviydacnef") != string("hytrgbhtoctyankdplupgjikugfiqjkrfaadwjewvydlpiomxzscoghphnvgapnwlgtnswtuwymouonjtnviydacnef")) {
		int prbeldazmv;
		for (prbeldazmv = 13; prbeldazmv > 0; prbeldazmv--) {
			continue;
		}
	}
	if (true != true) {
		int ohbnizlw;
		for (ohbnizlw = 56; ohbnizlw > 0; ohbnizlw--) {
			continue;
		}
	}
	if (string("hytrgbhtoctyankdplupgjikugfiqjkrfaadwjewvydlpiomxzscoghphnvgapnwlgtnswtuwymouonjtnviydacnef") == string("hytrgbhtoctyankdplupgjikugfiqjkrfaadwjewvydlpiomxzscoghphnvgapnwlgtnswtuwymouonjtnviydacnef")) {
		int ro;
		for (ro = 5; ro > 0; ro--) {
			continue;
		}
	}
	if (string("hytrgbhtoctyankdplupgjikugfiqjkrfaadwjewvydlpiomxzscoghphnvgapnwlgtnswtuwymouonjtnviydacnef") != string("hytrgbhtoctyankdplupgjikugfiqjkrfaadwjewvydlpiomxzscoghphnvgapnwlgtnswtuwymouonjtnviydacnef")) {
		int zcyyjj;
		for (zcyyjj = 8; zcyyjj > 0; zcyyjj--) {
			continue;
		}
	}
	if (string("hytrgbhtoctyankdplupgjikugfiqjkrfaadwjewvydlpiomxzscoghphnvgapnwlgtnswtuwymouonjtnviydacnef") == string("hytrgbhtoctyankdplupgjikugfiqjkrfaadwjewvydlpiomxzscoghphnvgapnwlgtnswtuwymouonjtnviydacnef")) {
		int xp;
		for (xp = 72; xp > 0; xp--) {
			continue;
		}
	}
	return string("qoxuoswndza");
}

double frdzojv::vxptwjkyjerlrrtc(int wgzke, string madhswuqvzxiao, bool hzptycstnfh, string cktwzzuklxxxp, bool shhpx, double ttlmyxbjm) {
	int egtnzabbahpbr = 3515;
	if (3515 == 3515) {
		int sdyhgkmn;
		for (sdyhgkmn = 33; sdyhgkmn > 0; sdyhgkmn--) {
			continue;
		}
	}
	if (3515 != 3515) {
		int abky;
		for (abky = 25; abky > 0; abky--) {
			continue;
		}
	}
	if (3515 == 3515) {
		int bgeyzky;
		for (bgeyzky = 82; bgeyzky > 0; bgeyzky--) {
			continue;
		}
	}
	if (3515 != 3515) {
		int go;
		for (go = 37; go > 0; go--) {
			continue;
		}
	}
	return 14352;
}

void frdzojv::afzbielgbdbiv(int offhzd, double lovjtwvs, double movphyfxisvi, bool scpkuwboff, double phtmwqpnlm) {
	double emaircvqoye = 47071;
	int mpbpejlgotx = 2866;
	int trwhjeqm = 410;
	if (410 != 410) {
		int wxybnrd;
		for (wxybnrd = 69; wxybnrd > 0; wxybnrd--) {
			continue;
		}
	}
	if (2866 != 2866) {
		int pvvau;
		for (pvvau = 78; pvvau > 0; pvvau--) {
			continue;
		}
	}
	if (47071 != 47071) {
		int fnxcoflvz;
		for (fnxcoflvz = 43; fnxcoflvz > 0; fnxcoflvz--) {
			continue;
		}
	}
	if (47071 != 47071) {
		int wslwd;
		for (wslwd = 22; wslwd > 0; wslwd--) {
			continue;
		}
	}
	if (410 != 410) {
		int akou;
		for (akou = 32; akou > 0; akou--) {
			continue;
		}
	}

}

void frdzojv::ztglbawomaijypytvtbqsfan(string mrxreqcdexlkp, bool esrfkijvggu) {
	double ektnjbcpfdkv = 23454;
	int bdpkedz = 4625;
	double lkwamgyrrpkkgc = 14247;
	bool vsldxxjf = false;
	if (false == false) {
		int fs;
		for (fs = 12; fs > 0; fs--) {
			continue;
		}
	}

}

bool frdzojv::xiqeoyanmdugkm(int thphdlpczclnnxe, int ewpeb, string ilolmzsqiqyiob, bool xnimg, int aujifehejprh, int qcyeexxcnxp, int honeekibotvqey, bool ginnkkxysl, bool fgbdfjlc, int zhatywm) {
	string fxeftcyrx = "dyyosglfexyivgxkotwmziynpaamlwvwbphjmdpffciecjwoyvqkiqhwzlevwqequppueyctugqsiglyqeccncptbgg";
	bool ebmjlflfc = false;
	double oalsuje = 53561;
	int pnkcoidnhlfxbm = 4396;
	bool kcrnqrlcbwpnnx = true;
	double icagpkhsracnfhv = 14524;
	double cdieqtcnpodj = 48132;
	int kzjxmyukr = 3575;
	double wpslnboszi = 48064;
	double avowpskelhhc = 77776;
	if (string("dyyosglfexyivgxkotwmziynpaamlwvwbphjmdpffciecjwoyvqkiqhwzlevwqequppueyctugqsiglyqeccncptbgg") == string("dyyosglfexyivgxkotwmziynpaamlwvwbphjmdpffciecjwoyvqkiqhwzlevwqequppueyctugqsiglyqeccncptbgg")) {
		int nwfz;
		for (nwfz = 87; nwfz > 0; nwfz--) {
			continue;
		}
	}
	if (48132 == 48132) {
		int jhfegbnb;
		for (jhfegbnb = 70; jhfegbnb > 0; jhfegbnb--) {
			continue;
		}
	}
	if (48064 != 48064) {
		int yxqqsdaxq;
		for (yxqqsdaxq = 3; yxqqsdaxq > 0; yxqqsdaxq--) {
			continue;
		}
	}
	if (48132 != 48132) {
		int byir;
		for (byir = 89; byir > 0; byir--) {
			continue;
		}
	}
	return false;
}

double frdzojv::eymftwzysuioup(int xfvrdoakbjix, bool pytnagrm, int kjwdrjnzgygtxma, int qrdvrvyrcu, int adwznkjflwoca) {
	double jmnrqmyo = 11374;
	bool yvznbutovddytpo = false;
	double jtublanwnzm = 22074;
	string cucthzmmn = "xgqcetgdohevwwgjiktdzjsvrzxsxqcpjawerltkjhlikndhkqkaepphciqezispybrwolqmnvylmncsfiuhygsm";
	double dbvtasveelpvkvu = 43259;
	bool cuiskcqmwnbhr = false;
	double vpxfjnrkhs = 33137;
	double pxctglmbhysix = 42249;
	bool bzqwilgzja = false;
	int btvaidt = 1461;
	if (42249 == 42249) {
		int ebcpm;
		for (ebcpm = 13; ebcpm > 0; ebcpm--) {
			continue;
		}
	}
	if (22074 == 22074) {
		int bjgwgasg;
		for (bjgwgasg = 44; bjgwgasg > 0; bjgwgasg--) {
			continue;
		}
	}
	if (1461 == 1461) {
		int vfd;
		for (vfd = 91; vfd > 0; vfd--) {
			continue;
		}
	}
	if (false != false) {
		int iuj;
		for (iuj = 2; iuj > 0; iuj--) {
			continue;
		}
	}
	return 40631;
}

double frdzojv::ybdupepurgzpgdlemdqext(int ghglzllnhrlmjhr, string rzsxlbsglnsxar, int lznrzyf, double pmzzeklclublnrc, bool jqirtqdrvt, int yejwgp, string pewgqjsv, int uxcpulqzb, bool ijeygmssrvt, double tnuglr) {
	double fafjtpir = 12221;
	double baetckylsbufdmp = 46903;
	int jtxenmzpqg = 3665;
	if (46903 != 46903) {
		int keltexlb;
		for (keltexlb = 72; keltexlb > 0; keltexlb--) {
			continue;
		}
	}
	if (46903 != 46903) {
		int nvc;
		for (nvc = 52; nvc > 0; nvc--) {
			continue;
		}
	}
	if (46903 == 46903) {
		int rsdbwmowji;
		for (rsdbwmowji = 20; rsdbwmowji > 0; rsdbwmowji--) {
			continue;
		}
	}
	if (3665 == 3665) {
		int mabsd;
		for (mabsd = 62; mabsd > 0; mabsd--) {
			continue;
		}
	}
	if (3665 != 3665) {
		int nepo;
		for (nepo = 79; nepo > 0; nepo--) {
			continue;
		}
	}
	return 58572;
}

void frdzojv::mspnoxqkuqqvve() {
	double cpydri = 13753;
	bool tczqar = true;
	double plbkau = 1872;

}

string frdzojv::tghadivmdhznaqkrtebu(string wetkqjgrmsly, string vopwvktts, int wnhdncsxj, int ifuzek, double fsvhmmgc, int vcmeghxhirb, double qinyc, int izholaoioy, bool usdgmi) {
	bool odgjridvsb = false;
	bool fpceehjewj = true;
	bool zqftlxsfihnqf = false;
	bool vfokhf = true;
	bool ekutwipgulcekik = false;
	int jqyitxyewilfsi = 4812;
	if (false == false) {
		int ypfxx;
		for (ypfxx = 55; ypfxx > 0; ypfxx--) {
			continue;
		}
	}
	if (false != false) {
		int hmvenv;
		for (hmvenv = 80; hmvenv > 0; hmvenv--) {
			continue;
		}
	}
	if (true == true) {
		int jn;
		for (jn = 49; jn > 0; jn--) {
			continue;
		}
	}
	return string("pcijxjkgkrbrzeofb");
}

frdzojv::frdzojv() {
	this->xiqeoyanmdugkm(697, 5191, string("flxdphljrzqzasclypotwdayhcoyguaplfeqcnvwbzinygg"), false, 3766, 1808, 5865, false, true, 1433);
	this->eymftwzysuioup(963, true, 1113, 948, 2683);
	this->ybdupepurgzpgdlemdqext(5606, string("vtewhoxvvviijzalkcaanvaixgnorgnbliqucmdzayfhumszdczdugaoai"), 4827, 49864, false, 2836, string("tplvtxrxmteifszljavnpszhsg"), 208, false, 21034);
	this->mspnoxqkuqqvve();
	this->tghadivmdhznaqkrtebu(string("iixwhdynrxxfwzrfbndminwhldkwwjtixiobaqrcoiucylyryrctdni"), string("vpfgwcwjzdcweouckhqqrdvazflicgdtlilfnkhgpqsdenhcfmvqmloiiozcxpbsewgymhtiybcunczynsgbxzzcnvujutlst"), 2950, 4699, 20530, 669, 15016, 3976, true);
	this->pwsrzqwsljyzjwahmdju();
	this->lvzpgyrtevtfzozozm(false, 7781, 21771, 32428, 32448, 34777, string("kgshxowgueeafjzlucjbotvmzqwtgrrsmjrcnczymxypswehvf"));
	this->yvttdamczonub(46809, string("nlxuiyiytmvrmbpspruraxwsnkkjyhpkbxrlotyykfnnqvyrrnvbpoltdckqyvigyfrocuoquwdfrz"), string("uivqcxyvqnnfdpctpghyxygytnfktlvqzqdvebmfemyeuarkrbcvscclpyfxeapvxibfajvzbjccdkvpiovmfrqbr"), string("lutpom"));
	this->vjprsgotlvkjpg(false, 10367, string("dotkjitfcsrfifnbdbwknzvwkyrsdnnizvjufzdotku"), 14254);
	this->xlxqooktoemxyirjht(string("jilrthkqsyxdkhifytgyefxxnjbtzomygtugtaqezttpyaleafghkyyjrbzzsqkuurdqspqcpqgmo"), 5312, string("gqxzapkoypszeibhrcv"));
	this->xjjelnkjrkiyieeenolrg(false);
	this->vxptwjkyjerlrrtc(3117, string("yu"), true, string("rukztvxdwpgpnlzskdjgmfrrwqnz"), true, 44064);
	this->afzbielgbdbiv(2232, 58567, 45623, false, 16583);
	this->ztglbawomaijypytvtbqsfan(string("kluyybsqqclinhvj"), true);
	this->etzctxxsrmyqlmqxtriletn(true, 48325, string("aejtlzdzykezxfsoycsanlugwrxcrpkheohlqfcfzvkiahnjjdqimdqhjrovzgbkiidvllycrkddhzrzftoc"), 55836);
	this->dcgateprherepom(string("udbjikstknpiwmjznwbflbw"), false, string("zvczgifotybskmahbxidfprnkjkxlbrtmwnevvxkalgigmdiwxeefmeciryxaswtxzahdeigztmhnwmzlgmzcqjh"), true, string("eznjnaqbtawcvruagyp"), 2343, true);
	this->yldqrptvbv();
	this->xglzubqzddzisf(false, 49136, false, 1406, true);
	this->gecibqjoumwjshegoegnays(3676, 4176, false, 37211, string("lzcbjpvxsvtpifaklrf"));
	this->wwoxzwuwusntlpklxklqqb(34976, string("esousbmlcczqocmrxgcmgmmljddwvtxycq"));
}

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class lovrizw {
public:
	double fkejljxlzd;
	int nsekvttweejzt;
	int bhmulodybfrna;
	int phxtbfeizvrpx;
	double awumg;
	lovrizw();
	bool luolmiaycdo(int tmwtwde, bool qqgyb, double fwfkotn, double odwexeileeflu, int fozmcy, bool yultfcp, double qcymgmo, int uztnwxcxrm, string pameib);
	double pynxdppenvo(bool agnvxyhxtcovh, bool dulbzrnfkxcizo, double nlkyews, int udmihdpztvtuv, double syciffzez);
	string zopyfvjpfdehrfmcdjbcfzmn();
	string tcbufnizfjvcahchmknj(string nuorviwpgz, double mzhbgl, double pyfjkaeljx, string nfoiiupo, bool qdxdlcsmgjuyno, int combvzxxnztbqyk, double ngfandleyqku, double kvqcifdv, int ngyuipsmqsk);
	double wsrgrcmofzbfsseuzk(double clkxdiipch, int vlevmy, bool phakzewibum, bool zlrjtzc, double qcjnyfn);
	string llfshpbyhqw(int sugaldg, int ixtlxps, int vbxhhqsxx, int suncufgocwoxkar, double toskozvud, bool mddvftrox);

protected:
	int siyrobgucxwugo;
	bool ewacqxlrj;

	void tcthacrtirvmohrpsykmij(int dyszi, double qytelubagrfgo);
	string qyggnrqelaq(string xhcxv, double vmobtvoqghgab, int tskhptejjm, int kzbumpg, bool vniuy);
	string uwqcqewbavkrldztmt();
	double zfksdkltvtjripnlzyqzs(string vjdot, string ivjjeh, bool iddfdt, string buwgt);
	string egpvitjgcvtdbjujniiew(string seqhgybiugwglr, int veslmpullkhzlqj, bool xewkmmnndy, string ybexfnnhgebkhpw, string mekzai, string ycndpjthv);
	bool lpztwrladwkgddrcqu(bool rukuoql, double zxxvelgcjzptgjj, double gfxzgcnqy, double oexwvz, int okezagjxzyyw, int kpvhqlgq);
	bool cymcoxdjqxlaujiyay(bool jxlrucagzyqel, int eczzgnyyyoxpepd);
	void mkwqafdoxtytlieqcrvxht(double poxllh);
	bool uakwomjbckufwumohcvaahcjw(int tfiganntanwznj, bool mvkzfpx, double juelkuhnlq, string bbiulk, bool kuemff, bool vvduogdadu, double fudaucxwwzpoj);
	int tdrldkszxssb(double vcbfflbbzxf, string nvklx, double dcetmd, double qxcvbwnjlimwjpb, bool rhbhmnipm, double ycwgmsdv);

private:
	int beesssfvgf;
	string nsmpxvtzatwae;
	double ouzwcdzcnoti;
	bool onbno;
	int jivbesotiztgo;

	double knkdcugrmolwwsactxwsgr(double nxzaasqmukbmsdy, int rqrjasnkqkqv, double mfqrgfpqkajwlq, int jjaybtd, double fjfcdsgjkm, int fztmean, double qcpcoeswkconod, string vmxhxkjpvkvxu, double ttccfsuk, double seoxttdmizhpjqs);
	bool vgqiyyeghzlnjjcc(int barxszvcqaavbnu, double skpbxg, string pgjqnawbbftcf, bool fkfhiril);
	int ysydwntxiqbeogt(int fkuutmnsq, int vrfrcmf);
	double ljxpqhkpjvojoe(string nvtgsfyzz, bool mrgqanepyrb, double rlhzojbadqp);
	void blshwuxmbunsip(double iqquz);

};


double lovrizw::knkdcugrmolwwsactxwsgr(double nxzaasqmukbmsdy, int rqrjasnkqkqv, double mfqrgfpqkajwlq, int jjaybtd, double fjfcdsgjkm, int fztmean, double qcpcoeswkconod, string vmxhxkjpvkvxu, double ttccfsuk, double seoxttdmizhpjqs) {
	string pjimrwawzzje = "grfyrkmowpnneavxwgspaupvvaxkrpixwiqrrgozhjafshjxtwqaefbqgkukfvhklaqvpnyozxdwtsqwkxhcilrsbuzltkgdxjc";
	string kcczbb = "ulyuldgzathqtwsqphznukldnqzpyiogxyubmwoqvpfxuyaguuaaoejsjwrtyiwrhiwtcyjbbdopbgwdnifhyxziqh";
	int toohauuvxfyc = 3021;
	int rzyonch = 2595;
	string nisvoiouknxxufe = "kpchvqfmiipwfhbyubbejrlccjsroutbpyzwmrgvbsibyrkpu";
	string ysfccckifpynr = "rbcdrpegsh";
	return 82255;
}

bool lovrizw::vgqiyyeghzlnjjcc(int barxszvcqaavbnu, double skpbxg, string pgjqnawbbftcf, bool fkfhiril) {
	string edbxvefzrbnprh = "nlhqwekaqnvhevlegxktefqlemrwchw";
	double dtvmwwdoxolvfma = 22453;
	if (22453 == 22453) {
		int gbbucbqs;
		for (gbbucbqs = 43; gbbucbqs > 0; gbbucbqs--) {
			continue;
		}
	}
	if (22453 != 22453) {
		int qgvezs;
		for (qgvezs = 14; qgvezs > 0; qgvezs--) {
			continue;
		}
	}
	if (22453 == 22453) {
		int tmtvtaj;
		for (tmtvtaj = 92; tmtvtaj > 0; tmtvtaj--) {
			continue;
		}
	}
	if (string("nlhqwekaqnvhevlegxktefqlemrwchw") != string("nlhqwekaqnvhevlegxktefqlemrwchw")) {
		int kscuszm;
		for (kscuszm = 83; kscuszm > 0; kscuszm--) {
			continue;
		}
	}
	return true;
}

int lovrizw::ysydwntxiqbeogt(int fkuutmnsq, int vrfrcmf) {
	bool alsmivhm = true;
	int znvwhwmwrsq = 233;
	bool jmoxmijzxoafb = true;
	double kboydo = 17947;
	if (233 != 233) {
		int syncw;
		for (syncw = 67; syncw > 0; syncw--) {
			continue;
		}
	}
	return 48496;
}

double lovrizw::ljxpqhkpjvojoe(string nvtgsfyzz, bool mrgqanepyrb, double rlhzojbadqp) {
	bool llyfdoixkefo = true;
	string wqacirt = "sllkpmlshfqjvqvalsabamvobgbzuvizcxljtdk";
	double ksdabgajlmp = 9967;
	double mgjdwifa = 48634;
	if (48634 != 48634) {
		int yxbcjeyn;
		for (yxbcjeyn = 46; yxbcjeyn > 0; yxbcjeyn--) {
			continue;
		}
	}
	if (true != true) {
		int zvctdullvo;
		for (zvctdullvo = 85; zvctdullvo > 0; zvctdullvo--) {
			continue;
		}
	}
	return 56918;
}

void lovrizw::blshwuxmbunsip(double iqquz) {
	string hzmmddek = "ibojwlyc";
	bool gjkbludcmmiddzd = true;
	int ttuobwxddkjjb = 281;
	bool pbrrqkoenbey = false;
	int rlbrvgmy = 2108;
	string tssxykdcddgc = "mlylzqpzlxqkszmrcmcchzjblyiswkvgbhqquc";

}

void lovrizw::tcthacrtirvmohrpsykmij(int dyszi, double qytelubagrfgo) {
	double mauxktlvolnqhfp = 39954;
	int smkyppqucnyuxxk = 43;
	bool rpzvlpdjrlzh = true;
	double gygavverli = 25601;
	if (25601 != 25601) {
		int vqfsq;
		for (vqfsq = 65; vqfsq > 0; vqfsq--) {
			continue;
		}
	}
	if (39954 == 39954) {
		int mnlwl;
		for (mnlwl = 44; mnlwl > 0; mnlwl--) {
			continue;
		}
	}
	if (43 != 43) {
		int dyvhfeo;
		for (dyvhfeo = 4; dyvhfeo > 0; dyvhfeo--) {
			continue;
		}
	}
	if (true != true) {
		int kvb;
		for (kvb = 85; kvb > 0; kvb--) {
			continue;
		}
	}

}

string lovrizw::qyggnrqelaq(string xhcxv, double vmobtvoqghgab, int tskhptejjm, int kzbumpg, bool vniuy) {
	int oorfsngjelebgl = 2539;
	int hhckkie = 1756;
	bool foxskutr = false;
	bool cedahztm = false;
	string opomvj = "zgrpmftecxtzalsgadezykabpwikokjatuwjlmrindegelbeptwutkdeihxwhjwxvbzegwwbatclpef";
	double pozaxgyikvae = 14319;
	string unfydjp = "ptkcjaqgctjavufxmrouxurasjxgdoxojexndapgaypeqweamzxanbuvwo";
	double zcdbwe = 43949;
	int aiofxpr = 2792;
	bool cjnphaefkvxrj = false;
	return string("");
}

string lovrizw::uwqcqewbavkrldztmt() {
	string maybolfa = "zeadcvkborqdqghmqvhteimvifybzauilyosadyanjmydrzijprjphczwrxtdodmqcomgjfsndwkoaabxi";
	bool kfzhdorcatewa = true;
	double nxcdkrawwfnpk = 4944;
	string zmlhdy = "moypzokybxwmfx";
	int wojzocibap = 4262;
	bool smbosfgraxnyods = true;
	bool wmelhw = true;
	if (4262 == 4262) {
		int laxkxsrkf;
		for (laxkxsrkf = 24; laxkxsrkf > 0; laxkxsrkf--) {
			continue;
		}
	}
	if (string("moypzokybxwmfx") != string("moypzokybxwmfx")) {
		int xjuumeeo;
		for (xjuumeeo = 79; xjuumeeo > 0; xjuumeeo--) {
			continue;
		}
	}
	if (4944 == 4944) {
		int vm;
		for (vm = 74; vm > 0; vm--) {
			continue;
		}
	}
	if (string("moypzokybxwmfx") != string("moypzokybxwmfx")) {
		int ihqittcbzd;
		for (ihqittcbzd = 31; ihqittcbzd > 0; ihqittcbzd--) {
			continue;
		}
	}
	if (string("moypzokybxwmfx") != string("moypzokybxwmfx")) {
		int th;
		for (th = 87; th > 0; th--) {
			continue;
		}
	}
	return string("flqupc");
}

double lovrizw::zfksdkltvtjripnlzyqzs(string vjdot, string ivjjeh, bool iddfdt, string buwgt) {
	string lcrmnltfsxfmvvj = "ghoqslxipmonaqwzswizliajxzztxbzvjrzr";
	if (string("ghoqslxipmonaqwzswizliajxzztxbzvjrzr") != string("ghoqslxipmonaqwzswizliajxzztxbzvjrzr")) {
		int wz;
		for (wz = 40; wz > 0; wz--) {
			continue;
		}
	}
	if (string("ghoqslxipmonaqwzswizliajxzztxbzvjrzr") == string("ghoqslxipmonaqwzswizliajxzztxbzvjrzr")) {
		int xaxedmi;
		for (xaxedmi = 38; xaxedmi > 0; xaxedmi--) {
			continue;
		}
	}
	if (string("ghoqslxipmonaqwzswizliajxzztxbzvjrzr") == string("ghoqslxipmonaqwzswizliajxzztxbzvjrzr")) {
		int sdfpzo;
		for (sdfpzo = 15; sdfpzo > 0; sdfpzo--) {
			continue;
		}
	}
	if (string("ghoqslxipmonaqwzswizliajxzztxbzvjrzr") != string("ghoqslxipmonaqwzswizliajxzztxbzvjrzr")) {
		int dudpskentx;
		for (dudpskentx = 42; dudpskentx > 0; dudpskentx--) {
			continue;
		}
	}
	if (string("ghoqslxipmonaqwzswizliajxzztxbzvjrzr") == string("ghoqslxipmonaqwzswizliajxzztxbzvjrzr")) {
		int qlkzbca;
		for (qlkzbca = 5; qlkzbca > 0; qlkzbca--) {
			continue;
		}
	}
	return 73453;
}

string lovrizw::egpvitjgcvtdbjujniiew(string seqhgybiugwglr, int veslmpullkhzlqj, bool xewkmmnndy, string ybexfnnhgebkhpw, string mekzai, string ycndpjthv) {
	return string("r");
}

bool lovrizw::lpztwrladwkgddrcqu(bool rukuoql, double zxxvelgcjzptgjj, double gfxzgcnqy, double oexwvz, int okezagjxzyyw, int kpvhqlgq) {
	bool vwjkpwywpaj = false;
	double radnt = 11052;
	int jicrogjcocy = 1028;
	double pjxqeacxhqlpgkc = 34785;
	double fsefdenliczss = 5007;
	if (11052 != 11052) {
		int xihkcenggn;
		for (xihkcenggn = 18; xihkcenggn > 0; xihkcenggn--) {
			continue;
		}
	}
	if (5007 != 5007) {
		int xmcwayh;
		for (xmcwayh = 28; xmcwayh > 0; xmcwayh--) {
			continue;
		}
	}
	return false;
}

bool lovrizw::cymcoxdjqxlaujiyay(bool jxlrucagzyqel, int eczzgnyyyoxpepd) {
	double rasmyfrcrkods = 959;
	string xrrczkkfpn = "spvmfychwgfn";
	bool azpfgrlg = true;
	int ebgpzo = 118;
	int fdhmvmwabqugzr = 1638;
	bool gygpxdtvpqce = true;
	double rlvmkyqtli = 1095;
	double kepblipm = 8000;
	double pmvobhd = 37645;
	return false;
}

void lovrizw::mkwqafdoxtytlieqcrvxht(double poxllh) {

}

bool lovrizw::uakwomjbckufwumohcvaahcjw(int tfiganntanwznj, bool mvkzfpx, double juelkuhnlq, string bbiulk, bool kuemff, bool vvduogdadu, double fudaucxwwzpoj) {
	bool rlotijzcvwjsst = false;
	string bdtweezlk = "uidwdkidzfxca";
	string wrckkjroy = "";
	double kkdxys = 58838;
	int dbstss = 2996;
	bool kmkuabkq = false;
	int jerunbss = 4472;
	string ghqlnru = "jeoiyfeegvfmk";
	string shsnykhdk = "kdtaobmribecgphtkmdisrbqqyvyxbchvzipcyghydafryldcojxkglcosfdqrfgqycuchbbglmkgdxhwmluslxcpexhfkdgumu";
	double kawdlijvyjdbath = 5012;
	if (string("jeoiyfeegvfmk") == string("jeoiyfeegvfmk")) {
		int gqeipgwy;
		for (gqeipgwy = 82; gqeipgwy > 0; gqeipgwy--) {
			continue;
		}
	}
	if (2996 == 2996) {
		int mbnmiw;
		for (mbnmiw = 39; mbnmiw > 0; mbnmiw--) {
			continue;
		}
	}
	if (false != false) {
		int dsskag;
		for (dsskag = 98; dsskag > 0; dsskag--) {
			continue;
		}
	}
	if (false != false) {
		int unbvudlkdi;
		for (unbvudlkdi = 19; unbvudlkdi > 0; unbvudlkdi--) {
			continue;
		}
	}
	return false;
}

int lovrizw::tdrldkszxssb(double vcbfflbbzxf, string nvklx, double dcetmd, double qxcvbwnjlimwjpb, bool rhbhmnipm, double ycwgmsdv) {
	string hvdubhzkvqkpv = "vjbhdmsazqsomsdamsvokxtkcxxvucuitvnrnhpmmxsumhdxbzkoujouyyojiqvnxwwvjza";
	double pztmx = 17027;
	bool jzwbei = true;
	return 29674;
}

bool lovrizw::luolmiaycdo(int tmwtwde, bool qqgyb, double fwfkotn, double odwexeileeflu, int fozmcy, bool yultfcp, double qcymgmo, int uztnwxcxrm, string pameib) {
	return true;
}

double lovrizw::pynxdppenvo(bool agnvxyhxtcovh, bool dulbzrnfkxcizo, double nlkyews, int udmihdpztvtuv, double syciffzez) {
	string lifkwbi = "uqumtrkzkmdpaoehimyhyuvmjhxuajhykxgwswkjuqqmtelzqxzjevctffqjfafgrinqjqkwgbzpfxszsicht";
	double jyskejz = 46563;
	double iqoehqgkqbjmz = 28247;
	bool wyjvsbfkrlezfc = false;
	string cppntgglvtdgrb = "iqmmsspzezspiuvypxmzcqvofelcccanyooufwwbsfyaekbdreevgkpudgcvziitjermizinymjgdmypapuudwmm";
	string jovrvadexlpubld = "umofvibkpqxhjxyswmtqesvkwwszkolnkdfyevtcmmglpaqrdrah";
	double twswb = 12766;
	if (28247 != 28247) {
		int qrcxhuejk;
		for (qrcxhuejk = 78; qrcxhuejk > 0; qrcxhuejk--) {
			continue;
		}
	}
	if (string("uqumtrkzkmdpaoehimyhyuvmjhxuajhykxgwswkjuqqmtelzqxzjevctffqjfafgrinqjqkwgbzpfxszsicht") != string("uqumtrkzkmdpaoehimyhyuvmjhxuajhykxgwswkjuqqmtelzqxzjevctffqjfafgrinqjqkwgbzpfxszsicht")) {
		int jimydjavqj;
		for (jimydjavqj = 39; jimydjavqj > 0; jimydjavqj--) {
			continue;
		}
	}
	if (28247 != 28247) {
		int aiesxsbmwd;
		for (aiesxsbmwd = 38; aiesxsbmwd > 0; aiesxsbmwd--) {
			continue;
		}
	}
	if (12766 == 12766) {
		int ch;
		for (ch = 23; ch > 0; ch--) {
			continue;
		}
	}
	return 86340;
}

string lovrizw::zopyfvjpfdehrfmcdjbcfzmn() {
	int mzgjmwpsvhtcgy = 6524;
	bool mthcpofflbhad = true;
	double qbqonatu = 70106;
	bool lfavmygrwykqfly = true;
	int gkmmkr = 3413;
	bool woaiccjeaevtpf = false;
	if (true == true) {
		int hik;
		for (hik = 2; hik > 0; hik--) {
			continue;
		}
	}
	if (true != true) {
		int aumf;
		for (aumf = 12; aumf > 0; aumf--) {
			continue;
		}
	}
	return string("mehyndj");
}

string lovrizw::tcbufnizfjvcahchmknj(string nuorviwpgz, double mzhbgl, double pyfjkaeljx, string nfoiiupo, bool qdxdlcsmgjuyno, int combvzxxnztbqyk, double ngfandleyqku, double kvqcifdv, int ngyuipsmqsk) {
	return string("nfcpprkuenorqggwxmh");
}

double lovrizw::wsrgrcmofzbfsseuzk(double clkxdiipch, int vlevmy, bool phakzewibum, bool zlrjtzc, double qcjnyfn) {
	bool kbhqvepmfzqg = false;
	bool rjvzfedm = true;
	bool lveqadex = true;
	string cnecskdilven = "pvcbwwzzuolmecxpspxmhpkqmvxlevwbuodqrpnbqhpvjwrsvmvtkrqeinnieivxgiuzeho";
	double wsehhgjdxfgtn = 42699;
	return 27950;
}

string lovrizw::llfshpbyhqw(int sugaldg, int ixtlxps, int vbxhhqsxx, int suncufgocwoxkar, double toskozvud, bool mddvftrox) {
	double haeitxwtt = 44921;
	double depjlhyabkzeib = 23529;
	double vvytpxs = 5877;
	int kzzmnsdumfpyi = 1902;
	double ptoxuy = 17120;
	bool ypbqglkngiwdfb = false;
	return string("kt");
}

lovrizw::lovrizw() {
	this->luolmiaycdo(6678, true, 61243, 73166, 181, false, 41171, 2725, string("ynmnjojrmkweguipwawfoqfvnoyrqvhdrendioewavcogdhddunjichqbhrqkkglgajeb"));
	this->pynxdppenvo(true, true, 17715, 6520, 5132);
	this->zopyfvjpfdehrfmcdjbcfzmn();
	this->tcbufnizfjvcahchmknj(string("blmxvbwg"), 7741, 49341, string("qfxygztoxtfnzynobgjtqcjpcuw"), true, 4149, 52478, 15469, 3645);
	this->wsrgrcmofzbfsseuzk(50075, 2488, true, true, 11969);
	this->llfshpbyhqw(1342, 694, 4701, 5577, 22662, false);
	this->tcthacrtirvmohrpsykmij(4839, 55623);
	this->qyggnrqelaq(string("lmfppuvnndzvndhzyvdmsfpgnvqwgzkfypzewszpzqbddhlsiqelazfutxhguibollezqbsxupotwtdelycruohnq"), 8039, 3237, 1027, true);
	this->uwqcqewbavkrldztmt();
	this->zfksdkltvtjripnlzyqzs(string("znfhymrdtoioeomklmarxiybwhxovqfltrppodspqktbb"), string("cloppqpiuaojuonkidydmfjqhanmutujkqdsczpgxgaaarhyqrbowgzlbvfyzzijnthyxwccvdfdsebrpmfkjomzt"), false, string("kfsjpsivodookjwpoxtpcpqgyofghupwamqlftdhdjkicwegspsltwqjrwnkabpeyubfhjggqsezqjrbzzwtatxpzg"));
	this->egpvitjgcvtdbjujniiew(string("ceefjvrqjsyxyohffanelwwjwarznfkvharwntrfvvugh"), 1264, true, string("shfcgxvbdagnqchtcemlplv"), string("mkvmvyursjlvlgtqifgiefcxoundqboyufjbl"), string("slliqbaqyhregsizhzohadwlaxoyvyldjbryzorcbyagxdyoycgearelkynqopmjtbbirwjseub"));
	this->lpztwrladwkgddrcqu(false, 7213, 71569, 12713, 2275, 1229);
	this->cymcoxdjqxlaujiyay(false, 8780);
	this->mkwqafdoxtytlieqcrvxht(6225);
	this->uakwomjbckufwumohcvaahcjw(9623, false, 41661, string("ccucpzrdqcwtnvjxixsflqvwdobevbudrwsylysplvxkoyibavqbpfznrecdyvpcnnyxiialwhcouqu"), true, false, 44172);
	this->tdrldkszxssb(6490, string("ojfoenrytijbyfhyxmvttbtqatngznzmnycfxfhylmnolyazzlrpkyiwblpf"), 4075, 4584, false, 30674);
	this->knkdcugrmolwwsactxwsgr(55206, 444, 4536, 1297, 14532, 6770, 7278, string("dzrwcsvlvsgiyznvekmsnwoul"), 21161, 19855);
	this->vgqiyyeghzlnjjcc(262, 6518, string("uxqxhurlcabvabqflskcjcejgljhvofwujvulolcx"), true);
	this->ysydwntxiqbeogt(5486, 1655);
	this->ljxpqhkpjvojoe(string("ntdpoygclwrgcgwpmriewnktcwsdkl"), true, 29011);
	this->blshwuxmbunsip(10659);
}

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class hffhebx {
public:
	bool zgbthnvix;
	bool qovfx;
	int egmjbreejkas;
	int kflxyq;
	hffhebx();
	int gjhxgfkxwkfzosugynwlasit();
	bool ereauyhiynsecqzwtfgwmxml(bool nnusqye, string oxapsyrwllav, int elcxpjt, string nmicp, int ksvhkmiypaoz);

protected:
	double cpfsosol;

	string vlcpehwwiopxtwwljyhxsi(int yjdztqelpcy, bool yvugdscgcms, bool krnec, int elanfdnpz, double tqpurrngqy, int tacfnxxen, string vgsyv, bool nkubzq);
	void ssudrwbzieoifb(int enzgzfoqt, bool dlxjdy, int yhnpgfty, double aoandd, double xutil);
	double yhankxiqkhvhyghth(string xpqvhorwgqqwuvm, double eushjrri, double askemysvm, double zkiqc, double ccumrf, bool mriceiekale, string tolbk, int stmgyopnfvql);
	int btaktwifeptkwapfygyazrn();
	string xlrnsdyuzzna(double ziinagiahh, bool iwfsjvjfxvttij, string urxoiqhyqhz, int iajbt, int ibgwcq, bool etfkbmw, double gulgufn);
	int yfudxfchvrmm(double cwajmx, string lygjtdnhfx, int hxondblb, int lamblrqubk, int zvzuailnsm, int irzvnrqhv, int qxdiuzeppnhw, string ppfvmtbwsve, bool njhiyubnynoxa);
	double nyfdjxftgkjwbzrlvfhh(string pjgcwdzs, string knpde, double dryuduqiaescazb, string kjwjgqnqz);

private:
	int fjcvlbjnudl;
	bool tabhdagw;
	bool bepcdsvf;

	string dwszmrggawpmqz();
	string qyhijkrqqyullwqnqu(string llzkcpwxdzcxcf, double fiwgsnpaektll, int zofeaaeulecng, double khsdxff, double xpscxhbuyxpstg, int fiarz, bool kpmyzlivvntslh, int vgcmbykanpufxoz);
	bool mptipalgbp(bool hbyfoz);
	string atogwrstttfrklzcej(double bwfwmgysuwz);
	double rwqorjsmltmynyatexyufmne(double sflqxqcclojujf, int vqwtgvwcmourru, int xlazfhopo, bool crgbbwik, bool hdvepjnemn, string fphcinqzel, string ldmpxte);
	bool audomvgdotsqgwdwzp(double rbkinacgry, bool dzqgrjtiwmanx, string rkgluncurp, bool razkyps, double gntuuponednmjl);
	void nmrvfqeirdtcmuz(bool bokjlzcuieg, int lkwdl, bool dfmrbiheyvxdfqf, int wgkxwpebymxreyv, double uwnepujdcwtyk, double dfguzqvb, double fehhfiaixpvdpt, double htdvr, string sfeyxhykaewv, string kfzphk);
	double rqmvkwceginec(bool tyzlzz, double unqfqqjfepa, bool cyvfaf, string sngcs);
	string qqqwfpwhdszalltdiwjf(int immyk, double jwackwqgyrllfnv, string uinbwlbwn, double ncxtvdbjucpuch, bool lszygknew, string tsrwn);
	string awfubgqvqjswhgi();

};


string hffhebx::dwszmrggawpmqz() {
	int hdkukedklfu = 3958;
	int ejpqsf = 1567;
	string jxiskcgorcynx = "shabunnsbeurlzmbvcvuckf";
	bool eniib = false;
	if (1567 != 1567) {
		int xcxxzvx;
		for (xcxxzvx = 35; xcxxzvx > 0; xcxxzvx--) {
			continue;
		}
	}
	if (false != false) {
		int anxw;
		for (anxw = 5; anxw > 0; anxw--) {
			continue;
		}
	}
	return string("bjftxfpsavxvfstjnjw");
}

string hffhebx::qyhijkrqqyullwqnqu(string llzkcpwxdzcxcf, double fiwgsnpaektll, int zofeaaeulecng, double khsdxff, double xpscxhbuyxpstg, int fiarz, bool kpmyzlivvntslh, int vgcmbykanpufxoz) {
	string ywagkcn = "usqhtrqfoqoiorkbwkpvoiihdmargxrrryld";
	int qcqbiqdnamhnm = 3023;
	double eudbvejgmnbm = 5595;
	double bixmxpbv = 29288;
	double euzvrfobffy = 10578;
	return string("exkoxggeuvwvia");
}

bool hffhebx::mptipalgbp(bool hbyfoz) {
	bool kajpmkvknm = true;
	double gyoicbgpewgar = 16672;
	double ywdkcniye = 28168;
	int gpptnmt = 1225;
	double oogpu = 12241;
	string zoqxigdgjo = "lzujwptcdmvwvqjysocqrindbebvfectimkrxjfxcciunyjmrumvfyamgij";
	bool fzcjywazzxgvd = false;
	int twtkenstyuxx = 1980;
	int nkbmqninjtg = 1084;
	if (string("lzujwptcdmvwvqjysocqrindbebvfectimkrxjfxcciunyjmrumvfyamgij") == string("lzujwptcdmvwvqjysocqrindbebvfectimkrxjfxcciunyjmrumvfyamgij")) {
		int guvkexkjd;
		for (guvkexkjd = 20; guvkexkjd > 0; guvkexkjd--) {
			continue;
		}
	}
	if (string("lzujwptcdmvwvqjysocqrindbebvfectimkrxjfxcciunyjmrumvfyamgij") == string("lzujwptcdmvwvqjysocqrindbebvfectimkrxjfxcciunyjmrumvfyamgij")) {
		int fgd;
		for (fgd = 79; fgd > 0; fgd--) {
			continue;
		}
	}
	if (false == false) {
		int pc;
		for (pc = 100; pc > 0; pc--) {
			continue;
		}
	}
	if (false == false) {
		int mryxugr;
		for (mryxugr = 5; mryxugr > 0; mryxugr--) {
			continue;
		}
	}
	return false;
}

string hffhebx::atogwrstttfrklzcej(double bwfwmgysuwz) {
	string ulpqsaen = "jeyfgywnsccloytxwvqkcwtlrzfudulmsabsoeislkpobxnvbhyqewdngrsynmtbwjlupipmaiyqmimcegh";
	int sjaplykpgxypzj = 3212;
	if (3212 != 3212) {
		int ncj;
		for (ncj = 86; ncj > 0; ncj--) {
			continue;
		}
	}
	if (string("jeyfgywnsccloytxwvqkcwtlrzfudulmsabsoeislkpobxnvbhyqewdngrsynmtbwjlupipmaiyqmimcegh") == string("jeyfgywnsccloytxwvqkcwtlrzfudulmsabsoeislkpobxnvbhyqewdngrsynmtbwjlupipmaiyqmimcegh")) {
		int afvwppntxr;
		for (afvwppntxr = 40; afvwppntxr > 0; afvwppntxr--) {
			continue;
		}
	}
	return string("iibqurenjgbaj");
}

double hffhebx::rwqorjsmltmynyatexyufmne(double sflqxqcclojujf, int vqwtgvwcmourru, int xlazfhopo, bool crgbbwik, bool hdvepjnemn, string fphcinqzel, string ldmpxte) {
	string hnnmvifduuwceay = "m";
	double xohjclj = 6004;
	bool lhfhhirkotmnrvg = false;
	double lwqcvvgdbdyngsd = 57010;
	bool djqbyhstwkxn = false;
	string yyivkduvawrazx = "cijnjtrsqobiyhfsxwbapsjilzhuobpwddqsghqhqx";
	if (false == false) {
		int bkvlf;
		for (bkvlf = 58; bkvlf > 0; bkvlf--) {
			continue;
		}
	}
	if (false == false) {
		int ojgigbbv;
		for (ojgigbbv = 94; ojgigbbv > 0; ojgigbbv--) {
			continue;
		}
	}
	if (false == false) {
		int cps;
		for (cps = 22; cps > 0; cps--) {
			continue;
		}
	}
	if (false == false) {
		int lvdvmwdxe;
		for (lvdvmwdxe = 92; lvdvmwdxe > 0; lvdvmwdxe--) {
			continue;
		}
	}
	if (57010 != 57010) {
		int ooub;
		for (ooub = 21; ooub > 0; ooub--) {
			continue;
		}
	}
	return 60769;
}

bool hffhebx::audomvgdotsqgwdwzp(double rbkinacgry, bool dzqgrjtiwmanx, string rkgluncurp, bool razkyps, double gntuuponednmjl) {
	string sxncgvrkpzbeb = "bejuaccrovuewihu";
	double rxswrcfdcra = 13670;
	string squlnqljllsed = "khbpgedumocagzoqojsagcypqnpovnjquwsdlbgdcqzbypegtrnoqtokgshmtwm";
	string lxanj = "mjpbyoibjfymfhkrciouioocszhinzltriws";
	double ooevukcideky = 11388;
	double wyeahz = 6971;
	if (6971 == 6971) {
		int caowcostn;
		for (caowcostn = 65; caowcostn > 0; caowcostn--) {
			continue;
		}
	}
	if (11388 == 11388) {
		int lauomrrre;
		for (lauomrrre = 41; lauomrrre > 0; lauomrrre--) {
			continue;
		}
	}
	if (13670 != 13670) {
		int rzgetljlal;
		for (rzgetljlal = 13; rzgetljlal > 0; rzgetljlal--) {
			continue;
		}
	}
	if (6971 == 6971) {
		int ijbcy;
		for (ijbcy = 92; ijbcy > 0; ijbcy--) {
			continue;
		}
	}
	return false;
}

void hffhebx::nmrvfqeirdtcmuz(bool bokjlzcuieg, int lkwdl, bool dfmrbiheyvxdfqf, int wgkxwpebymxreyv, double uwnepujdcwtyk, double dfguzqvb, double fehhfiaixpvdpt, double htdvr, string sfeyxhykaewv, string kfzphk) {
	double uyjtboqbmnc = 85382;
	string yjlgr = "bwaptsgocczoqcuswpmqrwxofesbzkqeyfvseynpihqxyzjtafudgdwolwrrxazmyzpcrlzxevkoimoxjlmrlemfkat";
	int avltqxx = 2612;
	double rpgjrpokflrxaip = 69037;
	if (69037 != 69037) {
		int eizfkfz;
		for (eizfkfz = 85; eizfkfz > 0; eizfkfz--) {
			continue;
		}
	}
	if (string("bwaptsgocczoqcuswpmqrwxofesbzkqeyfvseynpihqxyzjtafudgdwolwrrxazmyzpcrlzxevkoimoxjlmrlemfkat") == string("bwaptsgocczoqcuswpmqrwxofesbzkqeyfvseynpihqxyzjtafudgdwolwrrxazmyzpcrlzxevkoimoxjlmrlemfkat")) {
		int jqgjunnk;
		for (jqgjunnk = 70; jqgjunnk > 0; jqgjunnk--) {
			continue;
		}
	}

}

double hffhebx::rqmvkwceginec(bool tyzlzz, double unqfqqjfepa, bool cyvfaf, string sngcs) {
	bool kzjvfrfuzm = false;
	bool uzelyjxoalpwdo = true;
	int kdaywsxuvecwri = 2811;
	int qrzxvncrh = 4725;
	int gmrwmz = 5591;
	bool iktamldyhlztl = true;
	double fdgyhhtccjiljtg = 9446;
	int ueutozzbgq = 8027;
	if (8027 != 8027) {
		int pipwr;
		for (pipwr = 47; pipwr > 0; pipwr--) {
			continue;
		}
	}
	if (2811 != 2811) {
		int iqorqe;
		for (iqorqe = 11; iqorqe > 0; iqorqe--) {
			continue;
		}
	}
	if (2811 == 2811) {
		int edt;
		for (edt = 15; edt > 0; edt--) {
			continue;
		}
	}
	if (2811 != 2811) {
		int uodv;
		for (uodv = 55; uodv > 0; uodv--) {
			continue;
		}
	}
	return 29343;
}

string hffhebx::qqqwfpwhdszalltdiwjf(int immyk, double jwackwqgyrllfnv, string uinbwlbwn, double ncxtvdbjucpuch, bool lszygknew, string tsrwn) {
	double utqgpyxsaxir = 74016;
	string spbyg = "muwmhfdntgpawuouvfmwsbjaytwfugkbaopfvnea";
	double evemtkncapw = 20363;
	double zjqffcyvdh = 41765;
	int gtmcgyij = 102;
	bool jjfvsycllpkrghs = false;
	string scoleaba = "cufnqwahletsgitrasoodcylhympyvyl";
	double olkaasqij = 14141;
	bool hetipfdk = true;
	if (74016 != 74016) {
		int bunulfa;
		for (bunulfa = 22; bunulfa > 0; bunulfa--) {
			continue;
		}
	}
	return string("ltycjwufvlknkcbouwom");
}

string hffhebx::awfubgqvqjswhgi() {
	double rgyovpviwgqgiv = 10456;
	string dfvhqjkuhvvmio = "bunmkaoankhiklpujjfazvkjxtyiziwyyamrfeoxfzmdypzdwmavhfeqvnfqg";
	double shjyjikvxsbh = 12758;
	bool mogktowau = false;
	int rfhua = 1773;
	int guomcdhwedrhvd = 2901;
	bool qbdceyoiut = true;
	double xqaaoend = 45858;
	double mnhjaiyiklgmenw = 38059;
	return string("udakjzwvxtlh");
}

string hffhebx::vlcpehwwiopxtwwljyhxsi(int yjdztqelpcy, bool yvugdscgcms, bool krnec, int elanfdnpz, double tqpurrngqy, int tacfnxxen, string vgsyv, bool nkubzq) {
	bool tserve = true;
	int lcsseclohvhdvnq = 2761;
	int cubaekowinkze = 3431;
	double rthlape = 33799;
	bool igceysgfvh = true;
	bool zucvkovixjiokc = false;
	double ziepuv = 36459;
	bool cqvtuvvfcpo = true;
	int negzqlxnpnal = 6207;
	bool kzcnucb = false;
	if (false != false) {
		int dgzppmcuf;
		for (dgzppmcuf = 22; dgzppmcuf > 0; dgzppmcuf--) {
			continue;
		}
	}
	if (true != true) {
		int dnpd;
		for (dnpd = 12; dnpd > 0; dnpd--) {
			continue;
		}
	}
	return string("mcwdakqmowchynzdyq");
}

void hffhebx::ssudrwbzieoifb(int enzgzfoqt, bool dlxjdy, int yhnpgfty, double aoandd, double xutil) {
	double chqqwdjsgp = 11943;
	double jkdnzatk = 30418;
	string qbkwvfefirgce = "kgkvwxzhknqycrmouqeniaphcxerlfwocdvophyskxqvzdsboyvxjhhkixk";
	if (string("kgkvwxzhknqycrmouqeniaphcxerlfwocdvophyskxqvzdsboyvxjhhkixk") != string("kgkvwxzhknqycrmouqeniaphcxerlfwocdvophyskxqvzdsboyvxjhhkixk")) {
		int niymxlyerh;
		for (niymxlyerh = 86; niymxlyerh > 0; niymxlyerh--) {
			continue;
		}
	}
	if (11943 != 11943) {
		int yr;
		for (yr = 39; yr > 0; yr--) {
			continue;
		}
	}
	if (string("kgkvwxzhknqycrmouqeniaphcxerlfwocdvophyskxqvzdsboyvxjhhkixk") != string("kgkvwxzhknqycrmouqeniaphcxerlfwocdvophyskxqvzdsboyvxjhhkixk")) {
		int bjveagzft;
		for (bjveagzft = 26; bjveagzft > 0; bjveagzft--) {
			continue;
		}
	}
	if (30418 == 30418) {
		int nssocuc;
		for (nssocuc = 65; nssocuc > 0; nssocuc--) {
			continue;
		}
	}
	if (30418 != 30418) {
		int ilz;
		for (ilz = 25; ilz > 0; ilz--) {
			continue;
		}
	}

}

double hffhebx::yhankxiqkhvhyghth(string xpqvhorwgqqwuvm, double eushjrri, double askemysvm, double zkiqc, double ccumrf, bool mriceiekale, string tolbk, int stmgyopnfvql) {
	return 5395;
}

int hffhebx::btaktwifeptkwapfygyazrn() {
	bool uidiszbnne = true;
	int knccf = 3102;
	bool wphwkc = true;
	if (true != true) {
		int cnfqr;
		for (cnfqr = 74; cnfqr > 0; cnfqr--) {
			continue;
		}
	}
	if (3102 != 3102) {
		int eaf;
		for (eaf = 8; eaf > 0; eaf--) {
			continue;
		}
	}
	if (true == true) {
		int ibrysqzdlb;
		for (ibrysqzdlb = 20; ibrysqzdlb > 0; ibrysqzdlb--) {
			continue;
		}
	}
	if (true != true) {
		int itaiecc;
		for (itaiecc = 33; itaiecc > 0; itaiecc--) {
			continue;
		}
	}
	if (true == true) {
		int cyupxfunag;
		for (cyupxfunag = 17; cyupxfunag > 0; cyupxfunag--) {
			continue;
		}
	}
	return 5221;
}

string hffhebx::xlrnsdyuzzna(double ziinagiahh, bool iwfsjvjfxvttij, string urxoiqhyqhz, int iajbt, int ibgwcq, bool etfkbmw, double gulgufn) {
	double cbcmczwbgv = 28037;
	double cumrhvy = 18172;
	string fnejfk = "xutykvgpwkbrwnieoscvjnnbqzvhbakfezkxyfvoliqhtmgkhdcbcxohnrmnprouvx";
	string ylglhtstcdkpx = "azjkcoweoixyrfvcwocyclrdy";
	if (string("xutykvgpwkbrwnieoscvjnnbqzvhbakfezkxyfvoliqhtmgkhdcbcxohnrmnprouvx") == string("xutykvgpwkbrwnieoscvjnnbqzvhbakfezkxyfvoliqhtmgkhdcbcxohnrmnprouvx")) {
		int huhdrgd;
		for (huhdrgd = 97; huhdrgd > 0; huhdrgd--) {
			continue;
		}
	}
	if (18172 != 18172) {
		int uzkatzd;
		for (uzkatzd = 82; uzkatzd > 0; uzkatzd--) {
			continue;
		}
	}
	if (string("xutykvgpwkbrwnieoscvjnnbqzvhbakfezkxyfvoliqhtmgkhdcbcxohnrmnprouvx") != string("xutykvgpwkbrwnieoscvjnnbqzvhbakfezkxyfvoliqhtmgkhdcbcxohnrmnprouvx")) {
		int uoiwljt;
		for (uoiwljt = 64; uoiwljt > 0; uoiwljt--) {
			continue;
		}
	}
	if (18172 == 18172) {
		int gl;
		for (gl = 49; gl > 0; gl--) {
			continue;
		}
	}
	return string("bxdxaxl");
}

int hffhebx::yfudxfchvrmm(double cwajmx, string lygjtdnhfx, int hxondblb, int lamblrqubk, int zvzuailnsm, int irzvnrqhv, int qxdiuzeppnhw, string ppfvmtbwsve, bool njhiyubnynoxa) {
	double nrigr = 62185;
	string eslkdozmxjftqgk = "lftxkjgmybkygqyrdenkwepypcjfjmaeuzzmufsowbvmqlknclhnoxzlgfxvkbfdraazuo";
	string cnuvphatxga = "rzjqiytvrvrheyolnondwghbyanljmxjjtejfloncitpeydxgmsifqsaqlmokgrzvihjnyt";
	int rohlapzj = 784;
	int pclnvkhkowi = 2182;
	string yfhaxwxjbzmlkjf = "auicqldkydycchiknrfhkhktuclltqvrzyjknwytipyzdseuhkyszustnfvx";
	int woxqmbxijrec = 3741;
	int xmaayevgyrd = 1649;
	int ixcqob = 2199;
	if (string("lftxkjgmybkygqyrdenkwepypcjfjmaeuzzmufsowbvmqlknclhnoxzlgfxvkbfdraazuo") == string("lftxkjgmybkygqyrdenkwepypcjfjmaeuzzmufsowbvmqlknclhnoxzlgfxvkbfdraazuo")) {
		int bn;
		for (bn = 66; bn > 0; bn--) {
			continue;
		}
	}
	if (string("auicqldkydycchiknrfhkhktuclltqvrzyjknwytipyzdseuhkyszustnfvx") == string("auicqldkydycchiknrfhkhktuclltqvrzyjknwytipyzdseuhkyszustnfvx")) {
		int tubviaow;
		for (tubviaow = 33; tubviaow > 0; tubviaow--) {
			continue;
		}
	}
	if (62185 == 62185) {
		int tjshziyjk;
		for (tjshziyjk = 23; tjshziyjk > 0; tjshziyjk--) {
			continue;
		}
	}
	return 15425;
}

double hffhebx::nyfdjxftgkjwbzrlvfhh(string pjgcwdzs, string knpde, double dryuduqiaescazb, string kjwjgqnqz) {
	double fgqaa = 16256;
	int dybbkogxc = 2939;
	if (16256 != 16256) {
		int zldj;
		for (zldj = 100; zldj > 0; zldj--) {
			continue;
		}
	}
	if (2939 == 2939) {
		int frgfctrvps;
		for (frgfctrvps = 47; frgfctrvps > 0; frgfctrvps--) {
			continue;
		}
	}
	return 62845;
}

int hffhebx::gjhxgfkxwkfzosugynwlasit() {
	double teldwekzm = 4711;
	if (4711 != 4711) {
		int abjagzjotp;
		for (abjagzjotp = 78; abjagzjotp > 0; abjagzjotp--) {
			continue;
		}
	}
	return 520;
}

bool hffhebx::ereauyhiynsecqzwtfgwmxml(bool nnusqye, string oxapsyrwllav, int elcxpjt, string nmicp, int ksvhkmiypaoz) {
	bool uktfidrl = false;
	int astjzorgreeff = 3580;
	int nbizzai = 5436;
	bool ikfoipg = true;
	int wnakkpefzemvhnv = 530;
	double jhhgykn = 39818;
	if (39818 == 39818) {
		int nel;
		for (nel = 25; nel > 0; nel--) {
			continue;
		}
	}
	if (false != false) {
		int tqkmzzjkx;
		for (tqkmzzjkx = 67; tqkmzzjkx > 0; tqkmzzjkx--) {
			continue;
		}
	}
	if (3580 != 3580) {
		int zcyelxe;
		for (zcyelxe = 91; zcyelxe > 0; zcyelxe--) {
			continue;
		}
	}
	if (3580 == 3580) {
		int wwpkdy;
		for (wwpkdy = 21; wwpkdy > 0; wwpkdy--) {
			continue;
		}
	}
	return true;
}

hffhebx::hffhebx() {
	this->gjhxgfkxwkfzosugynwlasit();
	this->ereauyhiynsecqzwtfgwmxml(true, string("fmoujdfxguchmsymvtavdeginespmbefwiovjinykujwfkhyhjveblixrp"), 2158, string("zvgonbpdbjmxfxipxkhyxrneavvdiuvqjnhrtrbplpcqteicekvmdhyeyypgtknifhrododkwsfbjyldmchf"), 1493);
	this->vlcpehwwiopxtwwljyhxsi(5496, true, false, 117, 17738, 31, string("ktcapoiymf"), true);
	this->ssudrwbzieoifb(4381, true, 1100, 15772, 7667);
	this->yhankxiqkhvhyghth(string("qkhmhfoiljxfgsqg"), 43849, 59966, 22658, 28487, true, string("slpmjghnxfdjwpufxtgnshoclai"), 3408);
	this->btaktwifeptkwapfygyazrn();
	this->xlrnsdyuzzna(38450, true, string("hmih"), 3170, 990, true, 9118);
	this->yfudxfchvrmm(77884, string("degylkssatigzmypjodgazjnqyqiwllqsvmbfvyythwktylgjyzkgbfyvpsdpoeggowbfhlkfalqundvdj"), 2608, 459, 444, 1201, 611, string("lcedicslymaux"), false);
	this->nyfdjxftgkjwbzrlvfhh(string("dhmlfdqhsqzmqfqmsmzawhvwjpldhyuuzsuzflyncosjm"), string("lhterjiotsojtagvvnjekojgwlptubgubyppztjhuydcnghzxvyozcrmnnnxtyaqujkzuflixnwmelt"), 3697, string("rmhxispescomqmtqftefovyayszqczfizzbbihttzmkiaktvhknuxbmulkschpzxbwsp"));
	this->dwszmrggawpmqz();
	this->qyhijkrqqyullwqnqu(string("ezoxzjzcyrvnbtvsfhlddkigftvyyscxxjgzvgnsznmntfryejqphafefrzkipeihbvwmvlpcqbpfixiyhsndqrrztuz"), 29566, 1448, 17252, 46796, 4093, true, 3633);
	this->mptipalgbp(false);
	this->atogwrstttfrklzcej(13328);
	this->rwqorjsmltmynyatexyufmne(37145, 5699, 933, true, true, string("ktjktcqbsqviahgtcfkublpojm"), string("masvxohk"));
	this->audomvgdotsqgwdwzp(21150, true, string("mepbtgkvdufirieyocnfnolydgcrrjzz"), true, 1929);
	this->nmrvfqeirdtcmuz(false, 3765, true, 4976, 60883, 71988, 1199, 18709, string("xtpbeeyjygbggvixpnqijdajfkihpcmknibcofnnufzkxaduhdslohxymilyuvhwgftzzopdbzsgvqziztgg"), string("tspiuxotfsofoygnoszhzkzhvcaqpmdhukltvihnimiwopcwrlwkpyygexqgyykbfb"));
	this->rqmvkwceginec(false, 36676, false, string("mymcealn"));
	this->qqqwfpwhdszalltdiwjf(1044, 16004, string("xpqnanlnwhvlksmdlfhobrvvixeydlksujvljxyoqaw"), 16641, false, string("pegrwlzqninbdlqrxklfbygoynitjwqlusblcbvcalpagrvkmhcakbjn"));
	this->awfubgqvqjswhgi();
}

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class uceivps {
public:
	bool lgzxsvoztug;
	uceivps();
	bool ngenkjtufuxqcjv(string iiyxgoprr, int sfvpifd, int pyzoigcotlg, string ddutuueao, bool flchfnntcktjy, double xbjufzatlkngd, double memchxtltvdpu, double inmfxmdkr, int kbrkhtf, int xdlsx);
	int zvvaqssjrofbe(bool yuijulhg, string rytlxzuvyuewsim, bool ryinmjasyi, int hsstefgmjpkc, int lpijkkugxzfsp);
	string viilwrvgjxl(double bzksyrstp, double plsmezolbwj);
	bool hraibppnkeeq(int hhgrya, int dayymvpicku, string lfeyirhr, bool tsxtuuqj);
	bool enazspbpipqcfodqlequiyjj(int ijdvomrfec, string avxnbuvtuusuho, string zirctvwa, double obkrdipvawkhdt, int tgdajn);
	string tvuzvksdtujry(double wsvvhxcba);
	double xbcpiawttihqmqnvbihaulbdw(double xnstwf, bool rewtplduqcskrtr);
	string urfsnpnjgjndcwhlhayhy(bool ulkbymmhrod, string tcqefasd, int livxf, string bupguqzwgwljtsp, bool nylocgzrwqk, double pfkxakil, string eatqs, double oaboqbaw, double ynndigopbz);

protected:
	string heafngog;
	double ymllqbjmtxy;
	bool jigbnjra;

	double jukhjfqpklgiaeggig(bool aqmroxmg, int peunticou, int uepydwvcwe, int ewwfn);
	bool czzqgnsozvrrsjdcbgkeuzyb(bool bsliwbw, bool jpevstohgihbxuo, string xeurlrsmtg, bool wcthxoa, double rdsilxzxojdyic, bool ttwpnphqxzssbgg, string gnonvwlvrjrrpl, string zvihcfwqosv);

private:
	bool fbtkcnqso;
	double okqccegbjuc;

	int cwetansanzddyhqhyfttldix();
	bool hkkopmmmegzhkymxbg(string jkjanqlb, bool mvijgm, double koojevvtiu);
	bool wzaredlnbzur(double hvxefi, double thcyuk, double rlwkutr, double axikjpjnfyager, int mqzmyxjmjckywhm, int xlhlfmjcxa, int rdetkbdfkuteuyq);
	bool nlaqdxgcqjhtxewa(bool xviqp, double ghmpnctl, bool rhnui, string ofntkxfrrazxkdq, string uwgoyjjkseij, double xsftgaulb, string uoxews, double flrkdqyq, string mrszcjyl, int qgcnhcpgtfvqz);
	void eknowkrqrjpefoh(bool vwxblncjaiizjjo, double wcnmrl, bool tdqqih, bool wxuwckvsssrj, double vrkoubnfnbuwg, string gqibakiyfdeb, string tfyyzbmtyknq);
	bool ddhsfgibhejyhitw(int oupuetaxcfoocke);
	void kcjtomvhdmsfflaltodunvbfq(bool pfrybklmt, string ynlomnsuiayq, double gkvnio, bool gkicujydplj, int adajkkor, string tntrcnn, double zjmjtafkbuq, string cfpvphdji, bool tleahxs);
	double bsglgwzucfrwgrsiiid(double lngxnvnkl, string yxlrhnyilrayas, string kkreqfzlerk, double znsecryyqffqd, string enzvsqgvclgt, bool sdfrjhk);
	double qxfeqkjsjgqmu(string ujxaaemz, int yqjnkbj, string wrtloqyihn, double nejfbx, double ezvptryqenuh);

};


int uceivps::cwetansanzddyhqhyfttldix() {
	int jmmaudxvzjck = 2910;
	int gazhat = 4964;
	int hopltgck = 3948;
	double xltdynpwixexmar = 29532;
	if (29532 == 29532) {
		int tclw;
		for (tclw = 60; tclw > 0; tclw--) {
			continue;
		}
	}
	if (3948 == 3948) {
		int on;
		for (on = 19; on > 0; on--) {
			continue;
		}
	}
	if (2910 == 2910) {
		int uaqzdru;
		for (uaqzdru = 81; uaqzdru > 0; uaqzdru--) {
			continue;
		}
	}
	return 74927;
}

bool uceivps::hkkopmmmegzhkymxbg(string jkjanqlb, bool mvijgm, double koojevvtiu) {
	string otzeraddpznfgmh = "trlzybkflhugyjtajffcegoaddtgjzdexxasvnshxfdxyfirxnqnxgfzuoclkebffkgbk";
	int ablbittzy = 3362;
	string vbxhnyuiweocj = "nttepbbzutmjxhvziqitsfxqcuxxazokllrvohsjkkjexbbjucwwngjgcbaialqixcmgjacxvqaufsggopcvocjmwxs";
	bool vpinvebzzpygis = true;
	string jqpdlqjqiho = "sduqfzmbmpxrrykqkqrmfcemnjqfene";
	if (string("nttepbbzutmjxhvziqitsfxqcuxxazokllrvohsjkkjexbbjucwwngjgcbaialqixcmgjacxvqaufsggopcvocjmwxs") == string("nttepbbzutmjxhvziqitsfxqcuxxazokllrvohsjkkjexbbjucwwngjgcbaialqixcmgjacxvqaufsggopcvocjmwxs")) {
		int oxm;
		for (oxm = 15; oxm > 0; oxm--) {
			continue;
		}
	}
	return true;
}

bool uceivps::wzaredlnbzur(double hvxefi, double thcyuk, double rlwkutr, double axikjpjnfyager, int mqzmyxjmjckywhm, int xlhlfmjcxa, int rdetkbdfkuteuyq) {
	return false;
}

bool uceivps::nlaqdxgcqjhtxewa(bool xviqp, double ghmpnctl, bool rhnui, string ofntkxfrrazxkdq, string uwgoyjjkseij, double xsftgaulb, string uoxews, double flrkdqyq, string mrszcjyl, int qgcnhcpgtfvqz) {
	return true;
}

void uceivps::eknowkrqrjpefoh(bool vwxblncjaiizjjo, double wcnmrl, bool tdqqih, bool wxuwckvsssrj, double vrkoubnfnbuwg, string gqibakiyfdeb, string tfyyzbmtyknq) {
	int wmyzunlreduy = 7734;
	double fwutjybchiqt = 7926;
	bool bisfqzgpytzp = false;
	int dgdiwvjq = 1751;
	int nhbirrfjesg = 957;
	string zothlslbqskpp = "ikryuizeeltzoaienlia";
	bool frpfpfsui = true;
	double irvmgh = 7627;
	string fnrrei = "adzngroxbyjrhvwmwryvyvjtygohyzuzpcmmegqoywmbwhgdxcaimliqbyreytyk";
	int icnfkrez = 1268;
	if (7734 != 7734) {
		int rsolgrn;
		for (rsolgrn = 88; rsolgrn > 0; rsolgrn--) {
			continue;
		}
	}
	if (7734 == 7734) {
		int msxemud;
		for (msxemud = 4; msxemud > 0; msxemud--) {
			continue;
		}
	}

}

bool uceivps::ddhsfgibhejyhitw(int oupuetaxcfoocke) {
	bool mdatbg = false;
	double iyjnbja = 26109;
	int cpesxtgkuebyc = 3315;
	if (26109 == 26109) {
		int fjkbllw;
		for (fjkbllw = 46; fjkbllw > 0; fjkbllw--) {
			continue;
		}
	}
	if (26109 != 26109) {
		int khklvxmus;
		for (khklvxmus = 41; khklvxmus > 0; khklvxmus--) {
			continue;
		}
	}
	if (3315 != 3315) {
		int wxow;
		for (wxow = 100; wxow > 0; wxow--) {
			continue;
		}
	}
	return true;
}

void uceivps::kcjtomvhdmsfflaltodunvbfq(bool pfrybklmt, string ynlomnsuiayq, double gkvnio, bool gkicujydplj, int adajkkor, string tntrcnn, double zjmjtafkbuq, string cfpvphdji, bool tleahxs) {
	int ogosuvgdxnf = 1267;
	double yfwwxmmxko = 52548;
	double memgbgvmaw = 53374;
	string nhgwizixkdkluke = "tmzofpiqxclpogquowkujerzflatt";
	int xsgiteziokruhcu = 691;
	int dvudc = 2009;

}

double uceivps::bsglgwzucfrwgrsiiid(double lngxnvnkl, string yxlrhnyilrayas, string kkreqfzlerk, double znsecryyqffqd, string enzvsqgvclgt, bool sdfrjhk) {
	double xlmkwetum = 3460;
	int qikkveffdpcpris = 1950;
	string mpzmzfmaqzgp = "adpxiyodwkwaagoglwmgfbrtuordfbaufizptsjpzjrpcfducofpetjdbgwzmattkkmzlmcjkmzngrqkumz";
	bool mbwhdyekzrtwiz = false;
	if (string("adpxiyodwkwaagoglwmgfbrtuordfbaufizptsjpzjrpcfducofpetjdbgwzmattkkmzlmcjkmzngrqkumz") == string("adpxiyodwkwaagoglwmgfbrtuordfbaufizptsjpzjrpcfducofpetjdbgwzmattkkmzlmcjkmzngrqkumz")) {
		int otmb;
		for (otmb = 80; otmb > 0; otmb--) {
			continue;
		}
	}
	return 26530;
}

double uceivps::qxfeqkjsjgqmu(string ujxaaemz, int yqjnkbj, string wrtloqyihn, double nejfbx, double ezvptryqenuh) {
	bool caesir = true;
	int yfvnc = 1603;
	string rgone = "sjnewaimwigjimcmbztcbnoivwqlmyakjjvkzilkyrulibvguquw";
	bool mxpef = true;
	bool hewmr = false;
	double jyvqonlmzgleqi = 17211;
	int ocgmtoowk = 1039;
	double ryqjhtlqrzodho = 207;
	if (false == false) {
		int qhzlkrr;
		for (qhzlkrr = 50; qhzlkrr > 0; qhzlkrr--) {
			continue;
		}
	}
	if (string("sjnewaimwigjimcmbztcbnoivwqlmyakjjvkzilkyrulibvguquw") == string("sjnewaimwigjimcmbztcbnoivwqlmyakjjvkzilkyrulibvguquw")) {
		int tlcr;
		for (tlcr = 90; tlcr > 0; tlcr--) {
			continue;
		}
	}
	if (string("sjnewaimwigjimcmbztcbnoivwqlmyakjjvkzilkyrulibvguquw") != string("sjnewaimwigjimcmbztcbnoivwqlmyakjjvkzilkyrulibvguquw")) {
		int er;
		for (er = 22; er > 0; er--) {
			continue;
		}
	}
	if (true == true) {
		int odmlzlyl;
		for (odmlzlyl = 78; odmlzlyl > 0; odmlzlyl--) {
			continue;
		}
	}
	if (17211 == 17211) {
		int kfjsptcwz;
		for (kfjsptcwz = 85; kfjsptcwz > 0; kfjsptcwz--) {
			continue;
		}
	}
	return 99429;
}

double uceivps::jukhjfqpklgiaeggig(bool aqmroxmg, int peunticou, int uepydwvcwe, int ewwfn) {
	return 57111;
}

bool uceivps::czzqgnsozvrrsjdcbgkeuzyb(bool bsliwbw, bool jpevstohgihbxuo, string xeurlrsmtg, bool wcthxoa, double rdsilxzxojdyic, bool ttwpnphqxzssbgg, string gnonvwlvrjrrpl, string zvihcfwqosv) {
	string smhhzzcuemxiks = "xbrfgazhqxcwkjagxomsgwfrbtsouodxpvjcwuqsznpj";
	bool imimbvaqwjvf = false;
	bool uvhtxvtzufuniyg = false;
	string rytvuragvh = "iazesbzveefovpyknbtfideutqnlprlgwyohlqwbcfhrxzewvuyyaiomrfqepkmvlmveqpuizwzmwrafhxkdrdqr";
	bool geruxyouacf = false;
	bool feoxmcmacjkbhwc = false;
	int tafkrmosdxncp = 1734;
	if (false == false) {
		int ss;
		for (ss = 15; ss > 0; ss--) {
			continue;
		}
	}
	return true;
}

bool uceivps::ngenkjtufuxqcjv(string iiyxgoprr, int sfvpifd, int pyzoigcotlg, string ddutuueao, bool flchfnntcktjy, double xbjufzatlkngd, double memchxtltvdpu, double inmfxmdkr, int kbrkhtf, int xdlsx) {
	int acnff = 3406;
	double xqqpfis = 31787;
	if (3406 == 3406) {
		int rqqobfgorg;
		for (rqqobfgorg = 97; rqqobfgorg > 0; rqqobfgorg--) {
			continue;
		}
	}
	if (31787 == 31787) {
		int zlafuo;
		for (zlafuo = 58; zlafuo > 0; zlafuo--) {
			continue;
		}
	}
	if (3406 != 3406) {
		int vdlk;
		for (vdlk = 40; vdlk > 0; vdlk--) {
			continue;
		}
	}
	return true;
}

int uceivps::zvvaqssjrofbe(bool yuijulhg, string rytlxzuvyuewsim, bool ryinmjasyi, int hsstefgmjpkc, int lpijkkugxzfsp) {
	string dbwtxc = "vdfhtb";
	double ghqrraexlnne = 11968;
	int uigiolbkwm = 3083;
	bool yqugpswdssr = true;
	bool hsmwveizpxiv = true;
	bool ayinrkjayjdd = false;
	int ikijtqcdh = 3459;
	if (11968 != 11968) {
		int uudyfz;
		for (uudyfz = 0; uudyfz > 0; uudyfz--) {
			continue;
		}
	}
	if (false != false) {
		int vbb;
		for (vbb = 79; vbb > 0; vbb--) {
			continue;
		}
	}
	if (false != false) {
		int mylzkwslrw;
		for (mylzkwslrw = 40; mylzkwslrw > 0; mylzkwslrw--) {
			continue;
		}
	}
	if (11968 == 11968) {
		int loid;
		for (loid = 43; loid > 0; loid--) {
			continue;
		}
	}
	if (true == true) {
		int nsbjbrd;
		for (nsbjbrd = 76; nsbjbrd > 0; nsbjbrd--) {
			continue;
		}
	}
	return 98440;
}

string uceivps::viilwrvgjxl(double bzksyrstp, double plsmezolbwj) {
	double eggwxvefp = 48594;
	int cytezrpwk = 4381;
	string iyrygjlaiufef = "hmbthqcgrpiltomoqualjjpolquekkmtgyviaalxzbaobwlqhmcbszuceqliyrfptpeziaahaxiinqilsstlwgpaww";
	string ssbvnqhpqdsp = "vbxlbmjpwyfqervmlkceklghejlyemdnnleubtkqvgfhvaloklltjgnhvylmpqiwptthrvxbnmylgnqmvuqwssvkr";
	return string("uetpzz");
}

bool uceivps::hraibppnkeeq(int hhgrya, int dayymvpicku, string lfeyirhr, bool tsxtuuqj) {
	string qmzimukhhhtuoqd = "wuwpegxwll";
	double sytbn = 48014;
	int kpwwdztpwjl = 549;
	double kclvuqts = 62394;
	if (48014 == 48014) {
		int vwbvcbt;
		for (vwbvcbt = 4; vwbvcbt > 0; vwbvcbt--) {
			continue;
		}
	}
	if (48014 != 48014) {
		int phk;
		for (phk = 87; phk > 0; phk--) {
			continue;
		}
	}
	return true;
}

bool uceivps::enazspbpipqcfodqlequiyjj(int ijdvomrfec, string avxnbuvtuusuho, string zirctvwa, double obkrdipvawkhdt, int tgdajn) {
	double eyiuuastbtl = 12228;
	string ymlcrysydvz = "zxauclsxnoufwjyhuvcmwgedtdznkmkevylrrihgpfnmbbyrlocexpretwngqetskffwvturpwodtvufvgpwvzibczuf";
	string ojrvtrhpjpvzsxp = "iwghrjfrikrdvphiypzoxhfhnrjbsugohsfbsxntfkzhkpexjiltjjqfsguucfbfvtyeadrskeogynserezpqlqqfgx";
	int qooflojkji = 4764;
	bool gnfnmvjsnl = false;
	double asxomrjgkwviso = 39541;
	bool hfdfpoougmy = false;
	if (string("iwghrjfrikrdvphiypzoxhfhnrjbsugohsfbsxntfkzhkpexjiltjjqfsguucfbfvtyeadrskeogynserezpqlqqfgx") == string("iwghrjfrikrdvphiypzoxhfhnrjbsugohsfbsxntfkzhkpexjiltjjqfsguucfbfvtyeadrskeogynserezpqlqqfgx")) {
		int iehxbtky;
		for (iehxbtky = 44; iehxbtky > 0; iehxbtky--) {
			continue;
		}
	}
	if (string("zxauclsxnoufwjyhuvcmwgedtdznkmkevylrrihgpfnmbbyrlocexpretwngqetskffwvturpwodtvufvgpwvzibczuf") != string("zxauclsxnoufwjyhuvcmwgedtdznkmkevylrrihgpfnmbbyrlocexpretwngqetskffwvturpwodtvufvgpwvzibczuf")) {
		int nmkus;
		for (nmkus = 49; nmkus > 0; nmkus--) {
			continue;
		}
	}
	if (string("zxauclsxnoufwjyhuvcmwgedtdznkmkevylrrihgpfnmbbyrlocexpretwngqetskffwvturpwodtvufvgpwvzibczuf") != string("zxauclsxnoufwjyhuvcmwgedtdznkmkevylrrihgpfnmbbyrlocexpretwngqetskffwvturpwodtvufvgpwvzibczuf")) {
		int bamq;
		for (bamq = 46; bamq > 0; bamq--) {
			continue;
		}
	}
	if (39541 == 39541) {
		int ttttsorwwu;
		for (ttttsorwwu = 16; ttttsorwwu > 0; ttttsorwwu--) {
			continue;
		}
	}
	if (string("iwghrjfrikrdvphiypzoxhfhnrjbsugohsfbsxntfkzhkpexjiltjjqfsguucfbfvtyeadrskeogynserezpqlqqfgx") == string("iwghrjfrikrdvphiypzoxhfhnrjbsugohsfbsxntfkzhkpexjiltjjqfsguucfbfvtyeadrskeogynserezpqlqqfgx")) {
		int jnaltrrf;
		for (jnaltrrf = 97; jnaltrrf > 0; jnaltrrf--) {
			continue;
		}
	}
	return false;
}

string uceivps::tvuzvksdtujry(double wsvvhxcba) {
	int trrlkdgivybsgv = 8301;
	int yiwpiqcacbjsho = 115;
	string aftwyb = "wxvtnmmb";
	string wcdwcmwzjpycar = "yjaccavcaazaivklraknheybkzzvwkutdydeaeelzwavqpivhnujkadohvglxrxsvvbchogmvxlueiopqksjjp";
	int ealgphah = 1146;
	string pcqbdddnmlfdpc = "nrfxfhvahhlaacpocogfltnaylnkwzqheknqpczjdabannqpxieumdcuehebeunxjmvvrfwgnamwoiajnwgvzq";
	string mrokwdoy = "jmrukvbkrzbxaoymkqpuhgztiuszjfrdzxksvbpiorxedordkzkkkkdkituhgfoswemiabtbfmhyshhey";
	if (string("wxvtnmmb") == string("wxvtnmmb")) {
		int nsqktmnbb;
		for (nsqktmnbb = 10; nsqktmnbb > 0; nsqktmnbb--) {
			continue;
		}
	}
	if (string("yjaccavcaazaivklraknheybkzzvwkutdydeaeelzwavqpivhnujkadohvglxrxsvvbchogmvxlueiopqksjjp") == string("yjaccavcaazaivklraknheybkzzvwkutdydeaeelzwavqpivhnujkadohvglxrxsvvbchogmvxlueiopqksjjp")) {
		int tgnqdopcmj;
		for (tgnqdopcmj = 18; tgnqdopcmj > 0; tgnqdopcmj--) {
			continue;
		}
	}
	if (string("wxvtnmmb") == string("wxvtnmmb")) {
		int ohqbeaz;
		for (ohqbeaz = 20; ohqbeaz > 0; ohqbeaz--) {
			continue;
		}
	}
	return string("hhbjbjusycbfn");
}

double uceivps::xbcpiawttihqmqnvbihaulbdw(double xnstwf, bool rewtplduqcskrtr) {
	return 35803;
}

string uceivps::urfsnpnjgjndcwhlhayhy(bool ulkbymmhrod, string tcqefasd, int livxf, string bupguqzwgwljtsp, bool nylocgzrwqk, double pfkxakil, string eatqs, double oaboqbaw, double ynndigopbz) {
	bool lvxvy = true;
	bool lcrurohmxlujvv = true;
	bool nzmbhvfmmtajira = false;
	bool bciwtjbjbeijpef = true;
	double fkbnc = 35926;
	string zncyrqorqcw = "zhqtpubouzauffttiprmwfkzjqbfrztstwpmudvxbmwfndfwgkjescobvnwlwzqqltupntwtcdueeedczomhw";
	if (true != true) {
		int jwejpybmb;
		for (jwejpybmb = 34; jwejpybmb > 0; jwejpybmb--) {
			continue;
		}
	}
	return string("uxqlttglwhi");
}

uceivps::uceivps() {
	this->ngenkjtufuxqcjv(string("tpdawifgqvdotajcjkcfcuayzlusjrefdflpcmwgyebnzdcdwzkmvgftssfxtra"), 1072, 2148, string("ezxmddnkklxbo"), true, 21024, 47549, 708, 153, 4156);
	this->zvvaqssjrofbe(true, string("fgpwxfyjdhsaknlkcgsctytjzvbxguilmnwhiutytqehrabzkabhatdrxfdvasxb"), false, 3575, 1317);
	this->viilwrvgjxl(14303, 39798);
	this->hraibppnkeeq(1122, 1031, string("scce"), true);
	this->enazspbpipqcfodqlequiyjj(3289, string("rolgliaijfiewlqvyjatoacfdipcwrtfahfaajfopzpltxenrsxhdikvojvrefudoyzepzszjkjwo"), string("wgvjmtuql"), 40366, 4438);
	this->tvuzvksdtujry(50735);
	this->xbcpiawttihqmqnvbihaulbdw(11859, true);
	this->urfsnpnjgjndcwhlhayhy(false, string("owsruzngesgcpwzmwdlfolozkgwtnpukqpqkadkrtifkfgpqbonlwxnubsgrusnlfsopndgznvqxrjaausrzayyrathzeyc"), 1379, string("bjdxuxwbykafjhkafnnbheeloxlvicdnovrrmjqaafozbdxrhpsgbyqymyyahfbtasqsjfqfkygcrbsjgduzazzlcth"), false, 24124, string("zqmmselwdpivatjeie"), 6071, 23853);
	this->jukhjfqpklgiaeggig(true, 3062, 7438, 894);
	this->czzqgnsozvrrsjdcbgkeuzyb(true, false, string("rytdkglhwefjpfpwcjbdtijaszllhenqqsnbvmvvawjawhh"), true, 10384, false, string("hdxvkdhcylxzpyjbpjvvwestxbrkchmxvdoyhagwoekmmnxuqxwgsqdbuunihjkkbezylpgcfrusdxnqcdsckdqcjvgzxmv"), string("taohtcylrvztqbxubinodmxofavmeabaohjuvqeornojqbhgfdjxpoutbsmbexcgreqsraggaqkwbatzfcdcv"));
	this->cwetansanzddyhqhyfttldix();
	this->hkkopmmmegzhkymxbg(string("ivbzncamqjtk"), true, 35640);
	this->wzaredlnbzur(28921, 1655, 9183, 75423, 1167, 1261, 1155);
	this->nlaqdxgcqjhtxewa(true, 959, false, string("ewwafibacdoklcxlyfjxlhrwbpuiignjuw"), string("kinsy"), 18229, string("eqvynvkcecgwoiyggtfvtfyyfodhlbjilpseb"), 54152, string("uxmwgobghbyovqktgofgymesehwkczfllnoblcwpnpjrzslbofkrjwhzwvlsgwntd"), 899);
	this->eknowkrqrjpefoh(true, 51242, false, false, 19782, string("hlcndiptypttowwzueqfnjfnepuugzazgxsihlsxuklipjzesczcdygcquddsfcjmnsgocogkfpdfdbjajpdcynuqjgfizhigxjo"), string("lfltyfwcbubhpgbygwhckjqrihbxpjcgusjgbgrntpdvzwkcklkdfifcmdwwzxxlpgttsgfzcvr"));
	this->ddhsfgibhejyhitw(2255);
	this->kcjtomvhdmsfflaltodunvbfq(false, string("kmulkdupfcplnuictzpnlrgotgiermbdzfmqjturojyq"), 18707, false, 1408, string("wwixaxqdsezxcvaiibcvauqbed"), 31203, string("rnzebfbajehqpjrfrikxqccieypmrrhdcuenthz"), true);
	this->bsglgwzucfrwgrsiiid(3620, string("oreitqimbeuggrisixzdmy"), string("nejddhaefqcbpbhusjmhsqabarpgojojezrtzmbtgrfrmlztswtvjttsmnwedepivpmwzyrxmahftiew"), 17191, string("shskovhculzovbg"), false);
	this->qxfeqkjsjgqmu(string("ncwcdxklojqmvvmhtstpqndbmaapvtutfcxgyxpjoudaugvbpihmkvhybopkpsatsowswalpwwzn"), 378, string("pmimsxxqbgzjbshrkecgucgrgselhbideokvlpckxkrithodrhllkfcfbfkhyvdfd"), 9702, 72995);
}

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class kixegtp {
public:
	string ekktqe;
	kixegtp();
	int mgeywrknaozrk(int dscrgbwstwrlzx, string vdoacbp, int atrkeg, bool juhrejg, bool hiufdsixac, int dptnmncy, int lwsgpbvhcv, string rjjndvymeei);
	double oopnvtrqtjbrsjtws(int skhqgpigzyi, string zqwpeqesnhurfy, string kbqpvw, int wpzknlp, bool pmibmiohpi, int yuvtxtivbayty, int xxllacdsdfek);
	double drakdmqssuozxbrz(string ggtqburhdeozz, double ypdznq);
	void ppexrrngclspdrlikgdti(bool oywdgktcakp, bool ldfcvalur, double bewmclcqdtp);
	void huzroprkhkjxsaf(string wieiyufp, int paczgaq, bool cjhha, double tbcsredfh, double unpewcmbrch, int xlvhieisejv, int wndjtd, bool esoiovfnpx);
	int dsjmmxshcgdzcaurcn(string wkfgsavdxqkmorq, double kqntvwif, int nulbd, string valnsit, double amczhdlsz);
	double einvpbuwxklsnfclggmflfb(int ojcwrfqa, double aftgizqvkzjgvop);
	bool zzkksvatopxdj();
	double orvylwjdbumlpon(double pardzorsuq);
	void ydotxeydmralxbggfzr(bool vidkp, bool ygyriltywe, int coptdfamprs, double hptvjbyeijit, double keteuzsdxsoejxt, int yctkynkhyfvnpw, string zerokydny, bool fwfldqyn, bool jnyhxyflhewd, bool nyviy);

protected:
	double zbmgwukryavqzn;
	bool omxhkpawpivdck;
	string yndqkqnumlfvs;
	double qhprtpvydlrf;
	string dpktfo;

	double forwzuruvtmnqiihnjgtcnf(double xnjdkdjp, bool lwjzxejvadeki, bool xznaddoicccuuv, int wokcrbrgkbh, int znqtafp, int wibtrz, double uwaui, double eownf, double ylhivieevib);
	double ilmskjjjggur(int bmdxylkvuh, bool hnvnefoxcq, string trqvqbx, string mzpzmsxezfc, double tdvusseortsd, string zseaa, bool qqchxeejlmq, double yhassasnyaz);
	string ngtpgjajdlor(double nfdcivzbbweybp);
	string psgboyjygmmtooxp(string ceeakc, string imqfsal, string isftjqdgic, string ecwkjeketgod, double gnris, string otwtdtihjx);
	bool tbhxfhvwjmkuoxuerkfhc(bool kpazhgu, int mahonnulhykharf, bool otaxmxrfpuntohz, string qnmspz, string pzwqlmvqxyfywfd);
	string xosnrxmwncgfsz(string qdbbaxkpr);
	bool aiorsclkypbpguhow(bool nvtiwxenzcnhv, string nmbislx, double ykbsoznkxdrwwfq, double occddfhtzzcbtwx, bool eqnyghbr, string ofnanoaadtvdj);
	double crwkgrxjgeaqxkjeghbapidy(double hyhtxqr, string wypnrahp, double yweztmrcmczrkb, double ygzubebnnx, bool ipvlzrtaxv, int kugdtpvjmgo, double ujsjwjvws, string qcfbme);

private:
	string qrgjydqdlt;
	int dtiftqytmdnyvym;
	string frbujnsepgoh;
	bool eanlacf;
	double mohar;

	bool xjljyaearipcstfeyuovneu(int mhofpvgl, bool hvnpding, string orqiqnjw, int hysesj, string qfnadqxvgxe, double rapirwkypo, bool juphgedw);
	void bixuudbivylijyeih(double hdfqnwjrlkv, string deubrcixchhluj, double nrphclqmzc);
	void snfyarbkenanmietukenwwl(string vuurvfn, string ryvmwckp, double wykrgy, bool ejrflvqb);
	bool wyyyfwsuilsvcysmatjts(bool orjybl, string lvxhdvtdmnyjv, double cekthxlmhxpjcnh, int eincyllsxabwv);
	double lepwosfxqbg(bool sogvq, string dbkjwgebo, string ijcvukgro, string xlwkpbmh, int qxtslbmdfqrnbbd, double rjluw, bool odfvh, double utdthrpawydyk, int yamci);
	int oeykgnwsgzwvk(int gcmtgwcatggzlrb, string pebsa, double vtrefnkfb, double ynxhcwm, string oknwuql, string ijwmqx, string ncrwxsphvhltse, double clonzqgazr, bool avfqlxvhhgirqmp, bool djpnngr);
	double lybzaqcnxvirvob(bool ttana, double lnmvwgvm, int vpdlrawuoecutfe, int kkwhjvz, bool teaysx, int fvfbmroafzl, bool oowxscrivu);
	void lqnmzsvrqwu();
	int drwsiqfvexhqkveayuh(bool arxjechej, string vswdzttaqb, double epfcizwzsw, double jefmhiosynmnpou, double itxrhi);

};


bool kixegtp::xjljyaearipcstfeyuovneu(int mhofpvgl, bool hvnpding, string orqiqnjw, int hysesj, string qfnadqxvgxe, double rapirwkypo, bool juphgedw) {
	double gnzeatmu = 18881;
	bool flbpyudxdkrpnhu = false;
	return false;
}

void kixegtp::bixuudbivylijyeih(double hdfqnwjrlkv, string deubrcixchhluj, double nrphclqmzc) {

}

void kixegtp::snfyarbkenanmietukenwwl(string vuurvfn, string ryvmwckp, double wykrgy, bool ejrflvqb) {
	int hiqrct = 4477;
	double ktnuveaaanxbqu = 16174;
	bool vysncucx = false;
	int jjxux = 2580;
	double strxwjutmsluqv = 27882;
	string vazjurhlyy = "bbdomjhjrqlrivutvujpuhvdnbamulqbxul";
	int fqmxuncizrwhaeb = 3587;
	if (4477 != 4477) {
		int hnoffh;
		for (hnoffh = 93; hnoffh > 0; hnoffh--) {
			continue;
		}
	}
	if (string("bbdomjhjrqlrivutvujpuhvdnbamulqbxul") != string("bbdomjhjrqlrivutvujpuhvdnbamulqbxul")) {
		int klhs;
		for (klhs = 10; klhs > 0; klhs--) {
			continue;
		}
	}

}

bool kixegtp::wyyyfwsuilsvcysmatjts(bool orjybl, string lvxhdvtdmnyjv, double cekthxlmhxpjcnh, int eincyllsxabwv) {
	bool oqaozodvk = false;
	int hqnxtnoy = 1590;
	bool gevrkeca = false;
	int xejsfj = 2427;
	bool cbkcsr = false;
	bool yltzpfwd = false;
	double ttyjzdaozygesr = 59896;
	int wuirklqjpbrufxw = 7751;
	int yppigxgoucbxik = 1112;
	string mdoaui = "aijaqngvscjnkklmyxxtzqrmrxzjlngcuwfmnunylhjlzxtejmeckrcpmnbkjsditsvjbmpq";
	if (false == false) {
		int ph;
		for (ph = 70; ph > 0; ph--) {
			continue;
		}
	}
	if (false == false) {
		int uos;
		for (uos = 64; uos > 0; uos--) {
			continue;
		}
	}
	if (false != false) {
		int kw;
		for (kw = 56; kw > 0; kw--) {
			continue;
		}
	}
	if (1590 != 1590) {
		int sh;
		for (sh = 42; sh > 0; sh--) {
			continue;
		}
	}
	if (2427 != 2427) {
		int xkbokqo;
		for (xkbokqo = 11; xkbokqo > 0; xkbokqo--) {
			continue;
		}
	}
	return true;
}

double kixegtp::lepwosfxqbg(bool sogvq, string dbkjwgebo, string ijcvukgro, string xlwkpbmh, int qxtslbmdfqrnbbd, double rjluw, bool odfvh, double utdthrpawydyk, int yamci) {
	bool maoczi = false;
	double htqal = 1785;
	if (false == false) {
		int jpdpabc;
		for (jpdpabc = 16; jpdpabc > 0; jpdpabc--) {
			continue;
		}
	}
	if (false == false) {
		int ockguakx;
		for (ockguakx = 94; ockguakx > 0; ockguakx--) {
			continue;
		}
	}
	if (false == false) {
		int tq;
		for (tq = 15; tq > 0; tq--) {
			continue;
		}
	}
	if (1785 != 1785) {
		int wjaqcctkgs;
		for (wjaqcctkgs = 28; wjaqcctkgs > 0; wjaqcctkgs--) {
			continue;
		}
	}
	return 3562;
}

int kixegtp::oeykgnwsgzwvk(int gcmtgwcatggzlrb, string pebsa, double vtrefnkfb, double ynxhcwm, string oknwuql, string ijwmqx, string ncrwxsphvhltse, double clonzqgazr, bool avfqlxvhhgirqmp, bool djpnngr) {
	double xpwappvr = 22225;
	string ygqnslxxrqg = "kkyvvrccqqnimyfucxtvdagosdaldsjoejyassnhqaopfyussfamjwukeklkymhpacibmgnnnehpucmckaxwshhnhwqtpkfezu";
	double qqpzuphkvfjqeg = 8379;
	string dsjlttpwu = "jhozjrjcrspapxwvdyhkbnsjfj";
	bool sdpfb = false;
	string ropspj = "pcqeilqviihmrqlgzsbddrcbfbbatxwlrkkgrrhfixriskangkmcwhhzifgcmtfrifzxmbqecptapuq";
	string cufvmrwko = "iclxpspobqjcljkjsjktagxdzvyzsrqxvtaxexysoowotvycyqqpz";
	int hqpowiakpmdyve = 1452;
	string fxgwofze = "tuahyirlozjhkwgzblfzmznjesqbglkwsqyjuetbcbrogknnaslzkvdxfkormjnjupmtoxmzhthnnwqubkacrgyuwo";
	bool lqxhftrm = true;
	if (string("tuahyirlozjhkwgzblfzmznjesqbglkwsqyjuetbcbrogknnaslzkvdxfkormjnjupmtoxmzhthnnwqubkacrgyuwo") == string("tuahyirlozjhkwgzblfzmznjesqbglkwsqyjuetbcbrogknnaslzkvdxfkormjnjupmtoxmzhthnnwqubkacrgyuwo")) {
		int smrqjswpqj;
		for (smrqjswpqj = 14; smrqjswpqj > 0; smrqjswpqj--) {
			continue;
		}
	}
	if (8379 != 8379) {
		int mkowahszy;
		for (mkowahszy = 97; mkowahszy > 0; mkowahszy--) {
			continue;
		}
	}
	if (22225 != 22225) {
		int yjogvrvhe;
		for (yjogvrvhe = 50; yjogvrvhe > 0; yjogvrvhe--) {
			continue;
		}
	}
	return 22068;
}

double kixegtp::lybzaqcnxvirvob(bool ttana, double lnmvwgvm, int vpdlrawuoecutfe, int kkwhjvz, bool teaysx, int fvfbmroafzl, bool oowxscrivu) {
	int ospkiftc = 126;
	double gddobwqptxgrae = 23239;
	bool ngsdlegjkks = false;
	double alpzjjrgybw = 9417;
	double lxnbozx = 8957;
	if (23239 != 23239) {
		int irqtsqygxi;
		for (irqtsqygxi = 4; irqtsqygxi > 0; irqtsqygxi--) {
			continue;
		}
	}
	return 38858;
}

void kixegtp::lqnmzsvrqwu() {
	double iufvpocecplabu = 45767;
	int gbqmustuwgn = 2363;
	int hsliunlt = 1610;
	double jcjyuyh = 56610;
	double gyhmagmztsb = 59909;
	bool zmmms = true;
	string cxjdzj = "mnfexanlrzwsnmnzwpbvywtirzpsohwmghlzkzfzw";
	double eaqpvyxmu = 1251;
	if (1251 != 1251) {
		int ub;
		for (ub = 25; ub > 0; ub--) {
			continue;
		}
	}
	if (true != true) {
		int dr;
		for (dr = 43; dr > 0; dr--) {
			continue;
		}
	}
	if (45767 != 45767) {
		int qyxrafb;
		for (qyxrafb = 26; qyxrafb > 0; qyxrafb--) {
			continue;
		}
	}
	if (2363 == 2363) {
		int azkr;
		for (azkr = 53; azkr > 0; azkr--) {
			continue;
		}
	}

}

int kixegtp::drwsiqfvexhqkveayuh(bool arxjechej, string vswdzttaqb, double epfcizwzsw, double jefmhiosynmnpou, double itxrhi) {
	bool pdegjezip = true;
	string ipzqpzfvkfiei = "iwguplquqqqtogcvsjjqko";
	bool ixgxyellzldsc = true;
	double qpzlpwx = 5513;
	string gdvpuyf = "cnbisxqwnxlmogifincewnzwyjcryhbfqdfkxvlfzxkqh";
	double xxmdkr = 3153;
	return 74112;
}

double kixegtp::forwzuruvtmnqiihnjgtcnf(double xnjdkdjp, bool lwjzxejvadeki, bool xznaddoicccuuv, int wokcrbrgkbh, int znqtafp, int wibtrz, double uwaui, double eownf, double ylhivieevib) {
	bool wdigjexkolobdh = false;
	string fuyeuhfg = "hzfabffoevmfqoh";
	int xupcgcatmbjq = 3166;
	string gfnwygmvs = "pzhebafatquzgsmwwtuycbixojjacyixnggkhvxutotghgwqkhsfgxrjmirlh";
	bool aetsml = true;
	if (3166 != 3166) {
		int luwdsf;
		for (luwdsf = 40; luwdsf > 0; luwdsf--) {
			continue;
		}
	}
	return 9925;
}

double kixegtp::ilmskjjjggur(int bmdxylkvuh, bool hnvnefoxcq, string trqvqbx, string mzpzmsxezfc, double tdvusseortsd, string zseaa, bool qqchxeejlmq, double yhassasnyaz) {
	bool aumpusfrlukfdup = false;
	string tnjycwzbhsxrs = "kfyihgceoiwqiakyjyljqiabjeagxtnxkgnhgnkcmlipaxdvhisaklyieami";
	if (false == false) {
		int gpgum;
		for (gpgum = 89; gpgum > 0; gpgum--) {
			continue;
		}
	}
	if (false == false) {
		int enzicjeih;
		for (enzicjeih = 4; enzicjeih > 0; enzicjeih--) {
			continue;
		}
	}
	if (string("kfyihgceoiwqiakyjyljqiabjeagxtnxkgnhgnkcmlipaxdvhisaklyieami") == string("kfyihgceoiwqiakyjyljqiabjeagxtnxkgnhgnkcmlipaxdvhisaklyieami")) {
		int qp;
		for (qp = 45; qp > 0; qp--) {
			continue;
		}
	}
	return 77194;
}

string kixegtp::ngtpgjajdlor(double nfdcivzbbweybp) {
	int eavqffowxqxye = 2051;
	double cbbawmvzvjb = 18528;
	if (18528 == 18528) {
		int cji;
		for (cji = 58; cji > 0; cji--) {
			continue;
		}
	}
	if (18528 != 18528) {
		int dlfilj;
		for (dlfilj = 47; dlfilj > 0; dlfilj--) {
			continue;
		}
	}
	if (18528 != 18528) {
		int norq;
		for (norq = 35; norq > 0; norq--) {
			continue;
		}
	}
	return string("qcut");
}

string kixegtp::psgboyjygmmtooxp(string ceeakc, string imqfsal, string isftjqdgic, string ecwkjeketgod, double gnris, string otwtdtihjx) {
	int fcflcejz = 1203;
	string ymautnxhsmr = "vwombnjujsdduek";
	if (1203 == 1203) {
		int ib;
		for (ib = 26; ib > 0; ib--) {
			continue;
		}
	}
	if (1203 != 1203) {
		int veyo;
		for (veyo = 17; veyo > 0; veyo--) {
			continue;
		}
	}
	if (1203 == 1203) {
		int fde;
		for (fde = 54; fde > 0; fde--) {
			continue;
		}
	}
	if (1203 == 1203) {
		int dcl;
		for (dcl = 27; dcl > 0; dcl--) {
			continue;
		}
	}
	return string("rgio");
}

bool kixegtp::tbhxfhvwjmkuoxuerkfhc(bool kpazhgu, int mahonnulhykharf, bool otaxmxrfpuntohz, string qnmspz, string pzwqlmvqxyfywfd) {
	int wdlcniirzfz = 8402;
	if (8402 != 8402) {
		int xvri;
		for (xvri = 40; xvri > 0; xvri--) {
			continue;
		}
	}
	return true;
}

string kixegtp::xosnrxmwncgfsz(string qdbbaxkpr) {
	bool lnjknxefzr = true;
	double xefmzdijnxhan = 55607;
	int thfel = 4503;
	bool cpgemrphea = true;
	int yozfpxpovfahraz = 3137;
	if (55607 != 55607) {
		int lmneyvgx;
		for (lmneyvgx = 46; lmneyvgx > 0; lmneyvgx--) {
			continue;
		}
	}
	return string("bm");
}

bool kixegtp::aiorsclkypbpguhow(bool nvtiwxenzcnhv, string nmbislx, double ykbsoznkxdrwwfq, double occddfhtzzcbtwx, bool eqnyghbr, string ofnanoaadtvdj) {
	int anjkic = 1987;
	string shxhacvyq = "hmoiswqbmvqxokcdcifdsedstwkyafmptanrkzmwgrcnvaxlzsydcph";
	int etphuhj = 4254;
	double zubgbmdalt = 17398;
	double lpsfk = 38330;
	bool qrslqftbp = false;
	bool ildftpkc = false;
	double bimhabz = 4168;
	int wqbrn = 1675;
	if (false == false) {
		int leuxoejc;
		for (leuxoejc = 30; leuxoejc > 0; leuxoejc--) {
			continue;
		}
	}
	if (false == false) {
		int wjdfeyoh;
		for (wjdfeyoh = 67; wjdfeyoh > 0; wjdfeyoh--) {
			continue;
		}
	}
	if (1675 == 1675) {
		int mengz;
		for (mengz = 19; mengz > 0; mengz--) {
			continue;
		}
	}
	return true;
}

double kixegtp::crwkgrxjgeaqxkjeghbapidy(double hyhtxqr, string wypnrahp, double yweztmrcmczrkb, double ygzubebnnx, bool ipvlzrtaxv, int kugdtpvjmgo, double ujsjwjvws, string qcfbme) {
	string ftpadbnebvl = "nuzhlwyolvmrkjhhoedxxzuvmjgexbitijjeizzkwkggskp";
	string bohhlyfsbriof = "gwchzjhuwxxukxqywiwqpcfwphtluwtzgbywhl";
	int fusbjjxsb = 2572;
	double yzsjracngjlar = 12157;
	bool dlggtcuekkgb = false;
	bool uemkjyoonm = false;
	bool ieismxnbahy = true;
	double yihahzp = 46254;
	bool nfhkjnpzmnwctgx = true;
	string qtapqcdnqre = "uuroxxfsuzgnutzxdpjkrvjvmgqplavmuzsrqwvvnzadlqvwgogwfsrruppcjjbntfnzsufigfixuheqfpzkrrbt";
	if (true != true) {
		int wlh;
		for (wlh = 91; wlh > 0; wlh--) {
			continue;
		}
	}
	if (string("uuroxxfsuzgnutzxdpjkrvjvmgqplavmuzsrqwvvnzadlqvwgogwfsrruppcjjbntfnzsufigfixuheqfpzkrrbt") == string("uuroxxfsuzgnutzxdpjkrvjvmgqplavmuzsrqwvvnzadlqvwgogwfsrruppcjjbntfnzsufigfixuheqfpzkrrbt")) {
		int ae;
		for (ae = 65; ae > 0; ae--) {
			continue;
		}
	}
	return 34188;
}

int kixegtp::mgeywrknaozrk(int dscrgbwstwrlzx, string vdoacbp, int atrkeg, bool juhrejg, bool hiufdsixac, int dptnmncy, int lwsgpbvhcv, string rjjndvymeei) {
	string upjklxmtilmfnu = "tdzvkbwcybfgdyxjooevrxzikxlojmrafrdkfmiezu";
	if (string("tdzvkbwcybfgdyxjooevrxzikxlojmrafrdkfmiezu") != string("tdzvkbwcybfgdyxjooevrxzikxlojmrafrdkfmiezu")) {
		int ybsqcfebo;
		for (ybsqcfebo = 58; ybsqcfebo > 0; ybsqcfebo--) {
			continue;
		}
	}
	if (string("tdzvkbwcybfgdyxjooevrxzikxlojmrafrdkfmiezu") != string("tdzvkbwcybfgdyxjooevrxzikxlojmrafrdkfmiezu")) {
		int fbdi;
		for (fbdi = 30; fbdi > 0; fbdi--) {
			continue;
		}
	}
	if (string("tdzvkbwcybfgdyxjooevrxzikxlojmrafrdkfmiezu") != string("tdzvkbwcybfgdyxjooevrxzikxlojmrafrdkfmiezu")) {
		int khwoiczg;
		for (khwoiczg = 90; khwoiczg > 0; khwoiczg--) {
			continue;
		}
	}
	return 64778;
}

double kixegtp::oopnvtrqtjbrsjtws(int skhqgpigzyi, string zqwpeqesnhurfy, string kbqpvw, int wpzknlp, bool pmibmiohpi, int yuvtxtivbayty, int xxllacdsdfek) {
	string dtxayvuzyjp = "tezmexraictlhakenh";
	bool uxtwnvb = false;
	if (string("tezmexraictlhakenh") == string("tezmexraictlhakenh")) {
		int piza;
		for (piza = 23; piza > 0; piza--) {
			continue;
		}
	}
	if (string("tezmexraictlhakenh") == string("tezmexraictlhakenh")) {
		int qqlrmi;
		for (qqlrmi = 78; qqlrmi > 0; qqlrmi--) {
			continue;
		}
	}
	if (false != false) {
		int oka;
		for (oka = 30; oka > 0; oka--) {
			continue;
		}
	}
	if (string("tezmexraictlhakenh") == string("tezmexraictlhakenh")) {
		int iakchrmx;
		for (iakchrmx = 74; iakchrmx > 0; iakchrmx--) {
			continue;
		}
	}
	if (string("tezmexraictlhakenh") == string("tezmexraictlhakenh")) {
		int zm;
		for (zm = 36; zm > 0; zm--) {
			continue;
		}
	}
	return 84074;
}

double kixegtp::drakdmqssuozxbrz(string ggtqburhdeozz, double ypdznq) {
	string qrpshqutf = "fychxqjnxuimzilnu";
	int hemhkhdfkg = 1272;
	string vvbfrxioqjk = "tfetwnvsgynpnemsbeyfchfdqmgwdltrhijoyjtsrnjrdygvztzrzoydetyioiuuigpadevjogkdmpbzgijafdpl";
	if (1272 == 1272) {
		int ck;
		for (ck = 56; ck > 0; ck--) {
			continue;
		}
	}
	if (string("tfetwnvsgynpnemsbeyfchfdqmgwdltrhijoyjtsrnjrdygvztzrzoydetyioiuuigpadevjogkdmpbzgijafdpl") == string("tfetwnvsgynpnemsbeyfchfdqmgwdltrhijoyjtsrnjrdygvztzrzoydetyioiuuigpadevjogkdmpbzgijafdpl")) {
		int ofsimqu;
		for (ofsimqu = 40; ofsimqu > 0; ofsimqu--) {
			continue;
		}
	}
	return 39920;
}

void kixegtp::ppexrrngclspdrlikgdti(bool oywdgktcakp, bool ldfcvalur, double bewmclcqdtp) {
	bool ervdscfcjyhjcjt = true;
	string ajrnxkzxq = "rxyricsxykyiflispu";
	bool auzawk = true;

}

void kixegtp::huzroprkhkjxsaf(string wieiyufp, int paczgaq, bool cjhha, double tbcsredfh, double unpewcmbrch, int xlvhieisejv, int wndjtd, bool esoiovfnpx) {

}

int kixegtp::dsjmmxshcgdzcaurcn(string wkfgsavdxqkmorq, double kqntvwif, int nulbd, string valnsit, double amczhdlsz) {
	double diwxx = 9223;
	int wiuxrdbcmdepjwj = 6002;
	double nwyizeeqibyhzg = 46094;
	double grnbnhauukdmglo = 4237;
	bool aumvoyiq = false;
	bool rwogicngv = true;
	if (6002 == 6002) {
		int yilpu;
		for (yilpu = 32; yilpu > 0; yilpu--) {
			continue;
		}
	}
	if (46094 == 46094) {
		int ppuxcuyi;
		for (ppuxcuyi = 74; ppuxcuyi > 0; ppuxcuyi--) {
			continue;
		}
	}
	return 87923;
}

double kixegtp::einvpbuwxklsnfclggmflfb(int ojcwrfqa, double aftgizqvkzjgvop) {
	double qzexvc = 20279;
	string drhjeuzie = "fidfzfefppnktpjgakojdlvmmxbzynshurdfronoclipjnocgdbmeginzjtjjykuyefjacfqxpwhit";
	int tlkveossafd = 7;
	string ooswhv = "";
	string mymoitpfhjjhur = "dqsiie";
	int hxevtjlqjat = 8628;
	int jrzrpdif = 268;
	if (string("fidfzfefppnktpjgakojdlvmmxbzynshurdfronoclipjnocgdbmeginzjtjjykuyefjacfqxpwhit") == string("fidfzfefppnktpjgakojdlvmmxbzynshurdfronoclipjnocgdbmeginzjtjjykuyefjacfqxpwhit")) {
		int ectbose;
		for (ectbose = 13; ectbose > 0; ectbose--) {
			continue;
		}
	}
	return 72910;
}

bool kixegtp::zzkksvatopxdj() {
	int kbvsqhrvtbunk = 1804;
	bool zmkidhvzng = false;
	string tsfipsvas = "xzvygahkeyfmlgmptnpafueyrhstcboxbijjigjhirmpzahvutwykpdlhfbodkflgcrtgnenudvrbimfystczbojyg";
	int gdeuasithmcwkqg = 725;
	string tavdh = "xxnezemmirvlcldq";
	int ykxpsp = 4003;
	if (false == false) {
		int bdpiaqvc;
		for (bdpiaqvc = 81; bdpiaqvc > 0; bdpiaqvc--) {
			continue;
		}
	}
	if (string("xxnezemmirvlcldq") != string("xxnezemmirvlcldq")) {
		int jjpkuz;
		for (jjpkuz = 32; jjpkuz > 0; jjpkuz--) {
			continue;
		}
	}
	if (string("xxnezemmirvlcldq") != string("xxnezemmirvlcldq")) {
		int htgaz;
		for (htgaz = 29; htgaz > 0; htgaz--) {
			continue;
		}
	}
	return true;
}

double kixegtp::orvylwjdbumlpon(double pardzorsuq) {
	int rsjfotpmlvjh = 760;
	double rhqiixosmbo = 30573;
	double bmddsro = 16253;
	string sqmchvtndtgmj = "phuuagipnqpbrthadawqktwyuqybmutdsqkcyyfrxfdmbuqqeqqihlddducurmjgysduoybtvfqmkxounlaitsaeeubmshy";
	string jstaxs = "dnhuuim";
	double twrpfpo = 69807;
	bool fwswrh = false;
	if (16253 == 16253) {
		int wbrduqtxr;
		for (wbrduqtxr = 18; wbrduqtxr > 0; wbrduqtxr--) {
			continue;
		}
	}
	if (760 == 760) {
		int ym;
		for (ym = 46; ym > 0; ym--) {
			continue;
		}
	}
	if (string("dnhuuim") != string("dnhuuim")) {
		int kjqzb;
		for (kjqzb = 25; kjqzb > 0; kjqzb--) {
			continue;
		}
	}
	if (string("phuuagipnqpbrthadawqktwyuqybmutdsqkcyyfrxfdmbuqqeqqihlddducurmjgysduoybtvfqmkxounlaitsaeeubmshy") == string("phuuagipnqpbrthadawqktwyuqybmutdsqkcyyfrxfdmbuqqeqqihlddducurmjgysduoybtvfqmkxounlaitsaeeubmshy")) {
		int lg;
		for (lg = 54; lg > 0; lg--) {
			continue;
		}
	}
	return 70863;
}

void kixegtp::ydotxeydmralxbggfzr(bool vidkp, bool ygyriltywe, int coptdfamprs, double hptvjbyeijit, double keteuzsdxsoejxt, int yctkynkhyfvnpw, string zerokydny, bool fwfldqyn, bool jnyhxyflhewd, bool nyviy) {
	bool vrfcfnd = false;
	double yylofqthlsg = 52535;
	int omoixkmvtmbq = 2347;
	string jeenyo = "ddwcpssrrmemykvbtlenkbzlpwphuohnfuzaqcopzwbadztrgbyw";
	string clrjprpbdoo = "szgtpjqflvqapyvevjxewyphvyzqzmzuwbyappyldqrjzoatdfhpgzlukkjjfsihvxaviasovvunijhrdog";
	double yvtkpos = 3368;
	int hefah = 2269;
	double bhsnixnbhl = 782;
	int yvuabmgjzukxo = 1721;
	double fulcpebnj = 13265;
	if (782 == 782) {
		int vmlwv;
		for (vmlwv = 10; vmlwv > 0; vmlwv--) {
			continue;
		}
	}
	if (52535 == 52535) {
		int nnzcu;
		for (nnzcu = 89; nnzcu > 0; nnzcu--) {
			continue;
		}
	}
	if (string("ddwcpssrrmemykvbtlenkbzlpwphuohnfuzaqcopzwbadztrgbyw") != string("ddwcpssrrmemykvbtlenkbzlpwphuohnfuzaqcopzwbadztrgbyw")) {
		int dplnpfi;
		for (dplnpfi = 40; dplnpfi > 0; dplnpfi--) {
			continue;
		}
	}

}

kixegtp::kixegtp() {
	this->mgeywrknaozrk(196, string("zvqoglzvghrgouqcgvnsltzykijhfclkqlnwgrmdcnqsviwleivefdhoynxzkbynqxewbyzhtgiba"), 1669, false, true, 550, 1297, string("bpvdcrnuudrhnkjdfkldlkryyoysaomgdhxdrrflexxalkuaantzseibnb"));
	this->oopnvtrqtjbrsjtws(1663, string("hgawhdvnzlvpiauhrxjtjfrenkgcgaadhapswghmsulcuamvvrtalzevczjdeiszryeafjmjoloolumzutfhfwop"), string("uvbhnwofuvbcnabkejneeruhraxzvsbgmmdcjyqmyyexuoopaacilpnongtolrldxsoh"), 1765, false, 4397, 5735);
	this->drakdmqssuozxbrz(string("vkbhlfs"), 9294);
	this->ppexrrngclspdrlikgdti(false, false, 13491);
	this->huzroprkhkjxsaf(string("jvrdtxjcjkpvsefxyc"), 1062, false, 35192, 26175, 3534, 165, true);
	this->dsjmmxshcgdzcaurcn(string("dltsbahcntbwdofdxrjdgirtnlirbqf"), 27914, 1227, string("zoxbqjkdbjxktsjvtciezehcauxpyugmedbgemjg"), 6433);
	this->einvpbuwxklsnfclggmflfb(410, 21865);
	this->zzkksvatopxdj();
	this->orvylwjdbumlpon(14541);
	this->ydotxeydmralxbggfzr(false, false, 2427, 4828, 46344, 2395, string("obqrrjxxclvslwbszpdwilyzkjlwaognzlzgxgndfuchxmvjayvpttwznzguiiwfi"), false, true, false);
	this->forwzuruvtmnqiihnjgtcnf(37805, false, false, 2036, 936, 1294, 3675, 16693, 46979);
	this->ilmskjjjggur(26, false, string("mccgpwxicomayqnnxsgxdpjxtrozdzwxtetghegzocsrwxfjyqkgufeghomjpztvixojmapphtpkvejisihkihxmvlaaerxj"), string("wksqlsufloqtgswc"), 66948, string("qputmjfqcsgrzcsdyrzgwvdnpiu"), false, 19553);
	this->ngtpgjajdlor(67646);
	this->psgboyjygmmtooxp(string("msinvyfilfpfxfmcwemokyirwowozmsmpkwbqqkfkzfasqzjiwnycvnakxoy"), string("zfijnkgfamqyapzozcbjjkjuyztpzcqxxnqpcxoqupkndftyeeohsolghgylhhcziktyn"), string("mhwzhmibwfrxbtnqawoqfvijhfmohkmflhtsoituufkdagizjxtoazvpoqhumgyrynvsbicxmak"), string("kvtaidiirmeremqhy"), 45569, string("omiybtptmjkrzgqfefsmltbzrzkehvdbfrkzeqmpgrfpwmqsvveeomsjxufdfkf"));
	this->tbhxfhvwjmkuoxuerkfhc(true, 2020, true, string("vlmgntrhiqhhmrdyerbmvmus"), string("ewhydlfycarbmulmwfsqefncnshmpyktyfjdfiuwpsvdqdiwvuyvrrzrvvjsogecxwovueklaqnezustcjmcglda"));
	this->xosnrxmwncgfsz(string("pzwxayidpjsrqhgzihswtqgexmebhiqmdkyjjiawigulmbibcxbxqhlkgxaqztcrsylfndiomxexelbqahqrsevrfraos"));
	this->aiorsclkypbpguhow(true, string("jfkzmxhnyxiaxpczgjfgfcnlzgdfcsvupaqdvdkxaqloinmuwjgtljeulfjqemmn"), 61256, 7912, true, string("xuchpgtokmxzglvlflzwlpdohdxfdrjickpmdyvtvidwecnjurvhnlinjszmxsifdshqkwcsakowrtmwohvclqnhf"));
	this->crwkgrxjgeaqxkjeghbapidy(84051, string("zacttfoluqpzetwtdzcxhmzrujmomudghgxexkuluaeafahsjqfgizwrkjeficaklpr"), 9272, 13343, false, 2074, 35677, string("tnoeuyvxegivsuzziwvwulwovupxewbdzkdauihvkcjozzxbyvkzjddpanjofebprjskstfusk"));
	this->xjljyaearipcstfeyuovneu(1348, false, string("wjhjyrgszireggoipgkmhquhlz"), 5541, string("dibumdmgcozlmbgqatuxkwkqegjkiazzgofoangpwcxxtvmnalmlqxdmjnuyzdhniqmxemlfxvttfmbkyrxbrwksihw"), 10612, true);
	this->bixuudbivylijyeih(51699, string("ghkuhzzvyplzuyxjtdscatepshgkkzvupeveulbiysmabflpigtqjnbeqgkyofnydpioacfiobdovu"), 17501);
	this->snfyarbkenanmietukenwwl(string("pmiilgxpefttfxdfoojgvialadlwwbgdccqlejqvxnyjjfsbhgoahvpaeaitmktlhaegxcyiodqsdpmbhugbukiktfpjjakfqd"), string("tmhvpqzayjfuvmxtvuzzqlvqyfwuihpoacxuiexanmjekzovvdsxntebzldiijfbbhuajv"), 13072, true);
	this->wyyyfwsuilsvcysmatjts(false, string("kwfiycstsymvbhuyqf"), 48928, 7188);
	this->lepwosfxqbg(false, string("kwtarrchgreecyxgvdtxhpdjdrzcuvktowmkdwpuayutsuvwerpgcfuyaoytsqezdjrmnpbgbldipipflewtkufbqif"), string("hvdroonerwaowxueyoujjbyrnpkerqgrroflqlgsprdlfqpeezjyusttblnssdyiqqfqznqw"), string("awbnqsvmeoofopuxpbglsastxwlfqoenonqwcfnleuwxjbmaenhxycduaoshwjoadsrcdxffsaiwhiaacxbmzefsahkqn"), 2486, 64501, true, 13421, 2747);
	this->oeykgnwsgzwvk(324, string("vpvdqjiwdwwnfpeiozbknastztupplnvwakofwoereityfgwtlucvrnnvavrcskkipjaizgqpcjsiatqgdowrpxzqipax"), 33957, 19996, string("gy"), string("mglfwx"), string("ivkryxozepgijhmylxtwjipbhbiuiayyvmyodgeykxvbrsmv"), 26730, true, true);
	this->lybzaqcnxvirvob(true, 6313, 6377, 1754, true, 6048, false);
	this->lqnmzsvrqwu();
	this->drwsiqfvexhqkveayuh(false, string("yqumbiddvvsryfujujcobqxbmapjdxbzvdpkxewvfsxxjoaxqmclklinnovt"), 80676, 38269, 41033);
}

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class vjycyrh {
public:
	bool ievppblqzgl;
	vjycyrh();
	string zprybqowifjvkgfqatixlwxvt(bool gezstk, bool hxmnckvdkcozkk);
	string pbpjsmbwunuym();
	double pemewernxdkklrvrczf(bool xgndvzzzqumsnl, string tprcbcxwt, string iaohq);
	int tugphtgkuwof(double vkatojdeojgtad, double pswhmmkzrphsh, bool dishobdaa, string hyvrqnuje, int cgtuefbs, string tacnmsryzk, double xvhmtrtzmvlzdz, bool yddrcjnzbfnl, double zmlwmdnhmvdmwud, double mhmbrssnvrxmvwm);
	double hcbrwtakcubdrgh(double euswoboahj, int ttudhgmyogcry, bool bdbcolngll, int skxnxbzarow, string clpbpdo, bool ynqmlxvwz, double gefvybqmstqwobw, double evafhqyt, string upuzwsqeawki);
	bool hcbdxnvkbjcpkijfxka();
	bool ujxbomtedqobnvpwns(int welbbgedxn, int xisawt, double tthozfuorypqpz, bool gjcdzjyrx, int cyvtdy);
	bool aopjunlgrnlllmdnwkf(bool kpuumzba, string wnppqycosqlwb, string mlwsg, double irvpqmaq);
	int jwyymzgeqjosuqsmbfpygj(double ksjqtbqkp, string oamhfbcijjvpea);

protected:
	double vpalurxnfssm;
	double modcjdwkv;
	bool zivuffaafewlfal;
	int iqhpwakzrxxp;

	int oysfzsyijlwmisqlyux(string wkamqt, int thyatdbvgvozdq, bool gmbkipzkrjkbfur, double egnmalffhnscf, int zqfxtztgiweeq, string dvnvrovddxkbkx, double dfojrqyhf, string tflupbblwpvm, bool gsghbpo, double oygupeqehsf);
	string eweiggfbdosrveim(double nxvstnkdwlkpige, double fkrfhq, bool fqaqlnlmympg, string hfcsesznbfrbldv, double cqdrt, double bisssbzuv, int rkfajhhqvnrds, string yhnlhbydjfuot, int zrkmoiz);
	bool flxjeexutymlykee(double mpwveemeblm, int nrccstzbrtl, string nsxhpfwrhb, bool xzxzakqqou, bool mnndfav, int dgrvfuksxqc, double ihxrozxfaye, string flaplrq);
	bool ibejpiymjnechn(bool pwbox, string tcftvmoqnd, double elupfgxl, int exzakwvgkaxm);
	bool sgminlgvmdrixdposdhkyjx(string eimllaoha, int ygiyraj, int euqrofnlrcsz, double zaezwcgopscrb, string wfwtpkzuel, int etjats, bool zzzmeynce, bool jmlpotj, bool auhgkxbqggf, double hywqoa);
	void gcgjabvrnjxo(int tgamclsxctnw);
	void ackscqeulopoxbw(int umwbdxzcynmbeeg, int fzdippxvyk, double ydmedayjzrgy, int lkyadf);
	void mfrsrvsseonokdtnqchyb(bool rwqfixa, string udymflqwqwdmyee, bool ljuqjk, string vuxtihlfhrzgn, double lssnmgnrekjbh, double qknubvnk, bool luefn, int oimujqgply);

private:
	string iqxph;
	int ogrinbnzmr;
	bool zsoaokdpgfgmp;
	string oofdjaycsokkj;

	double fcdjrwzxxgizlyabtif(double quxmulbxtguoges, int ujhftiyjmrkvod);
	string tcdxedivbhszlqlzmfilkej(int ssjcuwifgcegsu, bool cjtigtfirytf, bool buoudqhhnpe, double yundevfebf, int hsnhptcnlvbfl, string rxzylmeyavcwo);
	void atuigpkboatafshuxuhp(string cfkwwsrjv, int snuvojhuoxvjay, string bixtmnlqftwrmxo, string eoyncdso, int yfdfb, string pbmwgndkuygjccw, int yqffe, bool jvpexttavgji);
	bool bejhdfixzsqysikewykfp(double tozehgxikyyt, string algeztlyzizrdk);
	double idyacyprearyo(int cmxzdwgyuu, bool iojtkioa, string wzkvqmjldnlkq, string faqmimijeh, string sbbbgbpzftd, string smfeiseedvwt);
	string tkzsiqcyoycyizfgtbovao(int jegqqkau, int hfskbnxksp, bool yqnrkcgw, string kcyovd, int hlopntfimn, double ywlixfxnfdexw, string lyyyyymnoumh, bool dsxfobwjwyozhjv, int rtdiam);
	string smqnhwbncdugvufymqwrqaad(int kkkjgitqnjn, bool xuoqbvpvacylo, bool igawlail, bool axzcoybicqgxdsr, string opsfb, string onttzzriupuasde, double lpnurtmzjoxu, bool mijxqbgiepfr, double eepkw);
	void fspvfxwgmpwnuadcsp(int ikisykpgw);
	bool trmrokugqixlujxrjfprcorh(string jmotg, int wculzpkr, int vthcqatkwpm, double ldecbdyevhghgcc, string ytofbyuidur, string qbppxdinf, int fiksjfi);
	double mnnkmrcufy(int zjbqc, bool zdzvtauqr, int jaihf, double ivhecrg, double xthsxnydd, int iddqlkaqaoz);

};


double vjycyrh::fcdjrwzxxgizlyabtif(double quxmulbxtguoges, int ujhftiyjmrkvod) {
	int shmcielep = 5221;
	if (5221 != 5221) {
		int ehb;
		for (ehb = 53; ehb > 0; ehb--) {
			continue;
		}
	}
	if (5221 == 5221) {
		int igdqku;
		for (igdqku = 21; igdqku > 0; igdqku--) {
			continue;
		}
	}
	if (5221 != 5221) {
		int nrhvbpga;
		for (nrhvbpga = 15; nrhvbpga > 0; nrhvbpga--) {
			continue;
		}
	}
	if (5221 == 5221) {
		int amprzf;
		for (amprzf = 19; amprzf > 0; amprzf--) {
			continue;
		}
	}
	if (5221 == 5221) {
		int cbs;
		for (cbs = 95; cbs > 0; cbs--) {
			continue;
		}
	}
	return 23518;
}

string vjycyrh::tcdxedivbhszlqlzmfilkej(int ssjcuwifgcegsu, bool cjtigtfirytf, bool buoudqhhnpe, double yundevfebf, int hsnhptcnlvbfl, string rxzylmeyavcwo) {
	bool ohxihyfxfubeniw = false;
	bool zqwnnypgpy = false;
	string uazyxaz = "yhwukgnbfeqsuqzceizdjtcwntlotvi";
	string jofalfkxyfxgu = "r";
	int bwqcpd = 4561;
	string lrhrebutzaszru = "qfideakuinrogspqriutfzjktckvchhgtslvjpwwyexecclhktexesellveunhfuyedffghvcl";
	bool qscubataetenv = true;
	string sowkhvlbevkvn = "ihjtajqdqnycuznzvbhz";
	double dohiqsgwntahl = 30147;
	if (string("yhwukgnbfeqsuqzceizdjtcwntlotvi") != string("yhwukgnbfeqsuqzceizdjtcwntlotvi")) {
		int ujfwo;
		for (ujfwo = 93; ujfwo > 0; ujfwo--) {
			continue;
		}
	}
	if (4561 == 4561) {
		int sgbtdhpln;
		for (sgbtdhpln = 91; sgbtdhpln > 0; sgbtdhpln--) {
			continue;
		}
	}
	return string("uq");
}

void vjycyrh::atuigpkboatafshuxuhp(string cfkwwsrjv, int snuvojhuoxvjay, string bixtmnlqftwrmxo, string eoyncdso, int yfdfb, string pbmwgndkuygjccw, int yqffe, bool jvpexttavgji) {
	string kpsyogpm = "tlfycqcvvqcgmtguzbupmudmqickmpwpkxzxtyvlujobfyvsdyuoselkednfjhhtrxdab";
	double iusuzpumafmynih = 94002;
	int ezjaeujjkpjlza = 5964;
	bool yycolnqpj = false;
	double wioxpzt = 50985;
	string edyotjwvmfhe = "lqtyhemubamzudxvqkgxkhygnlqnropfgoqqwq";
	double dmlrmiaqiczptq = 9545;
	bool dtgicxwk = false;
	bool hutmnztslciaew = false;
	if (false != false) {
		int yzf;
		for (yzf = 9; yzf > 0; yzf--) {
			continue;
		}
	}

}

bool vjycyrh::bejhdfixzsqysikewykfp(double tozehgxikyyt, string algeztlyzizrdk) {
	return true;
}

double vjycyrh::idyacyprearyo(int cmxzdwgyuu, bool iojtkioa, string wzkvqmjldnlkq, string faqmimijeh, string sbbbgbpzftd, string smfeiseedvwt) {
	string dksztnvflriz = "ualdntkaaplpbhloaazpzuksaggqkcwwnbpfsothzcbyouokhsvflfcpjcve";
	bool reeibpjrhu = false;
	if (false == false) {
		int dwfhfxcz;
		for (dwfhfxcz = 19; dwfhfxcz > 0; dwfhfxcz--) {
			continue;
		}
	}
	if (string("ualdntkaaplpbhloaazpzuksaggqkcwwnbpfsothzcbyouokhsvflfcpjcve") != string("ualdntkaaplpbhloaazpzuksaggqkcwwnbpfsothzcbyouokhsvflfcpjcve")) {
		int bfymlqzv;
		for (bfymlqzv = 94; bfymlqzv > 0; bfymlqzv--) {
			continue;
		}
	}
	if (string("ualdntkaaplpbhloaazpzuksaggqkcwwnbpfsothzcbyouokhsvflfcpjcve") == string("ualdntkaaplpbhloaazpzuksaggqkcwwnbpfsothzcbyouokhsvflfcpjcve")) {
		int bay;
		for (bay = 2; bay > 0; bay--) {
			continue;
		}
	}
	return 82098;
}

string vjycyrh::tkzsiqcyoycyizfgtbovao(int jegqqkau, int hfskbnxksp, bool yqnrkcgw, string kcyovd, int hlopntfimn, double ywlixfxnfdexw, string lyyyyymnoumh, bool dsxfobwjwyozhjv, int rtdiam) {
	string imuuhpuatqukunw = "rxklftmudulneqskkrukpgadoxgohbsonxitrfqznjwjyupwlbbpuhxayuvinjpxuojkykmjhullswqri";
	int nettiaedlshza = 2151;
	bool dgziyeaipzakjt = true;
	int sopuudj = 4361;
	int uwhmjwn = 6433;
	int ilespelvgyyysoj = 1991;
	double onovfo = 7429;
	if (4361 == 4361) {
		int untzskbti;
		for (untzskbti = 86; untzskbti > 0; untzskbti--) {
			continue;
		}
	}
	if (true != true) {
		int uqjoyuzoil;
		for (uqjoyuzoil = 64; uqjoyuzoil > 0; uqjoyuzoil--) {
			continue;
		}
	}
	return string("kmbcqxtdyywnaajzswo");
}

string vjycyrh::smqnhwbncdugvufymqwrqaad(int kkkjgitqnjn, bool xuoqbvpvacylo, bool igawlail, bool axzcoybicqgxdsr, string opsfb, string onttzzriupuasde, double lpnurtmzjoxu, bool mijxqbgiepfr, double eepkw) {
	return string("hi");
}

void vjycyrh::fspvfxwgmpwnuadcsp(int ikisykpgw) {

}

bool vjycyrh::trmrokugqixlujxrjfprcorh(string jmotg, int wculzpkr, int vthcqatkwpm, double ldecbdyevhghgcc, string ytofbyuidur, string qbppxdinf, int fiksjfi) {
	bool toubinibvizj = true;
	double iqryxsqlwkwe = 43976;
	string inpyp = "mmancaqxmkxtnulxpiexyckytpnwaxjkgqsyzqyjuwdunlrlmfwbnjowbomrlveqkflywltukabinahnqpe";
	double npghufanzlbv = 51866;
	bool jrzgfslsnqpaxl = false;
	int juoypgcrkfduq = 2417;
	if (43976 != 43976) {
		int sy;
		for (sy = 61; sy > 0; sy--) {
			continue;
		}
	}
	if (43976 != 43976) {
		int lqrq;
		for (lqrq = 65; lqrq > 0; lqrq--) {
			continue;
		}
	}
	if (43976 == 43976) {
		int gjo;
		for (gjo = 69; gjo > 0; gjo--) {
			continue;
		}
	}
	if (51866 != 51866) {
		int yijrpizu;
		for (yijrpizu = 85; yijrpizu > 0; yijrpizu--) {
			continue;
		}
	}
	if (43976 == 43976) {
		int jbhev;
		for (jbhev = 61; jbhev > 0; jbhev--) {
			continue;
		}
	}
	return true;
}

double vjycyrh::mnnkmrcufy(int zjbqc, bool zdzvtauqr, int jaihf, double ivhecrg, double xthsxnydd, int iddqlkaqaoz) {
	int wdsqznbu = 4141;
	bool olmgwndw = false;
	double nabemg = 35896;
	double dpeakgyeaud = 15053;
	bool zlvgyzwsku = true;
	if (4141 == 4141) {
		int wcv;
		for (wcv = 75; wcv > 0; wcv--) {
			continue;
		}
	}
	if (35896 != 35896) {
		int wgiwvngmsl;
		for (wgiwvngmsl = 48; wgiwvngmsl > 0; wgiwvngmsl--) {
			continue;
		}
	}
	if (35896 == 35896) {
		int lxnzcpuumn;
		for (lxnzcpuumn = 4; lxnzcpuumn > 0; lxnzcpuumn--) {
			continue;
		}
	}
	if (15053 == 15053) {
		int traleifzx;
		for (traleifzx = 65; traleifzx > 0; traleifzx--) {
			continue;
		}
	}
	if (true == true) {
		int ylge;
		for (ylge = 68; ylge > 0; ylge--) {
			continue;
		}
	}
	return 6752;
}

int vjycyrh::oysfzsyijlwmisqlyux(string wkamqt, int thyatdbvgvozdq, bool gmbkipzkrjkbfur, double egnmalffhnscf, int zqfxtztgiweeq, string dvnvrovddxkbkx, double dfojrqyhf, string tflupbblwpvm, bool gsghbpo, double oygupeqehsf) {
	bool yiccqqtloqlk = false;
	bool cnlhtrklrptjig = false;
	bool akthdgtnypehhh = true;
	double nkvhivnnf = 20387;
	string obkwspujyiytrzu = "htgndsisdqnqlgc";
	string esijeipfhmcdfw = "plqrtqcgvpbcdierpxstnxgdvmncpbwzqdxixlnjadmoaumqzxkspaodfxtvzcodl";
	string tedhptkczfcqil = "jnqfgaksspeegjaixkqxijsvspyoarwtwxhjdtigfgrvmmctcljcnltegwxznrzbxjclsjddbkzszhkxlvlovdetjstykzz";
	if (string("jnqfgaksspeegjaixkqxijsvspyoarwtwxhjdtigfgrvmmctcljcnltegwxznrzbxjclsjddbkzszhkxlvlovdetjstykzz") == string("jnqfgaksspeegjaixkqxijsvspyoarwtwxhjdtigfgrvmmctcljcnltegwxznrzbxjclsjddbkzszhkxlvlovdetjstykzz")) {
		int ft;
		for (ft = 55; ft > 0; ft--) {
			continue;
		}
	}
	if (20387 == 20387) {
		int md;
		for (md = 79; md > 0; md--) {
			continue;
		}
	}
	return 39959;
}

string vjycyrh::eweiggfbdosrveim(double nxvstnkdwlkpige, double fkrfhq, bool fqaqlnlmympg, string hfcsesznbfrbldv, double cqdrt, double bisssbzuv, int rkfajhhqvnrds, string yhnlhbydjfuot, int zrkmoiz) {
	string ozgpgbhmqsvijz = "wqykdhgqiuyso";
	int pzjmhirmyimsuy = 2754;
	string frhzpcrgim = "ztswcnpgmtqscztzazhrvmsvlpgyxmkccmrbqltzkiguwbrsrynblmmtbecnmdercrfnxykuhezd";
	bool groygbwnxxpxy = true;
	string fwspnpyjjvhyhlt = "qbddjabatfopaqvrqxbanixnryhwdsczcbpbtwjhmlzjdisc";
	bool tqmsrngtn = false;
	string eziajjvxjjwso = "vezqcnpoo";
	bool yngnhxi = true;
	if (string("qbddjabatfopaqvrqxbanixnryhwdsczcbpbtwjhmlzjdisc") != string("qbddjabatfopaqvrqxbanixnryhwdsczcbpbtwjhmlzjdisc")) {
		int qiibp;
		for (qiibp = 30; qiibp > 0; qiibp--) {
			continue;
		}
	}
	if (false == false) {
		int rvebu;
		for (rvebu = 38; rvebu > 0; rvebu--) {
			continue;
		}
	}
	if (string("wqykdhgqiuyso") == string("wqykdhgqiuyso")) {
		int orssxleev;
		for (orssxleev = 66; orssxleev > 0; orssxleev--) {
			continue;
		}
	}
	if (true == true) {
		int vmo;
		for (vmo = 51; vmo > 0; vmo--) {
			continue;
		}
	}
	if (string("vezqcnpoo") == string("vezqcnpoo")) {
		int bmoiplh;
		for (bmoiplh = 17; bmoiplh > 0; bmoiplh--) {
			continue;
		}
	}
	return string("fapcuygyxdz");
}

bool vjycyrh::flxjeexutymlykee(double mpwveemeblm, int nrccstzbrtl, string nsxhpfwrhb, bool xzxzakqqou, bool mnndfav, int dgrvfuksxqc, double ihxrozxfaye, string flaplrq) {
	bool vukajbbhe = false;
	string idivjsznj = "ngnmy";
	int tqrapsatdphubfl = 707;
	int lehexbcqs = 3570;
	if (3570 == 3570) {
		int fwyrddanp;
		for (fwyrddanp = 89; fwyrddanp > 0; fwyrddanp--) {
			continue;
		}
	}
	if (false != false) {
		int mcpxjn;
		for (mcpxjn = 90; mcpxjn > 0; mcpxjn--) {
			continue;
		}
	}
	if (707 == 707) {
		int yyjprmsrp;
		for (yyjprmsrp = 69; yyjprmsrp > 0; yyjprmsrp--) {
			continue;
		}
	}
	return false;
}

bool vjycyrh::ibejpiymjnechn(bool pwbox, string tcftvmoqnd, double elupfgxl, int exzakwvgkaxm) {
	string tuwdzajvflksfk = "ejcqzcmppirxjplhdqijuxzenrgegnsbcqxbdqxhcfwhzwhwxrlyemofqtpabzjklwu";
	bool nwvwxmdjax = false;
	int tivhcksak = 949;
	string pozuzt = "lyfjpqldbngipagssrambswplsoqddhije";
	bool uuafwstip = true;
	double jbxydmx = 57740;
	bool brhrnmunltxn = true;
	if (string("lyfjpqldbngipagssrambswplsoqddhije") == string("lyfjpqldbngipagssrambswplsoqddhije")) {
		int bennwwxc;
		for (bennwwxc = 67; bennwwxc > 0; bennwwxc--) {
			continue;
		}
	}
	if (57740 == 57740) {
		int vilvdixqob;
		for (vilvdixqob = 68; vilvdixqob > 0; vilvdixqob--) {
			continue;
		}
	}
	return true;
}

bool vjycyrh::sgminlgvmdrixdposdhkyjx(string eimllaoha, int ygiyraj, int euqrofnlrcsz, double zaezwcgopscrb, string wfwtpkzuel, int etjats, bool zzzmeynce, bool jmlpotj, bool auhgkxbqggf, double hywqoa) {
	double pezrdi = 66615;
	bool icqdnspfyvca = true;
	if (true != true) {
		int pge;
		for (pge = 2; pge > 0; pge--) {
			continue;
		}
	}
	if (true != true) {
		int nrs;
		for (nrs = 96; nrs > 0; nrs--) {
			continue;
		}
	}
	if (true == true) {
		int ttfkxag;
		for (ttfkxag = 100; ttfkxag > 0; ttfkxag--) {
			continue;
		}
	}
	if (66615 == 66615) {
		int kkijpcgkf;
		for (kkijpcgkf = 40; kkijpcgkf > 0; kkijpcgkf--) {
			continue;
		}
	}
	return true;
}

void vjycyrh::gcgjabvrnjxo(int tgamclsxctnw) {
	bool hqeoaohgnjmht = true;
	double oyxuolbvqyvakv = 1681;
	double ixteaaglu = 10822;
	bool iljsuxs = true;
	if (true == true) {
		int yy;
		for (yy = 34; yy > 0; yy--) {
			continue;
		}
	}
	if (1681 == 1681) {
		int uwwlr;
		for (uwwlr = 17; uwwlr > 0; uwwlr--) {
			continue;
		}
	}

}

void vjycyrh::ackscqeulopoxbw(int umwbdxzcynmbeeg, int fzdippxvyk, double ydmedayjzrgy, int lkyadf) {
	double mejmznulijqtd = 12052;
	int mmtvbicxlsyfh = 1410;
	int qkvbccwjoh = 5411;
	double exiclpkk = 36332;
	double iranuw = 25544;
	string oocunozyicn = "xwjo";
	int tdzmdhlavnk = 334;
	if (1410 != 1410) {
		int bx;
		for (bx = 19; bx > 0; bx--) {
			continue;
		}
	}
	if (36332 == 36332) {
		int zivaeeh;
		for (zivaeeh = 89; zivaeeh > 0; zivaeeh--) {
			continue;
		}
	}
	if (334 != 334) {
		int gsqg;
		for (gsqg = 39; gsqg > 0; gsqg--) {
			continue;
		}
	}
	if (string("xwjo") != string("xwjo")) {
		int wtwijdar;
		for (wtwijdar = 13; wtwijdar > 0; wtwijdar--) {
			continue;
		}
	}
	if (25544 == 25544) {
		int ppgnhd;
		for (ppgnhd = 87; ppgnhd > 0; ppgnhd--) {
			continue;
		}
	}

}

void vjycyrh::mfrsrvsseonokdtnqchyb(bool rwqfixa, string udymflqwqwdmyee, bool ljuqjk, string vuxtihlfhrzgn, double lssnmgnrekjbh, double qknubvnk, bool luefn, int oimujqgply) {
	double qxktjrbv = 75473;
	string zitiwry = "patcxzcgjomizsdringrqkdqmxlftnfhbsodxthdkuklfeqbuswnydyiijiqfalpszruhydldxnvrswfgnfsgxpkfamfp";
	double ufozbpwsvc = 12060;
	string jcawsxpt = "voqsteehsfllpysflxhvpobrvobqbowqkypxunizvylhmqzurxvsnq";
	bool ikrgiyp = true;
	int ezpxn = 373;
	bool asyhfsez = true;
	double tvcjtds = 57582;
	int upmrddqq = 3041;
	if (57582 != 57582) {
		int jx;
		for (jx = 71; jx > 0; jx--) {
			continue;
		}
	}
	if (3041 == 3041) {
		int zl;
		for (zl = 54; zl > 0; zl--) {
			continue;
		}
	}

}

string vjycyrh::zprybqowifjvkgfqatixlwxvt(bool gezstk, bool hxmnckvdkcozkk) {
	bool yyesbq = true;
	double tftvhuwnuq = 23492;
	int ubmnleqlucd = 2470;
	double dtymrw = 42181;
	bool eixfag = false;
	int xcqdxbljwerhqr = 4258;
	if (4258 != 4258) {
		int qoqtoaqv;
		for (qoqtoaqv = 66; qoqtoaqv > 0; qoqtoaqv--) {
			continue;
		}
	}
	if (4258 != 4258) {
		int wethczfqt;
		for (wethczfqt = 61; wethczfqt > 0; wethczfqt--) {
			continue;
		}
	}
	if (42181 != 42181) {
		int djh;
		for (djh = 39; djh > 0; djh--) {
			continue;
		}
	}
	if (4258 != 4258) {
		int pjdq;
		for (pjdq = 5; pjdq > 0; pjdq--) {
			continue;
		}
	}
	return string("mwjjbafbnmtjtyzig");
}

string vjycyrh::pbpjsmbwunuym() {
	int tutlnha = 1341;
	string vlgel = "tgrz";
	string lvyahsbnyrmw = "euzijmmjpkbdvpghzerkzummjudffjvacanewfkbdszpjwqujoecszosnarxmuuyyqfjukaliqimawnauee";
	int bizmoww = 5561;
	int piqye = 1341;
	string hbwzxruglpeaax = "icsxhaddwgncuwbsdgkcebcmjytkrtsjnszqarpypemvjzbbwudkufglfehukrwlppudfayztplibsjxwegosxuskbrt";
	bool zgacpjswfauy = false;
	return string("vhb");
}

double vjycyrh::pemewernxdkklrvrczf(bool xgndvzzzqumsnl, string tprcbcxwt, string iaohq) {
	bool yxrfxtik = true;
	string ghzjjegsyrm = "xcpjsanugdrqistdbcqbiprdyeqjteguaktemforhdsxqplkoubquxtuupylarmmpaayqnjawrre";
	string pwqcmuyilursk = "knbkjlnibosyzpstkrkcef";
	int asexmai = 287;
	string qnedvqkmakzc = "xhwbzcirlqjjrzonwmgspngysaysupwovpkdphnik";
	int tomuoc = 5733;
	int kzeqjtphnv = 2702;
	int pzoldjedq = 2395;
	return 48849;
}

int vjycyrh::tugphtgkuwof(double vkatojdeojgtad, double pswhmmkzrphsh, bool dishobdaa, string hyvrqnuje, int cgtuefbs, string tacnmsryzk, double xvhmtrtzmvlzdz, bool yddrcjnzbfnl, double zmlwmdnhmvdmwud, double mhmbrssnvrxmvwm) {
	bool flwrwrgrcpxjnba = false;
	bool ktdvtmgjhzu = true;
	string ngqhszmqcst = "nvukyblybsshpqtyhqecunkdclymmowugsotbctggmeqzlhjbfdkqfgqykogvumckcmkrpjtffcsbxzuqvrdwscmowictmsvdqtt";
	double ofywgfedhfemipo = 10733;
	if (string("nvukyblybsshpqtyhqecunkdclymmowugsotbctggmeqzlhjbfdkqfgqykogvumckcmkrpjtffcsbxzuqvrdwscmowictmsvdqtt") != string("nvukyblybsshpqtyhqecunkdclymmowugsotbctggmeqzlhjbfdkqfgqykogvumckcmkrpjtffcsbxzuqvrdwscmowictmsvdqtt")) {
		int egjfpq;
		for (egjfpq = 22; egjfpq > 0; egjfpq--) {
			continue;
		}
	}
	if (true == true) {
		int qq;
		for (qq = 70; qq > 0; qq--) {
			continue;
		}
	}
	if (string("nvukyblybsshpqtyhqecunkdclymmowugsotbctggmeqzlhjbfdkqfgqykogvumckcmkrpjtffcsbxzuqvrdwscmowictmsvdqtt") != string("nvukyblybsshpqtyhqecunkdclymmowugsotbctggmeqzlhjbfdkqfgqykogvumckcmkrpjtffcsbxzuqvrdwscmowictmsvdqtt")) {
		int qahnnce;
		for (qahnnce = 20; qahnnce > 0; qahnnce--) {
			continue;
		}
	}
	if (false == false) {
		int czpopwkx;
		for (czpopwkx = 77; czpopwkx > 0; czpopwkx--) {
			continue;
		}
	}
	return 78299;
}

double vjycyrh::hcbrwtakcubdrgh(double euswoboahj, int ttudhgmyogcry, bool bdbcolngll, int skxnxbzarow, string clpbpdo, bool ynqmlxvwz, double gefvybqmstqwobw, double evafhqyt, string upuzwsqeawki) {
	return 98404;
}

bool vjycyrh::hcbdxnvkbjcpkijfxka() {
	double eqjmsqhkqbtil = 52703;
	int dlzcieb = 453;
	int fovjqrfcicjdml = 7406;
	bool rgcsuhqvphplxz = true;
	int mgupmyrarwexnt = 148;
	return false;
}

bool vjycyrh::ujxbomtedqobnvpwns(int welbbgedxn, int xisawt, double tthozfuorypqpz, bool gjcdzjyrx, int cyvtdy) {
	bool yxkvycvyytl = true;
	bool oiptbyyxirqcwep = true;
	string zsoberxfjpynz = "xxwefbucodpdhuyfzkjdjqsfmtkjdylypojhkqmkmktgzcxyiagapenblxuezxzfwfyxqwisvkyjmkodueo";
	int yvkvt = 4645;
	bool pypjscjrfxlmx = true;
	double oeymigzabf = 31991;
	int geirzth = 3374;
	int gskfulp = 3285;
	string xepyfen = "sxxgakbigdulrkzeqbkvjwoezlhkgiwxbtfinblfqkzovgffnerbpuvwxzgejt";
	int mijdqsdghjxmdoc = 897;
	if (4645 == 4645) {
		int qsedr;
		for (qsedr = 41; qsedr > 0; qsedr--) {
			continue;
		}
	}
	if (3285 != 3285) {
		int ygkud;
		for (ygkud = 97; ygkud > 0; ygkud--) {
			continue;
		}
	}
	if (3285 == 3285) {
		int znnjrjzqhf;
		for (znnjrjzqhf = 55; znnjrjzqhf > 0; znnjrjzqhf--) {
			continue;
		}
	}
	return true;
}

bool vjycyrh::aopjunlgrnlllmdnwkf(bool kpuumzba, string wnppqycosqlwb, string mlwsg, double irvpqmaq) {
	double cqmmpdvcufzhqb = 6813;
	bool fswuhrcihjf = false;
	double sctfpesmofbge = 17265;
	return true;
}

int vjycyrh::jwyymzgeqjosuqsmbfpygj(double ksjqtbqkp, string oamhfbcijjvpea) {
	double uoqtywjcbitblef = 33232;
	bool jrcbcfqbytricj = true;
	bool agdwsw = false;
	string vpvxydh = "kgwekpqktphhdfupjlvwozb";
	double jtjduohhqdcjmao = 57659;
	string wkipayrkeyokooo = "jquwamrsajtfprqnamrlpjcthnk";
	int jkqxfetzhub = 3344;
	int sgqrjaekitdhzyc = 6258;
	double acznj = 3421;
	if (57659 == 57659) {
		int lyg;
		for (lyg = 87; lyg > 0; lyg--) {
			continue;
		}
	}
	if (string("jquwamrsajtfprqnamrlpjcthnk") != string("jquwamrsajtfprqnamrlpjcthnk")) {
		int wzyr;
		for (wzyr = 30; wzyr > 0; wzyr--) {
			continue;
		}
	}
	if (3344 == 3344) {
		int pn;
		for (pn = 98; pn > 0; pn--) {
			continue;
		}
	}
	return 81131;
}

vjycyrh::vjycyrh() {
	this->zprybqowifjvkgfqatixlwxvt(false, false);
	this->pbpjsmbwunuym();
	this->pemewernxdkklrvrczf(false, string("gfrxljhcgzzvtxoukilvsgtxrfgilmosgccfkjgoceufvcwyxtixdkxvscdehibsuavakwxihzcbghjnocbpctoevxqpgukonu"), string("mmqiixmwwknxhqkgosqulndgvldgnwlzdjyhfscoj"));
	this->tugphtgkuwof(35847, 25144, false, string("tczdebeqmnptr"), 5098, string("zzjwviyeinluizqjxtpmvilzasjtmvueyayrcflpxuyrmirap"), 7278, true, 42743, 2116);
	this->hcbrwtakcubdrgh(12389, 763, false, 4280, string("mqrgoovszobejyzetklzictcafbmpnkbrlzdjxlohumkmgdfuw"), false, 21955, 56027, string("mxrbluultvtblyaofzvjbmkjmwooc"));
	this->hcbdxnvkbjcpkijfxka();
	this->ujxbomtedqobnvpwns(155, 963, 7656, false, 405);
	this->aopjunlgrnlllmdnwkf(true, string("ipamvaeyfxwophurekmhqjjvbfgpsswzztlajfxwnxvynlcutc"), string("pvkeyctdseoognpstektxywgxwpvzwpmso"), 382);
	this->jwyymzgeqjosuqsmbfpygj(18469, string("plucmwsmdofjgodyertrjwtzp"));
	this->oysfzsyijlwmisqlyux(string("etantojyhb"), 2098, false, 49838, 270, string("mmpcgaekzouojcannyxtsiixwaiikrojklopeueuhlhvqerwcrxnatwhcvgywmkqcqeupgihtciqaakqpjsnezxsbxb"), 7124, string("lrmuzhjqbfxtxepppduxwxpogdoaknrfnsywewuzkcbmmlqrzfcbomswnlgeoyudflwgeanlvjjwrqe"), true, 57799);
	this->eweiggfbdosrveim(28796, 90195, false, string("kvkskpwhwzanmwfvsdnpatejujzothhinqeusiicdcbextoywasqhchtohiklpzfuqjyoduvlqiirebrowlykeasbibw"), 24, 30976, 2025, string(""), 2840);
	this->flxjeexutymlykee(6852, 359, string("wuwhrnrefvsqczmrfvitwihxwrztmxikupvphkzbuldydvmsxrnjfmjcqj"), false, true, 5987, 9546, string("lrbuasffqngktwwnkuaamuzhrkmykeofgubzmszgclwuvhscixqjwbgpbwnetgwanpbeltsyxgeomglddngec"));
	this->ibejpiymjnechn(true, string("aiqdsljnpunejfzsreqdkbxsyaqbiglzykifxbbxznswnyllaefovguragdojmva"), 8212, 402);
	this->sgminlgvmdrixdposdhkyjx(string("gnzfhbtjtrkjzfnwcwvxahnpxlupmtopoxrmvalkruskmdiffblmhwejiwqduxusntgyrypifonualexyc"), 1210, 3989, 93392, string("thmyedzvgjourcxfillhfujbtaladoidqbuyexjwltxqjkh"), 3993, true, true, true, 13943);
	this->gcgjabvrnjxo(1528);
	this->ackscqeulopoxbw(3288, 1369, 3034, 2679);
	this->mfrsrvsseonokdtnqchyb(true, string("rclzpspkybsmehpqucododqtcsugeotdrcdkkjirzempmyuhypkmazxxlgumvrzjje"), false, string("pswctqdjodxzjnidbrryvsqgthqmyvrhgsnmmovzumfruzowkgfjfcfouweurbgyzioei"), 55880, 8033, false, 3028);
	this->fcdjrwzxxgizlyabtif(56055, 7004);
	this->tcdxedivbhszlqlzmfilkej(2957, true, false, 10200, 1324, string("jtknxeqszzohvksdtterjtsjkfxjhitxyxkoa"));
	this->atuigpkboatafshuxuhp(string("xdtij"), 2919, string("nbypeubjdyrdyzzheiicqpzngwttpcwrbdfbrukhydc"), string("dahawaybzaagepso"), 1867, string("zyyvlsgrxfdfsbyknijrtbnecuiqjkwjssesksersrdnvkzbbbhhxbhpafwpminicwzjvsngj"), 4921, false);
	this->bejhdfixzsqysikewykfp(39843, string("upxzysundvdslkodqsxugjewfnohmedhgaqckmcoegfrsekbktulnzzxdgqv"));
	this->idyacyprearyo(3033, false, string("rmhpntkgojsmyazghrgmikndxmetlapzkwxrbvxdqhfqnkbgehuzozupkcyvnoxdhzgwmnbxjoefykpqutuzuyerevnehou"), string("fnwlvqjagxbaopphrioygemcrmguzvhayhkphnuanruipnhbsltjzxayknckftxorbfmtpqeinraqddu"), string("hhrkarbwelabwqncbslppjonzke"), string("bhzpyyfthvoinbeusooauwfppaldzvxxgvxxljazrzqnpgbpyyamvoqnxfdekhyplzfrjrkfsesppuxjnoutkni"));
	this->tkzsiqcyoycyizfgtbovao(599, 6486, false, string("tzhoclrftuqfnrumufzvxtu"), 1808, 40611, string("fyouaadixqcngjzmsvjmciahfhdhoexxkshwj"), true, 722);
	this->smqnhwbncdugvufymqwrqaad(6568, false, false, true, string("slnoxwrlmslenptxyucwgzxsntvjhxobxzrgwnzqyxcvmknmmqldbfaqcuhrm"), string("wuuubnkqbtscpezxumlkpzqwpvnvyebtgppkt"), 32956, true, 20799);
	this->fspvfxwgmpwnuadcsp(1073);
	this->trmrokugqixlujxrjfprcorh(string("gqzkzqtliwydulpusftejzbsmcjcmoyqaiwrfbtmymeyxarudeczfmpimxgelxsoyogsmlmjbmyznixriqphifayfspz"), 3274, 5450, 19786, string(""), string("ptupwcjrvomruzjckbvacdnrblvevtyibnebrfcequaedofqhhrhmx"), 7289);
	this->mnnkmrcufy(1677, false, 6030, 7696, 28291, 6169);
}

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class odqvgnt {
public:
	string fhuxhxoiej;
	string roefrqaq;
	odqvgnt();
	int wmtxaznddzvqzl(string xxaaamayhvtcdgt, string dmljcxrirbsg, int feneo, bool mhpfw, double gjluxlabfqmgb, bool stropgqkrvuteg, int hcriqqiuktadvxi, string mkkhoq, bool ssvqdpqiv, bool sutybaxvkw);
	bool extdfnhiuzjkfn(string tpblwvaa, bool rlotsivbod, string cqmhmonukvis);
	void izekgdtyejqtx(bool neupwcthz, bool lncekgqgccpoxp, bool fkpgvp, bool wpogiqfoejll, string guvqilebmhg, int okhwyxszjumm);
	double qfnptjpyaflmp(int rshggydycmzjfx, int efwtzog, int sqlwujydy, bool oanheffx, double ywbmnju, string yttewin);
	int hgltgmieqknjwok(double qaflwvzopb, string qkediqmirhaih, bool shjneuqygqgwbxg, bool uamozkybdckz, bool mzuntvuhyphk, double djwginnq, double sfzvdg, int krtfemklv, string lqxsgqivgoed);
	string qbajgcnoqkvqwbdfiqumernpe(double rdndtkfvoqa, int zomvx, bool flnwtelubiudjjw, int bvufs, string tbkjwhhqdqcgmc, bool punjwkrv, double jjhgeylrvznuh, int olenjtiugazj, double unxmizjist, bool obkhfh);
	string ulipjgjuysaibq(double mgcackpfvkb, int zcxzkjpah, string nvmzczjfgmzkqle, string vkbdrkoqtssfc, int sfuztmgkmtk, int bwtfgkqh, bool kmqeweqpcqhwi);
	bool wovzitncvrawvhhezm(bool madesjygzulp, string orarofzlodx, bool gwmrrsxoyos, string aydiuasekbpvxi, int gcnmf, string azxkir, int tszycdsxzuuk, double iiwerukoirds, int cqvvskr, int gujsqqrik);
	int qisruwgwqtsohre(bool kfcgzsyfybkksta, double sibtmzwcx, double mgtnn, int nppfhpuip, bool iinvuwfxrwes, string jrrwsdh, bool wvqqkvpw, int jdtxomwrzyb);
	void xmfkjehqftdxayqjbmiotx(string anorltg, double mqpdpoj, int lqxosqdtixaqxpe, int vaznvomggowkfr, double fqdodornfeyzohy, string tcynszvlkf, double fyoezjcpbftalf);

protected:
	double rrzvgokrymwsdu;
	string ednptnmyyduwhqg;
	bool kgfhrfdc;
	int rvhabvcvycao;
	bool xrtiehkgih;

	bool stsmpsgrmnerqwjihre(double tjewj, double azmpiktpk, int hlvvapmsfqgkynv, bool wcddkysh, bool uykhbxjzaqkje, string rcdzhgdd, string olweyxtct, int vwmkrwxyfwovr, bool uodxn, string cwbsytolvtx);
	bool juqjqtstgrjfrg(bool jmlkd, string jytcvmkuv, int kmwmrjpvinbn, bool pelkzwue, string imtngkv);
	int gohhpnajnraoabvbv(int uelwsejka, double jnrbokuubhfr, int vapwozspurd, int bgzmmqg, int tfvnguztksrivj, double anrdqabgfnuonf, string rwovoamnzqkl, string rhbovwlfhnpp, string kzaaak);
	bool jzujvxwdcagjifvikdykpghr(double fmngahoswdrgn, string iiuiuufymf, string lceqgo, bool uzgddursr, bool ruwluigptstlii, bool gsyijsxlwpwpm, double yyatmmjsdirghn, int lsnmlhggfgeu, string wtntozuooxo, int ncigydcurxdwis);
	bool aqlhojhmolybmzveenbljn(int ijyxt, int hvkmnuuofu, int sbrqlzwhxndk, int hsnkexqnjnxc, double mokkoancj, string dgwpmcdkdqaobqv, double yktvyauzlhxn, int sopaxu);
	bool uiufwcgcyhyqpwdjrl(int pefsqordkfabctc, double gfzezrkocmndntw, bool plfoqcwutarbwnd, int pjwbnpcegoqbwz, int wklaaf, double emxdkuoptjyo, bool qzkglill, int qpusalceqpo, bool elmixpriv, bool wqtjelnq);
	int mdhwehxlzhqmptoj(bool rstue, int ypzlomwv, int qlbjhkpvkhejf, int wbpmkgk, int jyejkzbfsx, int mbtzxmixccrfhno);
	double dpqqvfkbwjas();
	int wrxllnkmtws(int dhdmfqi, double hghaw, bool qbrzemdurvq, int zkncefcibphk, int zctvoejcsnut);
	string tkdkdnweipzz(double rqicipmyamqwzz, bool rdecwygtqd, double idluasatpje, string bfyll, double ckclejnjwl, string nlbfkljnvwelkvb, int odrtuu, double ucifcovya);

private:
	double jvugpwtkf;
	bool elauawhrdigdcmy;
	int dmmcvwbd;

	bool hwlzropuqireuxmasbwjlqu(bool hqrveflzwnqpi, string oeqouelxvv, bool gleche, string moozudkbler, int rssxhclzxn, int oxehbjyyftcnpnq, bool tzefdbkbjue);
	double gppqhekpivwdcwbwop(bool hulikp, bool vzrwcghk, int hchdx, string haqrihephjlkx, bool xvklepcxhmk, bool yhrljk, bool nlenayoaqsxuia, bool qsklqcxpmrwvmq);
	double olmawmwgdblyxyvzjlg(int fzerxthweff, int yrmtyyifee, bool ligsglqmttpsjo, bool jlxldcettj, double zubcl, double ezhldgqoo);
	void trqwfyrbik(int skvuynvfqpccw);
	double rczezvhetqmrnn(string pjliecdncjz, int zrguoyblvp);
	int lowlodiyegutzlikxeffxd(string mctvwjd, string iihwlxfmegb, string beynjjzyflmg, bool chvswmdianuiz, string ohrmkblpavpyjzj, string kstsxqwtutno, string jrsyvqpwalrcev, string tvwqieqgf, double zxpffg, string ikdoy);
	bool mhzdabauvomj(int mmkrndgcil, double bhxkdr, string enyahrejjzdbte);

};


bool odqvgnt::hwlzropuqireuxmasbwjlqu(bool hqrveflzwnqpi, string oeqouelxvv, bool gleche, string moozudkbler, int rssxhclzxn, int oxehbjyyftcnpnq, bool tzefdbkbjue) {
	string qtsviwmeabosgbr = "eauactsalmqxdzsinqkkvcjsdxonvgqunfxnosdaqyriyjgbcxjug";
	string ytapbnrxlsqp = "ayvptzchkijxxubpespxvksirilyfjjpdiuekxaelwuqnagqmdolumrrbchxqmocbxmink";
	string nwbssaehumawylz = "qpwuimfogiyvcpkfqjafjbhmmuzcqfivhymnu";
	double qnfdldmf = 13773;
	string qmttafjxqsxjw = "kaxhrvinrkitjmvqkkwaxpnbbtewewstqoafxpnikneiayn";
	string orjjxharrzc = "bvlskeakkzufyliyckhetbeaauggocvjzlcgzfjufcbacjodllsclwvszeadybqcutbshdhira";
	double rnzzdgznf = 34819;
	if (string("qpwuimfogiyvcpkfqjafjbhmmuzcqfivhymnu") != string("qpwuimfogiyvcpkfqjafjbhmmuzcqfivhymnu")) {
		int oi;
		for (oi = 83; oi > 0; oi--) {
			continue;
		}
	}
	return true;
}

double odqvgnt::gppqhekpivwdcwbwop(bool hulikp, bool vzrwcghk, int hchdx, string haqrihephjlkx, bool xvklepcxhmk, bool yhrljk, bool nlenayoaqsxuia, bool qsklqcxpmrwvmq) {
	double bqvtsvqrxsrwi = 23415;
	int yccfvekaty = 1626;
	if (23415 == 23415) {
		int txqfsinji;
		for (txqfsinji = 71; txqfsinji > 0; txqfsinji--) {
			continue;
		}
	}
	return 83547;
}

double odqvgnt::olmawmwgdblyxyvzjlg(int fzerxthweff, int yrmtyyifee, bool ligsglqmttpsjo, bool jlxldcettj, double zubcl, double ezhldgqoo) {
	string mgtmy = "sqncxpadgekfqmtgjxesynflbpylqmfzqnztlg";
	bool fhtcuzebbaiu = true;
	bool gjhxasnbgvirjo = false;
	int wpqtroeb = 1553;
	string ejyuufvban = "fiuragzgryexljkspnpgxhzleidedwdunmsyi";
	double rtmmccvwox = 15647;
	double yewsdyvzcir = 6687;
	bool bgnxibgw = false;
	double dcjihxpnfypsg = 4614;
	string rdgwyk = "uqmgefxqoqnuybclhgedngapbbnlmrmiyzhxxbdeswgpdaqjqwfojhxeakzyypc";
	if (string("sqncxpadgekfqmtgjxesynflbpylqmfzqnztlg") != string("sqncxpadgekfqmtgjxesynflbpylqmfzqnztlg")) {
		int gwep;
		for (gwep = 7; gwep > 0; gwep--) {
			continue;
		}
	}
	if (true != true) {
		int avblgq;
		for (avblgq = 97; avblgq > 0; avblgq--) {
			continue;
		}
	}
	if (false != false) {
		int gww;
		for (gww = 63; gww > 0; gww--) {
			continue;
		}
	}
	if (false == false) {
		int hx;
		for (hx = 94; hx > 0; hx--) {
			continue;
		}
	}
	return 16433;
}

void odqvgnt::trqwfyrbik(int skvuynvfqpccw) {
	bool dzcaopebsj = true;
	string ibecksp = "mqfpyoiurtbygxndbtat";
	int lzjxaoyfzktym = 6205;
	int kwmiu = 1521;
	if (1521 == 1521) {
		int obqgot;
		for (obqgot = 18; obqgot > 0; obqgot--) {
			continue;
		}
	}

}

double odqvgnt::rczezvhetqmrnn(string pjliecdncjz, int zrguoyblvp) {
	double txbixgdt = 4656;
	int xuhpnkfmyqyotk = 4000;
	bool pszkwqdgq = true;
	bool ayexvi = true;
	int mcixmrt = 120;
	bool upzresoyzm = false;
	string tlmwbubtuanw = "cmcwvizdiqdpqizchjifszkckdpwsqhxkstnjjkeg";
	bool stxpxbbzxtcgvlj = false;
	int eykvffh = 615;
	int vcgcbezqhevggdw = 4870;
	if (4000 != 4000) {
		int pgds;
		for (pgds = 53; pgds > 0; pgds--) {
			continue;
		}
	}
	if (615 == 615) {
		int nqfgqs;
		for (nqfgqs = 52; nqfgqs > 0; nqfgqs--) {
			continue;
		}
	}
	if (615 == 615) {
		int rlocphkai;
		for (rlocphkai = 43; rlocphkai > 0; rlocphkai--) {
			continue;
		}
	}
	return 16773;
}

int odqvgnt::lowlodiyegutzlikxeffxd(string mctvwjd, string iihwlxfmegb, string beynjjzyflmg, bool chvswmdianuiz, string ohrmkblpavpyjzj, string kstsxqwtutno, string jrsyvqpwalrcev, string tvwqieqgf, double zxpffg, string ikdoy) {
	string lnuyviuaxiwskay = "gusbaifpukiglaxfymbxkvhazoxubrhefsqowekfpzoiarabvsycnxhrefssbnxwipltxqbzaigiyywodnafegaaobjthkksjqtb";
	int ldzfkcnhshkr = 1691;
	if (string("gusbaifpukiglaxfymbxkvhazoxubrhefsqowekfpzoiarabvsycnxhrefssbnxwipltxqbzaigiyywodnafegaaobjthkksjqtb") == string("gusbaifpukiglaxfymbxkvhazoxubrhefsqowekfpzoiarabvsycnxhrefssbnxwipltxqbzaigiyywodnafegaaobjthkksjqtb")) {
		int qrp;
		for (qrp = 21; qrp > 0; qrp--) {
			continue;
		}
	}
	if (1691 == 1691) {
		int yfjyvev;
		for (yfjyvev = 92; yfjyvev > 0; yfjyvev--) {
			continue;
		}
	}
	if (string("gusbaifpukiglaxfymbxkvhazoxubrhefsqowekfpzoiarabvsycnxhrefssbnxwipltxqbzaigiyywodnafegaaobjthkksjqtb") != string("gusbaifpukiglaxfymbxkvhazoxubrhefsqowekfpzoiarabvsycnxhrefssbnxwipltxqbzaigiyywodnafegaaobjthkksjqtb")) {
		int acvk;
		for (acvk = 82; acvk > 0; acvk--) {
			continue;
		}
	}
	if (string("gusbaifpukiglaxfymbxkvhazoxubrhefsqowekfpzoiarabvsycnxhrefssbnxwipltxqbzaigiyywodnafegaaobjthkksjqtb") == string("gusbaifpukiglaxfymbxkvhazoxubrhefsqowekfpzoiarabvsycnxhrefssbnxwipltxqbzaigiyywodnafegaaobjthkksjqtb")) {
		int tstygtnw;
		for (tstygtnw = 14; tstygtnw > 0; tstygtnw--) {
			continue;
		}
	}
	return 75800;
}

bool odqvgnt::mhzdabauvomj(int mmkrndgcil, double bhxkdr, string enyahrejjzdbte) {
	int lpwoivndy = 2250;
	bool notsdvieyrfuc = false;
	double shljxw = 2240;
	if (false != false) {
		int wsmciqihuz;
		for (wsmciqihuz = 99; wsmciqihuz > 0; wsmciqihuz--) {
			continue;
		}
	}
	if (2250 != 2250) {
		int kiafb;
		for (kiafb = 47; kiafb > 0; kiafb--) {
			continue;
		}
	}
	if (2250 != 2250) {
		int kyrqmikg;
		for (kyrqmikg = 59; kyrqmikg > 0; kyrqmikg--) {
			continue;
		}
	}
	if (2240 == 2240) {
		int krtmvo;
		for (krtmvo = 50; krtmvo > 0; krtmvo--) {
			continue;
		}
	}
	if (false != false) {
		int sbpzs;
		for (sbpzs = 20; sbpzs > 0; sbpzs--) {
			continue;
		}
	}
	return true;
}

bool odqvgnt::stsmpsgrmnerqwjihre(double tjewj, double azmpiktpk, int hlvvapmsfqgkynv, bool wcddkysh, bool uykhbxjzaqkje, string rcdzhgdd, string olweyxtct, int vwmkrwxyfwovr, bool uodxn, string cwbsytolvtx) {
	double tpdjsrcmhlbxwy = 39525;
	bool wvriaelarx = true;
	int wcdszgvtpnbo = 3694;
	int rfrvsmqrgduo = 6700;
	double yuhklzynsvmum = 2325;
	if (true != true) {
		int odtojzzdy;
		for (odtojzzdy = 42; odtojzzdy > 0; odtojzzdy--) {
			continue;
		}
	}
	if (39525 == 39525) {
		int upfqiruf;
		for (upfqiruf = 93; upfqiruf > 0; upfqiruf--) {
			continue;
		}
	}
	if (6700 == 6700) {
		int hbqoad;
		for (hbqoad = 65; hbqoad > 0; hbqoad--) {
			continue;
		}
	}
	return false;
}

bool odqvgnt::juqjqtstgrjfrg(bool jmlkd, string jytcvmkuv, int kmwmrjpvinbn, bool pelkzwue, string imtngkv) {
	return false;
}

int odqvgnt::gohhpnajnraoabvbv(int uelwsejka, double jnrbokuubhfr, int vapwozspurd, int bgzmmqg, int tfvnguztksrivj, double anrdqabgfnuonf, string rwovoamnzqkl, string rhbovwlfhnpp, string kzaaak) {
	bool bqwmpvfnuzc = false;
	if (false == false) {
		int oqxxndykcl;
		for (oqxxndykcl = 30; oqxxndykcl > 0; oqxxndykcl--) {
			continue;
		}
	}
	if (false != false) {
		int qryqhkvq;
		for (qryqhkvq = 37; qryqhkvq > 0; qryqhkvq--) {
			continue;
		}
	}
	if (false == false) {
		int gw;
		for (gw = 69; gw > 0; gw--) {
			continue;
		}
	}
	return 12895;
}

bool odqvgnt::jzujvxwdcagjifvikdykpghr(double fmngahoswdrgn, string iiuiuufymf, string lceqgo, bool uzgddursr, bool ruwluigptstlii, bool gsyijsxlwpwpm, double yyatmmjsdirghn, int lsnmlhggfgeu, string wtntozuooxo, int ncigydcurxdwis) {
	bool rxdqs = true;
	int xmudcsurvvxys = 939;
	string acqpkgkxwvqmm = "whnxkcmfivdzwlklumkgesquygigaxiovnqxylnkyvbhqlcyyhhmtagefddeyztxxyfiutqgazphcepxbvlfon";
	int mnwntmgfsbrbvh = 3003;
	double sebopfz = 56364;
	int djviidjugghygle = 1402;
	bool peiiqkxxdzgc = true;
	bool ioyvcaggl = true;
	int vgxdjytexdwpe = 3321;
	return false;
}

bool odqvgnt::aqlhojhmolybmzveenbljn(int ijyxt, int hvkmnuuofu, int sbrqlzwhxndk, int hsnkexqnjnxc, double mokkoancj, string dgwpmcdkdqaobqv, double yktvyauzlhxn, int sopaxu) {
	string fasocmdhctdmf = "igzhghjflxlogylrdgnlqddivowcyqqsytzoohbeyzagptnavolcrjxkkougleunxkhpsppisebuxrejsing";
	int zuosqxq = 1129;
	bool zxumgllwkf = false;
	bool jlxeaehnwunp = true;
	string vvjgvqyb = "ccmyjkvbicilyyj";
	int kkalsemtaaew = 4224;
	double ftxzbeiggck = 42541;
	bool wtqrnaqki = false;
	double ctgxvjxhhzwtunc = 52619;
	int kmpvtzoybt = 2456;
	if (false == false) {
		int zjmxmx;
		for (zjmxmx = 78; zjmxmx > 0; zjmxmx--) {
			continue;
		}
	}
	if (52619 == 52619) {
		int nraq;
		for (nraq = 73; nraq > 0; nraq--) {
			continue;
		}
	}
	return true;
}

bool odqvgnt::uiufwcgcyhyqpwdjrl(int pefsqordkfabctc, double gfzezrkocmndntw, bool plfoqcwutarbwnd, int pjwbnpcegoqbwz, int wklaaf, double emxdkuoptjyo, bool qzkglill, int qpusalceqpo, bool elmixpriv, bool wqtjelnq) {
	bool kwxydkzcadsruk = false;
	double xhswbzsse = 24222;
	double crxasefpvl = 5160;
	double ybjggrtkypsl = 17460;
	if (24222 == 24222) {
		int yqf;
		for (yqf = 30; yqf > 0; yqf--) {
			continue;
		}
	}
	if (false == false) {
		int ebgm;
		for (ebgm = 66; ebgm > 0; ebgm--) {
			continue;
		}
	}
	if (24222 != 24222) {
		int qzmqc;
		for (qzmqc = 81; qzmqc > 0; qzmqc--) {
			continue;
		}
	}
	return false;
}

int odqvgnt::mdhwehxlzhqmptoj(bool rstue, int ypzlomwv, int qlbjhkpvkhejf, int wbpmkgk, int jyejkzbfsx, int mbtzxmixccrfhno) {
	bool qkbyzvsluy = true;
	double wgnyzzrfvu = 3599;
	bool vdbnqbgzyjmpbuz = true;
	bool gdwczzktcsviyt = true;
	int lwvrag = 163;
	return 97487;
}

double odqvgnt::dpqqvfkbwjas() {
	int mmuly = 2570;
	int zmgjzdbwsg = 6490;
	double cozjqkb = 50007;
	bool amhyn = false;
	int pwtqjquglautngq = 890;
	bool yjiljjyz = false;
	double jbuyitfluhptsp = 2761;
	string jlxrc = "xdphyhvcwnuiizwsvoktalxchvojaapwhniyzllzpynffeujbfslfnhkqxuokwykalnmsflcmnapvquygo";
	if (6490 == 6490) {
		int wtjtjimuvz;
		for (wtjtjimuvz = 22; wtjtjimuvz > 0; wtjtjimuvz--) {
			continue;
		}
	}
	if (false != false) {
		int ktiid;
		for (ktiid = 56; ktiid > 0; ktiid--) {
			continue;
		}
	}
	if (false == false) {
		int hutxrgowcf;
		for (hutxrgowcf = 14; hutxrgowcf > 0; hutxrgowcf--) {
			continue;
		}
	}
	if (false == false) {
		int rk;
		for (rk = 38; rk > 0; rk--) {
			continue;
		}
	}
	return 19893;
}

int odqvgnt::wrxllnkmtws(int dhdmfqi, double hghaw, bool qbrzemdurvq, int zkncefcibphk, int zctvoejcsnut) {
	int fgqvdy = 1221;
	string beueckwvdwfwxw = "tkljedkcvoncjnkhvsewuksoxqwd";
	int qrjknw = 2356;
	string dkyyrcgqjnq = "fhsekadmiisojxkzlgyshfwzejmxncqbstjcaizqmwvryetnmfgufxixrjzurvurlg";
	int jvuuynfsjiir = 3311;
	if (string("fhsekadmiisojxkzlgyshfwzejmxncqbstjcaizqmwvryetnmfgufxixrjzurvurlg") != string("fhsekadmiisojxkzlgyshfwzejmxncqbstjcaizqmwvryetnmfgufxixrjzurvurlg")) {
		int ph;
		for (ph = 55; ph > 0; ph--) {
			continue;
		}
	}
	return 63464;
}

string odqvgnt::tkdkdnweipzz(double rqicipmyamqwzz, bool rdecwygtqd, double idluasatpje, string bfyll, double ckclejnjwl, string nlbfkljnvwelkvb, int odrtuu, double ucifcovya) {
	int rmnuoymijoepna = 4434;
	bool dhpkpyhiafqsac = true;
	string bixhbgghuf = "rwsnmseoxnkcsbxldpozjwkq";
	double wawhaeqert = 6615;
	double uzcgizrtymlgu = 24651;
	bool pgazoiunyltfc = true;
	double mkyvwfuy = 31956;
	string drvqdhnml = "vetrprncyzoyhtcxqjuquwkqwcnnbxqetflhwwqfwiidmnyspgenkmikwcyzpmdiincjvbxmj";
	bool bcdec = true;
	string vyopkngqm = "bmwgotsjshavuoubvmitoon";
	return string("glzlkffyjjlatukjkj");
}

int odqvgnt::wmtxaznddzvqzl(string xxaaamayhvtcdgt, string dmljcxrirbsg, int feneo, bool mhpfw, double gjluxlabfqmgb, bool stropgqkrvuteg, int hcriqqiuktadvxi, string mkkhoq, bool ssvqdpqiv, bool sutybaxvkw) {
	int znezejxc = 2586;
	bool evualr = true;
	int orlzuplodqpl = 1854;
	string bgbkzmcmybqld = "vmqnprmmtaislpxrilbjogdvyyamcfugejogfdjirvwmllcligapaanalizyatndvtgrdxkcojhptegvu";
	bool dbkbfyfeb = false;
	double iekhqltdduqfmhu = 844;
	string vhnzdz = "zxaizjlizthwgddltcljqpclmbdlmfxjxjesrcsraghjhiblkhflvhsnfhlhieldxaxosjrblpfn";
	if (string("vmqnprmmtaislpxrilbjogdvyyamcfugejogfdjirvwmllcligapaanalizyatndvtgrdxkcojhptegvu") == string("vmqnprmmtaislpxrilbjogdvyyamcfugejogfdjirvwmllcligapaanalizyatndvtgrdxkcojhptegvu")) {
		int xnnxmxmr;
		for (xnnxmxmr = 84; xnnxmxmr > 0; xnnxmxmr--) {
			continue;
		}
	}
	if (2586 != 2586) {
		int ugkcgyiu;
		for (ugkcgyiu = 94; ugkcgyiu > 0; ugkcgyiu--) {
			continue;
		}
	}
	return 53086;
}

bool odqvgnt::extdfnhiuzjkfn(string tpblwvaa, bool rlotsivbod, string cqmhmonukvis) {
	string nnfbcdneczthi = "nxjchrepzqnattmficexpqjsjpokpcaumyadnrjwhzervvqxstvfksmagnrlqwybvxpunrejkmdrdstpvuogqqnb";
	double vvzpya = 42455;
	bool hsamullszvjg = false;
	string xxvriswjzgmmzkq = "qgsukdbrduddnxluezdoarwoeujvaugytfnntlzuqyy";
	string aresyiuni = "btasjfejanbchuoiwweiiixrafeioxvhzlueppjtpvflohqfflitlhtelmrf";
	bool gfsgikqckhjwg = false;
	double wbcgemolva = 34140;
	string qwkzj = "vihimiceootniqaqehwaibfblmhgmdhkowywpmjajlfeaphuacddirukktr";
	double fihdvnuexryi = 55431;
	return false;
}

void odqvgnt::izekgdtyejqtx(bool neupwcthz, bool lncekgqgccpoxp, bool fkpgvp, bool wpogiqfoejll, string guvqilebmhg, int okhwyxszjumm) {
	int tojbhbttaez = 1580;
	string yeujbxhavko = "wfjkcjqkeidvupe";
	int hexoa = 1303;
	int qqdsgszfpr = 1963;
	int fjeoxr = 5365;
	bool eimslavwtdlitil = true;
	double kztxa = 6822;
	if (6822 == 6822) {
		int uhifausf;
		for (uhifausf = 27; uhifausf > 0; uhifausf--) {
			continue;
		}
	}
	if (true != true) {
		int haao;
		for (haao = 78; haao > 0; haao--) {
			continue;
		}
	}
	if (string("wfjkcjqkeidvupe") != string("wfjkcjqkeidvupe")) {
		int rlioffrb;
		for (rlioffrb = 66; rlioffrb > 0; rlioffrb--) {
			continue;
		}
	}
	if (6822 == 6822) {
		int zqlzfmqqq;
		for (zqlzfmqqq = 92; zqlzfmqqq > 0; zqlzfmqqq--) {
			continue;
		}
	}
	if (string("wfjkcjqkeidvupe") != string("wfjkcjqkeidvupe")) {
		int bubgke;
		for (bubgke = 80; bubgke > 0; bubgke--) {
			continue;
		}
	}

}

double odqvgnt::qfnptjpyaflmp(int rshggydycmzjfx, int efwtzog, int sqlwujydy, bool oanheffx, double ywbmnju, string yttewin) {
	double pxrzlayuhlx = 24625;
	bool udbfbhmmehhypa = false;
	return 55512;
}

int odqvgnt::hgltgmieqknjwok(double qaflwvzopb, string qkediqmirhaih, bool shjneuqygqgwbxg, bool uamozkybdckz, bool mzuntvuhyphk, double djwginnq, double sfzvdg, int krtfemklv, string lqxsgqivgoed) {
	return 18536;
}

string odqvgnt::qbajgcnoqkvqwbdfiqumernpe(double rdndtkfvoqa, int zomvx, bool flnwtelubiudjjw, int bvufs, string tbkjwhhqdqcgmc, bool punjwkrv, double jjhgeylrvznuh, int olenjtiugazj, double unxmizjist, bool obkhfh) {
	string adhwivl = "vknsrtfrwuwocxyzy";
	double kauxokfu = 64430;
	double uvnzjzxk = 32623;
	if (string("vknsrtfrwuwocxyzy") == string("vknsrtfrwuwocxyzy")) {
		int tdbl;
		for (tdbl = 39; tdbl > 0; tdbl--) {
			continue;
		}
	}
	if (32623 == 32623) {
		int zqscz;
		for (zqscz = 56; zqscz > 0; zqscz--) {
			continue;
		}
	}
	return string("bdhvwipsfsgn");
}

string odqvgnt::ulipjgjuysaibq(double mgcackpfvkb, int zcxzkjpah, string nvmzczjfgmzkqle, string vkbdrkoqtssfc, int sfuztmgkmtk, int bwtfgkqh, bool kmqeweqpcqhwi) {
	double spkwulszsqdp = 6275;
	bool vvtuloxeukda = true;
	string vgbuhrebd = "bopjaymxjkfokwmkvxoosmzoofhjxvdfwfymvictalohyqmmhuhdoyabp";
	return string("bbgdejbfkuk");
}

bool odqvgnt::wovzitncvrawvhhezm(bool madesjygzulp, string orarofzlodx, bool gwmrrsxoyos, string aydiuasekbpvxi, int gcnmf, string azxkir, int tszycdsxzuuk, double iiwerukoirds, int cqvvskr, int gujsqqrik) {
	return true;
}

int odqvgnt::qisruwgwqtsohre(bool kfcgzsyfybkksta, double sibtmzwcx, double mgtnn, int nppfhpuip, bool iinvuwfxrwes, string jrrwsdh, bool wvqqkvpw, int jdtxomwrzyb) {
	int awxlemrgqcl = 3019;
	if (3019 != 3019) {
		int afmorfvuh;
		for (afmorfvuh = 22; afmorfvuh > 0; afmorfvuh--) {
			continue;
		}
	}
	if (3019 == 3019) {
		int yetvu;
		for (yetvu = 14; yetvu > 0; yetvu--) {
			continue;
		}
	}
	return 30810;
}

void odqvgnt::xmfkjehqftdxayqjbmiotx(string anorltg, double mqpdpoj, int lqxosqdtixaqxpe, int vaznvomggowkfr, double fqdodornfeyzohy, string tcynszvlkf, double fyoezjcpbftalf) {
	string jcwvdfywuxbp = "zlbkcuujlddfwqnqvsihfzbtyvbagkgfmug";
	double cfezxhtrxpmyll = 31642;

}

odqvgnt::odqvgnt() {
	this->wmtxaznddzvqzl(string("jnlrvmsrpbwzuguiismkvdczwgcboyeqhraqkqhqbgqrfw"), string("uiitilckyfptvfkgtlymmqgtobxjqtajnrhijy"), 6198, true, 33744, true, 353, string("jtqzmjkxxpzaynrfleefaiwvcrbwnxhbwblahzgdtjgdysvjtsbmta"), true, false);
	this->extdfnhiuzjkfn(string("yrbpiwddygoczuftfllzavfnvevzhfcnifuxowxqsqphavtwkxabaqdxqqeqfpiwn"), false, string("akjsmruxyjbjz"));
	this->izekgdtyejqtx(true, false, true, true, string("osffskkgzgbkdltupcpemijwbmrcoxjqhgsnrbgolmazxvfegudgfrarfepokokjjezhoachwhllejzgxagmhawvap"), 4343);
	this->qfnptjpyaflmp(1314, 34, 547, true, 9543, string("haqpqsibbqkdeydpsrxftbnsvjwkrrzusacbmmhjdlfqjvtmwpyefifgrmnelwgsqjsozwskwcjnyhhdqsptdwkdubtge"));
	this->hgltgmieqknjwok(30201, string("owjhtidgtwbqjzyvxfgjflehemmepeugmufptkjqwsxyxbtolgkhtuemvgpkwupcvwtmsuoseivowfzistpwwklcr"), false, true, false, 10606, 25310, 888, string("hywiwxqauqutapxfrqfpequdemiufixoiilmit"));
	this->qbajgcnoqkvqwbdfiqumernpe(37171, 8827, true, 5605, string("lelkjycidaximeagmgtfxaafnebqqcpgxywvkzxlayufcpzkwbewueoljhmfjpljzergjltvkyywcmisfrmmzduzjedajsseibuf"), true, 43288, 3123, 55216, true);
	this->ulipjgjuysaibq(37976, 1734, string("nuxdiejbijvflzajzxxawjhyqjxgxfcjwmxzceosihjsdhqerieoatxy"), string("wqutkirevicdxibqtkewnqeeqnuiuccovsyvybvassfwdkywehhieykgm"), 5334, 113, true);
	this->wovzitncvrawvhhezm(true, string("jvpuweuzkwe"), false, string("eqywjmvsoyirnqhzlzevpaqvbtfcfplviartvnutlondgsoancdqnmxlszonsyrkbzpmpeu"), 900, string("ypbuflwvxsdptdlaymdsvowptuznffocekhtsfinldjkbqozzrxzthhpylnbkxl"), 6723, 44059, 5398, 4472);
	this->qisruwgwqtsohre(false, 19094, 62309, 1141, false, string("ejcwrszvrfgffapkfcmjtnsvhpdgxzvcrrukopaiquvgbsgnzkbayxkmndhgwhebsvpvdfxdzulxlygwdywyrwzulejinbfuztak"), true, 466);
	this->xmfkjehqftdxayqjbmiotx(string("atluwnkunidtgqgqaegannwznkjxqrjxegx"), 36550, 1608, 1781, 43383, string("nvetkahaxiwfeyhpgsirhtmbchmjbpppeojxiqlnfj"), 84);
	this->stsmpsgrmnerqwjihre(11918, 15723, 1213, true, true, string("kyjningmxpbffrnhstwwbaethv"), string("onwlwchrbgpzcghwxkqqlpenzdmdsctqgjgvoapmnnuzkeleeoxkxznbsj"), 905, false, string("ohttmesbagkgcainweobdwpgwpzazutqanyxcfosckzaqcnixakvmxih"));
	this->juqjqtstgrjfrg(true, string("ygkofsydedimafjzncaswssmpviscvsnfopiolepew"), 1213, true, string("uymzrrhgkdaineqgjvkslswjklgxrtbrpuitmykentgrhsskjoqmvsrkrvzyinileolbz"));
	this->gohhpnajnraoabvbv(392, 14856, 188, 4255, 727, 8668, string("vnfdto"), string("imaoidzscaisblstyzoyff"), string("mi"));
	this->jzujvxwdcagjifvikdykpghr(24050, string("thpjtxqcjiopetcwesikdxduqxtvfkkm"), string("bwnehtbtfckfdduykuhitnxaaduyfiziaofovyfotdtyiccrewwmuanffeayt"), false, false, true, 6113, 2004, string("gjehgoerdrfohakzglosgkin"), 8012);
	this->aqlhojhmolybmzveenbljn(996, 265, 5757, 771, 428, string("pvvuuwbla"), 3, 412);
	this->uiufwcgcyhyqpwdjrl(826, 23781, true, 1509, 1212, 21382, true, 4962, false, true);
	this->mdhwehxlzhqmptoj(true, 1713, 92, 1454, 5173, 850);
	this->dpqqvfkbwjas();
	this->wrxllnkmtws(4085, 22560, false, 226, 4544);
	this->tkdkdnweipzz(15598, true, 14312, string("puifzacjvhfhjyfhkjywskuynyrezlcfmsccvkmthyhqgosvnmuzownrox"), 46688, string("lkkumiv"), 281, 15032);
	this->hwlzropuqireuxmasbwjlqu(false, string("gugdjn"), true, string("pdwtdfvklmumevsiaqvhcxgwoqelmydhqdpanujvghhstzt"), 7524, 1548, true);
	this->gppqhekpivwdcwbwop(false, true, 8211, string("hxmnkwoegzztcelipxftqrczesvvzvywuzmk"), true, false, false, false);
	this->olmawmwgdblyxyvzjlg(2951, 309, false, true, 10753, 36529);
	this->trqwfyrbik(1075);
	this->rczezvhetqmrnn(string("pugoylksrykmezmmxonvvgywpwzpejjxgvsgizvnmcqzhfppovodpyuoafcncdpcnqckmdzyhcibn"), 366);
	this->lowlodiyegutzlikxeffxd(string("tencsigxiemeetfzjdsiytredqltpcbivodnyfd"), string("brobuaaalnkwewrkhjdjgchjlmqsdamzlj"), string("knjcatihslnzumdvokwsahvtdqnkxfvmoawsdbexgpuzidwngagnsvrmkpsslkmohv"), false, string("kcoitjejgntgyqdyqylrxpry"), string("blbfiabooqeucuznpovrkwkbzkmdxnreahykdjavtjtwqggvgrhanndtrhxmcydsty"), string("vqairknqgxwyajvbifzgjrzoiaypcorbrgoalwouowklnjlrhxtzrmcjgkwhcqlvdnvrqpdchctccklghqtlp"), string("csumvcsotahwmgw"), 50964, string("zfwndktaaligzcqfjvaskmkraaqhlowwfwiqmyvwgctgffeatpkdvtqicyldwgkddmuxnvssrftsqzcufolkpmkbvzo"));
	this->mhzdabauvomj(1151, 4049, string("ezowamvpqyrwyqso"));
}
