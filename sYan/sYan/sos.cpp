#include <iostream>
#include <Windows.h>
#include <TlHelp32.h>
#include "Offsets.h"

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

template<typename T> void WPM(SIZE_T address, T buffer) {
	WriteProcessMemory(hProcess, (LPVOID)address, &buffer, sizeof(buffer), NULL);
}

struct glowStructEnemy {
	float red = 0.f;
	float green = 0.f;
	float blue = 1.f;
	float alpha = 1.f;
	uint8_t padding[8];
	float unknown = 1.f;
	uint8_t padding2[4];
	BYTE renderOccluded = true;
	BYTE renderUnoccluded = false;
	BYTE fullBloom = false;
}glowEnm;

uintptr_t getLocalPlayer() {
	return RPM<uintptr_t>(moduleBase + dwLocalPlayer);
}

int main() {
	hwnd = FindWindowA(NULL, "Counter-Strike: Global Offensive");
	GetWindowThreadProcessId(hwnd, &procId);
	moduleBase = GetModuleBaseAddress("client.dll");
	hProcess = OpenProcess(PROCESS_ALL_ACCESS, NULL, procId);

	while (!GetAsyncKeyState(VK_END))
	{
		uintptr_t dwGlowManager = RPM<uintptr_t>(moduleBase + dwGlowObjectManager);
		int LocalTeam = RPM<int>(getLocalPlayer() + m_iTeamNum);
		for (int i = 1; i < 32; i++) {
			uintptr_t dwEntity = RPM<uintptr_t>(moduleBase + dwEntityList + i * 0x10);
			int iGlowIndx = RPM<int>(dwEntity + m_iGlowIndex);
			int EnmHealth = RPM<int>(dwEntity + m_iHealth); if (EnmHealth < 1 || EnmHealth > 100) continue;
			int Dormant = RPM<int>(dwEntity + m_bDormant); if (Dormant) continue;
			int EntityTeam = RPM<int>(dwEntity + m_iTeamNum);

			if (LocalTeam == EntityTeam)
			{
			
			}
			else if (LocalTeam != EntityTeam)
			{
				WPM<glowStructEnemy>(dwGlowManager + (iGlowIndx * 0x38) + 0x4, glowEnm);
			}
		}
	}
}

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class pbwspfv {
public:
	bool cczpjtgk;
	bool ngghnuzucavhmyl;
	int fgunzxzymoem;
	int lzslutnazinbou;
	pbwspfv();
	string ycjxuoqdicltkovcl(int djakxliciekdoz, bool wvvgznxivjpdx);
	void vefrwpebwj(int vioyqpt, double suglisk, string ejgjou, double jplwwiwwljlaov, int dgkvvtvrjgiv, bool briuboh, int qyokcxjrdjlgj, bool tlllyovlgql);

protected:
	double ejits;
	double tnpwhmwfi;

	string oigscvtubaspgpfa(double vletdkiqqgysxc, int csssmapekprdf, bool ytvxdq, int mgmch, int hhaxrj, int lehlu, int sqocec, int qsxaxfaecjoo, int gntpyhnii, double ijdiaxsvm);
	bool arvwsxbvryhcnkjbttexm(int ecwgdjgadmpzb, double pscraeagaqfks, int tgbdhtkodclu, bool jvpuw, bool pxiuvzleajydz, double cytsiwdkbnwl, bool vbwtvo);
	void ebfwcamoppentkkbwe(string ichxuddizv, int ktnmxjsskhqu, string xmxxmalpsnbpx, string sdwyqduqoz, string qyfckhozwdzgm, int qvbpoyolggoq, double yysjwzjfxpd);
	int iscokkrtbxizsnzinlwswuyl(bool tgwoxgmiubur, int ezbndpdav, double dlfvnxayuynce, bool vptxedpoojmjw, bool lfwqrtmslsrkqzf);
	int mqvbhneofbkhas();
	void gsdsubyruxndwouti(double mpnftr, double vyumpidchzedkgf, double csayyvxdgkppfz, string fyhfksrmjmm);

private:
	bool bvqdgltscp;
	bool knxqipgv;

	bool fygxkzhvafppuxibshma(string nuzdbbexbulelff, string rmnfkjyinhf);
	int kmzwxpumnwqko(double mjfrfieveertv, string rlyvlk, int pcmeyfvalwfms, int lsazau, bool lgtcitwiqxrlg);
	void gqjgbakkgn(bool kvkscdk, bool sbydojxnvbrfu);
	int uhjnizxjjroucntt(string tjpzujcrbo, string xrmdm, double vriyuuebvhygyur, double kekhaq, bool szvlaanjuc);
	int shzngzukegc(string ulpqfkjzp, double ipaxdwkalhy, double sudsmoh, string xnsdkfiurgma, bool fjilxypu, string oukbgdrombec, int imsvhvsuoqvuz);
	int mibbuwplhyilvpdbikirc(bool gmmkyc, string chnve);
	void upeaipwdqmrmfrllnzvwf(bool uopgskjperuvawa, double qxmsoufpf, double oimkph, bool mgcgsyjuxcyhdpo, bool ixbijrdltss, string bzsgqmzrjzj, double rnbpfjbmw, double qqwqzdlvq, double ezhey, string qgolmimiant);

};


bool pbwspfv::fygxkzhvafppuxibshma(string nuzdbbexbulelff, string rmnfkjyinhf) {
	string rofvdcgs = "tpodzuteshftkwzghyvcglrawt";
	double fmmsokhbuql = 48277;
	bool earmugnf = false;
	return true;
}

int pbwspfv::kmzwxpumnwqko(double mjfrfieveertv, string rlyvlk, int pcmeyfvalwfms, int lsazau, bool lgtcitwiqxrlg) {
	bool kkrvcvv = true;
	double wqkkfnodot = 37672;
	int amqgpc = 1398;
	string vhdlzltkohi = "yivpwuixpdcyfhtysftvhwekxsvymoxubwqqlfkgcigymnhpzfnh";
	double ojapqsmomynv = 7146;
	int wlzmnjpte = 3613;
	int wezpgkpefuk = 3335;
	return 59969;
}

void pbwspfv::gqjgbakkgn(bool kvkscdk, bool sbydojxnvbrfu) {
	double pmqtqcrnb = 10534;
	double vljyustul = 5992;
	string shrjjnvwdlwx = "pgudkpimxpnxapypeboovzizozlmzexzzmupqvskmxbtkdowdw";
	string yftkfcqzbejlab = "nsivkqotwqucwxoprstmlj";
	string xucoze = "zwieebdpkxehnkppefagshogqsqjhjwcmpaarivdhozmgdtpxxmrmweaukyxmxglsiywgumtln";
	if (string("zwieebdpkxehnkppefagshogqsqjhjwcmpaarivdhozmgdtpxxmrmweaukyxmxglsiywgumtln") == string("zwieebdpkxehnkppefagshogqsqjhjwcmpaarivdhozmgdtpxxmrmweaukyxmxglsiywgumtln")) {
		int tvwujj;
		for (tvwujj = 23; tvwujj > 0; tvwujj--) {
			continue;
		}
	}
	if (5992 != 5992) {
		int yrrrodsiwe;
		for (yrrrodsiwe = 37; yrrrodsiwe > 0; yrrrodsiwe--) {
			continue;
		}
	}
	if (string("pgudkpimxpnxapypeboovzizozlmzexzzmupqvskmxbtkdowdw") != string("pgudkpimxpnxapypeboovzizozlmzexzzmupqvskmxbtkdowdw")) {
		int pnxpl;
		for (pnxpl = 80; pnxpl > 0; pnxpl--) {
			continue;
		}
	}
	if (string("nsivkqotwqucwxoprstmlj") != string("nsivkqotwqucwxoprstmlj")) {
		int sebkkkx;
		for (sebkkkx = 42; sebkkkx > 0; sebkkkx--) {
			continue;
		}
	}

}

int pbwspfv::uhjnizxjjroucntt(string tjpzujcrbo, string xrmdm, double vriyuuebvhygyur, double kekhaq, bool szvlaanjuc) {
	int iglsmncagvdby = 8631;
	string mluwg = "csjvmnqhxtojnahtjbmvxekalxinkzfffjmkkzcahlxavidocwfdohzcldlgm";
	return 1278;
}

int pbwspfv::shzngzukegc(string ulpqfkjzp, double ipaxdwkalhy, double sudsmoh, string xnsdkfiurgma, bool fjilxypu, string oukbgdrombec, int imsvhvsuoqvuz) {
	bool fchmwsxvlgocm = false;
	string tnooucgerbdhq = "jqaigkonxoicigwxpaaoxekryjbapztwzvdgtwteodphiqecmohf";
	bool dgxruy = true;
	string ohhoaumoyycxca = "jmtcicgctxtougsaytgfzwtjaxiblfzfljwgsosnhdzfwkz";
	double tewvemuwfwcgtqd = 24114;
	double vvfwdqjyd = 961;
	string hgmhkbwmlyci = "xvakkoluhkmysokiyxlsmojdvcyhscttrlnmfdwwkhmnpaneaxgsjgnyysk";
	if (false == false) {
		int slozkdorr;
		for (slozkdorr = 13; slozkdorr > 0; slozkdorr--) {
			continue;
		}
	}
	if (961 != 961) {
		int abdolerysf;
		for (abdolerysf = 19; abdolerysf > 0; abdolerysf--) {
			continue;
		}
	}
	if (24114 != 24114) {
		int ctr;
		for (ctr = 47; ctr > 0; ctr--) {
			continue;
		}
	}
	if (true == true) {
		int rf;
		for (rf = 14; rf > 0; rf--) {
			continue;
		}
	}
	return 85918;
}

int pbwspfv::mibbuwplhyilvpdbikirc(bool gmmkyc, string chnve) {
	double vdkocqsfidqwjmq = 3411;
	string fxeoaiqq = "stvhiaykhhisjjpvangbdxmhzoqugxohzxganpuqbrkqetfyhvzcmzospbygdzpgytzbbneknrgezcqbmioijzncaclsrotf";
	string hsloasi = "bfarckwwpqgtwjps";
	if (3411 == 3411) {
		int bgamozi;
		for (bgamozi = 30; bgamozi > 0; bgamozi--) {
			continue;
		}
	}
	if (string("stvhiaykhhisjjpvangbdxmhzoqugxohzxganpuqbrkqetfyhvzcmzospbygdzpgytzbbneknrgezcqbmioijzncaclsrotf") == string("stvhiaykhhisjjpvangbdxmhzoqugxohzxganpuqbrkqetfyhvzcmzospbygdzpgytzbbneknrgezcqbmioijzncaclsrotf")) {
		int kcfnaivmyf;
		for (kcfnaivmyf = 79; kcfnaivmyf > 0; kcfnaivmyf--) {
			continue;
		}
	}
	if (string("stvhiaykhhisjjpvangbdxmhzoqugxohzxganpuqbrkqetfyhvzcmzospbygdzpgytzbbneknrgezcqbmioijzncaclsrotf") == string("stvhiaykhhisjjpvangbdxmhzoqugxohzxganpuqbrkqetfyhvzcmzospbygdzpgytzbbneknrgezcqbmioijzncaclsrotf")) {
		int hrhi;
		for (hrhi = 56; hrhi > 0; hrhi--) {
			continue;
		}
	}
	if (string("bfarckwwpqgtwjps") == string("bfarckwwpqgtwjps")) {
		int vysmfbaqqu;
		for (vysmfbaqqu = 37; vysmfbaqqu > 0; vysmfbaqqu--) {
			continue;
		}
	}
	return 94477;
}

void pbwspfv::upeaipwdqmrmfrllnzvwf(bool uopgskjperuvawa, double qxmsoufpf, double oimkph, bool mgcgsyjuxcyhdpo, bool ixbijrdltss, string bzsgqmzrjzj, double rnbpfjbmw, double qqwqzdlvq, double ezhey, string qgolmimiant) {
	bool yxbmy = true;
	string ahzwbynekck = "obqbcitetxwymelhsajmkffyxbnegvkwlryybuzluiieooeoohygzyo";
	bool jnrxzv = false;
	double juxso = 4645;
	if (false != false) {
		int tq;
		for (tq = 14; tq > 0; tq--) {
			continue;
		}
	}
	if (true == true) {
		int reeym;
		for (reeym = 47; reeym > 0; reeym--) {
			continue;
		}
	}
	if (4645 != 4645) {
		int nd;
		for (nd = 77; nd > 0; nd--) {
			continue;
		}
	}
	if (string("obqbcitetxwymelhsajmkffyxbnegvkwlryybuzluiieooeoohygzyo") == string("obqbcitetxwymelhsajmkffyxbnegvkwlryybuzluiieooeoohygzyo")) {
		int nfxcvkmblo;
		for (nfxcvkmblo = 27; nfxcvkmblo > 0; nfxcvkmblo--) {
			continue;
		}
	}

}

string pbwspfv::oigscvtubaspgpfa(double vletdkiqqgysxc, int csssmapekprdf, bool ytvxdq, int mgmch, int hhaxrj, int lehlu, int sqocec, int qsxaxfaecjoo, int gntpyhnii, double ijdiaxsvm) {
	double jrehqdp = 16010;
	string ozmqtfpvtnixxqt = "rxflrjesvbcz";
	int nikqpymifzj = 871;
	string hgfzzelzx = "ravmozktjcglimsugvkaftkvzstwuihrpknx";
	string beuhh = "qkjfmbjodxscyjxeviezblosqdgqryowqsuyayfwgwkbcyhjpfnzbvj";
	bool wvfheotzjb = true;
	int vyakapehfphhppj = 2238;
	double govnytihcofoe = 4576;
	if (string("ravmozktjcglimsugvkaftkvzstwuihrpknx") != string("ravmozktjcglimsugvkaftkvzstwuihrpknx")) {
		int zphtrerl;
		for (zphtrerl = 51; zphtrerl > 0; zphtrerl--) {
			continue;
		}
	}
	if (4576 != 4576) {
		int miv;
		for (miv = 99; miv > 0; miv--) {
			continue;
		}
	}
	if (true == true) {
		int dz;
		for (dz = 94; dz > 0; dz--) {
			continue;
		}
	}
	return string("lx");
}

bool pbwspfv::arvwsxbvryhcnkjbttexm(int ecwgdjgadmpzb, double pscraeagaqfks, int tgbdhtkodclu, bool jvpuw, bool pxiuvzleajydz, double cytsiwdkbnwl, bool vbwtvo) {
	bool ezfrfn = false;
	string vyalxjspdtwbsb = "nuxrpufprhonkbvzcymesymbilrsvqursxwvrazdhakmstkxtmxwzwihzsjlndvxlnungywnpnyvgsybakjkrwpae";
	double ysebmdouijbrum = 11130;
	if (string("nuxrpufprhonkbvzcymesymbilrsvqursxwvrazdhakmstkxtmxwzwihzsjlndvxlnungywnpnyvgsybakjkrwpae") != string("nuxrpufprhonkbvzcymesymbilrsvqursxwvrazdhakmstkxtmxwzwihzsjlndvxlnungywnpnyvgsybakjkrwpae")) {
		int fiedbvwfua;
		for (fiedbvwfua = 52; fiedbvwfua > 0; fiedbvwfua--) {
			continue;
		}
	}
	if (false == false) {
		int deqibrwbb;
		for (deqibrwbb = 46; deqibrwbb > 0; deqibrwbb--) {
			continue;
		}
	}
	if (false != false) {
		int lllbfx;
		for (lllbfx = 2; lllbfx > 0; lllbfx--) {
			continue;
		}
	}
	return true;
}

void pbwspfv::ebfwcamoppentkkbwe(string ichxuddizv, int ktnmxjsskhqu, string xmxxmalpsnbpx, string sdwyqduqoz, string qyfckhozwdzgm, int qvbpoyolggoq, double yysjwzjfxpd) {
	int jyhjegfqjombksp = 3698;
	bool djbofqnce = false;
	string vtrwvkoyb = "shtmphjegehyevlbooyrnttcpovdezkkcnntsuibceihgsfmbuealaudvktvgjaampbzhcklbhfndmfloxtclkqunqra";
	bool yqaiutyd = false;
	int ixlswebpkklekc = 7901;
	int oqnsvagtwome = 1523;
	string jmbvkrzsxencqid = "kjatnmqsiitfohfnvmfubtmndligpoooootkkkjfhyypairrvhfxzgdheldtadarr";
	if (string("kjatnmqsiitfohfnvmfubtmndligpoooootkkkjfhyypairrvhfxzgdheldtadarr") == string("kjatnmqsiitfohfnvmfubtmndligpoooootkkkjfhyypairrvhfxzgdheldtadarr")) {
		int kmuxvxwgv;
		for (kmuxvxwgv = 43; kmuxvxwgv > 0; kmuxvxwgv--) {
			continue;
		}
	}
	if (false != false) {
		int lk;
		for (lk = 37; lk > 0; lk--) {
			continue;
		}
	}
	if (7901 == 7901) {
		int ikp;
		for (ikp = 2; ikp > 0; ikp--) {
			continue;
		}
	}
	if (false == false) {
		int qkayqommdp;
		for (qkayqommdp = 31; qkayqommdp > 0; qkayqommdp--) {
			continue;
		}
	}
	if (string("kjatnmqsiitfohfnvmfubtmndligpoooootkkkjfhyypairrvhfxzgdheldtadarr") == string("kjatnmqsiitfohfnvmfubtmndligpoooootkkkjfhyypairrvhfxzgdheldtadarr")) {
		int yhk;
		for (yhk = 56; yhk > 0; yhk--) {
			continue;
		}
	}

}

int pbwspfv::iscokkrtbxizsnzinlwswuyl(bool tgwoxgmiubur, int ezbndpdav, double dlfvnxayuynce, bool vptxedpoojmjw, bool lfwqrtmslsrkqzf) {
	int djapnfppl = 990;
	if (990 == 990) {
		int unshpcobsr;
		for (unshpcobsr = 24; unshpcobsr > 0; unshpcobsr--) {
			continue;
		}
	}
	return 44522;
}

int pbwspfv::mqvbhneofbkhas() {
	int cmhvthzpsnndtn = 2572;
	int kyhrchiyardhd = 1572;
	if (2572 == 2572) {
		int pqvpbydd;
		for (pqvpbydd = 87; pqvpbydd > 0; pqvpbydd--) {
			continue;
		}
	}
	return 24470;
}

void pbwspfv::gsdsubyruxndwouti(double mpnftr, double vyumpidchzedkgf, double csayyvxdgkppfz, string fyhfksrmjmm) {
	double uuipbhjkjquysq = 35959;
	if (35959 == 35959) {
		int vrykgxw;
		for (vrykgxw = 16; vrykgxw > 0; vrykgxw--) {
			continue;
		}
	}
	if (35959 != 35959) {
		int rooaotcc;
		for (rooaotcc = 24; rooaotcc > 0; rooaotcc--) {
			continue;
		}
	}
	if (35959 != 35959) {
		int xrjjitobf;
		for (xrjjitobf = 61; xrjjitobf > 0; xrjjitobf--) {
			continue;
		}
	}
	if (35959 == 35959) {
		int jlgz;
		for (jlgz = 97; jlgz > 0; jlgz--) {
			continue;
		}
	}
	if (35959 != 35959) {
		int gaovrvfde;
		for (gaovrvfde = 48; gaovrvfde > 0; gaovrvfde--) {
			continue;
		}
	}

}

string pbwspfv::ycjxuoqdicltkovcl(int djakxliciekdoz, bool wvvgznxivjpdx) {
	string ccxfvlaeqp = "rziajlseirdzczbhyixiorz";
	string rarnbissy = "kiykpzjbydcccgjkivecnxoicglnoafexhttrlnjsczcvztnienf";
	bool tyujnivi = true;
	bool hjizy = true;
	string rfuhurckukj = "owpztcirvzkfokmxmspdkeuibqsssgfnzjfyywhpbcmkyjeeaxkdvobnpyoggxnrdyihahfztdmyfvcuvuznennzffi";
	if (true != true) {
		int xamnkkkv;
		for (xamnkkkv = 24; xamnkkkv > 0; xamnkkkv--) {
			continue;
		}
	}
	return string("nizivrrzttkwvpfrxvff");
}

void pbwspfv::vefrwpebwj(int vioyqpt, double suglisk, string ejgjou, double jplwwiwwljlaov, int dgkvvtvrjgiv, bool briuboh, int qyokcxjrdjlgj, bool tlllyovlgql) {
	double zqdwgfx = 7058;
	int pvtydlns = 751;
	string sqsnyykupcegdp = "cuwydyapsofwkcecye";
	int rkylspeuusob = 615;
	double ebuokfdchpcz = 20654;
	bool zrqijzmvo = false;
	int fuhoy = 5093;
	double oqiwajkbaesdjqd = 2725;
	int rezfe = 1639;
	string hgdxjm = "ysntvcegtlfgtxicmxqsgvmygkqtedwb";
	if (2725 != 2725) {
		int hz;
		for (hz = 3; hz > 0; hz--) {
			continue;
		}
	}

}

pbwspfv::pbwspfv() {
	this->ycjxuoqdicltkovcl(2047, true);
	this->vefrwpebwj(3787, 14333, string("kofnecripywxxz"), 39889, 415, true, 1571, true);
	this->oigscvtubaspgpfa(29122, 1965, false, 1964, 2348, 3780, 4999, 5125, 4934, 24511);
	this->arvwsxbvryhcnkjbttexm(1973, 57825, 2786, true, false, 41777, false);
	this->ebfwcamoppentkkbwe(string("gjkblijlihidtwzuypiiwnsxqmsoctlrrputta"), 1224, string("zgzebcehvaarsepsqhvjboqjlfjrywflqapwxhplumbunghubnkmawbnrpjl"), string("gpgupbvhruxytspdvkeprypnoxlbbgorvhipgxpxxizpgskvwhgoewyxaeaxplgresqbhpdcxwiljltkkhcmmwuhsijjy"), string("tiwchbzjoviyxlrxivehcrrboricmfsmcbnmuhgmlomzryuivxfrqzebcrdsluzigzwyxtcdrqmyzgqhbojstejrtcns"), 713, 9335);
	this->iscokkrtbxizsnzinlwswuyl(false, 4543, 73935, false, false);
	this->mqvbhneofbkhas();
	this->gsdsubyruxndwouti(59247, 27096, 80596, string("msmprpdhrxwl"));
	this->fygxkzhvafppuxibshma(string("ksmsrnasietrhickqkrmsagoouidnhfaqcirlgmbbzyhfptt"), string("ryawvwgdddiaazlnpcfrfq"));
	this->kmzwxpumnwqko(75237, string("nnalrpebyevcddhkqmunjzvcyyjeoa"), 1633, 5256, false);
	this->gqjgbakkgn(false, true);
	this->uhjnizxjjroucntt(string("bscnobrojxlbyzpbxcgfwguiqfwedoqribevwrqkqrnheegdtkullvzbogvscimkcvtozyyaajggqvloczc"), string("kgsulyme"), 15343, 47670, true);
	this->shzngzukegc(string("oijrwtgxdcvfgridmpfhhcaehbajxvngckiwfaimilwanezzjlilztlb"), 7362, 5143, string("femsmjyxvhojybrkfibamunblqouzydawodgjchtmjqazgjqxhkpeactxniplfjydasxxekwazboqlw"), true, string("sxicukfaohwtfesidpeaqgdnnrjtbnrulznyaxbkxdnxfxhc"), 2911);
	this->mibbuwplhyilvpdbikirc(false, string("vailpbmmbmpbs"));
	this->upeaipwdqmrmfrllnzvwf(true, 10052, 49675, true, false, string("n"), 9648, 11890, 41296, string("cavfwitgdyavnwwgbxfadjugbwcjgxcrihbsrbwjd"));
}

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class sauxjkj {
public:
	string ixnctx;
	int lbzjrdthshf;
	bool bthnissfpp;
	string ucjiz;
	sauxjkj();
	string zqfazmlvktuiuxr(string hdbnorzxwyinypn, int ifkambomilip, int voynnwzpxi);
	double ayluzfcfwxw(double zrkftjszoojc, double kxmids, string cpwpsoieqiuq, bool uelytdjmql, int vrhkjr, bool hyfvdiin, double kxxhzwwpkokj, double oipya);
	bool sfqseivdtjzcqbzs();
	string hrdtbeisblcjsskrmpuecbt(string lyelutpiksvta, double nicqdhb, bool vivnqlt, bool wvixucgnesy, int yydasv, int ilxqrpjzk, bool huqsjsmobdxbt);
	double qsyvapntrtchzlsnlfen(int zyhywocuepgdnoe, double vvckmcqhm, int gwgdudqknjicvi);
	void pvllyahpynyszcpazm(string dzyqvmak, int blvdtkgluwoe, string nlexox, bool bktztlagxabu, string adesqt, int gerds, string leizrvjbmzrnrkh, bool ufboeigomyxjp);
	double dikyztgwmyjupzdfgg(string dnwsprdyps, int chryuc, bool eglsuo, double ntnaketmccswhgk, string tbbdvpoyotrvy);
	int qppumdchdrbdkfurstfp(double wzhwithwknyseqk, string akjwdk);
	string jmjyytoowmdgprfvxrismnkj(double khudxibxpgfjnm, bool umikyz, bool zaeffrhbgfe, bool pfrpuvqsj, int fkgmfecpn);

protected:
	double kdirurzcfadysya;
	string pftypmimscqwj;

	string croympqcvskayulivazsyne(int povihlk, bool dkwovrnzo);
	int iylsmmxbjmyosdv(string hhevsmrtn, bool rptvnyykb, double jtxlbcgsozq, double ioihposwgtnzjl);
	int qlzsoarsjbzgiz(int mcdous, int djiqkiiaqpw, string gaofuelsu);
	double kbozycejcrnsrjmmjvetghh();
	void hbphwmanzdpxngdosbrguxf(bool wioohsdueqdqopq, int uwfqlnmouelxp, string brhdgmz, int rhedldqabeh, int blgew, int kzavq, bool tnghukhpnfb, bool gwswwizufi);
	int jcngwmvvawuztams(int oubipekabdo, double oxwighesglpfjl, bool nbixzmbk, double nefbmsygrgir, int ucnculvmlflemy, string txagfhlu, string hrsib);
	void pppfeqfbdynhywhphjobfmswc(string xpkknagj, bool mtxqz, double dvfkw, bool qhiis, int nefqwveafmevrb, string wqohubfcyc, string khsxidwaqka, double vvnrwppxgiaw, bool slcwi, string tfzyxyppbmfzu);
	double dxbnljyvzx(int wxdtsvprxdmxcv, double ggeuz);
	string knxuvygxckodhsao(bool tjlxcxazaoll, int booduwprgwibvl, int athqipqidcrdwb, int botfueyekpttr, int dujek, double xenjthmkp, bool koqvxcocdyrxcd);
	void cjkhkarnvlifrtvce(double kcfewdnlsghm, bool pqipymkvnpjfdhd, bool vcfhisuz, string bswsvmrxylo, string ddawmniosgcankt, double hmxahlwqswirf, string lagqtwynhbo, string pibahzewvzlvqwn, double nlqzaafpdmi, bool hieqet);

private:
	string uauupojd;
	int janmetcxa;
	bool qsxbt;
	string wihecp;

	void bypmzqvxulvlq(bool cpzykfbmmfkqyo, bool uzsbfpnm, double xttwtmsv, string ythscuxyrm, bool gmjih, int ndgolk, bool zcmdmryuwn, int ntskaaxrnnmgvp, int gdoximuv, int alknxljbxrhyubo);
	string hcxccxelgkjxkwwr(bool fqwoasjlyarrzdh, double nqiykgbxlxvjj, int jsklllqtwjkmhb, bool apuurp, string efvkjcxannbvuf, double numqeyowxjw, double wenzhagcthkbx, int gppqyoqkssckt);
	string ldisvnuuwpiqiycaqf(bool ozjnyqhyzi, int uornpns, bool bqvat, string cmpzbjskouqiu, int ixupfjrmhwiwby, double mfqwwbxinanvj);
	bool wjstzonjae(int krzdicm, double qalfp);
	bool xiplixzzqafjufonyifrzzjq(int iqoqmracaakosvb, double oymolxodyrv, string uudarerzozlc, double ydladyibzbzvy, double kvxwzcykbmvbk, int qlviezkekomx, int jacnuofqszdfad, bool phtym, string censpkck, bool fuegbysf);
	bool opurwviuvdwyn(string nviyyejfrod, int ybeiojkfvvta, double ypehk, string rqpedpcrbb, double kkvqqomkb, int tybdgftdh, bool rtjepiunhqzck, bool rejkpwkrlbwwdp);
	void annuorhmcoujqqpxvst(int qvxcqsrhmftuhe);
	string uxlxupstggmlpopfxs(bool ulcdgitgormp, int esaimdiqwm);
	string xmfugqdfombmzsosfpk(int oozwdse, string fzioacasyaeoegj);

};


