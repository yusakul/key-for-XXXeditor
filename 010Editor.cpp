#include <iostream>
#include <string.h>
#include <time.h>

//Size:256*4 chars
unsigned long NumberTables[]=
{
   0x39CB44B8, 0x23754F67, 0x5F017211, 0x3EBB24DA, 0x351707C6, 0x63F9774B, 0x17827288, 0x0FE74821,
   0x5B5F670F, 0x48315AE8, 0x785B7769, 0x2B7A1547, 0x38D11292, 0x42A11B32, 0x35332244, 0x77437B60,
   0x1EAB3B10, 0x53810000, 0x1D0212AE, 0x6F0377A8, 0x43C03092, 0x2D3C0A8E, 0x62950CBF, 0x30F06FFA,
   0x34F710E0, 0x28F417FB, 0x350D2F95, 0x5A361D5A, 0x15CC060B, 0x0AFD13CC, 0x28603BCF, 0x3371066B,
   0x30CD14E4, 0x175D3A67, 0x6DD66A13, 0x2D3409F9, 0x581E7B82, 0x76526B99, 0x5C8D5188, 0x2C857971,
   0x15F51FC0, 0x68CC0D11, 0x49F55E5C, 0x275E4364, 0x2D1E0DBC, 0x4CEE7CE3, 0x32555840, 0x112E2E08,
   0x6978065A, 0x72921406, 0x314578E7, 0x175621B7, 0x40771DBF, 0x3FC238D6, 0x4A31128A, 0x2DAD036E,
   0x41A069D6, 0x25400192, 0x00DD4667, 0x6AFC1F4F, 0x571040CE, 0x62FE66DF, 0x41DB4B3E, 0x3582231F,
   0x55F6079A, 0x1CA70644, 0x1B1643D2, 0x3F7228C9, 0x5F141070, 0x3E1474AB, 0x444B256E, 0x537050D9,
   0x0F42094B, 0x2FD820E6, 0x778B2E5E, 0x71176D02, 0x7FEA7A69, 0x5BB54628, 0x19BA6C71, 0x39763A99,
   0x178D54CD, 0x01246E88, 0x3313537E, 0x2B8E2D17, 0x2A3D10BE, 0x59D10582, 0x37A163DB, 0x30D6489A,
   0x6A215C46, 0x0E1C7A76, 0x1FC760E7, 0x79B80C65, 0x27F459B4, 0x799A7326, 0x50BA1782, 0x2A116D5C,
   0x63866E1B, 0x3F920E3C, 0x55023490, 0x55B56089, 0x2C391FD1, 0x2F8035C2, 0x64FD2B7A, 0x4CE8759A,
   0x518504F0, 0x799501A8, 0x3F5B2CAD, 0x38E60160, 0x637641D8, 0x33352A42, 0x51A22C19, 0x085C5851,
   0x032917AB, 0x2B770AC7, 0x30AC77B3, 0x2BEC1907, 0x035202D0, 0x0FA933D3, 0x61255DF3, 0x22AD06BF,
   0x58B86971, 0x5FCA0DE5, 0x700D6456, 0x56A973DB, 0x5AB759FD, 0x330E0BE2, 0x5B3C0DDD, 0x495D3C60,
   0x53BD59A6, 0x4C5E6D91, 0x49D9318D, 0x103D5079, 0x61CE42E3, 0x7ED5121D, 0x14E160ED, 0x212D4EF2,
   0x270133F0, 0x62435A96, 0x1FA75E8B, 0x6F092FBE, 0x4A000D49, 0x57AE1C70, 0x004E2477, 0x561E7E72,
   0x468C0033, 0x5DCC2402, 0x78507AC6, 0x58AF24C7, 0x0DF62D34, 0x358A4708, 0x3CFB1E11, 0x2B71451C,
   0x77A75295, 0x56890721, 0x0FEF75F3, 0x120F24F1, 0x01990AE7, 0x339C4452, 0x27A15B8E, 0x0BA7276D,
   0x60DC1B7B, 0x4F4B7F82, 0x67DB7007, 0x4F4A57D9, 0x621252E8, 0x20532CFC, 0x6A390306, 0x18800423,
   0x19F3778A, 0x462316F0, 0x56AE0937, 0x43C2675C, 0x65CA45FD, 0x0D604FF2, 0x0BFD22CB, 0x3AFE643B,
   0x3BF67FA6, 0x44623579, 0x184031F8, 0x32174F97, 0x4C6A092A, 0x5FB50261, 0x01650174, 0x33634AF1,
   0x712D18F4, 0x6E997169, 0x5DAB7AFE, 0x7C2B2EE8, 0x6EDB75B4, 0x5F836FB6, 0x3C2A6DD6, 0x292D05C2,
   0x052244DB, 0x149A5F4F, 0x5D486540, 0x331D15EA, 0x4F456920, 0x483A699F, 0x3B450F05, 0x3B207C6C,
   0x749D70FE, 0x417461F6, 0x62B031F1, 0x2750577B, 0x29131533, 0x588C3808, 0x1AEF3456, 0x0F3C00EC,
   0x7DA74742, 0x4B797A6C, 0x5EBB3287, 0x786558B8, 0x00ED4FF2, 0x6269691E, 0x24A2255F, 0x62C11F7E,
   0x2F8A7DCD, 0x643B17FE, 0x778318B8, 0x253B60FE, 0x34BB63A3, 0x5B03214F, 0x5F1571F4, 0x1A316E9F,
   0x7ACF2704, 0x28896838, 0x18614677, 0x1BF569EB, 0x0BA85EC9, 0x6ACA6B46, 0x1E43422A, 0x514D5F0E,
   0x413E018C, 0x307626E9, 0x01ED1DFA, 0x49F46F5A, 0x461B642B, 0x7D7007F2, 0x13652657, 0x6B160BC5,
   0x65E04849, 0x1F526E1C, 0x5A0251B6, 0x2BD73F69, 0x2DBF7ACD, 0x51E63E80, 0x5CF2670F, 0x21CD0A03,
   0x5CFF0261, 0x33AE061E, 0x3BB6345F, 0x5D814A75, 0x257B5DF4, 0x0A5C2C5B, 0x16A45527, 0x16F23945,
};