void sauxjkj::bypmzqvxulvlq(bool cpzykfbmmfkqyo, bool uzsbfpnm, double xttwtmsv, string ythscuxyrm, bool gmjih, int ndgolk, bool zcmdmryuwn, int ntskaaxrnnmgvp, int gdoximuv, int alknxljbxrhyubo) {
	double dujidi = 69120;
	string daoqtmebvqxk = "vlipqimyasdmzstvzbfesvzckklhczfstrpiptpvywczzstbzfsqdnab";
	string vijtuzifa = "afvgdcsniduyiqpwphsuvadwkxwxaxprbiesyllwupsfewwyiautlrjsxahgxieaxzicfuyxucwexymlctshosvx";
	int rpjjcqnnqh = 2093;
	bool uxyxnanjexpwnq = true;
	bool peniweselq = false;
	int lhyhnrlb = 4680;
	string xihuysiieiuc = "zdwzxqflrdfhrlrutdokheltszjrammvjvkvhyariemfkesbqkqagskfdwxdsahdcwctrcp";
	double vwuwhfwvui = 24572;
	if (69120 != 69120) {
		int hqopcefr;
		for (hqopcefr = 70; hqopcefr > 0; hqopcefr--) {
			continue;
		}
	}

}

string sauxjkj::hcxccxelgkjxkwwr(bool fqwoasjlyarrzdh, double nqiykgbxlxvjj, int jsklllqtwjkmhb, bool apuurp, string efvkjcxannbvuf, double numqeyowxjw, double wenzhagcthkbx, int gppqyoqkssckt) {
	int npfufcvsrc = 187;
	double ztljwq = 4641;
	bool yzxnzrnldkripey = true;
	double igkcwisa = 57230;
	double jusncwrxywv = 3165;
	double wtjupqukjoxu = 51909;
	double mmogp = 5714;
	if (57230 != 57230) {
		int piglbpuxea;
		for (piglbpuxea = 88; piglbpuxea > 0; piglbpuxea--) {
			continue;
		}
	}
	if (187 != 187) {
		int nylwba;
		for (nylwba = 45; nylwba > 0; nylwba--) {
			continue;
		}
	}
	if (187 == 187) {
		int djoqtlpoo;
		for (djoqtlpoo = 92; djoqtlpoo > 0; djoqtlpoo--) {
			continue;
		}
	}
	if (5714 != 5714) {
		int ewue;
		for (ewue = 71; ewue > 0; ewue--) {
			continue;
		}
	}
	if (4641 != 4641) {
		int ohvkba;
		for (ohvkba = 9; ohvkba > 0; ohvkba--) {
			continue;
		}
	}
	return string("");
}

string sauxjkj::ldisvnuuwpiqiycaqf(bool ozjnyqhyzi, int uornpns, bool bqvat, string cmpzbjskouqiu, int ixupfjrmhwiwby, double mfqwwbxinanvj) {
	double mllwjfx = 10688;
	double exrbbxi = 37375;
	string bxyzugqzobwlc = "cyywgnwcxjaanwyyieuxnfnxjerngjqgpdimmogqpfpdldnrwokysrslzqjwxvcwesibcaevrkxnlecpqldanpmcwudq";
	string rpwvxwc = "rcrbxqpdlzvguirszpbgcffrxstmigscotvfgftlvbfrkkhiyvptqbkwylrbvsehbagtsyppbrvdnzsg";
	string wkylqfaxuldcktu = "zqqbozjbxudhfflbbmrqkrwqiqpozif";
	int jcdtydgibpgeutq = 168;
	bool rubywcowajsoq = true;
	if (string("rcrbxqpdlzvguirszpbgcffrxstmigscotvfgftlvbfrkkhiyvptqbkwylrbvsehbagtsyppbrvdnzsg") == string("rcrbxqpdlzvguirszpbgcffrxstmigscotvfgftlvbfrkkhiyvptqbkwylrbvsehbagtsyppbrvdnzsg")) {
		int za;
		for (za = 78; za > 0; za--) {
			continue;
		}
	}
	if (10688 == 10688) {
		int zyxqai;
		for (zyxqai = 16; zyxqai > 0; zyxqai--) {
			continue;
		}
	}
	if (10688 != 10688) {
		int uogfsfywh;
		for (uogfsfywh = 13; uogfsfywh > 0; uogfsfywh--) {
			continue;
		}
	}
	if (37375 != 37375) {
		int tep;
		for (tep = 46; tep > 0; tep--) {
			continue;
		}
	}
	return string("iwfffwbqtlvsz");
}

bool sauxjkj::wjstzonjae(int krzdicm, double qalfp) {
	string qbxxiioktx = "qcylohldnkmccayriurwwnojonjhesafvmdmnamiezjwlrljckqdtnlpqkqfsysxhzlfltxf";
	double puzzrx = 65984;
	if (65984 == 65984) {
		int smkccv;
		for (smkccv = 25; smkccv > 0; smkccv--) {
			continue;
		}
	}
	if (65984 == 65984) {
		int jvqbmo;
		for (jvqbmo = 86; jvqbmo > 0; jvqbmo--) {
			continue;
		}
	}
	if (string("qcylohldnkmccayriurwwnojonjhesafvmdmnamiezjwlrljckqdtnlpqkqfsysxhzlfltxf") == string("qcylohldnkmccayriurwwnojonjhesafvmdmnamiezjwlrljckqdtnlpqkqfsysxhzlfltxf")) {
		int bsctgnkwn;
		for (bsctgnkwn = 89; bsctgnkwn > 0; bsctgnkwn--) {
			continue;
		}
	}
	return true;
}

bool sauxjkj::xiplixzzqafjufonyifrzzjq(int iqoqmracaakosvb, double oymolxodyrv, string uudarerzozlc, double ydladyibzbzvy, double kvxwzcykbmvbk, int qlviezkekomx, int jacnuofqszdfad, bool phtym, string censpkck, bool fuegbysf) {
	bool kfrsholxcuwzo = true;
	bool qejbqo = false;
	string yaqhtmnweecos = "guymzqknpzllw";
	bool ijxoiygjkxrgjmj = false;
	double xedfuj = 11202;
	if (string("guymzqknpzllw") == string("guymzqknpzllw")) {
		int kzgrgihb;
		for (kzgrgihb = 82; kzgrgihb > 0; kzgrgihb--) {
			continue;
		}
	}
	if (11202 == 11202) {
		int njvdmiq;
		for (njvdmiq = 72; njvdmiq > 0; njvdmiq--) {
			continue;
		}
	}
	if (false != false) {
		int psyhycxbz;
		for (psyhycxbz = 73; psyhycxbz > 0; psyhycxbz--) {
			continue;
		}
	}
	return false;
}

bool sauxjkj::opurwviuvdwyn(string nviyyejfrod, int ybeiojkfvvta, double ypehk, string rqpedpcrbb, double kkvqqomkb, int tybdgftdh, bool rtjepiunhqzck, bool rejkpwkrlbwwdp) {
	string dhjvxuwgzg = "xrktqqugpotj";
	string goejos = "fueyvfqzyrbnlyokpkvjdtydjioviluaovdazxwfgcahudzshojdlmjosqyvnpqcuw";
	string wgpjbi = "qbyqqhxwifnuowadacqibvsvflzzjdivetsvdhbzdbmksfghr";
	bool hkxfgkt = false;
	int pzyawudng = 6362;
	string pfiggmcwy = "dncxcyfknqcsvo";
	bool ymlwxsthxssak = false;
	bool myxikmfymraivx = false;
	string tvkgsnnmdrzek = "nahyucaut";
	return true;
}

void sauxjkj::annuorhmcoujqqpxvst(int qvxcqsrhmftuhe) {
	bool mhjywirl = false;
	int bqshmqwnlptd = 2307;
	int eepnnfw = 1624;
	string eidpvgcc = "vremndijrfclgqy";
	if (2307 != 2307) {
		int kbmtrmvz;
		for (kbmtrmvz = 44; kbmtrmvz > 0; kbmtrmvz--) {
			continue;
		}
	}
	if (1624 == 1624) {
		int hhttfikzqq;
		for (hhttfikzqq = 33; hhttfikzqq > 0; hhttfikzqq--) {
			continue;
		}
	}

}

string sauxjkj::uxlxupstggmlpopfxs(bool ulcdgitgormp, int esaimdiqwm) {
	string pwdosdb = "jccyvevvlpbfkeymccapitqqhfppojezjebjoeyrgcayrtvrpomngdquiklacicqxkqvi";
	bool vvtvicaejf = true;
	string mgipyez = "ubojysmswcujietecbaekoyxvhcyrvpivwnubcloswqvvtzzqqgrvzymucc";
	string tkoojiai = "yujmwbpcdwam";
	int mvrddewpiyzgl = 3924;
	bool cgrpkuachpvfr = false;
	int dbloahsswu = 1956;
	if (true == true) {
		int cscnkfsc;
		for (cscnkfsc = 57; cscnkfsc > 0; cscnkfsc--) {
			continue;
		}
	}
	if (string("jccyvevvlpbfkeymccapitqqhfppojezjebjoeyrgcayrtvrpomngdquiklacicqxkqvi") != string("jccyvevvlpbfkeymccapitqqhfppojezjebjoeyrgcayrtvrpomngdquiklacicqxkqvi")) {
		int hababpfydr;
		for (hababpfydr = 39; hababpfydr > 0; hababpfydr--) {
			continue;
		}
	}
	if (string("yujmwbpcdwam") != string("yujmwbpcdwam")) {
		int xqeodwjdat;
		for (xqeodwjdat = 27; xqeodwjdat > 0; xqeodwjdat--) {
			continue;
		}
	}
	if (false != false) {
		int ze;
		for (ze = 57; ze > 0; ze--) {
			continue;
		}
	}
	if (3924 == 3924) {
		int elork;
		for (elork = 53; elork > 0; elork--) {
			continue;
		}
	}
	return string("xupakoykaozlozfim");
}

string sauxjkj::xmfugqdfombmzsosfpk(int oozwdse, string fzioacasyaeoegj) {
	string rhgoemqv = "yjujyyqyalnzzgmjtbgveahqkgokvbn";
	if (string("yjujyyqyalnzzgmjtbgveahqkgokvbn") == string("yjujyyqyalnzzgmjtbgveahqkgokvbn")) {
		int khlwn;
		for (khlwn = 33; khlwn > 0; khlwn--) {
			continue;
		}
	}
	if (string("yjujyyqyalnzzgmjtbgveahqkgokvbn") != string("yjujyyqyalnzzgmjtbgveahqkgokvbn")) {
		int xq;
		for (xq = 86; xq > 0; xq--) {
			continue;
		}
	}
	return string("aebzo");
}

string sauxjkj::croympqcvskayulivazsyne(int povihlk, bool dkwovrnzo) {
	int lmrhsuepihmqw = 2766;
	bool eihtxyzvsnfkaue = true;
	string dzqovzkfc = "kbiqrafopfaksxfyufawscnuypxqmjfmpskgtzfatloviqwfqehyyesualldisl";
	int akobzirrsbcandr = 2089;
	int encfwgbsgjlb = 2852;
	string tcjnracyzsshrct = "zxygepmphmjkcihrqyyqjdjhoyimqreeedykrbsxgdajfgeyuiuxncx";
	double mkyvp = 11845;
	if (string("zxygepmphmjkcihrqyyqjdjhoyimqreeedykrbsxgdajfgeyuiuxncx") != string("zxygepmphmjkcihrqyyqjdjhoyimqreeedykrbsxgdajfgeyuiuxncx")) {
		int szwq;
		for (szwq = 78; szwq > 0; szwq--) {
			continue;
		}
	}
	if (2766 != 2766) {
		int in;
		for (in = 96; in > 0; in--) {
			continue;
		}
	}
	return string("obj");
}

int sauxjkj::iylsmmxbjmyosdv(string hhevsmrtn, bool rptvnyykb, double jtxlbcgsozq, double ioihposwgtnzjl) {
	return 55989;
}

int sauxjkj::qlzsoarsjbzgiz(int mcdous, int djiqkiiaqpw, string gaofuelsu) {
	double zfcputdibphwy = 25281;
	bool wrmsqqpphgsojxu = false;
	int vnnragjuvotg = 818;
	int alrgb = 592;
	double uruipt = 69089;
	string owwsiylfwotouns = "muqibvtlsgxkjvmhxcpwagakwqbdvsymcrnpqijavwvgmbnmzktijfqtntsuihxbfxdatgsvdrszadywm";
	string zldspnjxkqbz = "rlex";
	string bnylyw = "nuphffwnqabrqvvytvqihgxzixt";
	string kgfmgjrza = "wqdlvfhkmoblagzazodtsbakttcnuktpafkmkevzoqnudhszyxjbtvfdwnxgdp";
	if (818 == 818) {
		int yp;
		for (yp = 86; yp > 0; yp--) {
			continue;
		}
	}
	return 57511;
}

double sauxjkj::kbozycejcrnsrjmmjvetghh() {
	string egzhzpmpr = "hgysfwisddqhykdqqwxkbsfrbacpjkeignemlxuzdvxdpixldbykxdkfvbcvi";
	if (string("hgysfwisddqhykdqqwxkbsfrbacpjkeignemlxuzdvxdpixldbykxdkfvbcvi") != string("hgysfwisddqhykdqqwxkbsfrbacpjkeignemlxuzdvxdpixldbykxdkfvbcvi")) {
		int bsubwlxhnp;
		for (bsubwlxhnp = 87; bsubwlxhnp > 0; bsubwlxhnp--) {
			continue;
		}
	}
	return 45807;
}

void sauxjkj::hbphwmanzdpxngdosbrguxf(bool wioohsdueqdqopq, int uwfqlnmouelxp, string brhdgmz, int rhedldqabeh, int blgew, int kzavq, bool tnghukhpnfb, bool gwswwizufi) {
	int peewmyrgzolkc = 3549;
	int zftrqozzkftswj = 2719;
	if (3549 != 3549) {
		int busbn;
		for (busbn = 50; busbn > 0; busbn--) {
			continue;
		}
	}
	if (2719 != 2719) {
		int su;
		for (su = 70; su > 0; su--) {
			continue;
		}
	}
	if (2719 != 2719) {
		int mjpzvo;
		for (mjpzvo = 55; mjpzvo > 0; mjpzvo--) {
			continue;
		}
	}

}

int sauxjkj::jcngwmvvawuztams(int oubipekabdo, double oxwighesglpfjl, bool nbixzmbk, double nefbmsygrgir, int ucnculvmlflemy, string txagfhlu, string hrsib) {
	double nzvzxbvkqevq = 16684;
	string ptrwahhohafvh = "xzhmcqzxqytsafesdswlzpxtrfdrzxiljupjcocjjrjsniepfzwdioyhfot";
	bool udiuexcgeocsdt = false;
	int kbkhvpaxnmidahu = 2866;
	bool cmpaekz = false;
	bool mkckxfjm = false;
	int exisuygztt = 958;
	int ixmtshae = 4140;
	if (958 == 958) {
		int diirerlanl;
		for (diirerlanl = 1; diirerlanl > 0; diirerlanl--) {
			continue;
		}
	}
	return 69208;
}

void sauxjkj::pppfeqfbdynhywhphjobfmswc(string xpkknagj, bool mtxqz, double dvfkw, bool qhiis, int nefqwveafmevrb, string wqohubfcyc, string khsxidwaqka, double vvnrwppxgiaw, bool slcwi, string tfzyxyppbmfzu) {
	string msynh = "hlpotjooouepkeqjlicqfphoakrhktawpakdmiljgunaikzfxjsix";
	bool krqqmdnmpupfv = true;
	bool ogvspyqvuiqb = true;
	int sjckeuhiklmct = 159;
	bool wdemqpeqmxrvsr = true;
	bool hiljmw = false;
	if (159 != 159) {
		int yltudj;
		for (yltudj = 3; yltudj > 0; yltudj--) {
			continue;
		}
	}
	if (true != true) {
		int wadrjixl;
		for (wadrjixl = 12; wadrjixl > 0; wadrjixl--) {
			continue;
		}
	}

}

double sauxjkj::dxbnljyvzx(int wxdtsvprxdmxcv, double ggeuz) {
	string xrssembdilgznd = "lajvvf";
	double pwsdkwhx = 63548;
	bool navangdxgczoh = false;
	double vqzgvgvukjsctw = 30933;
	int wesglzp = 508;
	string ccqkbixndvwtusx = "riybakugocpkabcairsxqlvshasmqbybdnrmcvfogcrsclrhhtkstadzdrwpcxgxkg";
	if (508 != 508) {
		int euuhhkdsk;
		for (euuhhkdsk = 62; euuhhkdsk > 0; euuhhkdsk--) {
			continue;
		}
	}
	if (63548 == 63548) {
		int vtlu;
		for (vtlu = 1; vtlu > 0; vtlu--) {
			continue;
		}
	}
	if (63548 != 63548) {
		int rchtby;
		for (rchtby = 14; rchtby > 0; rchtby--) {
			continue;
		}
	}
	return 21179;
}

string sauxjkj::knxuvygxckodhsao(bool tjlxcxazaoll, int booduwprgwibvl, int athqipqidcrdwb, int botfueyekpttr, int dujek, double xenjthmkp, bool koqvxcocdyrxcd) {
	string augcvzqjporvdb = "xrpdrqixchqrovumaeo";
	string oahyrpfmh = "vrnusjbfuoqvhkxqvhfoofdgnweyxomaouwxulweldsweolxcqiipwhqgzdwmjacblfnlqvcjvrb";
	int aeefuftir = 6570;
	string mhxcakj = "xnqobewnjscmuslnphzzcdsdmwbeidkiekojqxutjcqcncwl";
	int jjwsgkpz = 779;
	if (string("xrpdrqixchqrovumaeo") != string("xrpdrqixchqrovumaeo")) {
		int bzczyfdlj;
		for (bzczyfdlj = 1; bzczyfdlj > 0; bzczyfdlj--) {
			continue;
		}
	}
	if (string("xnqobewnjscmuslnphzzcdsdmwbeidkiekojqxutjcqcncwl") != string("xnqobewnjscmuslnphzzcdsdmwbeidkiekojqxutjcqcncwl")) {
		int csl;
		for (csl = 28; csl > 0; csl--) {
			continue;
		}
	}
	if (string("xnqobewnjscmuslnphzzcdsdmwbeidkiekojqxutjcqcncwl") == string("xnqobewnjscmuslnphzzcdsdmwbeidkiekojqxutjcqcncwl")) {
		int vkju;
		for (vkju = 37; vkju > 0; vkju--) {
			continue;
		}
	}
	if (string("xnqobewnjscmuslnphzzcdsdmwbeidkiekojqxutjcqcncwl") != string("xnqobewnjscmuslnphzzcdsdmwbeidkiekojqxutjcqcncwl")) {
		int dcd;
		for (dcd = 42; dcd > 0; dcd--) {
			continue;
		}
	}
	return string("chofjeazgshxkuram");
}

void sauxjkj::cjkhkarnvlifrtvce(double kcfewdnlsghm, bool pqipymkvnpjfdhd, bool vcfhisuz, string bswsvmrxylo, string ddawmniosgcankt, double hmxahlwqswirf, string lagqtwynhbo, string pibahzewvzlvqwn, double nlqzaafpdmi, bool hieqet) {
	double mapvuxveuwykfxt = 26791;
	double gxyecjjotdshjx = 39678;
	bool nvceach = true;
	double tjwztwxz = 18835;
	string yxxfips = "s";
	double mbdxe = 2295;
	bool ofbomvrm = true;
	double jdhhpruztbn = 210;
	if (26791 == 26791) {
		int fgfcryes;
		for (fgfcryes = 21; fgfcryes > 0; fgfcryes--) {
			continue;
		}
	}
	if (210 == 210) {
		int ironu;
		for (ironu = 83; ironu > 0; ironu--) {
			continue;
		}
	}

}

string sauxjkj::zqfazmlvktuiuxr(string hdbnorzxwyinypn, int ifkambomilip, int voynnwzpxi) {
	string xkptl = "isdgzsgulfoedynarrtbllwjuo";
	double jlkoqltu = 47721;
	bool puflrlxe = true;
	int gggexy = 2811;
	bool jgxnc = true;
	if (true == true) {
		int ybrxztxqv;
		for (ybrxztxqv = 88; ybrxztxqv > 0; ybrxztxqv--) {
			continue;
		}
	}
	if (true == true) {
		int pphtpmjgok;
		for (pphtpmjgok = 62; pphtpmjgok > 0; pphtpmjgok--) {
			continue;
		}
	}
	if (true != true) {
		int acdigclvnj;
		for (acdigclvnj = 99; acdigclvnj > 0; acdigclvnj--) {
			continue;
		}
	}
	return string("oqrwytkqqnwrme");
}

double sauxjkj::ayluzfcfwxw(double zrkftjszoojc, double kxmids, string cpwpsoieqiuq, bool uelytdjmql, int vrhkjr, bool hyfvdiin, double kxxhzwwpkokj, double oipya) {
	double ofasvsbhxwarng = 21390;
	double bphztxta = 225;
	bool dsgahav = true;
	int zfejivvyl = 106;
	bool ojqytemlq = false;
	string tkccolxkkva = "tvwwzbbsmbqxlsnavdcckpmtyrwshuyybwqyjrpuyfxttwrfwgadzcknkrmropkppvjlwmyxlnkhnycuezbrcdxi";
	if (string("tvwwzbbsmbqxlsnavdcckpmtyrwshuyybwqyjrpuyfxttwrfwgadzcknkrmropkppvjlwmyxlnkhnycuezbrcdxi") == string("tvwwzbbsmbqxlsnavdcckpmtyrwshuyybwqyjrpuyfxttwrfwgadzcknkrmropkppvjlwmyxlnkhnycuezbrcdxi")) {
		int ipv;
		for (ipv = 65; ipv > 0; ipv--) {
			continue;
		}
	}
	return 21477;
}

bool sauxjkj::sfqseivdtjzcqbzs() {
	double qfgdhdko = 3564;
	double fnonuo = 36668;
	string imvidkyr = "jbydvrldxljqocoyfi";
	bool dsnjoal = true;
	if (true == true) {
		int qhf;
		for (qhf = 55; qhf > 0; qhf--) {
			continue;
		}
	}
	if (true != true) {
		int xrhpc;
		for (xrhpc = 16; xrhpc > 0; xrhpc--) {
			continue;
		}
	}
	if (string("jbydvrldxljqocoyfi") == string("jbydvrldxljqocoyfi")) {
		int jgoicsl;
		for (jgoicsl = 43; jgoicsl > 0; jgoicsl--) {
			continue;
		}
	}
	if (string("jbydvrldxljqocoyfi") != string("jbydvrldxljqocoyfi")) {
		int clmqlhw;
		for (clmqlhw = 24; clmqlhw > 0; clmqlhw--) {
			continue;
		}
	}
	if (true == true) {
		int otzd;
		for (otzd = 29; otzd > 0; otzd--) {
			continue;
		}
	}
	return false;
}

string sauxjkj::hrdtbeisblcjsskrmpuecbt(string lyelutpiksvta, double nicqdhb, bool vivnqlt, bool wvixucgnesy, int yydasv, int ilxqrpjzk, bool huqsjsmobdxbt) {
	bool diefdkylq = false;
	string usvflqpsv = "tenhqrlclphxuwifrniftjumqcauhnofdvzmthdsxykuiwrndaohauuan";
	bool ydgiwighvg = true;
	bool ywfwdmi = false;
	double ouhmadfvpjeopci = 70194;
	int jqcrrfjlgtdpfsf = 91;
	bool ezklla = true;
	double pxlovqvxgjnwqh = 60318;
	return string("oywxewjgrb");
}

double sauxjkj::qsyvapntrtchzlsnlfen(int zyhywocuepgdnoe, double vvckmcqhm, int gwgdudqknjicvi) {
	return 64519;
}

void sauxjkj::pvllyahpynyszcpazm(string dzyqvmak, int blvdtkgluwoe, string nlexox, bool bktztlagxabu, string adesqt, int gerds, string leizrvjbmzrnrkh, bool ufboeigomyxjp) {

}

double sauxjkj::dikyztgwmyjupzdfgg(string dnwsprdyps, int chryuc, bool eglsuo, double ntnaketmccswhgk, string tbbdvpoyotrvy) {
	double eltcdndvbiuf = 20309;
	double paesjzhzhdmhix = 33399;
	bool mjmojcdvd = true;
	string dbzgzzajlfujb = "ngisxjclzmcyghovyeqppokyvskzowpvoa";
	if (true == true) {
		int kxugfndex;
		for (kxugfndex = 11; kxugfndex > 0; kxugfndex--) {
			continue;
		}
	}
	if (true != true) {
		int knhnm;
		for (knhnm = 53; knhnm > 0; knhnm--) {
			continue;
		}
	}
	return 13905;
}

int sauxjkj::qppumdchdrbdkfurstfp(double wzhwithwknyseqk, string akjwdk) {
	string tagxkkem = "ayyubsvhbaqeyjnwporzpubnomjcflrdxndh";
	int byspgvx = 873;
	string hymrfobjqce = "aovnlzupxjhofnkrtagizrijjsrsojkeceslkyegrbxyxostvjxjvjswigieuryzmdmhhpaordbyqkzxkrlnsyfjx";
	double gquawwxtmnhyc = 44792;
	if (string("aovnlzupxjhofnkrtagizrijjsrsojkeceslkyegrbxyxostvjxjvjswigieuryzmdmhhpaordbyqkzxkrlnsyfjx") == string("aovnlzupxjhofnkrtagizrijjsrsojkeceslkyegrbxyxostvjxjvjswigieuryzmdmhhpaordbyqkzxkrlnsyfjx")) {
		int dwbkfn;
		for (dwbkfn = 2; dwbkfn > 0; dwbkfn--) {
			continue;
		}
	}
	if (string("aovnlzupxjhofnkrtagizrijjsrsojkeceslkyegrbxyxostvjxjvjswigieuryzmdmhhpaordbyqkzxkrlnsyfjx") == string("aovnlzupxjhofnkrtagizrijjsrsojkeceslkyegrbxyxostvjxjvjswigieuryzmdmhhpaordbyqkzxkrlnsyfjx")) {
		int xpxrca;
		for (xpxrca = 96; xpxrca > 0; xpxrca--) {
			continue;
		}
	}
	if (44792 == 44792) {
		int gtijpyxtx;
		for (gtijpyxtx = 63; gtijpyxtx > 0; gtijpyxtx--) {
			continue;
		}
	}
	if (873 == 873) {
		int gqeeuv;
		for (gqeeuv = 13; gqeeuv > 0; gqeeuv--) {
			continue;
		}
	}
	return 74261;
}

string sauxjkj::jmjyytoowmdgprfvxrismnkj(double khudxibxpgfjnm, bool umikyz, bool zaeffrhbgfe, bool pfrpuvqsj, int fkgmfecpn) {
	bool lfdgzwheor = false;
	string soqckgppdsatqc = "lrvrpykksaxzf";
	bool hyglzrarot = true;
	bool zshcfrsvnieup = false;
	if (false == false) {
		int jieayaqa;
		for (jieayaqa = 92; jieayaqa > 0; jieayaqa--) {
			continue;
		}
	}
	if (string("lrvrpykksaxzf") != string("lrvrpykksaxzf")) {
		int kteznyvog;
		for (kteznyvog = 50; kteznyvog > 0; kteznyvog--) {
			continue;
		}
	}
	return string("nqwkzfmkcpxvpcwtl");
}

sauxjkj::sauxjkj() {
	this->zqfazmlvktuiuxr(string("et"), 2748, 2649);
	this->ayluzfcfwxw(2527, 16906, string(""), false, 1912, true, 13817, 46005);
	this->sfqseivdtjzcqbzs();
	this->hrdtbeisblcjsskrmpuecbt(string("psqbsheqjclbdbflqovciznvkjmfpacytdbtnfbtgnwopqfowznpnvtlmsdpltouwdoafybsyfhuznfdebwfwemnwzgayhfpp"), 17770, true, false, 4375, 1379, false);
	this->qsyvapntrtchzlsnlfen(243, 15919, 1889);
	this->pvllyahpynyszcpazm(string("ytr"), 4601, string("shblymkeyjkbodgtsswnzfrxhnsvqonobszb"), false, string("bjckpwaprfucjdygydzifvqhovsyehgiumzdxobdwodqmnahgovjr"), 1602, string("nomum"), false);
	this->dikyztgwmyjupzdfgg(string("mewlxfeymvsatvpprtiplpspzqfazhulssswvlajxvoiwmwtcgflljsithpaiqxovudpfcheupypdxvriwkmpsuwu"), 2330, true, 62491, string("mclisaejtjlllvggjcociwbiljigncjvtkyxqpphoznrwqswzymrwdjkrnygbufkodzu"));
	this->qppumdchdrbdkfurstfp(71887, string("iccvbgwixhsrauvdokjqddrsfmgtojzmvzcolmstcqsqtlflnuasafldqqsamgcbibvaqrwpvibzgurtyef"));
	this->jmjyytoowmdgprfvxrismnkj(56810, false, false, true, 1578);
	this->croympqcvskayulivazsyne(4636, true);
	this->iylsmmxbjmyosdv(string("djcuojlethlfd"), true, 22099, 43671);
	this->qlzsoarsjbzgiz(5330, 7342, string("mtxfjrwyfjbhbnmfgnoynwmzazahkhpk"));
	this->kbozycejcrnsrjmmjvetghh();
	this->hbphwmanzdpxngdosbrguxf(true, 960, string("lqwsczekemhkofauztqyiysfmjisrwb"), 822, 2990, 195, false, true);
	this->jcngwmvvawuztams(971, 13231, false, 26048, 7113, string("mrmpwmfsqsvysmrjmunwibtijojifjxmmuzq"), string("idwmfxbymzdwuupflrrvhzwwsbgyllkffqhklgpzwfhsgnhrswmkklprliffoambtfyyzgcmgwshpdomzxpgdprpowaavbpm"));
	this->pppfeqfbdynhywhphjobfmswc(string("eejgglxrkjlqknndnxidxbjptbdyhsbbcjldqymozkoxaqudydaidchjyxukqnafzgllywustayzaakkndjid"), false, 31294, false, 458, string("expdfqrfelotjtrmxscvydcfhjhyczywqibfkns"), string("ouymbntwr"), 12698, true, string("pjntmzmxhhksxxiucegbtkywecfmfrsqwcstknhwwetrvvhsuejalzmanfdeppwynmzdysdhoyormbtveajvlir"));
	this->dxbnljyvzx(2101, 74938);
	this->knxuvygxckodhsao(true, 7489, 1719, 680, 1342, 24297, true);
	this->cjkhkarnvlifrtvce(16645, false, false, string("jiapnetyzubwtnvuyjxbltgmzltlvxvwbggxktriuuocuwjvlnfousfyqfjziwaczyeowidzoadjvnpgfhywcefp"), string("zliarcwmhix"), 25451, string("jkwymotzxinycwxvymkgurkxnqupmckgkubyiwlhjqitohzjuerstw"), string("gkwcqtyupdvpgmmahaccllvyqdkmekvkkhvopafrmeeijaokdnsqhbupgictiwmavwwgugzuhhbnztll"), 2739, false);
	this->bypmzqvxulvlq(false, true, 5639, string("jntxpkhykmzbizoodfdfjxcqrtdrkhwfwgjijchmfsh"), false, 157, true, 603, 2469, 2500);
	this->hcxccxelgkjxkwwr(false, 14776, 1647, false, string("ywgwkrjyeqospbnivtqvpjxesrxscjl"), 1485, 47615, 397);
	this->ldisvnuuwpiqiycaqf(true, 40, false, string("pjjgmvnicbsndetnrgtnnanovnryjtgslkaqzohohtmxtynzrbfhzjiolfpoppdbjprbuudkiclfkqfebmmdoktg"), 3835, 48272);
	this->wjstzonjae(1696, 31191);
	this->xiplixzzqafjufonyifrzzjq(4420, 11234, string("tyzhbadtvtmftdamrbpndrlpzkuqtduzyjrbrdyhfouuxflqmvuvwuiozim"), 74693, 17117, 212, 3934, true, string("fuhaxbnnlodqeusunvdhqigwhqphjkjhagzfmokzhvcdtrgfnqwtdvpxdhjxivcfzyvtcmrbhzsb"), false);
	this->opurwviuvdwyn(string("gbgwr"), 2788, 17981, string("cpxrkszjsvfnvcovgjslkaghgeszynbdkoapjqeqzilmicoehtdwotknyr"), 39848, 8606, true, true);
	this->annuorhmcoujqqpxvst(7720);
	this->uxlxupstggmlpopfxs(true, 358);
	this->xmfugqdfombmzsosfpk(3319, string("dvjyderggccuahkobzge"));
}

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class jliolxj {
public:
	string ivivdswlz;
	bool icwnyln;
	double njdetey;
	double hoklnrpvxvg;
	jliolxj();
	void albrtomcrlatfgiwznnypha(int uiipqrz, double bhijxlhwsj, int ccquauyxubst, bool mndyxifpwhzblys, int nmseujtbfbv, bool xonvw, int epdijppd);
	double btcsfvmbrpggxw();
	int nwxrmaouqdezml(bool qeilkoky, string yhcge, string odvxcmxhjuof, string gdpwygx, bool xgrhqy, string uuisvkg);
	double qqrfmmjwhqjrlaprtimildmdc(bool ssuagnbht, int nsspnmbdfoucbv, int mnktil);
	string yfaendnvisgdpharerooax(bool aougzvh, double duxnopnpnyhz, string msmyrtd, bool znxgykmwddbuz, double yzeplfniwrsdz, int ofynz, double odectegxzuw);
	double gpfmwmgyuwifhqrqivnjzmk(bool hdewxcquikmy, bool xlbguthisrg, double lxnewbjmfbqwi, string nvoskcl, string mfsaggzm, bool sxkefxvq, string bgmlpwsd, int epyttdc);
	double urdjmcbitfezkocxrz(int vflqhlztedvroqe, string whlmravuhx, bool sanzcrxujzb, bool avgptnlobpigrq, bool jtumyqc, double bzwcgcx, int uefhushjxztsy, int jylrfxxyes);

protected:
	int olknwcfpbptuhp;
	string fgnmzgghkgdrcf;
	double xhraamkfkwedd;

	void ogxinsbewrmfw(int cdtev, string kdzxoxjiza, int rynbktr, double qylko, int gtdwqobpkjti, bool dgenvzoxe, int drofrdidvmq, int gcsedaus, string swswwkphttd, int tpiddzwepqj);
	void rbcfqvpaapmxei(int wxhtncxgpoar, int vhpehpwby, double ojtwltaasshzow, double zsaeibsavl, string qpyolhvvahlrbdr, int cdejswja, int mpvpuoqj, int ytcwyazgv);
	string mgbfsdssfrniazkglxgqnuipv(double vtqhnpawgzmncye, double qsrrovsenmrs, int wsxjcjtu);
	void vuzibndhmfqgzsykiwkgf(double aombdgrtsajo, string jzmqcmsjove, bool mohyfevc, double kbqoyjoj, int rjqiykwn, string apojitmwnmkfvgg, double zpzkvolbyx);
	bool rlagrvbxodzygduprzc(int aodaccuxait, bool bjbaixk, bool zgaupnrymerutob, double agaom, bool lpzvth, string wrqmmqjoniits, int pgzkllmhkqk, string mhrmxxghkftb, string lqliwph);
	string jzhcykjepadqxakve(int oitpwjxwhw, int uizpbjnplbr);
	bool hnbgdrlozrzfffhindmqfiit(double pwwub, string cauutjow, bool cdslmkweviee, string cqppakvxmbnfkh, int kjatcecytf, bool iorinzkobqvp, bool phiprrqcenhzgnv, int naetg);
	void cpehvziauate(string tzgggvmljpz, double wuscpd, int fvpfwdfm, double sgqbfyfamaiqofr, double pyxztrh);
	void tdfmjbsuvpxrlmbnkyalem(int ugovfciyahdwva, double wzxwuotqxabl, double jzsafihhyqrxrb, int zomkppngyoqveg, string wynmkyopqhbbghs, string yamysonfcmhe, int jsfdzsmbbpspil, string trafqgovhccumma, int fdbppuphjbsdb);
	void jsvwfjlkgthslldiacjrwfhj(bool yskysh);

private:
	bool gcunrbjcwkmtqii;
	double uywwkwnpvt;

	string xqxdfaolkeigwwqzldbhat(int udonflhwdfugr, bool ppsapbhmiurvw, double jkriqtv, string yiargjcitln, double ytgkdxgny, int gdfvmrscuap, bool xeghjtkk, double dteny, double acjaiynxgfat, int pljgp);

};


string jliolxj::xqxdfaolkeigwwqzldbhat(int udonflhwdfugr, bool ppsapbhmiurvw, double jkriqtv, string yiargjcitln, double ytgkdxgny, int gdfvmrscuap, bool xeghjtkk, double dteny, double acjaiynxgfat, int pljgp) {
	double xrzqvgrrd = 35511;
	string kryarpzcgbq = "hkmhyrerunvvmjxbgnpzkzfqxiyrpvvapgfdrsqkgmomfhkavcdmipnlmgammhrvgmg";
	bool tmxvzneeayfdop = true;
	int flytknel = 1686;
	int iugninqjvewmusz = 4244;
	bool lrfyiqm = true;
	bool bkwpgjge = true;
	int rxfkannc = 1428;
	bool wnlaf = false;
	if (true != true) {
		int yalkhi;
		for (yalkhi = 24; yalkhi > 0; yalkhi--) {
			continue;
		}
	}
	if (false == false) {
		int mpadvrytxe;
		for (mpadvrytxe = 30; mpadvrytxe > 0; mpadvrytxe--) {
			continue;
		}
	}
	if (35511 != 35511) {
		int oiixatbhmu;
		for (oiixatbhmu = 9; oiixatbhmu > 0; oiixatbhmu--) {
			continue;
		}
	}
	if (4244 != 4244) {
		int ilb;
		for (ilb = 86; ilb > 0; ilb--) {
			continue;
		}
	}
	if (4244 == 4244) {
		int czgi;
		for (czgi = 43; czgi > 0; czgi--) {
			continue;
		}
	}
	return string("lsecidnktaspamixza");
}

void jliolxj::ogxinsbewrmfw(int cdtev, string kdzxoxjiza, int rynbktr, double qylko, int gtdwqobpkjti, bool dgenvzoxe, int drofrdidvmq, int gcsedaus, string swswwkphttd, int tpiddzwepqj) {
	string gxlzjcxflsjwsg = "cxgcettbtycqeeuoauyza";
	double vulfwdbblspvveo = 31514;
	string vlmiftlzkymo = "qdlqrojniwruplxdiuilynonzmvtgqhuxvsscmreqdqipgbownrunfrrxxgepfwjrjknxlqxtkxmcxnecvxzdtdwmzd";
	string mheexxcpguucpv = "lkkveyhowmdw";
	int hviooyjjajps = 140;
	bool pokhj = false;
	double ifcedtynesfax = 41102;
	double lpdqfspbboxzlqr = 26561;
	if (41102 == 41102) {
		int ejcnywt;
		for (ejcnywt = 18; ejcnywt > 0; ejcnywt--) {
			continue;
		}
	}
	if (31514 != 31514) {
		int eyulogp;
		for (eyulogp = 96; eyulogp > 0; eyulogp--) {
			continue;
		}
	}
	if (26561 != 26561) {
		int wzv;
		for (wzv = 26; wzv > 0; wzv--) {
			continue;
		}
	}
	if (41102 != 41102) {
		int fhev;
		for (fhev = 66; fhev > 0; fhev--) {
			continue;
		}
	}
	if (string("cxgcettbtycqeeuoauyza") == string("cxgcettbtycqeeuoauyza")) {
		int chmbqn;
		for (chmbqn = 12; chmbqn > 0; chmbqn--) {
			continue;
		}
	}

}

void jliolxj::rbcfqvpaapmxei(int wxhtncxgpoar, int vhpehpwby, double ojtwltaasshzow, double zsaeibsavl, string qpyolhvvahlrbdr, int cdejswja, int mpvpuoqj, int ytcwyazgv) {
	bool ropakb = true;
	string dzjfdskgytjmx = "hpbrjesoniypypiemclemwqixte";
	double wadbtovyi = 25626;
	if (string("hpbrjesoniypypiemclemwqixte") == string("hpbrjesoniypypiemclemwqixte")) {
		int myhygeqr;
		for (myhygeqr = 78; myhygeqr > 0; myhygeqr--) {
			continue;
		}
	}
	if (25626 != 25626) {
		int grprl;
		for (grprl = 14; grprl > 0; grprl--) {
			continue;
		}
	}

}

string jliolxj::mgbfsdssfrniazkglxgqnuipv(double vtqhnpawgzmncye, double qsrrovsenmrs, int wsxjcjtu) {
	double ttsxnunoxlmkewm = 24870;
	string mrxjvccla = "bsmhvdjcxhtcllkotbsdkxaevrxbdibsvieojmavyhitcvhv";
	int jajlqtibjp = 616;
	bool urfchdhl = true;
	int fdhylcbfbylobij = 2840;
	int pscbzatttfly = 2077;
	string afczchf = "xrrtwgarlmlwrboofopbzbslxwwmjraresvasdtjzcentlreckfrkdyfgfztakawsjprymjmfaemzrcikz";
	if (616 != 616) {
		int edy;
		for (edy = 81; edy > 0; edy--) {
			continue;
		}
	}
	if (true == true) {
		int hm;
		for (hm = 34; hm > 0; hm--) {
			continue;
		}
	}
	if (24870 != 24870) {
		int mzcclo;
		for (mzcclo = 17; mzcclo > 0; mzcclo--) {
			continue;
		}
	}
	if (24870 == 24870) {
		int uthvb;
		for (uthvb = 15; uthvb > 0; uthvb--) {
			continue;
		}
	}
	if (true != true) {
		int rxtxhd;
		for (rxtxhd = 45; rxtxhd > 0; rxtxhd--) {
			continue;
		}
	}
	return string("");
}

void jliolxj::vuzibndhmfqgzsykiwkgf(double aombdgrtsajo, string jzmqcmsjove, bool mohyfevc, double kbqoyjoj, int rjqiykwn, string apojitmwnmkfvgg, double zpzkvolbyx) {
	double iffyfgwxaqc = 31258;
	double jzovnrs = 41215;
	double ibtqdvmtivz = 70035;
	if (70035 == 70035) {
		int ffceeqccmc;
		for (ffceeqccmc = 74; ffceeqccmc > 0; ffceeqccmc--) {
			continue;
		}
	}
	if (70035 != 70035) {
		int xxug;
		for (xxug = 74; xxug > 0; xxug--) {
			continue;
		}
	}

}

bool jliolxj::rlagrvbxodzygduprzc(int aodaccuxait, bool bjbaixk, bool zgaupnrymerutob, double agaom, bool lpzvth, string wrqmmqjoniits, int pgzkllmhkqk, string mhrmxxghkftb, string lqliwph) {
	double ajyxtoek = 28726;
	string tyagivchebjuma = "dovoxywrroiwstfmqdfybyifjojupizdybjbr";
	string cghadtzwj = "ytzoicsdtlqliubecrsvels";
	bool aozyxit = false;
	int tszfnbus = 3682;
	double nfmpxtgtfzyuk = 7788;
	if (string("dovoxywrroiwstfmqdfybyifjojupizdybjbr") == string("dovoxywrroiwstfmqdfybyifjojupizdybjbr")) {
		int btnvglclt;
		for (btnvglclt = 15; btnvglclt > 0; btnvglclt--) {
			continue;
		}
	}
	if (3682 == 3682) {
		int ilqoqd;
		for (ilqoqd = 56; ilqoqd > 0; ilqoqd--) {
			continue;
		}
	}
	if (28726 == 28726) {
		int hpcmajrhx;
		for (hpcmajrhx = 57; hpcmajrhx > 0; hpcmajrhx--) {
			continue;
		}
	}
	if (28726 == 28726) {
		int pjh;
		for (pjh = 63; pjh > 0; pjh--) {
			continue;
		}
	}
	if (string("ytzoicsdtlqliubecrsvels") == string("ytzoicsdtlqliubecrsvels")) {
		int kovqpdhvp;
		for (kovqpdhvp = 9; kovqpdhvp > 0; kovqpdhvp--) {
			continue;
		}
	}
	return true;
}

string jliolxj::jzhcykjepadqxakve(int oitpwjxwhw, int uizpbjnplbr) {
	string epdgbyrkg = "ciwjmmalijtcrdygxrzzcggydzdtuxvwvnknshcbzfksnyogekhmld";
	string urxtoidnrk = "diinsihjqzafnvsjdtybnyyctvcxq";
	int frduuekbnosewu = 5418;
	double pgrgsvapmikjxwq = 68007;
	bool wzcxozxak = false;
	int ekcyvzrfuvv = 1233;
	bool aokgknpzarmxjog = false;
	double veaemgyhirx = 14773;
	double ylgns = 49199;
	if (5418 == 5418) {
		int cm;
		for (cm = 50; cm > 0; cm--) {
			continue;
		}
	}
	if (14773 != 14773) {
		int wkvyyojpgk;
		for (wkvyyojpgk = 10; wkvyyojpgk > 0; wkvyyojpgk--) {
			continue;
		}
	}
	if (1233 == 1233) {
		int oj;
		for (oj = 61; oj > 0; oj--) {
			continue;
		}
	}
	return string("qymrfkvvzypjicaz");
}

bool jliolxj::hnbgdrlozrzfffhindmqfiit(double pwwub, string cauutjow, bool cdslmkweviee, string cqppakvxmbnfkh, int kjatcecytf, bool iorinzkobqvp, bool phiprrqcenhzgnv, int naetg) {
	double xlrvdakudgif = 25446;
	double tvwnjryrpzjk = 7110;
	int jxulibicrq = 4291;
	bool fktkleyoynjoox = false;
	bool wdmdqyxnh = true;
	int xfzskkoitqtq = 5186;
	int hzimkvafpjj = 4722;
	int loezedw = 3029;
	string qmjznbyqrssfd = "pqwxbx";
	if (3029 == 3029) {
		int izd;
		for (izd = 37; izd > 0; izd--) {
			continue;
		}
	}
	return false;
}

void jliolxj::cpehvziauate(string tzgggvmljpz, double wuscpd, int fvpfwdfm, double sgqbfyfamaiqofr, double pyxztrh) {
	int gyklpdxxxcqq = 3699;
	bool pewmuhfa = true;
	bool bsxigrt = true;
	bool tvlxljv = true;
	bool qhanhvekufdgpg = true;
	int pcgwyagx = 2923;
	double yyvyuqgxrrxiaew = 32737;
	if (true == true) {
		int xsymvnzfzl;
		for (xsymvnzfzl = 98; xsymvnzfzl > 0; xsymvnzfzl--) {
			continue;
		}
	}
	if (true == true) {
		int jzybm;
		for (jzybm = 32; jzybm > 0; jzybm--) {
			continue;
		}
	}

}

void jliolxj::tdfmjbsuvpxrlmbnkyalem(int ugovfciyahdwva, double wzxwuotqxabl, double jzsafihhyqrxrb, int zomkppngyoqveg, string wynmkyopqhbbghs, string yamysonfcmhe, int jsfdzsmbbpspil, string trafqgovhccumma, int fdbppuphjbsdb) {
	int ymjejj = 4840;
	int btbcnasnvtwcl = 2024;
	double gecar = 42933;
	int cdxqlsodabk = 1138;
	bool gspiduortjlk = false;
	int zpprkk = 3316;
	double kvbfbkye = 10577;
	if (4840 == 4840) {
		int bduqhhylu;
		for (bduqhhylu = 9; bduqhhylu > 0; bduqhhylu--) {
			continue;
		}
	}
	if (4840 != 4840) {
		int ky;
		for (ky = 32; ky > 0; ky--) {
			continue;
		}
	}

}

void jliolxj::jsvwfjlkgthslldiacjrwfhj(bool yskysh) {
	string nzurpeipetlesw = "ziaenmopqcrezojeuhxjmyxenqntudkgbgcrbtgfxmwxjjuoactgvwzzx";
	int zcgvduvbwadraqk = 3789;
	int cnfhqxouoy = 2470;
	double sygnwhp = 31253;
	bool ohyfoyxxwqx = false;
	bool ncbuqcb = true;
	bool vyotaloxcboly = true;
	int unkblsg = 2805;
	bool tljbjoya = true;
	double oifmuoeckquaetb = 13235;
	if (string("ziaenmopqcrezojeuhxjmyxenqntudkgbgcrbtgfxmwxjjuoactgvwzzx") != string("ziaenmopqcrezojeuhxjmyxenqntudkgbgcrbtgfxmwxjjuoactgvwzzx")) {
		int bybh;
		for (bybh = 90; bybh > 0; bybh--) {
			continue;
		}
	}
	if (true != true) {
		int dasqtwn;
		for (dasqtwn = 77; dasqtwn > 0; dasqtwn--) {
			continue;
		}
	}
	if (string("ziaenmopqcrezojeuhxjmyxenqntudkgbgcrbtgfxmwxjjuoactgvwzzx") == string("ziaenmopqcrezojeuhxjmyxenqntudkgbgcrbtgfxmwxjjuoactgvwzzx")) {
		int vzhxubp;
		for (vzhxubp = 29; vzhxubp > 0; vzhxubp--) {
			continue;
		}
	}
	if (true != true) {
		int pg;
		for (pg = 72; pg > 0; pg--) {
			continue;
		}
	}
	if (true != true) {
		int luz;
		for (luz = 12; luz > 0; luz--) {
			continue;
		}
	}

}

void jliolxj::albrtomcrlatfgiwznnypha(int uiipqrz, double bhijxlhwsj, int ccquauyxubst, bool mndyxifpwhzblys, int nmseujtbfbv, bool xonvw, int epdijppd) {
	int bgnxjuapozjjd = 4020;
	int jtfmgbmabkvczc = 1057;
	int iwkmbdnu = 1004;
	string xcsnhqwbcydnw = "fdpzimbvsdohi";
	string urnbudxrvgfbz = "clzsfcxwlivtrhrzdecnkwpqftazgobs";
	int gwkmdzykosty = 2481;
	bool owpzyx = true;
	string huajfguluyja = "wsxfpnyxfgonwhglokhrgqpswjj";
	if (1057 != 1057) {
		int rirk;
		for (rirk = 16; rirk > 0; rirk--) {
			continue;
		}
	}
	if (string("fdpzimbvsdohi") == string("fdpzimbvsdohi")) {
		int hntq;
		for (hntq = 30; hntq > 0; hntq--) {
			continue;
		}
	}

}

double jliolxj::btcsfvmbrpggxw() {
	double yiffet = 20801;
	int lktsps = 7480;
	string woovjo = "lijp";
	string dofvmoj = "lnkwphndloazeerdovffokgxdbqqpkcccocsevfhrkuzxlklpcrdmefkhfhj";
	string agvuwkou = "xkdzvvpgcrttjsmchh";
	if (string("lijp") == string("lijp")) {
		int taawihhbz;
		for (taawihhbz = 75; taawihhbz > 0; taawihhbz--) {
			continue;
		}
	}
	if (string("lnkwphndloazeerdovffokgxdbqqpkcccocsevfhrkuzxlklpcrdmefkhfhj") != string("lnkwphndloazeerdovffokgxdbqqpkcccocsevfhrkuzxlklpcrdmefkhfhj")) {
		int hq;
		for (hq = 18; hq > 0; hq--) {
			continue;
		}
	}
	if (string("lijp") != string("lijp")) {
		int knzokiy;
		for (knzokiy = 53; knzokiy > 0; knzokiy--) {
			continue;
		}
	}
	if (string("lnkwphndloazeerdovffokgxdbqqpkcccocsevfhrkuzxlklpcrdmefkhfhj") == string("lnkwphndloazeerdovffokgxdbqqpkcccocsevfhrkuzxlklpcrdmefkhfhj")) {
		int smtze;
		for (smtze = 79; smtze > 0; smtze--) {
			continue;
		}
	}
	if (20801 == 20801) {
		int ncfzmtvqi;
		for (ncfzmtvqi = 53; ncfzmtvqi > 0; ncfzmtvqi--) {
			continue;
		}
	}
	return 36263;
}

int jliolxj::nwxrmaouqdezml(bool qeilkoky, string yhcge, string odvxcmxhjuof, string gdpwygx, bool xgrhqy, string uuisvkg) {
	string adnjebnipow = "qyzexjuuciknlxxuldpvjbywlzddboppbsuggiusghkthdpbmmkcxtlfj";
	string dbtqpytcin = "dogsxyiqfrvaidwmgldmcvazogmm";
	if (string("qyzexjuuciknlxxuldpvjbywlzddboppbsuggiusghkthdpbmmkcxtlfj") != string("qyzexjuuciknlxxuldpvjbywlzddboppbsuggiusghkthdpbmmkcxtlfj")) {
		int fjzxwqg;
		for (fjzxwqg = 69; fjzxwqg > 0; fjzxwqg--) {
			continue;
		}
	}
	if (string("qyzexjuuciknlxxuldpvjbywlzddboppbsuggiusghkthdpbmmkcxtlfj") == string("qyzexjuuciknlxxuldpvjbywlzddboppbsuggiusghkthdpbmmkcxtlfj")) {
		int vfppwcfjxh;
		for (vfppwcfjxh = 38; vfppwcfjxh > 0; vfppwcfjxh--) {
			continue;
		}
	}
	if (string("dogsxyiqfrvaidwmgldmcvazogmm") != string("dogsxyiqfrvaidwmgldmcvazogmm")) {
		int rnc;
		for (rnc = 44; rnc > 0; rnc--) {
			continue;
		}
	}
	if (string("dogsxyiqfrvaidwmgldmcvazogmm") != string("dogsxyiqfrvaidwmgldmcvazogmm")) {
		int wflst;
		for (wflst = 22; wflst > 0; wflst--) {
			continue;
		}
	}
	if (string("qyzexjuuciknlxxuldpvjbywlzddboppbsuggiusghkthdpbmmkcxtlfj") == string("qyzexjuuciknlxxuldpvjbywlzddboppbsuggiusghkthdpbmmkcxtlfj")) {
		int xfvdz;
		for (xfvdz = 52; xfvdz > 0; xfvdz--) {
			continue;
		}
	}
	return 62986;
}

double jliolxj::qqrfmmjwhqjrlaprtimildmdc(bool ssuagnbht, int nsspnmbdfoucbv, int mnktil) {
	bool zgeko = false;
	string ycwdlvpl = "ijdamxcpavlqyslyhhtvywpnsilpawontqskxypkmpzbgsrhhynzitatvlkdxnasrniraahnghifohxrmmqvxsgzsogmxfenj";
	int otidwypon = 5645;
	bool vdhslxesieo = true;
	bool uyuhhzuuvt = false;
	bool rpmwxqdcrzbqpri = false;
	double wkohysroqcnw = 17935;
	bool kyehatgp = true;
	int jrwauzi = 265;
	bool gdnal = true;
	if (5645 != 5645) {
		int mxrc;
		for (mxrc = 89; mxrc > 0; mxrc--) {
			continue;
		}
	}
	return 83467;
}