using namespace std;

#define LICENSE_TYPE_SINGLE_USER 0
#define LICENSE_TYPE_SITE 1
#define LICENSE_TYPE_MULTI_USER 2

// 返回自系统开机以来的毫秒数（tick）
unsigned long GetTickCount()
{
	struct timespec ts;
	clock_gettime(CLOCK_MONOTONIC, &ts);
	return (ts.tv_sec * 1000 + ts.tv_nsec / 1000000);
}


unsigned long MagicCalc(char* UserName, char UserCounts)
{
	unsigned short EBPMinus8 = 0xC22E;
	char EBPMinus5 = 1;
	char* Local1 = UserName;
	unsigned long Local3 = 0;

	unsigned long Local5 = (UserCounts << 4)- UserCounts;
	unsigned long Local6 = EBPMinus8 + (EBPMinus8 << 4);
	unsigned long Local8 = 0;

	unsigned short Length = strlen(UserName);

	if (Length == 0) return 0;

	unsigned long Local4 = 1;//Ñ­»·¼ÆÊý
	unsigned long EDX = 0;
	unsigned long ECX = 0;
	unsigned long EDI = 0;
	unsigned long Local7 = 0;
	while (Length != 0)
	{
		char AL = Local1[Local4 - 1];
		if (AL >= 0x61 && AL <= 0x7A)
		{
			AL -= 0x20;
		}
		
		
		EDX = Local7 & 0xFF;
		EDX = NumberTables[EDX];

		
		ECX = Local5 & 0xFF;
		EDX += NumberTables[ECX];

		
		ECX = Local6 & 0xFF;
		EDX += NumberTables[ECX];

		
		ECX = AL;
		EDI = NumberTables[ECX+0xD];

		
		ECX = AL;
		ECX= NumberTables[ECX];
		ECX += Local3;

		EDI ^= ECX;
		EDI = EDI * NumberTables[AL + 0x2F];

		EDX = EDX + EDI;
		Local3 = EDX;


		Local7 += 0x13;
		Local8 += 0x7;
		Local6 += 0x9;
		Local5 += 0xD;
		Local4++;
		Length--;
	}
	return Local3;

}