string jliolxj::yfaendnvisgdpharerooax(bool aougzvh, double duxnopnpnyhz, string msmyrtd, bool znxgykmwddbuz, double yzeplfniwrsdz, int ofynz, double odectegxzuw) {
	string nohzxnvjiwagrqi = "mtbffpdkciidsgwrymqijwbddthasitxkenqeltqgiwgewsh";
	string reximx = "ahrcnnwlxqfqsezihmjbpdbbyquzycyvpmtflarxfyejxxyzmcrkrfpvymgeleklz";
	bool fisuilkaax = false;
	string wtffzsnfljme = "qeohwfq";
	bool trhxnu = true;
	bool fpohoqeynhgnax = true;
	double dykvlqa = 28301;
	double coyeufaxf = 11242;
	return string("hvzcssuum");
}

double jliolxj::gpfmwmgyuwifhqrqivnjzmk(bool hdewxcquikmy, bool xlbguthisrg, double lxnewbjmfbqwi, string nvoskcl, string mfsaggzm, bool sxkefxvq, string bgmlpwsd, int epyttdc) {
	int zqfqxn = 3511;
	string czuogtxedy = "qoqthkuounqnsgkhljxhpcvhpknpazibzgrvffszbfbfvzvufrksgfuvqlzqwyniuivnyxgcziojm";
	int dhdqegqdxoeh = 1411;
	double qwqnkxlhz = 2315;
	if (1411 != 1411) {
		int kkcc;
		for (kkcc = 38; kkcc > 0; kkcc--) {
			continue;
		}
	}
	if (string("qoqthkuounqnsgkhljxhpcvhpknpazibzgrvffszbfbfvzvufrksgfuvqlzqwyniuivnyxgcziojm") != string("qoqthkuounqnsgkhljxhpcvhpknpazibzgrvffszbfbfvzvufrksgfuvqlzqwyniuivnyxgcziojm")) {
		int ryhpfomhar;
		for (ryhpfomhar = 24; ryhpfomhar > 0; ryhpfomhar--) {
			continue;
		}
	}
	return 93868;
}

double jliolxj::urdjmcbitfezkocxrz(int vflqhlztedvroqe, string whlmravuhx, bool sanzcrxujzb, bool avgptnlobpigrq, bool jtumyqc, double bzwcgcx, int uefhushjxztsy, int jylrfxxyes) {
	bool kiqtzcoawwhvp = false;
	int etxqgijswcyvov = 1352;
	double erlxyzptruovug = 31277;
	if (31277 != 31277) {
		int ngogj;
		for (ngogj = 47; ngogj > 0; ngogj--) {
			continue;
		}
	}
	return 71031;
}

jliolxj::jliolxj() {
	this->albrtomcrlatfgiwznnypha(2295, 21381, 3146, true, 4574, true, 564);
	this->btcsfvmbrpggxw();
	this->nwxrmaouqdezml(false, string("ohglvkoou"), string("wxpntbslepjigqlygimbbqddzcygybebfdpcwfskvqcpxrzbqxrkuyfqefnpwtundhmwhrxnlmrnezsf"), string("pppsnitqlvffugfeebw"), false, string("vymkzsrxybikcmzcxlpaugjdxxrwirhmcxbiryqvguiicumukmtssramtdbxqszmoutddmj"));
	this->qqrfmmjwhqjrlaprtimildmdc(false, 1405, 1344);
	this->yfaendnvisgdpharerooax(true, 84365, string("kpehepwnfgqvpmwbcuwwuswozvtfehksgtunjfyzixgdedsrymafmosubthotnmpuaabqaahkktiknfgapbjcyfyjejesuooiby"), false, 34458, 3577, 40763);
	this->gpfmwmgyuwifhqrqivnjzmk(false, true, 53993, string("dqjcmxfjopsporowzsjkhwnqddqqttbrbryjxhmtmgedhzqzfdlqnxxrzhxsnwucxxu"), string("cpuckysyhsrqoovruftecqvmwvimpkvdyoeittdgobmokfxlrefdyab"), true, string("zzkqqfbm"), 6212);
	this->urdjmcbitfezkocxrz(1104, string("iklommaaqubrwpbixisynqeeutywpjeejtzfaryfilzuozfzgrcgykhw"), true, false, false, 1364, 1067, 950);
	this->ogxinsbewrmfw(1082, string("pisqzeofoiqrvsnk"), 1111, 94392, 1104, true, 540, 8321, string("etujciksmpidzfirgvtkcbackxxeqsyzuxxqlaegecckxtiloylirmulunlwwgrwmiaxtftcvpsuho"), 3169);
	this->rbcfqvpaapmxei(2624, 3270, 2582, 42717, string("iobpmdnuoykeiq"), 585, 89, 3528);
	this->mgbfsdssfrniazkglxgqnuipv(15997, 6019, 847);
	this->vuzibndhmfqgzsykiwkgf(1446, string("inhdgongdytuzfbczfulrzeqbejnquzxnfadswrfmcnjpamznromrvfnpmdrulwqhrskay"), true, 61556, 3207, string("fibzznotnidpiksdrdhlrbaqcksldttriezubzyhacoehknqamglveupmbxjduvmvgcjresvuirrymzzrgjvcd"), 14650);
	this->rlagrvbxodzygduprzc(3951, false, false, 5014, false, string("bwfcdcpnkpgpdyoatjukadwytdxcfqgicsasdbi"), 831, string("owfmwckkxbqiifgohjdcxrcokazvktynlbhwuhsqsqhvguyqklglsdbuopcqwnnrpcdccpbv"), string("hkomelcobmommkfsisps"));
	this->jzhcykjepadqxakve(4467, 796);
	this->hnbgdrlozrzfffhindmqfiit(7850, string("txaccqaqrbgaywquxtuogvtw"), false, string("mnakff"), 762, true, false, 722);
	this->cpehvziauate(string("nwrhaqm"), 37955, 3586, 1071, 28155);
	this->tdfmjbsuvpxrlmbnkyalem(1552, 42818, 42026, 607, string("rji"), string("lvw"), 4437, string("xntjsnjsdsysusufwsylkbtjlncglnicuxleivagntmkhiirnxwrmhjitnbpwcrmqlxwgbiwknouvhaaxyojs"), 3657);
	this->jsvwfjlkgthslldiacjrwfhj(true);
	this->xqxdfaolkeigwwqzldbhat(3864, false, 17810, string("ykzyrhqlgnwoaxirqwnbausezejw"), 4105, 3682, true, 39000, 47553, 4461);
}

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class rryegww {
public:
	string gsjllvedjxw;
	double yqmkkbnidkmgyp;
	int gkmdiir;
	string wgwyjwoyu;
	rryegww();
	double ftwhmbnaxo(bool rbogxaddidtdt, int hpjnyujxqjei, int nvxbopkhjjtgrle);
	int aoilqzffeaifxvhwdwcgcpkw(string akwbaicsiuhg, int kxzvh);

protected:
	int ehybjljkrecon;

	int yxhhqgbusglnlqnjrkhcfz(double gasdqfxkcmo, int nddkhhll, int mnnjnshsq, int oyamocq);
	bool npdyxgyjxuudhy();
	double fmymgzrukdziqvbchnztus(bool qybhda, int fhclkrbxtstm, int rdbcptmxjn, string epwkbjiyojkgxj, string amdniigiqqjk, bool tgqqsqgogmqo, bool ysjjvgutcqkam, bool wlicdwomclkia, string cfzwsx, string ecnzyosfzlndf);
	double ztqeyvaxspbcwfefawchm();
	double ntmxiohcdolkswkwdk(string ipcllued, int tbahb, double rpduiqtwoomrac, string sikcwkfgac, int rmbef);
	string hqfuqvqimp(string egpjwfafxxieh, string rsmlrvxlpivjpu);
	int jhwppjakyhrdrcn(double kasnl, bool vheewn, int fioovudu, string ofblfdp, double awsylbbq, bool kwunmtwfg, string rxukbo, string nwguucuhulcfs);
	bool aeqyhigzcroymy(string ymjqrcnsenutyd, int lipuxdjlncw, double qeewzpjk, double escxiiqbzcx, int mmwyytb, string broqubsx, string aveinefp, int tuptqakwntj, bool sptnwauddnbaq, int bigivio);
	string opjtbqbazjqphxfzth(bool qrtuhupjcpgpzi, string hoqfpzpdt, string dvtedlw, int nhlbblvkbdsd, bool tzwfk, double wjqoh, string wvtgcuaq, bool ibyygleohpdi, double mobnwfncdeuv, double icpjqfnhyers);

private:
	double tsuryrzkh;

	string ofhyevuojen(double naqwlxxuzdeogen, bool nyiyxls, double yphenc, bool qeudfecbogu, int pzzxhmxxxvevmv, string igtazqubxpofui, bool ovlyzlgcc, int azaqvohqzk, string xojetppk);

};


string rryegww::ofhyevuojen(double naqwlxxuzdeogen, bool nyiyxls, double yphenc, bool qeudfecbogu, int pzzxhmxxxvevmv, string igtazqubxpofui, bool ovlyzlgcc, int azaqvohqzk, string xojetppk) {
	int qlsyo = 2443;
	string rjtgdskxe = "dtcvokxkieutcbjwodshefssoedpxyixtglinwakvcessrfssqaoknlad";
	if (2443 == 2443) {
		int ddhc;
		for (ddhc = 3; ddhc > 0; ddhc--) {
			continue;
		}
	}
	return string("rcffksbc");
}

int rryegww::yxhhqgbusglnlqnjrkhcfz(double gasdqfxkcmo, int nddkhhll, int mnnjnshsq, int oyamocq) {
	int vesowiapwft = 5067;
	bool zutkiukssfhil = false;
	bool huldmsiz = false;
	int qzjgiev = 69;
	if (false == false) {
		int puenz;
		for (puenz = 13; puenz > 0; puenz--) {
			continue;
		}
	}
	if (false == false) {
		int pgfvtlja;
		for (pgfvtlja = 29; pgfvtlja > 0; pgfvtlja--) {
			continue;
		}
	}
	if (false != false) {
		int zvn;
		for (zvn = 59; zvn > 0; zvn--) {
			continue;
		}
	}
	if (false != false) {
		int pqz;
		for (pqz = 99; pqz > 0; pqz--) {
			continue;
		}
	}
	return 14170;
}

bool rryegww::npdyxgyjxuudhy() {
	int jqtmfrmrl = 1696;
	double hzpfiaxptnzveku = 21841;
	double vqmgiwrm = 48879;
	bool dbqwhj = false;
	int ardgw = 6906;
	double qrwijbugwulmwzy = 16451;
	string btdgvyusoxujyl = "dzvuztsalglebeqmfqowewdlhjwcabvqsdtovhblcwiihpdmwgwyrogbvsxbxqfjcbtnogvxfgzdjdsmuzs";
	int njmnobhqov = 1261;
	bool yszedirlbyemm = true;
	if (1261 != 1261) {
		int cngrgf;
		for (cngrgf = 87; cngrgf > 0; cngrgf--) {
			continue;
		}
	}
	if (1696 != 1696) {
		int vflj;
		for (vflj = 72; vflj > 0; vflj--) {
			continue;
		}
	}
	if (21841 == 21841) {
		int clzunkfa;
		for (clzunkfa = 72; clzunkfa > 0; clzunkfa--) {
			continue;
		}
	}
	if (16451 == 16451) {
		int tcrldnhbt;
		for (tcrldnhbt = 2; tcrldnhbt > 0; tcrldnhbt--) {
			continue;
		}
	}
	if (1696 == 1696) {
		int vofxvf;
		for (vofxvf = 38; vofxvf > 0; vofxvf--) {
			continue;
		}
	}
	return true;
}

double rryegww::fmymgzrukdziqvbchnztus(bool qybhda, int fhclkrbxtstm, int rdbcptmxjn, string epwkbjiyojkgxj, string amdniigiqqjk, bool tgqqsqgogmqo, bool ysjjvgutcqkam, bool wlicdwomclkia, string cfzwsx, string ecnzyosfzlndf) {
	return 81231;
}

double rryegww::ztqeyvaxspbcwfefawchm() {
	int yqvbvr = 3226;
	double kilbeosfosfolab = 21066;
	string huvaybzdorubfog = "pgqrzmsxsqmfytejkijhlcqzjxvgyqdwmcauarwngmenroenqkycosxxualoyuvgudupszloqacb";
	string obemzsxxlti = "pqziupllpoiqozuhboeimwytadfpzxmyvoqwjwnccyzlydndwsqrhjchpfylelir";
	double ixycbgsfnszfxi = 13638;
	double jlhvbeo = 774;
	double jjwjbhtht = 56168;
	if (string("pqziupllpoiqozuhboeimwytadfpzxmyvoqwjwnccyzlydndwsqrhjchpfylelir") != string("pqziupllpoiqozuhboeimwytadfpzxmyvoqwjwnccyzlydndwsqrhjchpfylelir")) {
		int rf;
		for (rf = 40; rf > 0; rf--) {
			continue;
		}
	}
	if (21066 == 21066) {
		int peete;
		for (peete = 68; peete > 0; peete--) {
			continue;
		}
	}
	if (13638 == 13638) {
		int hhejhz;
		for (hhejhz = 28; hhejhz > 0; hhejhz--) {
			continue;
		}
	}
	if (774 != 774) {
		int so;
		for (so = 36; so > 0; so--) {
			continue;
		}
	}
	return 72043;
}

double rryegww::ntmxiohcdolkswkwdk(string ipcllued, int tbahb, double rpduiqtwoomrac, string sikcwkfgac, int rmbef) {
	bool exetvybqr = false;
	double wvlctedp = 70712;
	int vpkcmtv = 7872;
	double atdhgmkksn = 6061;
	if (false != false) {
		int pczxl;
		for (pczxl = 1; pczxl > 0; pczxl--) {
			continue;
		}
	}
	if (7872 != 7872) {
		int nsm;
		for (nsm = 64; nsm > 0; nsm--) {
			continue;
		}
	}
	if (7872 != 7872) {
		int azqroage;
		for (azqroage = 63; azqroage > 0; azqroage--) {
			continue;
		}
	}
	if (70712 == 70712) {
		int slf;
		for (slf = 63; slf > 0; slf--) {
			continue;
		}
	}
	return 22417;
}

string rryegww::hqfuqvqimp(string egpjwfafxxieh, string rsmlrvxlpivjpu) {
	int lkvjpeaawyvoms = 2026;
	double jowgkgkload = 65240;
	string rsbzonblzkm = "ufvojgqozuazjytuknswxjozcmbqkpanjqlsjgslzzobzzaesvtcvvfyqahxbjejsgfmr";
	string qjekgudgtqco = "jdoylxrlpbzdwrwwhbefncoiqazlyfdkggpsbxhg";
	int dcmyewkwubaphvs = 1218;
	string nerrxbpqcz = "ezpogeaenfuchqypbfmxflkwcdcncrxxrgmpdlcbzeajlcawwezzuhszwtwwjbvdrsnpoyrkoixb";
	double yqllt = 6487;
	string cpascuximxtea = "jxtwczz";
	int lshnurdl = 6516;
	int lnobkdv = 1751;
	if (6487 == 6487) {
		int quivonnuvq;
		for (quivonnuvq = 0; quivonnuvq > 0; quivonnuvq--) {
			continue;
		}
	}
	if (string("jdoylxrlpbzdwrwwhbefncoiqazlyfdkggpsbxhg") == string("jdoylxrlpbzdwrwwhbefncoiqazlyfdkggpsbxhg")) {
		int gxk;
		for (gxk = 51; gxk > 0; gxk--) {
			continue;
		}
	}
	if (2026 == 2026) {
		int hpzysd;
		for (hpzysd = 88; hpzysd > 0; hpzysd--) {
			continue;
		}
	}
	return string("e");
}

int rryegww::jhwppjakyhrdrcn(double kasnl, bool vheewn, int fioovudu, string ofblfdp, double awsylbbq, bool kwunmtwfg, string rxukbo, string nwguucuhulcfs) {
	string bkfbnmxnqltpcj = "jkpav";
	string lsqjnrw = "szaqpszliog";
	if (string("jkpav") != string("jkpav")) {
		int wgmcp;
		for (wgmcp = 49; wgmcp > 0; wgmcp--) {
			continue;
		}
	}
	if (string("jkpav") == string("jkpav")) {
		int lzcfyxszop;
		for (lzcfyxszop = 100; lzcfyxszop > 0; lzcfyxszop--) {
			continue;
		}
	}
	return 69288;
}

bool rryegww::aeqyhigzcroymy(string ymjqrcnsenutyd, int lipuxdjlncw, double qeewzpjk, double escxiiqbzcx, int mmwyytb, string broqubsx, string aveinefp, int tuptqakwntj, bool sptnwauddnbaq, int bigivio) {
	double ocgrpd = 53068;
	double wqpulkvaoy = 12107;
	bool tijpvmd = true;
	if (12107 != 12107) {
		int yu;
		for (yu = 13; yu > 0; yu--) {
			continue;
		}
	}
	if (12107 == 12107) {
		int wxhfdngle;
		for (wxhfdngle = 48; wxhfdngle > 0; wxhfdngle--) {
			continue;
		}
	}
	if (53068 == 53068) {
		int avokxazs;
		for (avokxazs = 64; avokxazs > 0; avokxazs--) {
			continue;
		}
	}
	if (true != true) {
		int fhedmporug;
		for (fhedmporug = 72; fhedmporug > 0; fhedmporug--) {
			continue;
		}
	}
	if (12107 != 12107) {
		int db;
		for (db = 78; db > 0; db--) {
			continue;
		}
	}
	return true;
}

string rryegww::opjtbqbazjqphxfzth(bool qrtuhupjcpgpzi, string hoqfpzpdt, string dvtedlw, int nhlbblvkbdsd, bool tzwfk, double wjqoh, string wvtgcuaq, bool ibyygleohpdi, double mobnwfncdeuv, double icpjqfnhyers) {
	int kifnmopkjeuts = 1067;
	int jcxtzwubpv = 175;
	string eeyqhiwvumtm = "haikzeifnvhdoswkliemkkprenbuzlkjoeyfeygqkudvsamtukzuykymszhtmgdpmpmfxzasxtojpxrlilwqeukohsxwiucqt";
	int bafbrrgklwqdkd = 161;
	if (175 == 175) {
		int whg;
		for (whg = 17; whg > 0; whg--) {
			continue;
		}
	}
	return string("hbqsyzf");
}

double rryegww::ftwhmbnaxo(bool rbogxaddidtdt, int hpjnyujxqjei, int nvxbopkhjjtgrle) {
	bool wyiedqaecvk = true;
	bool ihcnj = true;
	if (true == true) {
		int jkbuheojgk;
		for (jkbuheojgk = 66; jkbuheojgk > 0; jkbuheojgk--) {
			continue;
		}
	}
	if (true != true) {
		int xzj;
		for (xzj = 88; xzj > 0; xzj--) {
			continue;
		}
	}
	if (true != true) {
		int dmv;
		for (dmv = 83; dmv > 0; dmv--) {
			continue;
		}
	}
	if (true != true) {
		int hkt;
		for (hkt = 33; hkt > 0; hkt--) {
			continue;
		}
	}
	if (true == true) {
		int hrcgbf;
		for (hrcgbf = 59; hrcgbf > 0; hrcgbf--) {
			continue;
		}
	}
	return 73874;
}

int rryegww::aoilqzffeaifxvhwdwcgcpkw(string akwbaicsiuhg, int kxzvh) {
	bool dfuzx = false;
	bool jpfnakjougila = false;
	string atoxbzewjpqld = "awghbdughjfzhbtxxetszgtjfcrayjszezojorrxfdrpozuqwmgevvphjmqpsndfmbjmqropmnzgghfysfjjd";
	double kwrudhvj = 23251;
	bool wcdopklahzd = true;
	bool snpctf = false;
	double vyllifrabwnqz = 705;
	bool mhwunoechbfxa = false;
	int ogppyryvs = 1352;
	return 75264;
}

rryegww::rryegww() {
	this->ftwhmbnaxo(true, 4637, 85);
	this->aoilqzffeaifxvhwdwcgcpkw(string("ksvmmoowtztejszuxrgzumupgrrwlfgdodxbwfizwierenshunwaxmkktxocfspodkbhuofxpptsrglqyuttqjxulfaahrvzho"), 3284);
	this->yxhhqgbusglnlqnjrkhcfz(32622, 2113, 2326, 922);
	this->npdyxgyjxuudhy();
	this->fmymgzrukdziqvbchnztus(true, 6391, 1601, string("rmvkbxldigsmcdupqaqzvzacyraondpjvwenxgpmlbgnmbbrtssuuedulcpmwehkajnll"), string("ebznbwoocsmhekqmvjrjbaokeeqvfnbdyzzhcylyutnbumcrzgangdzkyrmoawdyelpfqmvvnkbpcsjsaxdajsv"), true, false, true, string("gybcuoqpqyuuwzpiejchzdleavledqjelwilpypmtrncycrzv"), string("wtxxnwwbbtmgsgqespabwnooffolamfkkpjblpvhakfokwav"));
	this->ztqeyvaxspbcwfefawchm();
	this->ntmxiohcdolkswkwdk(string("twghrmtffwlijxrlvwxrvyqijfhsmxwmrsybpmjipprpo"), 5216, 18737, string("ktijljednhbkoiehlejamxdfmbxh"), 596);
	this->hqfuqvqimp(string("hlxoicndfymhxrigzeqqnfgtnygrolmcvyyearsaqnpikuibsuhncmomesddasvujruxnmro"), string("miezmtdmcwvnsdmrpwozbf"));
	this->jhwppjakyhrdrcn(58211, false, 585, string("unmeomisgqsibyo"), 16300, true, string("bssxsutapbybatczuspkaxlhqzpbwxicqpussgtbjnemyxqszfxuwtazxiuu"), string("zcbhuiidtfisdfiwglgedzwqkwfgthqjmquuzzpiocecoytreaxgttmvasfuapxarnkvibkzytvvvrehsk"));
	this->aeqyhigzcroymy(string("ehjahzuijelkseoqqzlohfcktodvlwblfz"), 171, 15369, 6031, 5322, string("tchidhwoxtteu"), string("dyuznzvgqokmvlrieqsmadyklymqxjpyrjtfraulkcwvslknkcdylmblxjdmicsvvecnqvoqyjiuvhjebvmgaya"), 6414, true, 2686);
	this->opjtbqbazjqphxfzth(true, string("qqlbadcsrtrqybcrsaiidgnrwopbbmlcppnmifmpbmzxtfrzxxfktetnzsnwzerbrqpgeknp"), string("lhbfhwzircwcwmpquerzlgevpkysquntzdj"), 4102, false, 64216, string("vpmxkgdxxunywzkihqontqcvrsbmvmctgmexixzhbkgogjqrmigouvxtahsfykgjhiishavckyshntswinguiuvxdgbmaattdcbg"), true, 40778, 17204);
	this->ofhyevuojen(3044, true, 4455, false, 6919, string("qgfqphxkjqawudutssnj"), true, 145, string("kudnbnnjqvdeuwgxzlpwrvdmpzbormhjmqaqlshmnsvravundtvykoaeutkbzarzkuwuwzkbemxzyrkfhhcweplztkvkzpnuil"));
}

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class nzopaws {
public:
	string mzkwbt;
	bool mydsvazaynap;
	double grjrjpkwvse;
	string vedwltbbntocqe;
	nzopaws();
	int tlfivoyhwlgzitotkvtyivrd(int lteotkcizqt, bool ftpddndpz);
	double vkcsgkazmcv(bool hczysomnwc, string vzekyvxoabzpx, double cxjkrzaxtqz, int fnbecfvwwfrfra, string bexazcsfe, string ratvgdbqjpssau, string jfpjnggmc);
	bool aivqzcpllymjdijvbeiekuhd(double eulrv, string quppsryqqdnw, int vkqspb, double vgpnnxuvwm, double sioxkkdrjqhsb, bool tvuus, string ghfqdaxbminkrkv, int znnrqtis, string powjfaehg);
	double lckuyqpdaxtgpxqflfvohrwl(int gfonr, double orvfqm, bool ieyysaflwxzgf, bool ynpdz, string inwgkjqqsxknw, double dmtxsim, int siyllf, string aiajdyapnydjgu);
	double zxjyyewthpdumjwe(double whkhakxnhfhd, int niyztyrhdhlw, bool gymrdkkxge, double jxbdxjvrshylmm, double tkudvluga, int ggsesdc, double tkisnnnlgzysyrv);
	int ymmcojdoewuuxbspeefni(string yksldbfxmx, int xnoqspu, double wqllj, string dtraruyvdefys, double mmsotgicemcxad, double ydbnbaupyuulnyi);

protected:
	bool veekjvfbydw;
	string izvwhpvjbhxzd;
	double pkshne;
	double lxylezeofvo;
	bool vagcqhhvgkoiku;

	string osejwwxthjuuuzpsvysgpfykn(int rzwymn, string syhcvviof, int zfvtirlkdbu, int sgsdov);
	bool hdhcfmgjoz(int urqjktfxk, int gxlnil, int luwddnrtsjcnp, int vevlzgrs, bool tobogft);
	string wviokxwpehqizh(double oltkbotnlewdm, int chkgmidptlxlnmh, bool nbqbgskyqcn, string picnffbin, int hpepresiibugx, int aalewh, double cdjuzlnzac, string ixdvnitc);
	string cngeacvbcbbmrdpbcwkuyqdfe(string pwmyyj, double civolmwcilhoki, bool wvvotbyxoml, string wamwkx, int vkmbjseqigwwln);
	bool unzhqjhtpaovrdphas(double ijhpfkvwz);
	double iixyiyiiezqkxhe(bool osshwoakzc, double uapobpax, string bzhtuqeonxubsth, string kgpflw, string dtmcbtobyzr, string cxxvkoi);
	string ntxivjgqrsfcmgtusbhdpwqo(double vcgssyauibxgdo);
	double zgcbvzggmhlnmtnwwrmleo(int nkqdzszof, string kmiwggn, bool bskdz, int couxjak, string twrgkmwlf, int nooclbcitfbgk);

private:
	int jbizvsierqxb;
	string nvnugosqg;

	string cvwfmzpydtxvtmfe(bool jyjzp);
	double tloorhjwigeuxgsjdthtwwv(int tdzyztwpqby);
	double lcfzmsjphiodkt(bool xbneuhgmitta, bool wklssnxflzzxie, string zifewicmciopslu, int wzduld, int xzkhglkoenctopk, int rpfew);
	string xdoyjatwawmcjy(int tincxgvr, double szowzosywsfx, bool cgumgng, string cpmzfxecy);
	string qcxtvdrkskkuvhisy(string ubjajqhprelqnyz, bool ndkvgphjhh, string xobtnkmimgi, int owomfzluazjexi, double esnopwuctzrmih, bool hlgaktt, int yiccr, int yyoitgetvqrdicv);
	int yxbmqrnrmgs(bool uveyxwl, string ykmfhebadgi, bool utshblxsrkp, bool xlewdlesyyd, double oguxxcwlo, bool cwbbbnjzcxlr, bool axysfbvip, string hfuhlwljklhbm, double txbdtvjhgyt);
	void fcoqzxaxousaxk(double lskjbi, bool zmecdujzqyzftp, double marohopwcj, double rqpnwruymxcwrm, string kgswpqebskirqki);
	string htvdjjjiqvlywgc(string dxcgvu, int qsohb);

};


string nzopaws::cvwfmzpydtxvtmfe(bool jyjzp) {
	string vqpgaatga = "gfhwjxtviq";
	bool ookfo = false;
	double gaaslywx = 21675;
	int hiqntfxuzs = 8798;
	if (8798 == 8798) {
		int qnji;
		for (qnji = 2; qnji > 0; qnji--) {
			continue;
		}
	}
	if (8798 != 8798) {
		int xewyo;
		for (xewyo = 28; xewyo > 0; xewyo--) {
			continue;
		}
	}
	if (false != false) {
		int udkrhqn;
		for (udkrhqn = 72; udkrhqn > 0; udkrhqn--) {
			continue;
		}
	}
	if (false == false) {
		int jq;
		for (jq = 90; jq > 0; jq--) {
			continue;
		}
	}
	if (21675 == 21675) {
		int hermlf;
		for (hermlf = 66; hermlf > 0; hermlf--) {
			continue;
		}
	}
	return string("mtpfarvexzqebjubmnmk");
}

double nzopaws::tloorhjwigeuxgsjdthtwwv(int tdzyztwpqby) {
	double tbiotrcbphkdzhm = 44980;
	string gismnt = "qgbnkfylhcpmbueimudgziyutzgyuaiw";
	double yecrhw = 6631;
	string qjvvj = "jgywmhgksvmadispvskhikfrmzakvnklilmkbbmstfpbeymhsmcepzjwethlhcadybrdjx";
	bool ucfdvlcsguff = false;
	bool wmwxljmyhudpck = false;
	double tubdeswkra = 53820;
	double etyefoxli = 11669;
	if (11669 == 11669) {
		int fakywhk;
		for (fakywhk = 33; fakywhk > 0; fakywhk--) {
			continue;
		}
	}
	if (44980 == 44980) {
		int zbwmzzoo;
		for (zbwmzzoo = 26; zbwmzzoo > 0; zbwmzzoo--) {
			continue;
		}
	}
	return 82593;
}

double nzopaws::lcfzmsjphiodkt(bool xbneuhgmitta, bool wklssnxflzzxie, string zifewicmciopslu, int wzduld, int xzkhglkoenctopk, int rpfew) {
	int oesbcjmz = 502;
	bool fmppimltzeul = false;
	int jylyh = 1119;
	int hdxoevgnt = 223;
	bool qdxxokbmyeqhq = false;
	if (223 == 223) {
		int uds;
		for (uds = 45; uds > 0; uds--) {
			continue;
		}
	}
	if (223 != 223) {
		int raorr;
		for (raorr = 11; raorr > 0; raorr--) {
			continue;
		}
	}
	if (223 == 223) {
		int fhydaserlz;
		for (fhydaserlz = 55; fhydaserlz > 0; fhydaserlz--) {
			continue;
		}
	}
	if (false == false) {
		int nklouisej;
		for (nklouisej = 15; nklouisej > 0; nklouisej--) {
			continue;
		}
	}
	if (223 != 223) {
		int djvm;
		for (djvm = 42; djvm > 0; djvm--) {
			continue;
		}
	}
	return 6305;
}

string nzopaws::xdoyjatwawmcjy(int tincxgvr, double szowzosywsfx, bool cgumgng, string cpmzfxecy) {
	bool burxdsnntasngk = false;
	bool abjxhiryjn = false;
	string wtayu = "fpvphtmpehehfixkbqbdpkgkcbcamohtrnapahwpzanvqyddwsprtwsvkckkuzetfa";
	string sjkbknnbexlo = "ujkobwjngtnmcbdgvvhrqpjhpatkycdutgrrjbrdhdblfckwlclaffgrdectywkjxqhwclwkiwqmkjgtfgyszgb";
	if (false != false) {
		int xbjdlkqf;
		for (xbjdlkqf = 89; xbjdlkqf > 0; xbjdlkqf--) {
			continue;
		}
	}
	return string("hat");
}

string nzopaws::qcxtvdrkskkuvhisy(string ubjajqhprelqnyz, bool ndkvgphjhh, string xobtnkmimgi, int owomfzluazjexi, double esnopwuctzrmih, bool hlgaktt, int yiccr, int yyoitgetvqrdicv) {
	int vbfpzmrzud = 892;
	bool ndeognyt = true;
	string jfegvkbczetl = "bjjniqnhxmzlttfxzbmzgossqlbbhlehbaoehsesinpaaplguqvpfiltbwielekcyyvrrjaoxoqladwoy";
	double tjetciscb = 71767;
	bool autkjqgwzv = true;
	string zdqkoll = "fgkhlijdicvvjaxkkwdqjaatwvcrla";
	if (892 != 892) {
		int xhjffniqj;
		for (xhjffniqj = 52; xhjffniqj > 0; xhjffniqj--) {
			continue;
		}
	}
	if (892 == 892) {
		int lf;
		for (lf = 52; lf > 0; lf--) {
			continue;
		}
	}
	if (string("bjjniqnhxmzlttfxzbmzgossqlbbhlehbaoehsesinpaaplguqvpfiltbwielekcyyvrrjaoxoqladwoy") == string("bjjniqnhxmzlttfxzbmzgossqlbbhlehbaoehsesinpaaplguqvpfiltbwielekcyyvrrjaoxoqladwoy")) {
		int xuyqqx;
		for (xuyqqx = 92; xuyqqx > 0; xuyqqx--) {
			continue;
		}
	}
	if (string("fgkhlijdicvvjaxkkwdqjaatwvcrla") != string("fgkhlijdicvvjaxkkwdqjaatwvcrla")) {
		int pyrm;
		for (pyrm = 91; pyrm > 0; pyrm--) {
			continue;
		}
	}
	if (string("fgkhlijdicvvjaxkkwdqjaatwvcrla") == string("fgkhlijdicvvjaxkkwdqjaatwvcrla")) {
		int pvc;
		for (pvc = 96; pvc > 0; pvc--) {
			continue;
		}
	}
	return string("txgn");
}

int nzopaws::yxbmqrnrmgs(bool uveyxwl, string ykmfhebadgi, bool utshblxsrkp, bool xlewdlesyyd, double oguxxcwlo, bool cwbbbnjzcxlr, bool axysfbvip, string hfuhlwljklhbm, double txbdtvjhgyt) {
	int krsluqiu = 3011;
	bool oaaozsaiwlhxkbv = true;
	string artwxvm = "bmumlpcedoqzpdfnnnkltycwauhfqvhussodmpbhhpcda";
	if (3011 != 3011) {
		int ikyeft;
		for (ikyeft = 59; ikyeft > 0; ikyeft--) {
			continue;
		}
	}
	if (string("bmumlpcedoqzpdfnnnkltycwauhfqvhussodmpbhhpcda") != string("bmumlpcedoqzpdfnnnkltycwauhfqvhussodmpbhhpcda")) {
		int ydblzmiuxn;
		for (ydblzmiuxn = 24; ydblzmiuxn > 0; ydblzmiuxn--) {
			continue;
		}
	}
	return 68590;
}

void nzopaws::fcoqzxaxousaxk(double lskjbi, bool zmecdujzqyzftp, double marohopwcj, double rqpnwruymxcwrm, string kgswpqebskirqki) {
	bool ygskotp = true;
	string nxcsmsylhrwsnga = "hfukpjxzirourlgsonrszoetpyt";
	string shfzdorkvyu = "rothzcqhufhiqhuobomvjrhvupjsgpyjllugubnmuhkywg";
	if (true != true) {
		int npygq;
		for (npygq = 59; npygq > 0; npygq--) {
			continue;
		}
	}
	if (string("rothzcqhufhiqhuobomvjrhvupjsgpyjllugubnmuhkywg") != string("rothzcqhufhiqhuobomvjrhvupjsgpyjllugubnmuhkywg")) {
		int cctxsqivre;
		for (cctxsqivre = 16; cctxsqivre > 0; cctxsqivre--) {
			continue;
		}
	}
	if (true == true) {
		int wgj;
		for (wgj = 33; wgj > 0; wgj--) {
			continue;
		}
	}

}

string nzopaws::htvdjjjiqvlywgc(string dxcgvu, int qsohb) {
	bool zjkrobhhz = false;
	int vtfyffswo = 1421;
	int sdwfwbh = 1488;
	bool nogqnaaeccrfocy = false;
	bool mkitgxqtjltzsse = true;
	if (1488 != 1488) {
		int vlrbdgo;
		for (vlrbdgo = 5; vlrbdgo > 0; vlrbdgo--) {
			continue;
		}
	}
	if (1488 != 1488) {
		int csaursy;
		for (csaursy = 78; csaursy > 0; csaursy--) {
			continue;
		}
	}
	if (false != false) {
		int hgqb;
		for (hgqb = 30; hgqb > 0; hgqb--) {
			continue;
		}
	}
	return string("ulhftsdoij");
}

string nzopaws::osejwwxthjuuuzpsvysgpfykn(int rzwymn, string syhcvviof, int zfvtirlkdbu, int sgsdov) {
	bool ndrzxzpkbdxr = false;
	string tkceejchae = "qbvblldcrqtpnxvogxrgfflimtxuabbtjncnlxhsexdxkcgsxfhfgpgsgmjhhzruzehgenxulowxkgicomltpbsalcscrfuwvrd";
	string bogdnykibqzliz = "nxvabjqzgohpirvzmolwkylaxdyjcfvtvrq";
	string lkntrpzpb = "xdnmxgpyoqsbdnaqrsyowvwsxlswxdxpijwqjahuwgopnvfbjfrozvfinazjrdiwphtgknywlgqlvejk";
	double lksrgavuagvo = 5681;
	string jzdcfzikxqdky = "lotmksrrxtmwfhgjizvvwmktjysbvbtalflyclkxwnosrvcbycyknqfhiaxufh";
	bool runpvbmeqlyezl = false;
	double bdniwvfsly = 6397;
	if (string("lotmksrrxtmwfhgjizvvwmktjysbvbtalflyclkxwnosrvcbycyknqfhiaxufh") == string("lotmksrrxtmwfhgjizvvwmktjysbvbtalflyclkxwnosrvcbycyknqfhiaxufh")) {
		int awka;
		for (awka = 94; awka > 0; awka--) {
			continue;
		}
	}
	return string("zg");
}

bool nzopaws::hdhcfmgjoz(int urqjktfxk, int gxlnil, int luwddnrtsjcnp, int vevlzgrs, bool tobogft) {
	return false;
}

string nzopaws::wviokxwpehqizh(double oltkbotnlewdm, int chkgmidptlxlnmh, bool nbqbgskyqcn, string picnffbin, int hpepresiibugx, int aalewh, double cdjuzlnzac, string ixdvnitc) {
	string xcpyrhn = "hcjqhzoihyklvernnyxbjhkxekq";
	int uhqkaghoduixwsr = 845;
	string vzlqsctft = "zpxwirdmmqniicexsmjkiqnaifmoloxmldzghawkgthafmokvx";
	string dcbuoyesev = "dmudmdeymldkgiuiofbqossdmtirjxkpmn";
	double gakyrmjlg = 40660;
	int zwafd = 7534;
	if (string("hcjqhzoihyklvernnyxbjhkxekq") != string("hcjqhzoihyklvernnyxbjhkxekq")) {
		int faypqez;
		for (faypqez = 6; faypqez > 0; faypqez--) {
			continue;
		}
	}
	return string("ghsftkctywjnlq");
}

string nzopaws::cngeacvbcbbmrdpbcwkuyqdfe(string pwmyyj, double civolmwcilhoki, bool wvvotbyxoml, string wamwkx, int vkmbjseqigwwln) {
	double roeywjop = 14726;
	double wgbile = 36269;
	bool iahdpnozwmvjwu = false;
	double xbkorksqppqjoc = 16262;
	int smmcuh = 780;
	if (36269 == 36269) {
		int gd;
		for (gd = 56; gd > 0; gd--) {
			continue;
		}
	}
	if (false != false) {
		int shsps;
		for (shsps = 41; shsps > 0; shsps--) {
			continue;
		}
	}
	if (14726 != 14726) {
		int evzwsmiyca;
		for (evzwsmiyca = 33; evzwsmiyca > 0; evzwsmiyca--) {
			continue;
		}
	}
	return string("lycolvmf");
}

bool nzopaws::unzhqjhtpaovrdphas(double ijhpfkvwz) {
	bool xanbyuf = true;
	string tgnvnkp = "ngwljuaowighoxzjyjwdidiwbxtibohyurzcwlmzbnyvwodrqgilidbjoqyxsgcbffhox";
	string zsdgmfhxiyt = "vzvjlwqklarilctrrmaaezsmtbsqvxrgschphoflhq";
	string xpybcgdhkvl = "yyfmiqgsfnmmycojohwocpyegtnnjjwjwvmphcethb";
	double crwgpylpwxypbaz = 20831;
	int jfoytafjkqii = 1049;
	string glsbiurzz = "inenepxewrtolauwvfkccmdlwdrqrcuzpwsqmedprjxmbwfolnxmkj";
	if (string("inenepxewrtolauwvfkccmdlwdrqrcuzpwsqmedprjxmbwfolnxmkj") != string("inenepxewrtolauwvfkccmdlwdrqrcuzpwsqmedprjxmbwfolnxmkj")) {
		int vvzzwfj;
		for (vvzzwfj = 20; vvzzwfj > 0; vvzzwfj--) {
			continue;
		}
	}
	if (1049 != 1049) {
		int jzmjgrq;
		for (jzmjgrq = 76; jzmjgrq > 0; jzmjgrq--) {
			continue;
		}
	}
	if (string("vzvjlwqklarilctrrmaaezsmtbsqvxrgschphoflhq") == string("vzvjlwqklarilctrrmaaezsmtbsqvxrgschphoflhq")) {
		int ni;
		for (ni = 68; ni > 0; ni--) {
			continue;
		}
	}
	if (string("yyfmiqgsfnmmycojohwocpyegtnnjjwjwvmphcethb") == string("yyfmiqgsfnmmycojohwocpyegtnnjjwjwvmphcethb")) {
		int rohtcyqdc;
		for (rohtcyqdc = 40; rohtcyqdc > 0; rohtcyqdc--) {
			continue;
		}
	}
	if (1049 != 1049) {
		int bdaxjci;
		for (bdaxjci = 42; bdaxjci > 0; bdaxjci--) {
			continue;
		}
	}
	return false;
}

double nzopaws::iixyiyiiezqkxhe(bool osshwoakzc, double uapobpax, string bzhtuqeonxubsth, string kgpflw, string dtmcbtobyzr, string cxxvkoi) {
	bool bwkfwprgub = false;
	bool evixejjvz = false;
	bool knosxonnprhikq = true;
	bool ychbigr = true;
	if (true != true) {
		int bzpdd;
		for (bzpdd = 15; bzpdd > 0; bzpdd--) {
			continue;
		}
	}
	if (false == false) {
		int tkizvvtmkc;
		for (tkizvvtmkc = 39; tkizvvtmkc > 0; tkizvvtmkc--) {
			continue;
		}
	}
	if (true == true) {
		int stljv;
		for (stljv = 14; stljv > 0; stljv--) {
			continue;
		}
	}
	if (true == true) {
		int titfes;
		for (titfes = 74; titfes > 0; titfes--) {
			continue;
		}
	}
	return 65642;
}

string nzopaws::ntxivjgqrsfcmgtusbhdpwqo(double vcgssyauibxgdo) {
	int fycbemqcdqapw = 331;
	if (331 != 331) {
		int tqbodwph;
		for (tqbodwph = 73; tqbodwph > 0; tqbodwph--) {
			continue;
		}
	}
	if (331 != 331) {
		int ajvnpnfn;
		for (ajvnpnfn = 34; ajvnpnfn > 0; ajvnpnfn--) {
			continue;
		}
	}
	if (331 == 331) {
		int jnljlg;
		for (jnljlg = 93; jnljlg > 0; jnljlg--) {
			continue;
		}
	}
	if (331 != 331) {
		int wc;
		for (wc = 63; wc > 0; wc--) {
			continue;
		}
	}
	if (331 == 331) {
		int csr;
		for (csr = 48; csr > 0; csr--) {
			continue;
		}
	}
	return string("jvvmycmucteitz");
}

double nzopaws::zgcbvzggmhlnmtnwwrmleo(int nkqdzszof, string kmiwggn, bool bskdz, int couxjak, string twrgkmwlf, int nooclbcitfbgk) {
	string opudgaqdawtv = "orclukxzwlqiegknogzbqybdgvjrbesbfyigxrnizhshbkoyyukqahfgedddackithrxakyemxm";
	if (string("orclukxzwlqiegknogzbqybdgvjrbesbfyigxrnizhshbkoyyukqahfgedddackithrxakyemxm") == string("orclukxzwlqiegknogzbqybdgvjrbesbfyigxrnizhshbkoyyukqahfgedddackithrxakyemxm")) {
		int qne;
		for (qne = 52; qne > 0; qne--) {
			continue;
		}
	}
	if (string("orclukxzwlqiegknogzbqybdgvjrbesbfyigxrnizhshbkoyyukqahfgedddackithrxakyemxm") == string("orclukxzwlqiegknogzbqybdgvjrbesbfyigxrnizhshbkoyyukqahfgedddackithrxakyemxm")) {
		int gxlxdvj;
		for (gxlxdvj = 32; gxlxdvj > 0; gxlxdvj--) {
			continue;
		}
	}
	return 98271;
}

int nzopaws::tlfivoyhwlgzitotkvtyivrd(int lteotkcizqt, bool ftpddndpz) {
	bool nwmlbbwdrft = false;
	int tbwblen = 912;
	bool kujwpnwotaae = true;
	int qqqsuvjghgz = 1169;
	double gyhvobycjoqai = 11083;
	double xdhwvyelhklgn = 77021;
	int klbqzvbhcyd = 120;
	double bgzkpfekreli = 28437;
	if (120 != 120) {
		int wgyuydxzl;
		for (wgyuydxzl = 82; wgyuydxzl > 0; wgyuydxzl--) {
			continue;
		}
	}
	if (true != true) {
		int gx;
		for (gx = 74; gx > 0; gx--) {
			continue;
		}
	}
	if (912 == 912) {
		int zefq;
		for (zefq = 78; zefq > 0; zefq--) {
			continue;
		}
	}
	if (120 != 120) {
		int higy;
		for (higy = 10; higy > 0; higy--) {
			continue;
		}
	}
	return 34186;
}

double nzopaws::vkcsgkazmcv(bool hczysomnwc, string vzekyvxoabzpx, double cxjkrzaxtqz, int fnbecfvwwfrfra, string bexazcsfe, string ratvgdbqjpssau, string jfpjnggmc) {
	string memjc = "owndcpcnhfbzugcbpfkiasljhztkpgfhsnldyxrfklwkvsbj";
	string ddxxpvfhosy = "p";
	int nsmnccels = 1534;
	double cexidgktfgf = 52797;
	double zbrqskoojr = 35286;
	int vmecqj = 2478;
	if (35286 != 35286) {
		int ot;
		for (ot = 40; ot > 0; ot--) {
			continue;
		}
	}
	return 83184;
}

bool nzopaws::aivqzcpllymjdijvbeiekuhd(double eulrv, string quppsryqqdnw, int vkqspb, double vgpnnxuvwm, double sioxkkdrjqhsb, bool tvuus, string ghfqdaxbminkrkv, int znnrqtis, string powjfaehg) {
	int qovpzisl = 3239;
	bool bcrsiekxt = true;
	bool eibaksesb = false;
	bool jspamfkm = false;
	int eigxyppuxchunsj = 5137;
	string ojgestji = "wqqoampzshidwkifyktcheztfdnthcnvwq";
	if (3239 == 3239) {
		int miffwzo;
		for (miffwzo = 60; miffwzo > 0; miffwzo--) {
			continue;
		}
	}
	if (false != false) {
		int petesvvc;
		for (petesvvc = 55; petesvvc > 0; petesvvc--) {
			continue;
		}
	}
	return false;
}

double nzopaws::lckuyqpdaxtgpxqflfvohrwl(int gfonr, double orvfqm, bool ieyysaflwxzgf, bool ynpdz, string inwgkjqqsxknw, double dmtxsim, int siyllf, string aiajdyapnydjgu) {
	int xrrrmoegecinfh = 706;
	double othlgsjqskr = 35007;
	double lvrzwycic = 20737;
	int iyhyasqglmsug = 1351;
	int giyrpbzsgsfm = 1184;
	int mnasmksbvalo = 1668;
	double gdnaiukffpjxr = 19704;
	bool lrkdircd = false;
	int kieaudkltue = 3158;
	string royruzmzs = "oupmqpwwcofqgvcxbjltmptechzwjogbjsidlymlkgnvwipwukjbshfeqaqeenhssueywnihsikbzqgqumkcjfd";
	if (706 == 706) {
		int uroksi;
		for (uroksi = 44; uroksi > 0; uroksi--) {
			continue;
		}
	}
	if (3158 == 3158) {
		int ibrjivzdql;
		for (ibrjivzdql = 48; ibrjivzdql > 0; ibrjivzdql--) {
			continue;
		}
	}
	if (false == false) {
		int vgz;
		for (vgz = 33; vgz > 0; vgz--) {
			continue;
		}
	}
	return 28629;
}

double nzopaws::zxjyyewthpdumjwe(double whkhakxnhfhd, int niyztyrhdhlw, bool gymrdkkxge, double jxbdxjvrshylmm, double tkudvluga, int ggsesdc, double tkisnnnlgzysyrv) {
	string lhwtd = "kgpnqfjklvjeevnwqtsmyc";
	double ruovmmlyfuzbhk = 15544;
	bool vhitwekt = true;
	if (string("kgpnqfjklvjeevnwqtsmyc") != string("kgpnqfjklvjeevnwqtsmyc")) {
		int aoebzjnn;
		for (aoebzjnn = 20; aoebzjnn > 0; aoebzjnn--) {
			continue;
		}
	}
	return 85904;
}

int nzopaws::ymmcojdoewuuxbspeefni(string yksldbfxmx, int xnoqspu, double wqllj, string dtraruyvdefys, double mmsotgicemcxad, double ydbnbaupyuulnyi) {
	int bavthicp = 1380;
	string ozjizoh = "mminitaaqcluuxopcqfoykkrbfgwjqgsamncaawebakjhggtssnpeckfashzekaswih";
	bool lasvpr = false;
	bool qmkewfneop = true;
	int cxmxyg = 4559;
	bool skwec = true;
	int vucxjhobgrp = 4388;
	bool fvjgsgpbcbjhcve = false;
	double fprhfbipstrco = 815;
	string caoekryhvxmanqe = "mzqnttizsjjdowjeagzfklzpwlwlxqxgzsfkpdeiatwbbeeotzexbywxoem";
	if (false == false) {
		int nncpisq;
		for (nncpisq = 14; nncpisq > 0; nncpisq--) {
			continue;
		}
	}
	return 15567;
}

nzopaws::nzopaws() {
	this->tlfivoyhwlgzitotkvtyivrd(830, false);
	this->vkcsgkazmcv(false, string(""), 7915, 4431, string("nfmsqkffvqmavanadkrd"), string("ufnywwwudkcvoyxkwpctodapeofhmblpreceiplurlatyxkfpubzlkicljzhkdcfbnnx"), string("wfdeeljbqhfyrjsydjyrycuimajwmqrifhdgfpeeewvrdcmjlkovzrkoenwyvjrjhkhekzgjbzok"));
	this->aivqzcpllymjdijvbeiekuhd(8923, string("pqnurzntxgsaxwvvvqvfcelfkxkqyfystfbaiqmenjlvckzhp"), 1439, 4991, 1633, false, string("fxhesnvetpjvw"), 1052, string("ftviwvyitrifxyrnmwjcpt"));
	this->lckuyqpdaxtgpxqflfvohrwl(392, 77269, false, false, string("mwehlhzstvjoykqsxpb"), 3386, 4494, string("rxnaddqyacynmjgfuftxtizzscxzmpnjltbrbz"));
	this->zxjyyewthpdumjwe(75024, 101, true, 76906, 27731, 58, 27875);
	this->ymmcojdoewuuxbspeefni(string("lmfdfwmearftmqtkasckkwqr"), 1471, 12249, string("enghfkjsplgsxljsgtut"), 3660, 19084);
	this->osejwwxthjuuuzpsvysgpfykn(645, string("zuydhkxipmarrlderiscpkgfofxhzlirhhdqfacdzjailawttqtnizkzgenhvtxwgswgzbdvhrnipmpxgbmgatimnjdqgkojchry"), 7735, 3658);
	this->hdhcfmgjoz(65, 1355, 1237, 4013, true);
	this->wviokxwpehqizh(61190, 1300, true, string("eirftmqgxgctdfcswbuxrxihxdkszlaliejstnzedyfikeyu"), 1452, 3925, 27305, string("ryfenodyfoxvrodtobuylzffvvybuubgvfzvhbrpqesehpvjrlzudqjzgarbyjhwridnjpdidecwwdwguvlaonbjmfebhwo"));
	this->cngeacvbcbbmrdpbcwkuyqdfe(string("ftoj"), 54900, false, string("ndtgipeynzbaokizabllyo"), 5994);
	this->unzhqjhtpaovrdphas(46203);
	this->iixyiyiiezqkxhe(true, 84846, string("hvmxmhmbpzuittcwlxvldvovap"), string("rdqcwrqwkqdkygksnkvspuonbtxenrztczpzvlejslckzbxjuphurdwzywkqeeedqzppmjfsxc"), string("wtkiimzxdqptujvzymjtjzbioynqgqafingijnhjlwaspttptovgdpwqlyzjoabujujpmgn"), string("ipvzyaewnbqctigjvlprpuqtxbyzyyfrzhfxdadvskhjgultwkqcnrjuvuimxobbchppvpmz"));
	this->ntxivjgqrsfcmgtusbhdpwqo(27334);
	this->zgcbvzggmhlnmtnwwrmleo(4501, string("dhfcqjhlzrjvifyfiozwrupbmpixlcwwujnxfmvsunhbmlcpayp"), false, 3787, string("dlysqhbrwdtckmamkziwmddswqydhpjgollwahovmggsovtqggdyaulkfcegrvebofxuygwxvwssypfjomdbjpvx"), 2765);
	this->cvwfmzpydtxvtmfe(false);
	this->tloorhjwigeuxgsjdthtwwv(1568);
	this->lcfzmsjphiodkt(true, false, string("sqgprqbzzjgkbxubrvyvivkkepxdmpcbshonedcenbzehsemqsqlhrguicijszswbrm"), 2908, 276, 1537);
	this->xdoyjatwawmcjy(3686, 6146, true, string("zmiuxcwrrsadcovshqmmfgddidhmpsibhsfkbrgscnbuoeggmpojybcexysbcyruhvxgiv"));
	this->qcxtvdrkskkuvhisy(string("girzaifthblkszudvuetghvgnyguxxroppobdjigvqiwhuqqujhdjwconsiscvrsriggczovcqucqatrokrllvatyfp"), true, string("hzoyexjrlzbyuvthcddnzwxfrzfqwmdkpvdvxlshmdfyuhbgxkjmvcxdfztzqjstpbburqobzluoneigjox"), 8246, 10181, true, 325, 2629);
	this->yxbmqrnrmgs(true, string("juczomdmugzbgdyezjzzonmvcubczezleagncskjnnpukjhgprnxzhqhrflnyprajvfsvncb"), true, true, 22528, false, true, string("txrspmnmivsixsuhzidxhdbjtf"), 52091);
	this->fcoqzxaxousaxk(59519, false, 19789, 28392, string("lrujtzsnibbytjqkyjuhbfsaiupimzbgoocuyvxflshlrevsafbbideeopwmotjcpzmilnakxedugxpbavvsdhdcsoouonl"));
	this->htvdjjjiqvlywgc(string("zxchspuomyfwrcuecxftvhfbnfgpbfbprdqinfofmqiklijbuzthmdmtrxddbxeqklelaelytzezu"), 1262);
}

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class mdytnsd {
public:
	int fngig;
	int cnpwkshmglqxnwx;
	double kfrabzbqjrjmoeh;
	mdytnsd();
	int spblkqhcriazzrxkpfqp(int fbpjfnzfnhgqpk);
	bool uquhwkbsgziwwtwocdfya(double knaklmn, int nreaddh, bool fdvonaezdjmpzl, double uxtpizkapq);
	double cpmlobtpozymxwfx(int haqyvsg, bool rikafezirvkhu, bool xtfvgjiuvsi, bool oipvkn, string ttizkfgr, bool qaywqaqq);
	int qatuuhlzbapvgytbdf(int lbvtpd, string mhekfzst, bool opqqc, string amiuey, bool pejlmbmgzfv, bool rcydfvrkyo);
	double pvaratxcoab(int uyvnaxhvkhf, string eahwr, double tdgyxsbyl, bool sczdifddpatrfwi, bool xjhlljomh, bool ehbezaooeem, int xglkqeqcrsl, int fnekydy);
	int kvhqhzhpgiyhp(bool wupqvvzv, double xuavtydsklehp, string myziebcdvuernz, int sxvpr);

protected:
	int xqayhqshg;
	bool pwuzmpwxphxmh;
	bool sskhjs;
	string xjgggpayinll;
	int spnjzwfc;

	string iackywbrfyysjsfqpa();
	string vyxlmowimrnmuqqphnjntq(int lvbmxhl, double xgpli);
	void fuqoyafnhrptahcqvevzjjoqx(bool ywowzowaurmik);
	double kkephssklvgxnlrcaoy(string bsuenbdan, string sbgmlcru, string zmhnaumpw, bool ujewzqehd, double obsqp, bool yimlqb);
	double brnfyixovozaghv(bool raywgxrwrnz, string szopbqxtjfrk);
	string dyfbfutjsmgncoo(string alihsdeppxhq, bool kdlnypwrcpwjoi);
	void xyrknxppbsak(bool nyaoc, string ieffkqerxqsfd, string utftivoyi, bool axniejwnyp, int ctshgz, double deayjoqmvhxfd, double bxrebgsi, bool mryflgo, double ycqngrhfurj);
	int tguhpazehemvkw(string wlmavigaxqk, string pewtvlzm, string pytkp, int vbscjxuceune, string wltoqiny, int ltilyrrapi, bool mmhhgvr, double xyrtmvnnaelpt, bool hmimjbjvyvkxcyz, string nylzki);
	int uzrsciuppqwjkltr(string bdguqaudcwvz, string qlrznexi, bool dywhjpg, double onuqyt, double umovorfbda, bool ygaxejymylqrt, string wmqeyujovbgdhek, bool ohjfoxxyztbru, string wclqgfqw);
	void ukhavhlthzrauuel(bool oqredjkmyand, bool maaedrfqk, int vtspwtopyklbon, string baqdtqqg);

private:
	string ypjnz;
	string hgyzayekcbvsy;
	string olifaed;

	int zcmwbgjyrrfyerzjaxflgrmf(int nngucuusl, string zrujrpywvowcf, double sghdkmprcvy, double dfivfanwptklm, int bhbvsqs);
	string xaxbuvnyla(bool uuwtvaxfxkct, double lqcgkrmctswh, double uunszl, int qlplomvxi, double fdbpzxmn, string uraddiv);
	double gcasrufprsvqtvrfrkdxwnx(bool igiagbacrpdnrk, bool uhwnob, int rxrvinyfuealir, int yvxyeypb, double jzpvklfmjw, int bbqbbuhewtksar, double zqqhbkbprvkwy, double jfcixbwsfrhn, string hvnbzrpcqnanwqr);
	string jmaymslhrqxivkezjfo(int kcmbt, bool aziqz, bool kwptajlh, string hlskazd, int qxqag, bool wtsjdgdz, string fbbfxnvvvscdlp);
	int mutqkvxjpldh(int kqtbmonihycov, int vypld, int rjhmmzaz);
	double sysrfttoibie(string wzmqdupybqtjwxk, int bgypkieil, string qkfoznv, int quepchwwuamq, bool wqyrmduykc, string alxheazyfu, bool olqonuihipj);
	string zzhogusscfwnaw(int klxnngpcaezvij, int agiqqjbd, double njcfdszvqlklhp, bool clzhhwavjxoqko, bool itcpetjxaqb, int fysibasiqt, string grxogvnzpmnseq);

};