char* KeyGen(char* UserName, char LicenseType,char UserCounts)
{
	unsigned short SI = 0;
	char Key[10] = { 0 };
	char KeyString[40] = { 0 };
	if (UserName == NULL || LicenseType > 2) return 0;

	switch (LicenseType)
	{
	   case LICENSE_TYPE_SINGLE_USER:
		   SI = 1;
		   break;
	   case LICENSE_TYPE_SITE:
		   SI = 0x3E8;
		   break;
	   case LICENSE_TYPE_MULTI_USER:
		   SI = UserCounts;
		   if (SI == 0 || SI >= 1000)
		   {
			   srand(GetTickCount());
			   SI = (rand() % 1000) + 1;
		   }
		   break;
	}

	unsigned long EDX = SI;
	Key[3] = 0xAC;
	unsigned long MagicNumber=MagicCalc(UserName, SI);

	Key[4] = MagicNumber & 0xFF;

	Key[5] = (MagicNumber >> 0x8) & 0xFF;

	Key[6] = (MagicNumber >> 0x10) & 0xFF;

	Key[7] = (MagicNumber >> 0x18) & 0xFF;

	unsigned long EBX= (((SI * 0xB) ^ 0x3421) - 0x4D30) ^ 0x7892;
	EDX = EBX;
	EDX=EDX >> 8;

	Key[1] = (EDX & 0xFF) ^ Key[7];

	Key[2] = (EBX & 0xFF) ^ Key[5];


	Key[0] = (0xFF95D981 & 0xFF) ^ Key[6];

	Key[8]=((0xFF95D981 >> 8)&0xFF)^Key[4];

	Key[9] = ((0xFF95D981 >> 0x10) & 0xFF) ^ Key[5];

	int j = 0;
	for (int i = 0; i <= 9; i++)
	{
		sprintf((char*)& KeyString[j], "%02X", Key[i]);
		j+=2;
	}

	j = 0;
	char* Result = (char*)malloc(40);
	if (Result == NULL) return 0;
	memset(Result, 0, 40);
	

	memcpy(Result, KeyString, 4);
	Result[4] = 0x2D;//ASCII "-"

	memcpy(Result+5,  KeyString+4, 4);
	Result[9] = 0x2D;

	memcpy(Result + 10,  KeyString + 8, 4);
	Result[14] = 0x2D;

	memcpy(Result + 15, KeyString + 12, 4);
	Result[19] = 0x2D;

	memcpy(Result + 20,  KeyString + 16, 4);


	return Result;
}
int main()
{
	char UserName[30] = { 0 };
	char* License = NULL;
	char UserType;

	cout << "Please Input Your UserName: ";
	cin >> UserName;
	cout << endl;
	
	cout << "Please Input Your UserType: " << endl;
	cout << "0 For Single User." << endl;
	cout << "1 For Site User." << endl;
	cout << "2 For Multi User." << endl;
	cout << endl;
	cin >> UserType;

	if (UserType-0x30 == LICENSE_TYPE_MULTI_USER)
	{
		unsigned long UserCount;
		cout << "Please Input Your User Counts: ";
		cin >> UserCount;
		License = KeyGen(UserName, UserType-0x30, UserCount);

	}

	else
	{
		License = KeyGen(UserName, UserType-0x30, 1);
	}


	if (License != NULL)
	{
		printf("Your License Key Is:  %s", License);
		free(License);
	}
	cout << endl;
	return 0;

}