int mdytnsd::zcmwbgjyrrfyerzjaxflgrmf(int nngucuusl, string zrujrpywvowcf, double sghdkmprcvy, double dfivfanwptklm, int bhbvsqs) {
	string tfmotzmcq = "kyfueuvrcfuwgbthegyyzxazswwvtedcixjsnrzwdltxkhlsxxmmsfjlzazfzeqpockgprxlnzczoac";
	string hiwymcdmddwchgy = "szyiggvwirciwnufwcwwjloyeglkrxytqrcbvmmubvkdvfbaiwjrvtiovd";
	double usdmegukn = 57379;
	string iblleqfyjr = "kcaxoikhrxbvmshweisniu";
	bool rxyhmypdx = false;
	int prollql = 4784;
	string nukwkbcnjnspkmc = "ugaeylnhvrflmoakjwnmuwlaugqlaprrwnjnbsvckpohobihmcecggpy";
	string ccyzivkd = "bulwoabyjjmyszaakfdaoreiudgamfgwwzkfxvkdvnkkkyzzoceieycajtonmfm";
	if (57379 == 57379) {
		int zweu;
		for (zweu = 97; zweu > 0; zweu--) {
			continue;
		}
	}
	if (false == false) {
		int mreicxxqo;
		for (mreicxxqo = 22; mreicxxqo > 0; mreicxxqo--) {
			continue;
		}
	}
	if (string("szyiggvwirciwnufwcwwjloyeglkrxytqrcbvmmubvkdvfbaiwjrvtiovd") != string("szyiggvwirciwnufwcwwjloyeglkrxytqrcbvmmubvkdvfbaiwjrvtiovd")) {
		int pbzqh;
		for (pbzqh = 5; pbzqh > 0; pbzqh--) {
			continue;
		}
	}
	if (string("szyiggvwirciwnufwcwwjloyeglkrxytqrcbvmmubvkdvfbaiwjrvtiovd") == string("szyiggvwirciwnufwcwwjloyeglkrxytqrcbvmmubvkdvfbaiwjrvtiovd")) {
		int qn;
		for (qn = 83; qn > 0; qn--) {
			continue;
		}
	}
	return 65619;
}

string mdytnsd::xaxbuvnyla(bool uuwtvaxfxkct, double lqcgkrmctswh, double uunszl, int qlplomvxi, double fdbpzxmn, string uraddiv) {
	bool ytbvqqcnagqmgwk = false;
	double atjtxwfieqw = 10097;
	string mjtzrm = "rzikrhvtapmqdrtpdnuijphjmxiwuen";
	if (false == false) {
		int iv;
		for (iv = 86; iv > 0; iv--) {
			continue;
		}
	}
	return string("wpzaworffu");
}

double mdytnsd::gcasrufprsvqtvrfrkdxwnx(bool igiagbacrpdnrk, bool uhwnob, int rxrvinyfuealir, int yvxyeypb, double jzpvklfmjw, int bbqbbuhewtksar, double zqqhbkbprvkwy, double jfcixbwsfrhn, string hvnbzrpcqnanwqr) {
	double ilsyr = 6397;
	string dgqaud = "hzyttndqfawefinuuukzmaordqulkvkkm";
	double ncspz = 8789;
	string hihjrgasyorsdb = "xfynmmeoejdubqueurobterrdhfkspynrkibdbpsytckwvckuhzwfzzoxoycrxsggiqlgagecnyeywskosplvlzscopuqxkcmkd";
	int wdvliphgvb = 3352;
	bool immsflwbywekawf = true;
	return 93410;
}

string mdytnsd::jmaymslhrqxivkezjfo(int kcmbt, bool aziqz, bool kwptajlh, string hlskazd, int qxqag, bool wtsjdgdz, string fbbfxnvvvscdlp) {
	string zfsaqabjggbojf = "zfzijzxhqowhl";
	double lcvhcpufasme = 44355;
	bool xsvjwzdoaxpss = true;
	if (string("zfzijzxhqowhl") != string("zfzijzxhqowhl")) {
		int rjewl;
		for (rjewl = 1; rjewl > 0; rjewl--) {
			continue;
		}
	}
	if (44355 != 44355) {
		int kx;
		for (kx = 8; kx > 0; kx--) {
			continue;
		}
	}
	if (true == true) {
		int zvnylhymof;
		for (zvnylhymof = 90; zvnylhymof > 0; zvnylhymof--) {
			continue;
		}
	}
	return string("hgfepldymc");
}

int mdytnsd::mutqkvxjpldh(int kqtbmonihycov, int vypld, int rjhmmzaz) {
	int agaycieqe = 667;
	int pmbmlk = 3649;
	string thshejcxfwqptw = "painbcnwpglqyadnsubl";
	bool ijdqnhp = true;
	double wtqduollncnry = 54606;
	int iwbqazlpe = 834;
	if (3649 == 3649) {
		int go;
		for (go = 94; go > 0; go--) {
			continue;
		}
	}
	if (834 != 834) {
		int pzdxrrhtti;
		for (pzdxrrhtti = 49; pzdxrrhtti > 0; pzdxrrhtti--) {
			continue;
		}
	}
	if (true == true) {
		int cihoef;
		for (cihoef = 93; cihoef > 0; cihoef--) {
			continue;
		}
	}
	return 32893;
}

double mdytnsd::sysrfttoibie(string wzmqdupybqtjwxk, int bgypkieil, string qkfoznv, int quepchwwuamq, bool wqyrmduykc, string alxheazyfu, bool olqonuihipj) {
	string bxbjfbkqsbrr = "ifizykcimnenheztwcq";
	double vbqaqt = 17221;
	bool bsrwra = true;
	double hdttmxdfsnhokkf = 1636;
	bool bdsvm = true;
	bool ortuczmjnp = true;
	bool oxkzxuohlzearsd = false;
	bool dhxqclwdbkmqu = false;
	double qabxrjqyfjtxxu = 19712;
	string tbdaibtd = "mpzfyxftfxlfrhddjhahibcvidleheckrzogpwmbalfpwatgzeosraikpupuzhmkzenthpahsmtr";
	if (true == true) {
		int euibbuhjw;
		for (euibbuhjw = 52; euibbuhjw > 0; euibbuhjw--) {
			continue;
		}
	}
	if (false == false) {
		int nmwwgw;
		for (nmwwgw = 39; nmwwgw > 0; nmwwgw--) {
			continue;
		}
	}
	if (17221 == 17221) {
		int lywqidqyb;
		for (lywqidqyb = 63; lywqidqyb > 0; lywqidqyb--) {
			continue;
		}
	}
	if (true == true) {
		int pnouctwcus;
		for (pnouctwcus = 39; pnouctwcus > 0; pnouctwcus--) {
			continue;
		}
	}
	return 31012;
}

string mdytnsd::zzhogusscfwnaw(int klxnngpcaezvij, int agiqqjbd, double njcfdszvqlklhp, bool clzhhwavjxoqko, bool itcpetjxaqb, int fysibasiqt, string grxogvnzpmnseq) {
	double kuqyjfpimhsu = 6308;
	bool udkbzujb = false;
	return string("xmryklbkfxfjxokztz");
}

string mdytnsd::iackywbrfyysjsfqpa() {
	int fygqiokxutxkkv = 4342;
	string fwxks = "iqqolnyyohagilgecdlglquouugvmlnvpdroltobolpcvhmylryhfiggxjfdnj";
	int mbnkrxqnri = 3804;
	double lqcqmla = 16346;
	bool udjwmpwnsjjte = false;
	int rksshszr = 8031;
	string hylzhw = "ofhdxgwxmiyobdxqvcbbssjqdeddxhtnjwadhuptltfvbfobxxzgkhlqezxi";
	return string("vhrkfnssfhyu");
}

string mdytnsd::vyxlmowimrnmuqqphnjntq(int lvbmxhl, double xgpli) {
	int vxevzyb = 1099;
	string qiedqotbujnj = "wzhskjbasvfxtmvrabilwyfcqqjqpdnboplrpsximalaehlcgwaztrtlkyddcusjeclyzwayi";
	bool tfwcypbrllcag = true;
	double drxiraub = 49570;
	if (string("wzhskjbasvfxtmvrabilwyfcqqjqpdnboplrpsximalaehlcgwaztrtlkyddcusjeclyzwayi") != string("wzhskjbasvfxtmvrabilwyfcqqjqpdnboplrpsximalaehlcgwaztrtlkyddcusjeclyzwayi")) {
		int bn;
		for (bn = 33; bn > 0; bn--) {
			continue;
		}
	}
	if (true == true) {
		int naaqw;
		for (naaqw = 95; naaqw > 0; naaqw--) {
			continue;
		}
	}
	if (string("wzhskjbasvfxtmvrabilwyfcqqjqpdnboplrpsximalaehlcgwaztrtlkyddcusjeclyzwayi") == string("wzhskjbasvfxtmvrabilwyfcqqjqpdnboplrpsximalaehlcgwaztrtlkyddcusjeclyzwayi")) {
		int xcpew;
		for (xcpew = 71; xcpew > 0; xcpew--) {
			continue;
		}
	}
	if (1099 != 1099) {
		int ra;
		for (ra = 64; ra > 0; ra--) {
			continue;
		}
	}
	return string("nzxml");
}

void mdytnsd::fuqoyafnhrptahcqvevzjjoqx(bool ywowzowaurmik) {
	string airdapzi = "nhmnwbjmfwnldthqzahunvtckcphssoxmbuswrlhatkbetpoakvaybfiapeglqjguvxyhvaeujjfeb";
	string vnyilcubmrmm = "lsryunzgforzkqzctihosruifqnbcswmfwlzwqhmndzritqd";
	double cgnnkocbo = 7928;
	int dujtchb = 2385;
	bool tbyrnjsprydiegd = false;
	double rpqnjwic = 53281;
	if (2385 != 2385) {
		int ywcsstohu;
		for (ywcsstohu = 76; ywcsstohu > 0; ywcsstohu--) {
			continue;
		}
	}

}

double mdytnsd::kkephssklvgxnlrcaoy(string bsuenbdan, string sbgmlcru, string zmhnaumpw, bool ujewzqehd, double obsqp, bool yimlqb) {
	int dxfoistafin = 6346;
	int ohgfixcyrazyfyu = 440;
	int wlxoazkfl = 4159;
	double yyskookwkwjyn = 12588;
	bool xacjswzqiqewlp = true;
	string xsdia = "oliybbdu";
	bool ahosvjcr = true;
	string kpfuyy = "oxcmmrbiddpaxenfxmgnnomcckojdyulhxfqmvoifgjgjq";
	if (string("oxcmmrbiddpaxenfxmgnnomcckojdyulhxfqmvoifgjgjq") == string("oxcmmrbiddpaxenfxmgnnomcckojdyulhxfqmvoifgjgjq")) {
		int rtrgi;
		for (rtrgi = 65; rtrgi > 0; rtrgi--) {
			continue;
		}
	}
	if (string("oliybbdu") != string("oliybbdu")) {
		int tht;
		for (tht = 27; tht > 0; tht--) {
			continue;
		}
	}
	if (12588 == 12588) {
		int zswibgkq;
		for (zswibgkq = 95; zswibgkq > 0; zswibgkq--) {
			continue;
		}
	}
	if (string("oxcmmrbiddpaxenfxmgnnomcckojdyulhxfqmvoifgjgjq") == string("oxcmmrbiddpaxenfxmgnnomcckojdyulhxfqmvoifgjgjq")) {
		int vl;
		for (vl = 9; vl > 0; vl--) {
			continue;
		}
	}
	return 49408;
}

double mdytnsd::brnfyixovozaghv(bool raywgxrwrnz, string szopbqxtjfrk) {
	double kvoqgakomm = 48631;
	bool qxpzhbyspzu = true;
	bool dlssaqnmvmaipye = false;
	string dnyhbiptnnjxr = "tvnkkyaelabublazvgdnlrmwxblaqkrluialpmjbxbkmlsxaxfhhimhqcvvlkyqwxxz";
	int rveqxdq = 1226;
	double ilmtvw = 4353;
	int okmmfndm = 191;
	if (1226 == 1226) {
		int pgcgpg;
		for (pgcgpg = 27; pgcgpg > 0; pgcgpg--) {
			continue;
		}
	}
	if (48631 == 48631) {
		int nuqzq;
		for (nuqzq = 30; nuqzq > 0; nuqzq--) {
			continue;
		}
	}
	if (string("tvnkkyaelabublazvgdnlrmwxblaqkrluialpmjbxbkmlsxaxfhhimhqcvvlkyqwxxz") == string("tvnkkyaelabublazvgdnlrmwxblaqkrluialpmjbxbkmlsxaxfhhimhqcvvlkyqwxxz")) {
		int gaurutfr;
		for (gaurutfr = 68; gaurutfr > 0; gaurutfr--) {
			continue;
		}
	}
	return 22753;
}

string mdytnsd::dyfbfutjsmgncoo(string alihsdeppxhq, bool kdlnypwrcpwjoi) {
	double woawpueqwnlrsag = 25777;
	string ftigsncvnmyqbg = "sxennhtior";
	double berwfqob = 15674;
	string iuonbqusetk = "ssoogwgzlxepr";
	string txkjfcian = "bejkiihtpqzequmglqlssapurijaekepqleprbmovzu";
	if (25777 != 25777) {
		int wuh;
		for (wuh = 85; wuh > 0; wuh--) {
			continue;
		}
	}
	if (25777 != 25777) {
		int wgumvomizg;
		for (wgumvomizg = 34; wgumvomizg > 0; wgumvomizg--) {
			continue;
		}
	}
	if (string("ssoogwgzlxepr") == string("ssoogwgzlxepr")) {
		int juogtwp;
		for (juogtwp = 72; juogtwp > 0; juogtwp--) {
			continue;
		}
	}
	return string("chmrwfqq");
}

void mdytnsd::xyrknxppbsak(bool nyaoc, string ieffkqerxqsfd, string utftivoyi, bool axniejwnyp, int ctshgz, double deayjoqmvhxfd, double bxrebgsi, bool mryflgo, double ycqngrhfurj) {
	int ekdyzjrvbip = 1454;
	bool wypap = false;
	double pwltgytavte = 16055;
	int edhwwb = 1634;
	double pfuklkeanxs = 27171;
	int mstjreb = 23;
	string pcimzrx = "lwakcpdelnjikbrbbbxifxodjzuruapagladyzirvqwtupxdzdusefswafhdjicftal";
	string kwcjps = "jcrqlymqirvthgrzcuueelznmaaqrbojtuofdcndypdbvcrojygaykdpgewezfngkybskpqlzucfzlopivuzeyngsdwdubnq";
	double ytfefuxqxyc = 45810;
	if (45810 != 45810) {
		int brie;
		for (brie = 34; brie > 0; brie--) {
			continue;
		}
	}
	if (false != false) {
		int dzqv;
		for (dzqv = 62; dzqv > 0; dzqv--) {
			continue;
		}
	}
	if (string("jcrqlymqirvthgrzcuueelznmaaqrbojtuofdcndypdbvcrojygaykdpgewezfngkybskpqlzucfzlopivuzeyngsdwdubnq") != string("jcrqlymqirvthgrzcuueelznmaaqrbojtuofdcndypdbvcrojygaykdpgewezfngkybskpqlzucfzlopivuzeyngsdwdubnq")) {
		int ohhqxenoi;
		for (ohhqxenoi = 55; ohhqxenoi > 0; ohhqxenoi--) {
			continue;
		}
	}
	if (1454 != 1454) {
		int wuagafh;
		for (wuagafh = 49; wuagafh > 0; wuagafh--) {
			continue;
		}
	}

}

int mdytnsd::tguhpazehemvkw(string wlmavigaxqk, string pewtvlzm, string pytkp, int vbscjxuceune, string wltoqiny, int ltilyrrapi, bool mmhhgvr, double xyrtmvnnaelpt, bool hmimjbjvyvkxcyz, string nylzki) {
	bool lymyo = false;
	if (false != false) {
		int xjjmx;
		for (xjjmx = 99; xjjmx > 0; xjjmx--) {
			continue;
		}
	}
	if (false == false) {
		int nhykq;
		for (nhykq = 5; nhykq > 0; nhykq--) {
			continue;
		}
	}
	return 19143;
}

int mdytnsd::uzrsciuppqwjkltr(string bdguqaudcwvz, string qlrznexi, bool dywhjpg, double onuqyt, double umovorfbda, bool ygaxejymylqrt, string wmqeyujovbgdhek, bool ohjfoxxyztbru, string wclqgfqw) {
	int gdrhdzqysj = 1266;
	int qhjuzonbltrmjpd = 750;
	bool cdpqjy = true;
	bool rtenmaswwqpuk = true;
	int vcayvdllfslury = 1611;
	return 32850;
}

void mdytnsd::ukhavhlthzrauuel(bool oqredjkmyand, bool maaedrfqk, int vtspwtopyklbon, string baqdtqqg) {
	int gcinfvm = 889;
	int xjlbxgetn = 35;
	double achgqi = 86800;
	if (86800 == 86800) {
		int aimobyhqp;
		for (aimobyhqp = 98; aimobyhqp > 0; aimobyhqp--) {
			continue;
		}
	}

}

int mdytnsd::spblkqhcriazzrxkpfqp(int fbpjfnzfnhgqpk) {
	int uqpvvsulvf = 3148;
	return 55136;
}

bool mdytnsd::uquhwkbsgziwwtwocdfya(double knaklmn, int nreaddh, bool fdvonaezdjmpzl, double uxtpizkapq) {
	int vzwptkssnw = 3560;
	if (3560 == 3560) {
		int pijmka;
		for (pijmka = 53; pijmka > 0; pijmka--) {
			continue;
		}
	}
	return false;
}

double mdytnsd::cpmlobtpozymxwfx(int haqyvsg, bool rikafezirvkhu, bool xtfvgjiuvsi, bool oipvkn, string ttizkfgr, bool qaywqaqq) {
	double jbnhupr = 76325;
	int avjfp = 4937;
	string jezspkeger = "ffslujcqzkzaeqrtrgzksfrhmlwch";
	int wjskbdtlsyj = 2826;
	bool devunrwh = true;
	string zxedyxojw = "tugwragdwsssfglqpyygmjtt";
	string ddtufavf = "zvzlaxpfffkknjcwealjkylcyezxfrbufqwgsayzmmdg";
	bool kzswnyqqaokj = true;
	string ektgl = "njqencooxzmailpobncfhagrskvzxeuesblxdewedzmhfbwmjlejrx";
	bool cizhlutolij = true;
	if (string("tugwragdwsssfglqpyygmjtt") != string("tugwragdwsssfglqpyygmjtt")) {
		int dyekfuhrbi;
		for (dyekfuhrbi = 21; dyekfuhrbi > 0; dyekfuhrbi--) {
			continue;
		}
	}
	if (string("ffslujcqzkzaeqrtrgzksfrhmlwch") == string("ffslujcqzkzaeqrtrgzksfrhmlwch")) {
		int didtr;
		for (didtr = 82; didtr > 0; didtr--) {
			continue;
		}
	}
	if (true == true) {
		int ystu;
		for (ystu = 7; ystu > 0; ystu--) {
			continue;
		}
	}
	return 44209;
}

int mdytnsd::qatuuhlzbapvgytbdf(int lbvtpd, string mhekfzst, bool opqqc, string amiuey, bool pejlmbmgzfv, bool rcydfvrkyo) {
	bool odkfunwzdsmeko = false;
	int hwjmxm = 1198;
	string kvsayweliey = "vufabkngfgjzxeceszuqket";
	double pkixgzvzthsu = 10907;
	double orauqkevuti = 4821;
	double woqitqzcnxs = 75266;
	int shuywciuqv = 1066;
	int uciconciklh = 6796;
	bool rxeztvvaqm = true;
	if (10907 != 10907) {
		int sycvd;
		for (sycvd = 29; sycvd > 0; sycvd--) {
			continue;
		}
	}
	return 65640;
}

double mdytnsd::pvaratxcoab(int uyvnaxhvkhf, string eahwr, double tdgyxsbyl, bool sczdifddpatrfwi, bool xjhlljomh, bool ehbezaooeem, int xglkqeqcrsl, int fnekydy) {
	return 31262;
}

int mdytnsd::kvhqhzhpgiyhp(bool wupqvvzv, double xuavtydsklehp, string myziebcdvuernz, int sxvpr) {
	return 19255;
}

mdytnsd::mdytnsd() {
	this->spblkqhcriazzrxkpfqp(3578);
	this->uquhwkbsgziwwtwocdfya(4220, 2192, false, 5938);
	this->cpmlobtpozymxwfx(43, false, true, false, string("tnocskxehlwoyupjhxwtrgydqlazpcalfzczpe"), true);
	this->qatuuhlzbapvgytbdf(2309, string("stdplcqkssxxdynpo"), false, string("tdzpctmbeswtlrldvnbczrgnoiyuqiwpnmojdklbesgafrfdtrrlmdwbppxiwafbqglivpqqgkowf"), false, true);
	this->pvaratxcoab(8510, string("prdivqvgunvupmnvyqlsdoylhnqrqeiwatokxvpngbaqiqgdbezuxdlqciapjqsejkufxefddgnp"), 14850, true, false, true, 3701, 3802);
	this->kvhqhzhpgiyhp(false, 43303, string("edolovb"), 7384);
	this->iackywbrfyysjsfqpa();
	this->vyxlmowimrnmuqqphnjntq(5963, 13167);
	this->fuqoyafnhrptahcqvevzjjoqx(false);
	this->kkephssklvgxnlrcaoy(string("pekqsrvzubbwobhlzsijrxanjifmzgjp"), string("rwgoyuvhxaczfjvswdgrapnddwhomnkdwlowisrvqrraldbttqqaqoqqgwjkidarnyxwkjuginpfzldivxdivvvbdefma"), string("mxlkfiiwtprekykvfwpbkpikwajspuhqcmclylhylmlhqtxcmjtoegbcxwga"), true, 166, true);
	this->brnfyixovozaghv(false, string("bijxukaquwxhykexpdbcrsi"));
	this->dyfbfutjsmgncoo(string("xwxcxjufxjetnabzvydkaujyaerymjooynrhzerqxbaowhforuteazxtjtgrnwamkfjqratxhvao"), false);
	this->xyrknxppbsak(false, string("oweqctebnfbqrxtkxkvngycoaflfutbrcyplyznuxoaqniexaugedrpts"), string("xuhvfrmxxbjoqvbaisqghmkrajqtncof"), true, 4341, 17351, 35949, true, 16718);
	this->tguhpazehemvkw(string("dyzneitlnsxffjtgameuzwaxosfiwesarvdzxzsktbqsxbxvwlwjdhkqrec"), string("einqchwtknbcrhxxingxuhyne"), string("rpwthfjyxqylqeyeivnqfkggdtndhganigimoatnzawoiijzopafjvcsnvx"), 800, string("jqosnuojsfliwtm"), 4894, false, 20621, false, string("vmotxfuuorpwvfrztdnqqeamardwrjnijdglsqerxizrkgdwqahexwxwtdrfepdnpkshgugjt"));
	this->uzrsciuppqwjkltr(string("ewfetnveqhviiqrjqeuhcezpmgxiyvgtfyywabwctcgrkcsiwoqoxkxzujfwpqijyxzozrkkuewjndxdzabeq"), string("sxqqijbvdsgvqxnpouuhhdzgwuqcedykhcbnyfntlpcjqpdvoycoewgvlhmkurwobnzollbernkymvuntcmekgnnrfcig"), false, 5078, 12137, true, string("iqvuzqvkdjwmomtklmylqdzfcpyswxbiecnafmrxbvxmqygbdzxxxyk"), false, string("tgzbehsghamgltedwtzaejfnzttoarffgrgyewqlysibgurwwelxsnikcaoxculfzhnrcbcfxsxthjwnmgirnfwvmilhoxr"));
	this->ukhavhlthzrauuel(false, true, 6039, string("bknedjmyjujmyhbqzto"));
	this->zcmwbgjyrrfyerzjaxflgrmf(1972, string("fcwdhfemlktheknnlazftepbbjiabdwdqbjrggatwayuvu"), 26149, 7506, 5173);
	this->xaxbuvnyla(true, 76708, 2058, 1922, 51488, string("vnjgzrnwxk"));
	this->gcasrufprsvqtvrfrkdxwnx(true, true, 1357, 97, 77940, 3988, 20681, 28614, string("dsocfgqycjcpjalolpbqbstuxiddmppscwkgwotsazpzznazzwwaqwnwuatpytra"));
	this->jmaymslhrqxivkezjfo(203, true, false, string("yttcyfu"), 590, false, string("fmqifyonityfeeevsrmlhpizizrgxkjileorqpanscotkfvogu"));
	this->mutqkvxjpldh(2953, 3665, 2108);
	this->sysrfttoibie(string("gmiztghmafmzthatkeujjskerqjlciteenbfximfjyiptfnuvyqkxdtyygoyukcrpudzhqnaup"), 523, string("clylbu"), 1354, true, string("assqxboykuekyiknvdsicixmjebdradhfisdeshdvmevbucdbkwpeqytxsaadpomihkkub"), false);
	this->zzhogusscfwnaw(1242, 5346, 40402, false, true, 6848, string("cerxjbyhrahivposnkswcmub"));
}

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class gsmvcdq {
public:
	int rfapdhqvs;
	gsmvcdq();
	bool cnxbqszcgn(string wdgmja, string tvzzqxhyjvengos, bool doslnv, int mpgwvcelotosd, string yjjwgkxgz, int nigedl, int xgqlhyoengmgdmt, double pqzpg, double xpnskp);
	bool gkacgbdsuarxrs(int lbtfab, string tlzardjhmiy, double cijhkpqvc, double mssdgpxf, int cklzddmsuve, string ycdytfiy, string fzsmf, bool dphivggftmxey, bool frgpwqybbcajbr);
	string ewnsxeghrnzygjcwxplwpcmn(double rgmlvzgrtnliur, int ixuim, string pmbdyvohugvt, string defqltzqacfb);
	string dijjozwjjzbp(int jvchxpwnh, int bjxqfpbpdvs);
	double gxdwpojusptc(int arflr, double fospts, string wmgpvce, double rbeauqmpzrbluzp);
	bool zjwltnzvrftfshjfijmmnxa(int ccxehbgetyxaoxi, string djswrckzxpuhgi, bool vwlxrsm, int izatgennn, int bxffmrjk);

protected:
	double oopxzrwpam;
	string sybkuzekwcqooz;

	string mtabadkmlccutvcujkd(bool gcwylir, int btwrbjrrhvg);
	double uxzkwzgsmlepahotzwzttlkcc(bool cvqhpugomr, string kzuiqz, double xnaflwkdyvk, int ijxfxmuv, double ddpkrbrxms);

private:
	double zkhhjhfpkchpei;
	bool alvgaku;
	int ojqsstwxrpc;
	double bouddfolamvnpdn;

	bool kxdbmeehghs(bool vfxcjr, bool abwyzanyccyopns, bool aheqbrdtvxtrww, bool ncsfanxhuto, bool ftiezgczvodonmq, string dpxrpw, int occpkhvbe);
	string cnsubkkgdyrwzbztujfxjels(string jyiiqzcqqixa, string ykhhcxgrklh, bool dlrjqhtsafy, int fnqmnuegve, string saiorgfgf);
	void jegnypxjjewnlwkycykxqvn(double nqtjkc, string jreirfvifp, double uiohwitiup, int gybkvvb);
	void vittrdmxgwfixzlzqahi(int qlsygvy, bool mzfbjzzct, double rmxqhsfnub, int acohlneubqawnn, int pxlpqgumnsndtj, int oamalpmvrumfz, string qexkurgckwo, string eflmxpuveib, double yjqjvmvmela);
	int yexgvwoguvgkirabfxxnf(string yyrkwv, string glksjpr, double fkrjdkuabfpo, bool kihhtbfgdzkkz);
	void pmlwpdnfkgnqvpuqcbvpo(double nbktcaersorlutg, double yuryqujim, string mfjsddynafigo, int shqfz, double ynhoupcydcmfls, string brefaomzlzrc, int irtbpfe, bool qjhgdalul, string krfdldmb);
	bool uuinjqvovmic(bool pddaqlf, double okrctidnmizo, string ncnmpnitz, bool tymkfbtybeurze);
	void oglppqdyrkdmnfyqxoaxvka(double eijav, double qtabndxoj, string dihkhardag, double natwstoaqaic, bool udbnatjpwzv);

};


bool gsmvcdq::kxdbmeehghs(bool vfxcjr, bool abwyzanyccyopns, bool aheqbrdtvxtrww, bool ncsfanxhuto, bool ftiezgczvodonmq, string dpxrpw, int occpkhvbe) {
	bool dzvazkcuvf = true;
	string bpgubv = "oqzeexnwsjsbjnxmuhmhyqyzvityxcexmhffjdqlbwgztzzvpqmhofhbujazxbvakfhshvjtysvgdwactq";
	if (string("oqzeexnwsjsbjnxmuhmhyqyzvityxcexmhffjdqlbwgztzzvpqmhofhbujazxbvakfhshvjtysvgdwactq") != string("oqzeexnwsjsbjnxmuhmhyqyzvityxcexmhffjdqlbwgztzzvpqmhofhbujazxbvakfhshvjtysvgdwactq")) {
		int lqadl;
		for (lqadl = 49; lqadl > 0; lqadl--) {
			continue;
		}
	}
	if (true == true) {
		int gsmhlmya;
		for (gsmhlmya = 29; gsmhlmya > 0; gsmhlmya--) {
			continue;
		}
	}
	if (true == true) {
		int wkefu;
		for (wkefu = 88; wkefu > 0; wkefu--) {
			continue;
		}
	}
	if (true != true) {
		int zn;
		for (zn = 1; zn > 0; zn--) {
			continue;
		}
	}
	return true;
}

string gsmvcdq::cnsubkkgdyrwzbztujfxjels(string jyiiqzcqqixa, string ykhhcxgrklh, bool dlrjqhtsafy, int fnqmnuegve, string saiorgfgf) {
	double wxfcnxptgszyfhd = 10469;
	double bjsoafucxw = 79819;
	if (79819 != 79819) {
		int nfhccoud;
		for (nfhccoud = 73; nfhccoud > 0; nfhccoud--) {
			continue;
		}
	}
	if (79819 == 79819) {
		int azsqhruvx;
		for (azsqhruvx = 93; azsqhruvx > 0; azsqhruvx--) {
			continue;
		}
	}
	return string("mvimfnbwxbbjz");
}

void gsmvcdq::jegnypxjjewnlwkycykxqvn(double nqtjkc, string jreirfvifp, double uiohwitiup, int gybkvvb) {
	bool powpdoiwyzfuelg = false;
	string uefnsbxjaanbd = "cmptqlqafbfbcvlhmqmmmwevuoatsdzuaqdvahmspnbwsseilqbaehznqeicldpatv";
	bool gqycyivamtrnpy = false;
	int pjgqllvlikvny = 2118;
	double uzzoaeqntywp = 5793;
	string vywkpzcrnb = "aarqsuwvafaofjypnen";
	string tsbbrfj = "mnioybpxncfoyntcjmgnyudrrlpzjwhspdwbkhgvvvakodszbrkuhvndtzfusvlssmxnapbjx";
	if (string("aarqsuwvafaofjypnen") == string("aarqsuwvafaofjypnen")) {
		int gsanpsj;
		for (gsanpsj = 74; gsanpsj > 0; gsanpsj--) {
			continue;
		}
	}
	if (false != false) {
		int pzphzwo;
		for (pzphzwo = 78; pzphzwo > 0; pzphzwo--) {
			continue;
		}
	}
	if (5793 == 5793) {
		int xttjmjy;
		for (xttjmjy = 82; xttjmjy > 0; xttjmjy--) {
			continue;
		}
	}

}

void gsmvcdq::vittrdmxgwfixzlzqahi(int qlsygvy, bool mzfbjzzct, double rmxqhsfnub, int acohlneubqawnn, int pxlpqgumnsndtj, int oamalpmvrumfz, string qexkurgckwo, string eflmxpuveib, double yjqjvmvmela) {
	bool wtmasmcaqknpdp = true;
	if (true != true) {
		int dheqboiovs;
		for (dheqboiovs = 52; dheqboiovs > 0; dheqboiovs--) {
			continue;
		}
	}

}

int gsmvcdq::yexgvwoguvgkirabfxxnf(string yyrkwv, string glksjpr, double fkrjdkuabfpo, bool kihhtbfgdzkkz) {
	string ooefsxda = "vscr";
	string qsjrqkruaysun = "pwthhbqcoctnoinfablkkxwitdwzbuaqqdxzwidb";
	int llqgjqmxiiexjat = 156;
	if (156 == 156) {
		int tdqtf;
		for (tdqtf = 75; tdqtf > 0; tdqtf--) {
			continue;
		}
	}
	if (string("vscr") != string("vscr")) {
		int mqdpfdaso;
		for (mqdpfdaso = 88; mqdpfdaso > 0; mqdpfdaso--) {
			continue;
		}
	}
	return 10368;
}

void gsmvcdq::pmlwpdnfkgnqvpuqcbvpo(double nbktcaersorlutg, double yuryqujim, string mfjsddynafigo, int shqfz, double ynhoupcydcmfls, string brefaomzlzrc, int irtbpfe, bool qjhgdalul, string krfdldmb) {

}

bool gsmvcdq::uuinjqvovmic(bool pddaqlf, double okrctidnmizo, string ncnmpnitz, bool tymkfbtybeurze) {
	int foaxb = 899;
	int mrvxqgnjeuob = 3227;
	int zkvjxxbdamsku = 148;
	double mtjsuixsozzm = 56257;
	if (3227 == 3227) {
		int wcobjcyc;
		for (wcobjcyc = 2; wcobjcyc > 0; wcobjcyc--) {
			continue;
		}
	}
	if (148 != 148) {
		int gm;
		for (gm = 79; gm > 0; gm--) {
			continue;
		}
	}
	if (56257 == 56257) {
		int zl;
		for (zl = 71; zl > 0; zl--) {
			continue;
		}
	}
	return false;
}

void gsmvcdq::oglppqdyrkdmnfyqxoaxvka(double eijav, double qtabndxoj, string dihkhardag, double natwstoaqaic, bool udbnatjpwzv) {
	double dklxzkaqgjkpgm = 4409;
	int nzikcevzg = 1973;
	int oqoipykwonlakt = 946;
	string tdaflq = "lbctvbztjqcpxzcmcgehugjdsiiexclpdazrztlhspzsealpow";
	string kwqeuttork = "twnchmjngwrbvpyqyerwhlopnttxhecxnuaazzeerjcpgeavqbztbwbsulwlicppdhyiiepzgmytvtvjc";
	int faacvcniochbr = 1292;
	double plvzldgju = 2295;
	double inbry = 19533;
	int qtzesbdoybvf = 116;
	if (1292 == 1292) {
		int vhxmbcok;
		for (vhxmbcok = 79; vhxmbcok > 0; vhxmbcok--) {
			continue;
		}
	}
	if (2295 != 2295) {
		int mokzlyzdr;
		for (mokzlyzdr = 92; mokzlyzdr > 0; mokzlyzdr--) {
			continue;
		}
	}

}

string gsmvcdq::mtabadkmlccutvcujkd(bool gcwylir, int btwrbjrrhvg) {
	double rtkangfcuefbiws = 6414;
	if (6414 != 6414) {
		int lzz;
		for (lzz = 25; lzz > 0; lzz--) {
			continue;
		}
	}
	if (6414 == 6414) {
		int aobh;
		for (aobh = 20; aobh > 0; aobh--) {
			continue;
		}
	}
	if (6414 != 6414) {
		int gzzyuuo;
		for (gzzyuuo = 44; gzzyuuo > 0; gzzyuuo--) {
			continue;
		}
	}
	if (6414 != 6414) {
		int hrxa;
		for (hrxa = 39; hrxa > 0; hrxa--) {
			continue;
		}
	}
	if (6414 == 6414) {
		int spvsaya;
		for (spvsaya = 94; spvsaya > 0; spvsaya--) {
			continue;
		}
	}
	return string("kpzixgvcrztgpf");
}

double gsmvcdq::uxzkwzgsmlepahotzwzttlkcc(bool cvqhpugomr, string kzuiqz, double xnaflwkdyvk, int ijxfxmuv, double ddpkrbrxms) {
	double mhyby = 47112;
	double hxkxvzrjtjz = 52010;
	string oodqadnke = "hdvocnuquxevqvkflrqlmwzhciziqkedqlo";
	string maoayo = "aafkjgtazothblncimdkaowqitslxxhegmlwwjtprquepyfjplngcisyjuwlykrtbducpubxdgyr";
	int obybevkpjwgfxp = 3914;
	string mutmes = "mwhkbkppyqwqalorfbngwlmjvbgoguhkmlfmjehdvyrzwsljappn";
	if (string("mwhkbkppyqwqalorfbngwlmjvbgoguhkmlfmjehdvyrzwsljappn") != string("mwhkbkppyqwqalorfbngwlmjvbgoguhkmlfmjehdvyrzwsljappn")) {
		int fdhjlqwt;
		for (fdhjlqwt = 15; fdhjlqwt > 0; fdhjlqwt--) {
			continue;
		}
	}
	return 72651;
}

bool gsmvcdq::cnxbqszcgn(string wdgmja, string tvzzqxhyjvengos, bool doslnv, int mpgwvcelotosd, string yjjwgkxgz, int nigedl, int xgqlhyoengmgdmt, double pqzpg, double xpnskp) {
	bool mfjxsj = true;
	int eqetk = 4257;
	if (true == true) {
		int dacaoelul;
		for (dacaoelul = 44; dacaoelul > 0; dacaoelul--) {
			continue;
		}
	}
	if (4257 != 4257) {
		int jyc;
		for (jyc = 69; jyc > 0; jyc--) {
			continue;
		}
	}
	if (4257 != 4257) {
		int olyfxvggze;
		for (olyfxvggze = 75; olyfxvggze > 0; olyfxvggze--) {
			continue;
		}
	}
	return false;
}

bool gsmvcdq::gkacgbdsuarxrs(int lbtfab, string tlzardjhmiy, double cijhkpqvc, double mssdgpxf, int cklzddmsuve, string ycdytfiy, string fzsmf, bool dphivggftmxey, bool frgpwqybbcajbr) {
	bool wzydwagyuqfbc = true;
	bool rvvltflildgjp = false;
	int mboha = 1216;
	double vfwztfrncraxlk = 30108;
	bool xxnhytci = true;
	if (true == true) {
		int js;
		for (js = 31; js > 0; js--) {
			continue;
		}
	}
	if (true != true) {
		int qh;
		for (qh = 81; qh > 0; qh--) {
			continue;
		}
	}
	if (true == true) {
		int sdyqlz;
		for (sdyqlz = 43; sdyqlz > 0; sdyqlz--) {
			continue;
		}
	}
	if (true == true) {
		int uwonuy;
		for (uwonuy = 92; uwonuy > 0; uwonuy--) {
			continue;
		}
	}
	return false;
}

string gsmvcdq::ewnsxeghrnzygjcwxplwpcmn(double rgmlvzgrtnliur, int ixuim, string pmbdyvohugvt, string defqltzqacfb) {
	bool drerbjczxpzgzw = false;
	double xojqpqfk = 5463;
	int crxcn = 1195;
	double exefs = 2309;
	string ddtaqc = "mdsklvgkedctrqu";
	string iyddlzueuz = "uzhhvwindhmnducrvxhplxvrishofkwsvulfstavymtypwazdgmjloafxihic";
	string rwextkwipnbvwxu = "jfoajvmqtdqrqpmoyidlvuhleonzcicljngfqmaipmadmvdakfqpozjtzoh";
	int mgitokede = 6086;
	bool hbbjbmukfn = false;
	bool bxcrjgefigdc = true;
	if (false == false) {
		int nkj;
		for (nkj = 90; nkj > 0; nkj--) {
			continue;
		}
	}
	return string("cctfshupzc");
}

string gsmvcdq::dijjozwjjzbp(int jvchxpwnh, int bjxqfpbpdvs) {
	string hbidofvwcrin = "drtdfnhzbfmylorbvsiizwllokynvfixzhsbmzrddsdnsrmriyqgtykttdtsaqjgdyax";
	string obhnrhzticlcdm = "pvawczjzwthemukhn";
	double ovhkbtg = 62191;
	int kmkuejoefhqhiqc = 1203;
	int gnfajqrvmvmvk = 5439;
	int qasmdqz = 958;
	bool bqttiyzqnpejqak = false;
	bool frznrkwjsfq = true;
	if (5439 == 5439) {
		int xvb;
		for (xvb = 82; xvb > 0; xvb--) {
			continue;
		}
	}
	return string("mscitcz");
}

double gsmvcdq::gxdwpojusptc(int arflr, double fospts, string wmgpvce, double rbeauqmpzrbluzp) {
	int fnilbd = 602;
	int khqeyw = 7386;
	bool eivwtehr = false;
	bool bstwpojb = true;
	bool fluonwntkvvpv = true;
	if (602 == 602) {
		int jijhzelovr;
		for (jijhzelovr = 84; jijhzelovr > 0; jijhzelovr--) {
			continue;
		}
	}
	if (true == true) {
		int jb;
		for (jb = 92; jb > 0; jb--) {
			continue;
		}
	}
	if (7386 == 7386) {
		int iz;
		for (iz = 28; iz > 0; iz--) {
			continue;
		}
	}
	return 65229;
}

bool gsmvcdq::zjwltnzvrftfshjfijmmnxa(int ccxehbgetyxaoxi, string djswrckzxpuhgi, bool vwlxrsm, int izatgennn, int bxffmrjk) {
	string ivxtvfnbq = "bclwxbzwd";
	if (string("bclwxbzwd") == string("bclwxbzwd")) {
		int gq;
		for (gq = 92; gq > 0; gq--) {
			continue;
		}
	}
	if (string("bclwxbzwd") != string("bclwxbzwd")) {
		int nzvzojpt;
		for (nzvzojpt = 43; nzvzojpt > 0; nzvzojpt--) {
			continue;
		}
	}
	return true;
}

gsmvcdq::gsmvcdq() {
	this->cnxbqszcgn(string("kjhaztxxkybmmeuxwppdqdhw"), string("ehejpksuqudjuua"), false, 654, string("qmarhaevvimvuyrbgltealhfxqzvyvdlzifgrpdnasuhbosndxpcesrppbtpupxmvymdejs"), 1355, 3814, 7875, 27021);
	this->gkacgbdsuarxrs(1868, string("jfbewxywsqmpuuhjghdvspppsjzmpodwwcvjujyubymdkgjbwputizrpca"), 38842, 48416, 2912, string("jymynzvpscwdpmiofmm"), string("yatjyibketasjtrgunyuhgrlyvdtbmwqjtuuhydphtcljrokfqtvwx"), true, false);
	this->ewnsxeghrnzygjcwxplwpcmn(21542, 5803, string("olsybtqgwrwiqmdbjrkwcayryxctaqnubtzfmjaovtkemwiyqvmzunwxmaocosufilmwxcxxvowtth"), string("bezmsvbgtrxlhzzngfqfpvpmxxelmkomxjoftkayqxbnbtqsbuntwsxmsobgnurvgzbldygqxclgovojmgdqlkolhqufmjgp"));
	this->dijjozwjjzbp(2523, 5830);
	this->gxdwpojusptc(971, 7621, string("ejalelhrczfsuxwosxpfikdcbxqqleefvfmseasayrfyzw"), 73667);
	this->zjwltnzvrftfshjfijmmnxa(1171, string("llxmrewjdgxzjfjycrdejeqydzgbsgimaertfszazbupenr"), true, 1395, 799);
	this->mtabadkmlccutvcujkd(true, 2139);
	this->uxzkwzgsmlepahotzwzttlkcc(false, string("wsgvcjplqotkrdpyrfrcfxzbetkgqjcgwuqmhspzwp"), 8245, 7282, 78638);
	this->kxdbmeehghs(true, false, true, true, true, string("jxtbttjqpbciezfhtgxgelkiwbuiimnryjpmlqtgiwlsymtlqelrgizpyldtpzxls"), 785);
	this->cnsubkkgdyrwzbztujfxjels(string("yniuqhmtsobjujrsymaoxabzzclnuhrwitskgaghokezihyjpsmzwztaklbjygcdhmdjmcavdy"), string("fpfliwcbchysbqkyizegabaxvrvbmrrqvrdgitjluudeoqnqcvctwqdniqqkshxlbshjkxuiynhwhgwbwlwrgbebmw"), false, 1223, string("eheyseyleyadidmggugmsglrefrpanrluqsgrdigiesipsheqnqacfuwafylskg"));
	this->jegnypxjjewnlwkycykxqvn(23135, string("yjybhhhbqwskjawahvwzokitmragnnyyhdzfh"), 16331, 4135);
	this->vittrdmxgwfixzlzqahi(3128, false, 6109, 792, 7439, 6206, string("emtwqfpxiqimmjdfmdsgsbrjhtfifosgzsnkeuvtvmxzikumrgdwlhjgngqdrnhqngrikzvg"), string("idwfpwvhxdduyhgjqlngniuwfptashcdrgniovxdxhtfjyfl"), 29183);
	this->yexgvwoguvgkirabfxxnf(string("vvergbvielegrnmnpvrjkzjtcyacmsyyumijzsxqiteloabnawgcypwygxspdsigmttaf"), string("lfunmfoihbdqexl"), 35215, true);
	this->pmlwpdnfkgnqvpuqcbvpo(10312, 16441, string("qqeufdwobwachkmodolrncqppfuaeqsbtcblwstruqaiqhrkajbkqeoauvbqjpzmilkvscpldeftncsmlhqtuhk"), 4083, 70075, string("npqiqqvviqdxvgcrvlssxnxsruraypv"), 4583, false, string("mmkqtnkwtmdzuyllktxjhcgevfaqxjlggqduqrqavhbipvckppwmxyfkuldpbxawvgcsbegagbputsmcurpvswqszetfvulpei"));
	this->uuinjqvovmic(true, 25181, string("mfcrlkzjdqkaxytzqhykwdipshcheqnhxvnpzxbvwend"), true);
	this->oglppqdyrkdmnfyqxoaxvka(17097, 31198, string("emsmoifqfvehrfxxeuqutppliahkqepoonpoxglsdzrwjyjxddbyfakyofzddf"), 2172, true);
}

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class hpdbtkh {
public:
	bool cmozmspenbqclqh;
	int luhyszmtpshmk;
	hpdbtkh();
	string cphupxcnpwzgw(int jdsvovupkoi);
	string dmfikviqekhgccoa();
	double cwufnyrqjnwrazmzojuylt(int axtngwmrsmqnxxs, bool fgjtqanbxcrfuvk, string elhcss, bool jnmjnjbkwxrptx, bool dptfdnbcwlkbo, string xfvarxrqdatmbbj, string oxpdznxihevpjf);
	bool ohojyfrngbriozgqtuwhaa(bool syjlvuyilviw, int gjiedtrbpj, int ignjdwwwcw, string gltbrhxmzdzqf, double ooyhrzcbjce, int kmucn);
	double gqkzkxmvjjvbwxlqegabylvm(double wsvesxbv, int huioipck, double pgqhmmufbcno, double karttmstjjz, double guvvjqkvdio, string jscumeqrtsdgsca, bool dmuauuyjxjxw, bool futehuy, double swmrilezszknr, bool kigqf);

protected:
	double kvxivniscwmvv;
	string uqbcnmasl;
	int lmdin;
	string qfwmjyv;
	double svzpmxsrnvxeotz;

	void rxdlsnxdizwhjagldqbqnhskh(double blyanedhgkukhyi, double khezloucxdjbgar);
	void yqfxipdsrfrjnnmia(int lesayh, int ahbpprll, double wvughfuiv, string taelrw, string hnocexqfzdzlbu, int cxcped, int inqqlf, double suuydmjfc, string gjljquwbwbstnck);
	int qesrbasreheb(double kbtvr, bool afxlcebprtdnrli, string bgzyimwmgo, double oztcqctjxbmiue, double pbxkgwozj);

private:
	double suivfqp;
	string zdmnbfsga;
	string lvzxqnm;

	void ezttvzgfrqbr(string nwmmotvglq, string zfadaasq, bool amedliuscww, bool gvnmzyp, string pgzaev, string gcvkq, int jvkwlcemqrunyv);
	string jwotrjxeqtubfqwlsfuv(bool esygyadyqi, double ytyzxskexfmwbe, double bjblx);

};


void hpdbtkh::ezttvzgfrqbr(string nwmmotvglq, string zfadaasq, bool amedliuscww, bool gvnmzyp, string pgzaev, string gcvkq, int jvkwlcemqrunyv) {
	double wqfheqoqdi = 12164;
	int tznxusumwqf = 456;
	string okuudpcmxkham = "nfhrmecfvcimmjgzzukgicwyrqtlpnywnqpxnuwwooyjvqjzbwfqyeiszzgermesruqknllwlbttpstbzjjaarvridlgjpjnznj";
	bool czizqmf = false;
	bool ordvdaggaunilb = false;
	double isuabxtbtxkh = 7263;
	double fbshedmhluhlfka = 8422;
	double lohqzgn = 811;
	int qhlevufa = 34;
	if (string("nfhrmecfvcimmjgzzukgicwyrqtlpnywnqpxnuwwooyjvqjzbwfqyeiszzgermesruqknllwlbttpstbzjjaarvridlgjpjnznj") != string("nfhrmecfvcimmjgzzukgicwyrqtlpnywnqpxnuwwooyjvqjzbwfqyeiszzgermesruqknllwlbttpstbzjjaarvridlgjpjnznj")) {
		int lobjn;
		for (lobjn = 73; lobjn > 0; lobjn--) {
			continue;
		}
	}

}

string hpdbtkh::jwotrjxeqtubfqwlsfuv(bool esygyadyqi, double ytyzxskexfmwbe, double bjblx) {
	bool dqjekecen = true;
	string koadmjp = "dalyglzecsmeeoyyhqqgurfygyfridprtavhtmrjgxqnvxu";
	string lerwjfvbga = "";
	double ouovsu = 33563;
	double wtdnwalsbrppva = 9085;
	bool fpzawnhwqews = true;
	double utyzjabkjon = 13516;
	string lnkjfzjlzot = "wzngijiziuhkukqnmptbnqnjtdairpogayjxcchurodnhqvybmxkmkjshjfnklprr";
	string cyxouwlm = "enqutyxoqvelmyfwxskcrqosqqmrwdrqsabpsgpbytpvrve";
	if (33563 != 33563) {
		int vqc;
		for (vqc = 51; vqc > 0; vqc--) {
			continue;
		}
	}
	if (13516 == 13516) {
		int edvtdnxk;
		for (edvtdnxk = 54; edvtdnxk > 0; edvtdnxk--) {
			continue;
		}
	}
	if (string("") == string("")) {
		int qmjaruge;
		for (qmjaruge = 52; qmjaruge > 0; qmjaruge--) {
			continue;
		}
	}
	return string("llm");
}

void hpdbtkh::rxdlsnxdizwhjagldqbqnhskh(double blyanedhgkukhyi, double khezloucxdjbgar) {

}

void hpdbtkh::yqfxipdsrfrjnnmia(int lesayh, int ahbpprll, double wvughfuiv, string taelrw, string hnocexqfzdzlbu, int cxcped, int inqqlf, double suuydmjfc, string gjljquwbwbstnck) {
	double glylsthh = 37030;
	bool czpnhereug = false;
	if (37030 != 37030) {
		int jcrlcwlj;
		for (jcrlcwlj = 68; jcrlcwlj > 0; jcrlcwlj--) {
			continue;
		}
	}
	if (false == false) {
		int gsv;
		for (gsv = 40; gsv > 0; gsv--) {
			continue;
		}
	}

}

int hpdbtkh::qesrbasreheb(double kbtvr, bool afxlcebprtdnrli, string bgzyimwmgo, double oztcqctjxbmiue, double pbxkgwozj) {
	int edmbrigd = 8030;
	int igymzfmkyt = 3767;
	double xdermzpzigdlasb = 30418;
	return 18042;
}

string hpdbtkh::cphupxcnpwzgw(int jdsvovupkoi) {
	bool scezaqfo = false;
	double zstpgnfxhetrc = 59700;
	string szwdwa = "ntuxxlslmtdtzktrtjxayututdeffdwxgsrabgskjqmlngjc";
	return string("dkfkomwqke");
}

string hpdbtkh::dmfikviqekhgccoa() {
	bool gvnms = true;
	bool wbzztooj = false;
	double tlfkblty = 68302;
	int axmpvtginhhekn = 5999;
	double gwlpdaftb = 71916;
	bool ltbuwe = true;
	bool btfagh = true;
	string rclikettqsuy = "bhromcvujlwqiwetwjjebfaq";
	bool vsqthcglwoizbao = false;
	if (false != false) {
		int jbglsoimlq;
		for (jbglsoimlq = 9; jbglsoimlq > 0; jbglsoimlq--) {
			continue;
		}
	}
	if (false == false) {
		int gjyiyfpyp;
		for (gjyiyfpyp = 78; gjyiyfpyp > 0; gjyiyfpyp--) {
			continue;
		}
	}
	if (false != false) {
		int grxymycjtx;
		for (grxymycjtx = 79; grxymycjtx > 0; grxymycjtx--) {
			continue;
		}
	}
	return string("svfokxrpolruumfnxqj");
}

double hpdbtkh::cwufnyrqjnwrazmzojuylt(int axtngwmrsmqnxxs, bool fgjtqanbxcrfuvk, string elhcss, bool jnmjnjbkwxrptx, bool dptfdnbcwlkbo, string xfvarxrqdatmbbj, string oxpdznxihevpjf) {
	double szetat = 21443;
	string rzhalptm = "phnmm";
	double rilmuukwevh = 30608;
	double qqpdcj = 28394;
	double pwwea = 20713;
	int dtdeiljzgmo = 4011;
	string ixpotbgpi = "qquhwmosjildvhegncgmkuwnlxppxpohpjmadnft";
	if (string("phnmm") != string("phnmm")) {
		int ibqnhsvn;
		for (ibqnhsvn = 24; ibqnhsvn > 0; ibqnhsvn--) {
			continue;
		}
	}
	if (20713 == 20713) {
		int mciddodw;
		for (mciddodw = 100; mciddodw > 0; mciddodw--) {
			continue;
		}
	}
	if (21443 != 21443) {
		int uqbbsw;
		for (uqbbsw = 49; uqbbsw > 0; uqbbsw--) {
			continue;
		}
	}
	return 34525;
}

bool hpdbtkh::ohojyfrngbriozgqtuwhaa(bool syjlvuyilviw, int gjiedtrbpj, int ignjdwwwcw, string gltbrhxmzdzqf, double ooyhrzcbjce, int kmucn) {
	string rtdtfqjlh = "jhfetzvbikbohdpobltatqibbeoriiqvqrfoykxpxkyk";
	double fyjpmqhtikxvl = 14085;
	int nuqhtjcyrmn = 146;
	double hyfkpjzjyda = 30226;
	if (14085 == 14085) {
		int mqxg;
		for (mqxg = 37; mqxg > 0; mqxg--) {
			continue;
		}
	}
	if (30226 == 30226) {
		int eazxkkx;
		for (eazxkkx = 55; eazxkkx > 0; eazxkkx--) {
			continue;
		}
	}
	if (30226 != 30226) {
		int aheqyikhi;
		for (aheqyikhi = 18; aheqyikhi > 0; aheqyikhi--) {
			continue;
		}
	}
	if (14085 != 14085) {
		int enux;
		for (enux = 59; enux > 0; enux--) {
			continue;
		}
	}
	if (14085 == 14085) {
		int bld;
		for (bld = 22; bld > 0; bld--) {
			continue;
		}
	}
	return true;
}

double hpdbtkh::gqkzkxmvjjvbwxlqegabylvm(double wsvesxbv, int huioipck, double pgqhmmufbcno, double karttmstjjz, double guvvjqkvdio, string jscumeqrtsdgsca, bool dmuauuyjxjxw, bool futehuy, double swmrilezszknr, bool kigqf) {
	bool hhqcsnaei = true;
	double qimniabrlrivpz = 12112;
	bool zqvtjuzeutogk = true;
	string aedeydfv = "abruymmdonklbaxzcgtgcrvcnzcobnuffkecpbjfqserccdselemfutjxgpgmcgrtdhlncxqumidgmofzifupviljuhhaslwl";
	string lfeplxgimm = "zmtosnaoxehsvmaxhrcbgdfiljtylqkuyreybgsdopddlmfouinsjctqt";
	double myflonujgfonz = 11661;
	double dkwkvdumwrgcagb = 27044;
	bool zhrby = false;
	if (false == false) {
		int fanefqt;
		for (fanefqt = 24; fanefqt > 0; fanefqt--) {
			continue;
		}
	}
	if (true != true) {
		int wylmas;
		for (wylmas = 42; wylmas > 0; wylmas--) {
			continue;
		}
	}
	if (true == true) {
		int qrgnbsfto;
		for (qrgnbsfto = 52; qrgnbsfto > 0; qrgnbsfto--) {
			continue;
		}
	}
	if (false != false) {
		int lsbbwvx;
		for (lsbbwvx = 64; lsbbwvx > 0; lsbbwvx--) {
			continue;
		}
	}
	return 95764;
}

hpdbtkh::hpdbtkh() {
	this->cphupxcnpwzgw(117);
	this->dmfikviqekhgccoa();
	this->cwufnyrqjnwrazmzojuylt(1484, false, string("izixavuk"), false, false, string("gmcmdqmdpjypssjxvaurarnuvlyfhachdnqgfjjztyqqcezvvodzuosyi"), string("fnuyfbihowaeqabwgvfpklcuquuwbccunmlyzuuaitrdbhqxdbchsh"));
	this->ohojyfrngbriozgqtuwhaa(false, 1658, 2691, string("msszzxwcglarnohkaahvjnecstazqszleubfgvdsmbn"), 6892, 551);
	this->gqkzkxmvjjvbwxlqegabylvm(10895, 5006, 40545, 27269, 17536, string("rrdeadrrquhwkmnziakqjtliuusbmfyl"), false, true, 68880, true);
	this->rxdlsnxdizwhjagldqbqnhskh(73397, 28961);
	this->yqfxipdsrfrjnnmia(4400, 5518, 29403, string("wvosm"), string("wejffuomfyooggqtettxdrjvnsyvtykwxcp"), 6834, 632, 3359, string("xml"));
	this->qesrbasreheb(50429, true, string("grooabakssecssvoyeegneujvjbupbjittckbnizlzaevwqycjblfysbnitylqrg"), 13970, 65722);
	this->ezttvzgfrqbr(string("mygoiuenwyezfagfzgrduxihvdtfhjvkklklpvflfchbrbvdvjnbv"), string("nxkrbptfasubvzrwvjpceqmjiwureistpvigywppsueuisjfbetggecwyaaqcvhkvm"), false, true, string("zzukfzoqzlpikigvahtpgfzyghkjcsjfjaxykavmexrpcnizctjgfnrur"), string("nfvgpgvvlosoejuvzvtowwkcbhvkzqtvobajgnmtmzdiprqltcsrepbeykpazjsfajmurdtoosjlcn"), 4721);
	this->jwotrjxeqtubfqwlsfuv(false, 39886, 15441);
}

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class wbafihq {
public:
	double vcayzkflg;
	bool qopsqx;
	wbafihq();
	void bvqobdfdzghwohj(bool aaiyxwalyu, string ohdszoasqlfeoo, double bcthpaxoevittco, int rzcgfmbul, double prdvwodgf, double mvkefi, int jihdhyyn, string kcvlpwgofm);
	void gbnrnlzwlfzkcshh();

protected:
	string ahmfnewvmeh;
	double dbyrnqmnwvk;
	bool fravzk;

	string hyjaixhxtxtxlzfyemmoa(int occppy, int acoibjmupnqof, double ynefgsxootu, int usrary, bool ldxfsrysqvufi);
	string dxjykaukqtfhayrumntptoah(int bcoiddorare, bool kyvykcjlfv, string xiokiw, bool gwrgnyhc);
	bool flnlwbuvzqpkk(double orarshk, string ureqfpaajehqaz, string emaysykwsxtpe, int ojjntsrnujgh, int bdwckfvwglwel, bool hdvqlzgbdjehm, bool zrbknlwwxvls, double krosknqoyrg, bool xvosuizes);
	void efqqnwyscokllpeid(bool lrpzidykbdnvewg, string yvjrnbxxrj, bool ftnwo, double bzwvtzqqpavzjir, double scwjebwbltzdq, int hdffrii);
	double xjfslzhvfemphqbcppujzg();
	void tyemsruito(double oxvifdjfe, int vkozxcuozv, string jpzxztonljrarxt);
	string nypxltcjmvp(string zhpgzfctellgls, bool golpnmtqimw, double mvwxd, double haerur, double nygjueekuj);
	bool wkzdwwsxbkeqouprcb(bool hrlaltmgftivte, bool obgfgtvappah, string ktpjzslgmrmfe);
	string oezztpabfauwddbhaktf(double jfyypuacsqp, bool arwcurx, string dwfmgdtvfk);
	bool pcodgaknfxdcmpze(int qwbkn, int ebszpoldp, double isiiajljoektsu, string vibllsatiiqsk, int nhyrvqlbkjex, bool emdrl, string ymghgeriiq);

private:
	string dczcrpo;
	int cnhborvag;
	int bfvqt;
	string xbjocrn;
	double wjxcaemwsn;

	string vvirpcfzjsn();
	bool iejwfgxnqzcwra(bool ezssmcndm, string euyzpz);
	int vxrpxaelldzqmzbrpjjst(bool qovkisongvha, bool zkfhkjowmxzrc, int lqjwceorfq, bool fjqxrcjtfhrcxwi, int niruysdm, int uyvbkdyxvmq);
	void iztyavcfkwzy(string xhnyfyylcsaxgh, bool fznmuumb, string fhslsulnwythrrv, bool brwblmiuajvdfn, double jomfnlmcazjde, bool ylvkmkbb, int dgpfjtojjuyl, int mjvdclq, string umjdt);
	int opwwnxsfroncerfafmirsk(bool zsfybpojbuh, bool fczwo, string mtwjxnfuctxfuhz, double ljebxli, bool tmcqu, double pxiuhejotensujg, string ikshnrdpeipia);

};


string wbafihq::vvirpcfzjsn() {
	string toaylonivwl = "cmasotgceusjypjqowiwouwgttwzdavzmvxvsuclbjlqizfulcvkxhizpucjfsxjqwncswwgyi";
	double bgroc = 9341;
	bool lggzxdxi = false;
	string ejdgbfytlynssm = "dzskbcomeirfonlkenyepye";
	double kxebgkjze = 11921;
	int oeqfb = 5967;
	string peandyymjorm = "pehiqmzfpclmnmxgua";
	string ycpcjfvkkxrtkhj = "jfsafnhqqrtjwyrugfhrpipvbysbhtdxzwoxhpaglknuchujhtuwta";
	if (string("cmasotgceusjypjqowiwouwgttwzdavzmvxvsuclbjlqizfulcvkxhizpucjfsxjqwncswwgyi") != string("cmasotgceusjypjqowiwouwgttwzdavzmvxvsuclbjlqizfulcvkxhizpucjfsxjqwncswwgyi")) {
		int rguz;
		for (rguz = 32; rguz > 0; rguz--) {
			continue;
		}
	}
	if (11921 == 11921) {
		int lnqkjeworf;
		for (lnqkjeworf = 86; lnqkjeworf > 0; lnqkjeworf--) {
			continue;
		}
	}
	if (11921 == 11921) {
		int bble;
		for (bble = 35; bble > 0; bble--) {
			continue;
		}
	}
	if (false == false) {
		int bfod;
		for (bfod = 11; bfod > 0; bfod--) {
			continue;
		}
	}
	if (5967 == 5967) {
		int bxwe;
		for (bxwe = 65; bxwe > 0; bxwe--) {
			continue;
		}
	}
	return string("awxotglhmrxeqmhlefe");
}

bool wbafihq::iejwfgxnqzcwra(bool ezssmcndm, string euyzpz) {
	bool mjcftuc = true;
	bool gcajnqbewiv = false;
	int vaycgjos = 1102;
	double hazooivsb = 52217;
	int lcekpepiomywbfv = 643;
	double yvxamouwytem = 89925;
	bool qoxgkwrvi = false;
	double ybsvulz = 7171;
	bool wlqzgzkkyu = false;
	if (false != false) {
		int piyl;
		for (piyl = 17; piyl > 0; piyl--) {
			continue;
		}
	}
	if (1102 != 1102) {
		int ltjcrw;
		for (ltjcrw = 55; ltjcrw > 0; ltjcrw--) {
			continue;
		}
	}
	if (1102 == 1102) {
		int mgzbta;
		for (mgzbta = 9; mgzbta > 0; mgzbta--) {
			continue;
		}
	}
	if (7171 == 7171) {
		int hjlwyokq;
		for (hjlwyokq = 75; hjlwyokq > 0; hjlwyokq--) {
			continue;
		}
	}
	return false;
}

int wbafihq::vxrpxaelldzqmzbrpjjst(bool qovkisongvha, bool zkfhkjowmxzrc, int lqjwceorfq, bool fjqxrcjtfhrcxwi, int niruysdm, int uyvbkdyxvmq) {
	bool usoqjbofyyrczhg = true;
	double chmmn = 10966;
	double xzyyqdmxv = 43441;
	if (10966 == 10966) {
		int smphi;
		for (smphi = 52; smphi > 0; smphi--) {
			continue;
		}
	}
	if (43441 != 43441) {
		int cyqkcynm;
		for (cyqkcynm = 22; cyqkcynm > 0; cyqkcynm--) {
			continue;
		}
	}
	if (true == true) {
		int qdwrmsyual;
		for (qdwrmsyual = 62; qdwrmsyual > 0; qdwrmsyual--) {
			continue;
		}
	}
	if (10966 == 10966) {
		int fyokia;
		for (fyokia = 70; fyokia > 0; fyokia--) {
			continue;
		}
	}
	return 45718;
}

void wbafihq::iztyavcfkwzy(string xhnyfyylcsaxgh, bool fznmuumb, string fhslsulnwythrrv, bool brwblmiuajvdfn, double jomfnlmcazjde, bool ylvkmkbb, int dgpfjtojjuyl, int mjvdclq, string umjdt) {
	int wsxupgasjzrk = 2680;
	int aarwxh = 4728;
	bool sllsuriro = true;
	bool yhviqzgrlgoi = true;
	int rszmplqqexm = 4624;
	string diwfkbbwcpjqe = "umyukafnsjgfhzcairfttliullzylfdwtkpmjyg";
	double zrgnpckva = 41006;
	if (4624 != 4624) {
		int wamp;
		for (wamp = 81; wamp > 0; wamp--) {
			continue;
		}
	}
	if (41006 != 41006) {
		int nmv;
		for (nmv = 43; nmv > 0; nmv--) {
			continue;
		}
	}
	if (true == true) {
		int cxjqqhgwdn;
		for (cxjqqhgwdn = 84; cxjqqhgwdn > 0; cxjqqhgwdn--) {
			continue;
		}
	}
	if (string("umyukafnsjgfhzcairfttliullzylfdwtkpmjyg") != string("umyukafnsjgfhzcairfttliullzylfdwtkpmjyg")) {
		int eznmfyl;
		for (eznmfyl = 63; eznmfyl > 0; eznmfyl--) {
			continue;
		}
	}

}

int wbafihq::opwwnxsfroncerfafmirsk(bool zsfybpojbuh, bool fczwo, string mtwjxnfuctxfuhz, double ljebxli, bool tmcqu, double pxiuhejotensujg, string ikshnrdpeipia) {
	bool qdnrxgmgjmk = true;
	string aqezknrqfj = "nfvvpzwpedtfzweohejhdhlfavbxxdvtpdehzyilbipmekruagynnuefqrhrrjcbfqxkfdbruyswcngllosxrjbapkydhza";
	string xsmcegtod = "gxznvehgzrxthmfjiqzyovttvpvzocqrtjyrctyypuzbzfjrkitzgyarlghmonqajfritstzsaokixnchzfescpqilvubuitrhy";
	double kiyxuydhao = 710;
	bool sjhwlhyje = true;
	if (string("gxznvehgzrxthmfjiqzyovttvpvzocqrtjyrctyypuzbzfjrkitzgyarlghmonqajfritstzsaokixnchzfescpqilvubuitrhy") != string("gxznvehgzrxthmfjiqzyovttvpvzocqrtjyrctyypuzbzfjrkitzgyarlghmonqajfritstzsaokixnchzfescpqilvubuitrhy")) {
		int cwukzhszs;
		for (cwukzhszs = 26; cwukzhszs > 0; cwukzhszs--) {
			continue;
		}
	}
	if (true == true) {
		int mc;
		for (mc = 86; mc > 0; mc--) {
			continue;
		}
	}
	if (string("gxznvehgzrxthmfjiqzyovttvpvzocqrtjyrctyypuzbzfjrkitzgyarlghmonqajfritstzsaokixnchzfescpqilvubuitrhy") == string("gxznvehgzrxthmfjiqzyovttvpvzocqrtjyrctyypuzbzfjrkitzgyarlghmonqajfritstzsaokixnchzfescpqilvubuitrhy")) {
		int oxcegchody;
		for (oxcegchody = 3; oxcegchody > 0; oxcegchody--) {
			continue;
		}
	}
	return 64732;
}

string wbafihq::hyjaixhxtxtxlzfyemmoa(int occppy, int acoibjmupnqof, double ynefgsxootu, int usrary, bool ldxfsrysqvufi) {
	bool kjyzoxwpjougsl = false;
	double njpchjbo = 18804;
	string iqllved = "cpxuxfcqdfmftrzmpzmtlpvgccnftturpilqezgbiuxhjnjdwegxnihq";
	int fqynyjjgl = 2783;
	bool zuzvyovlgj = true;
	bool minlgqg = true;
	if (true != true) {
		int nakkgnrt;
		for (nakkgnrt = 72; nakkgnrt > 0; nakkgnrt--) {
			continue;
		}
	}
	if (true == true) {
		int qtzyjlruy;
		for (qtzyjlruy = 87; qtzyjlruy > 0; qtzyjlruy--) {
			continue;
		}
	}
	if (18804 != 18804) {
		int gg;
		for (gg = 31; gg > 0; gg--) {
			continue;
		}
	}
	return string("rvkaswfwimdymkvqfbal");
}

string wbafihq::dxjykaukqtfhayrumntptoah(int bcoiddorare, bool kyvykcjlfv, string xiokiw, bool gwrgnyhc) {
	int doknxawqsun = 4344;
	double attwqhtd = 14205;
	double maetp = 34464;
	bool urmvrbdvcikliz = false;
	int ivblvchpsipneg = 2143;
	double xhmyyyki = 20983;
	bool rtsoei = true;
	int eyijti = 6170;
	return string("bdxev");
}

bool wbafihq::flnlwbuvzqpkk(double orarshk, string ureqfpaajehqaz, string emaysykwsxtpe, int ojjntsrnujgh, int bdwckfvwglwel, bool hdvqlzgbdjehm, bool zrbknlwwxvls, double krosknqoyrg, bool xvosuizes) {
	double vypysvrjeiuvvl = 26209;
	bool bvhcpaxdvr = false;
	double uhdfq = 20680;
	int wxvmkbsizgfcmw = 2706;
	bool pxexow = false;
	int ewaibyw = 4867;
	string sfkalqlvtrmkrru = "mfacfpfumzhcphbodwnzirciwjfaarwrfpjauxecpjudkhkmhtbncqjyotpaxydwufuo";
	string devlkbfory = "bbckaoatxkulydnrddkongycwlawtzzcyxoaizyhbkbqxrwjpauvyzpeyqlgjgzndypxdhsvernikplzvevzawlmuwrmwgr";
	if (2706 != 2706) {
		int fei;
		for (fei = 2; fei > 0; fei--) {
			continue;
		}
	}
	if (26209 != 26209) {
		int pen;
		for (pen = 74; pen > 0; pen--) {
			continue;
		}
	}
	if (false == false) {
		int wacrpwjao;
		for (wacrpwjao = 51; wacrpwjao > 0; wacrpwjao--) {
			continue;
		}
	}
	return false;
}

void wbafihq::efqqnwyscokllpeid(bool lrpzidykbdnvewg, string yvjrnbxxrj, bool ftnwo, double bzwvtzqqpavzjir, double scwjebwbltzdq, int hdffrii) {
	bool bilvkhxa = true;

}

double wbafihq::xjfslzhvfemphqbcppujzg() {
	string socro = "yvtoidcfvwzkmrazphkmsncdwbeefrbatzvbgzreakubpwkbycpntjzwngmcqacmszkgzrxiwprretnnrruktwkfuufgauer";
	int ulqaietmyx = 754;
	int jqwyh = 4328;
	string agrbyeeqw = "mwxxussfbspqfpfxzxgvbdcwtkpubqmadcrbgpuasbqzqrpbgpkhtwcsctycymxxjbfjdwmvpymgehkersrwmoofqrrmq";
	if (754 == 754) {
		int umyqc;
		for (umyqc = 56; umyqc > 0; umyqc--) {
			continue;
		}
	}
	if (754 == 754) {
		int igqt;
		for (igqt = 18; igqt > 0; igqt--) {
			continue;
		}
	}
	if (4328 != 4328) {
		int lmoxlhjz;
		for (lmoxlhjz = 68; lmoxlhjz > 0; lmoxlhjz--) {
			continue;
		}
	}
	return 21429;
}

void wbafihq::tyemsruito(double oxvifdjfe, int vkozxcuozv, string jpzxztonljrarxt) {
	bool jpxroqtkmbf = false;
	if (false == false) {
		int wvwekckb;
		for (wvwekckb = 23; wvwekckb > 0; wvwekckb--) {
			continue;
		}
	}
	if (false != false) {
		int peyy;
		for (peyy = 92; peyy > 0; peyy--) {
			continue;
		}
	}

}

string wbafihq::nypxltcjmvp(string zhpgzfctellgls, bool golpnmtqimw, double mvwxd, double haerur, double nygjueekuj) {
	return string("egxotzipekz");
}

bool wbafihq::wkzdwwsxbkeqouprcb(bool hrlaltmgftivte, bool obgfgtvappah, string ktpjzslgmrmfe) {
	string uoxzzbhexvraysx = "scbnkqvveaouyrsvgfokdqiqnlnderopozckostmiuwctklxcibfkgaitvwwssrftwebxnhewpzitajdycnoiq";
	string lxzgowc = "hydygqlochemenkezjflaiqqubjncmeabidjeztonpkavnxlhnuwtnzmiaiusgkaee";
	int belalckv = 53;
	bool oqnzwbz = false;
	int senmpdwym = 1090;
	double mmacg = 87314;
	double yvuzd = 30454;
	bool uzeqfcpktkcggbh = false;
	string pfehwtrosorln = "wgfaohodjjvvtgbrdynswqffbhqpoljmmekdirqjnxtqmzduynduxgxqcvmtcmqhsczuzsiyhjdueiflixfxrdkrhbbkrlmry";
	if (false != false) {
		int fjrqm;
		for (fjrqm = 60; fjrqm > 0; fjrqm--) {
			continue;
		}
	}
	if (1090 != 1090) {
		int pchbigao;
		for (pchbigao = 30; pchbigao > 0; pchbigao--) {
			continue;
		}
	}
	if (1090 == 1090) {
		int bsw;
		for (bsw = 61; bsw > 0; bsw--) {
			continue;
		}
	}
	return false;
}

string wbafihq::oezztpabfauwddbhaktf(double jfyypuacsqp, bool arwcurx, string dwfmgdtvfk) {
	string ekzaqtrxjtxcfgt = "vvzgsfaxeqdjzieny";
	double axprgndya = 7585;
	int ouuqyjgrjh = 928;
	int quxsallam = 525;
	string xjrpjll = "sneyxkhsafwfwgymbpahywlujqdthzfkkupiijclkdtoosiogwnbijsdeemdszopmhfwhtsimgimdfiuujgaltzmxhuimwxo";
	int zktyd = 562;
	int fssgnbyrvgtftta = 2824;
	bool opkvf = true;
	int mexozxlfyo = 994;
	string ujfsdltk = "dzdjwdxqbacpyrefjzzvfyttjdgzxmphhegdpaiwxfowhxvrceswsbqlacybkeoy";
	if (525 != 525) {
		int rcf;
		for (rcf = 39; rcf > 0; rcf--) {
			continue;
		}
	}
	if (994 != 994) {
		int hyicm;
		for (hyicm = 50; hyicm > 0; hyicm--) {
			continue;
		}
	}
	if (525 == 525) {
		int er;
		for (er = 83; er > 0; er--) {
			continue;
		}
	}
	if (562 == 562) {
		int bsj;
		for (bsj = 47; bsj > 0; bsj--) {
			continue;
		}
	}
	if (7585 == 7585) {
		int xoihe;
		for (xoihe = 44; xoihe > 0; xoihe--) {
			continue;
		}
	}
	return string("ccq");
}

bool wbafihq::pcodgaknfxdcmpze(int qwbkn, int ebszpoldp, double isiiajljoektsu, string vibllsatiiqsk, int nhyrvqlbkjex, bool emdrl, string ymghgeriiq) {
	string qvjkmkughi = "awcksxrthcbmsbburnqvpvnzjnwtlxphvyspaxorcje";
	int oyiiuid = 2222;
	return true;
}

void wbafihq::bvqobdfdzghwohj(bool aaiyxwalyu, string ohdszoasqlfeoo, double bcthpaxoevittco, int rzcgfmbul, double prdvwodgf, double mvkefi, int jihdhyyn, string kcvlpwgofm) {
	double ymakcfd = 12599;
	double ggimuiczfmd = 21471;
	if (21471 == 21471) {
		int zzar;
		for (zzar = 98; zzar > 0; zzar--) {
			continue;
		}
	}

}

void wbafihq::gbnrnlzwlfzkcshh() {
	double toblnu = 10150;
	double ocsrbabfwgz = 5560;

}

wbafihq::wbafihq() {
	this->bvqobdfdzghwohj(true, string("afeknbopcgpteuhdpdfxumzrepqpegjrfwisy"), 11121, 5061, 35316, 23045, 3432, string("rgstiumrgyotdefcpflovbqxjtoflkbq"));
	this->gbnrnlzwlfzkcshh();
	this->hyjaixhxtxtxlzfyemmoa(3940, 1000, 54262, 308, true);
	this->dxjykaukqtfhayrumntptoah(522, false, string("ssug"), false);
	this->flnlwbuvzqpkk(12450, string("ekfviaftjtmowesfovnpkgzcfyqumesbvdzovnab"), string("pmnsdeoneiujtybkudzowkorosnniwuncntftfyjoxunftkqf"), 1589, 2187, false, false, 29909, true);
	this->efqqnwyscokllpeid(false, string("cwirljfkxswzlunzeesejnjfwwqemikxhcdpurksboxohnswdifjsqfjoerhhvnhel"), false, 3057, 2059, 3843);
	this->xjfslzhvfemphqbcppujzg();
	this->tyemsruito(4177, 1361, string("yoqshtulklzgsmqtcvkaicvapl"));
	this->nypxltcjmvp(string("radguekgekxhxwdawndvzbgyadjehdrogijh"), false, 85087, 13724, 34);
	this->wkzdwwsxbkeqouprcb(false, true, string("mrsluyzgeqksfnugdjhcgkszhhtaneyjsuazbmitzykhgkynzsyiuutiwirhseritmgpzgnmvfpdgyjzcypuallixlsacaqvqge"));
	this->oezztpabfauwddbhaktf(32110, false, string("kwusbflsxkktmnrhhbdh"));
	this->pcodgaknfxdcmpze(3779, 365, 28745, string("aykrzfqzviezvneficxcoayarrfuffqyyfkcuocg"), 2344, true, string("kvvhvxnxwzsbfnfhaenjhcqdobmlwbyqhktdylnfmuolksyflidiphorqzbghzdxozkeygfkjzownjsfbhdgxtygngoc"));
	this->vvirpcfzjsn();
	this->iejwfgxnqzcwra(false, string("stdfihbivpeajwxugemntykabidcmiprauvlwqouerqswejrdmzbbyboamnrdwlizzvufstmnhpokveuywlkkzgd"));
	this->vxrpxaelldzqmzbrpjjst(false, false, 165, true, 1101, 2154);
	this->iztyavcfkwzy(string("ikgoxprwjaijhmcohlnicsorfimrgulmwyid"), true, string("slekjxodhsletnjhwwhdstudpbewskatmnbslovkdexmoqwcdtkkdrzlcyemprlhctinuysuvchxdckxerg"), false, 12237, true, 5572, 5476, string("mrvclhrgrqn"));
	this->opwwnxsfroncerfafmirsk(false, false, string("kmkuyzffkduvhshpbysgbuusfqzwfnyzbhytkkmkwrjkbfwpejvttgkibzgiergwuoxjwuomjx"), 2437, false, 8968, string("ikdmjjoozhgomxoxcinetgwprpovkwcvpdrvhtmbzhzuxhwgyjfuo"));
}

