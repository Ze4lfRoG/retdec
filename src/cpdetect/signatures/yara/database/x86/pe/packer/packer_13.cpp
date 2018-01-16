/**
 * @file src/cpdetect/signatures/yara/database/x86/pe/packer/packer_13.cpp
 * @brief Database of signatures.
 * @copyright (c) 2017 Avast Software, licensed under the MIT license
 */

const char *x86PePacker_13 =
R"x86_pe_packer(
rule rule_346_CipherWall_Self_Extrator_Decryptor {
	meta:
		tool = "P"
		name = "CipherWall Self-Extrator"
		version = "1.5 gui"
		pattern = "9061BE001042008DBE0000FEFFC787C0200200F989C76A5783CDFFEB0E909090908A064688074701DB75078B1E83EEFC11DB72EDB80100000001DB75078B1E83EEFC11DB11C001DB73EF75098B1E83EEFC11DB73E431C983E803720DC1E0088A064683F0FF747489C501DB75078B1E83EEFC11DB11C901DB75078B1E83EEFC11DB11C975204101DB75078B1E83EEFC11DB11C901DB73EF75098B1E83EEFC11DB73E483C10281FD"
	strings:
		$1 = { 90 61 BE 00 10 42 00 8D BE 00 00 FE FF C7 87 C0 20 02 00 F9 89 C7 6A 57 83 CD FF EB 0E 90 90 90 90 8A 06 46 88 07 47 01 DB 75 07 8B 1E 83 EE FC 11 DB 72 ED B8 01 00 00 00 01 DB 75 07 8B 1E 83 EE FC 11 DB 11 C0 01 DB 73 EF 75 09 8B 1E 83 EE FC 11 DB 73 E4 31 C9 83 E8 03 72 0D C1 E0 08 8A 06 46 83 F0 FF 74 74 89 C5 01 DB 75 07 8B 1E 83 EE FC 11 DB 11 C9 01 DB 75 07 8B 1E 83 EE FC 11 DB 11 C9 75 20 41 01 DB 75 07 8B 1E 83 EE FC 11 DB 11 C9 01 DB 73 EF 75 09 8B 1E 83 EE FC 11 DB 73 E4 83 C1 02 81 FD }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_347_Code_Virtualizer {
	meta:
		tool = "P"
		name = "Code Virtualizer"
		version = "1.3.1.0"
		pattern = "609CFCE8000000005F81EF????????8BC781C7????????3B472C7502EB2E89472CB9A7000000EB0501448F??490BC975F7837F400074158B774003F0EB098B1E03D8010383C604833E0075F28B7424248BDE03F0B90100000033C0F00FB14F3075F7AC"
	strings:
		$1 = { 60 9C FC E8 00 00 00 00 5F 81 EF ?? ?? ?? ?? 8B C7 81 C7 ?? ?? ?? ?? 3B 47 2C 75 02 EB 2E 89 47 2C B9 A7 00 00 00 EB 05 01 44 8F ?? 49 0B C9 75 F7 83 7F 40 00 74 15 8B 77 40 03 F0 EB 09 8B 1E 03 D8 01 03 83 C6 04 83 3E 00 75 F2 8B 74 24 24 8B DE 03 F0 B9 01 00 00 00 33 C0 F0 0F B1 4F 30 75 F7 AC }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_348_Code_Lock {
	meta:
		tool = "P"
		name = "Code-Lock"
		pattern = "434F44452D4C4F434B2E4F435800"
	strings:
		$1 = { 43 4F 44 45 2D 4C 4F 43 4B 2E 4F 43 58 00 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_349_CodeCrypt {
	meta:
		tool = "P"
		name = "CodeCrypt"
		version = "0.14b"
		pattern = "E9C5020000EB02833D58EB02FF1D5BEB020FC75F"
	strings:
		$1 = { E9 C5 02 00 00 EB 02 83 3D 58 EB 02 FF 1D 5B EB 02 0F C7 5F }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_350_CodeCrypt {
	meta:
		tool = "P"
		name = "CodeCrypt"
		version = "0.15b"
		pattern = "E931030000EB02833D58EB02FF1D5BEB020FC75F"
	strings:
		$1 = { E9 31 03 00 00 EB 02 83 3D 58 EB 02 FF 1D 5B EB 02 0F C7 5F }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_351_CodeCrypt {
	meta:
		tool = "P"
		name = "CodeCrypt"
		version = "0.16 - 0.164"
		pattern = "E92E030000EB02833D58EB02FF1D5BEB020FC75F"
	strings:
		$1 = { E9 2E 03 00 00 EB 02 83 3D 58 EB 02 FF 1D 5B EB 02 0F C7 5F }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_352_codeCrypter {
	meta:
		tool = "P"
		name = "codeCrypter"
		version = "0.31"
		pattern = "5058535B90BB??????00FFE390CCCCCC558BEC5DC3CCCCCCCCCCCCCCCCCCCCCC"
	strings:
		$1 = { 50 58 53 5B 90 BB ?? ?? ?? 00 FF E3 90 CC CC CC 55 8B EC 5D C3 CC CC CC CC CC CC CC CC CC CC CC }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_353_BitShape_PE_Crypt {
	meta:
		tool = "P"
		name = "BitShape PE Crypt"
		version = "1.5"
		pattern = "60E8000000005D81ED????????B97B0900008DBD????????8BF7AC"
	strings:
		$1 = { 60 E8 00 00 00 00 5D 81 ED ?? ?? ?? ?? B9 7B 09 00 00 8D BD ?? ?? ?? ?? 8B F7 AC }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_354_CodeSafe {
	meta:
		tool = "P"
		name = "CodeSafe"
		version = "2.0"
		pattern = "???????????????????????????????????????????????83EC10535657E8C40100?"
	strings:
		$1 = { ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?8 3E C1 05 35 65 7E 8C 40 10 0? }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_355_CodeVeil {
	meta:
		tool = "P"
		name = "CodeVeil"
		version = "1.2 - 1.3"
		pattern = "0000000000000000000000000000000000000000000000000000??????????????????????????8D642400558BEC5356578B4D108381B80000000583A1C0000000DF33C05F5E5BC9C38BFF60E801000000B85EE801000000B8582D310100008B002BF081E60000FFFF03763C33C9668B4E148D7431188B5E0C03DE81E300F0FFFF8B5608E805000000E9??000000558BEC83C4F0B9E90000008BF303DAE801000000B8582D770100008B0003C68945F4E801000000B85A81EA86"
	strings:
		$1 = { 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? 8D 64 24 00 55 8B EC 53 56 57 8B 4D 10 83 81 B8 00 00 00 05 83 A1 C0 00 00 00 DF 33 C0 5F 5E 5B C9 C3 8B FF 60 E8 01 00 00 00 B8 5E E8 01 00 00 00 B8 58 2D 31 01 00 00 8B 00 2B F0 81 E6 00 00 FF FF 03 76 3C 33 C9 66 8B 4E 14 8D 74 31 18 8B 5E 0C 03 DE 81 E3 00 F0 FF FF 8B 56 08 E8 05 00 00 00 E9 ?? 00 00 00 55 8B EC 83 C4 F0 B9 E9 00 00 00 8B F3 03 DA E8 01 00 00 00 B8 58 2D 77 01 00 00 8B 00 03 C6 89 45 F4 E8 01 00 00 00 B8 5A 81 EA 86 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_356_COMPACK {
	meta:
		tool = "P"
		name = "COMPACK"
		version = "4.5"
		pattern = "BE????E8????5D83????55505351520E070E1F8BCE"
	strings:
		$1 = { BE ?? ?? E8 ?? ?? 5D 83 ?? ?? 55 50 53 51 52 0E 07 0E 1F 8B CE }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_357_COMPACK {
	meta:
		tool = "P"
		name = "COMPACK"
		version = "5.1"
		pattern = "BD????50068CCB03DD8CD24B8EDBBE????BF????8EC2B9????F3A54A4D75??8BF78EDA0E070616"
	strings:
		$1 = { BD ?? ?? 50 06 8C CB 03 DD 8C D2 4B 8E DB BE ?? ?? BF ?? ?? 8E C2 B9 ?? ?? F3 A5 4A 4D 75 ?? 8B F7 8E DA 0E 07 06 16 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_358_COP {
	meta:
		tool = "P"
		name = "COP"
		version = "1.0"
		pattern = "BF????BE????B9????AC32??????AAE2??8B??????EB??90"
	strings:
		$1 = { BF ?? ?? BE ?? ?? B9 ?? ?? AC 32 ?? ?? ?? AA E2 ?? 8B ?? ?? ?? EB ?? 90 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_359_Copy_Protector {
	meta:
		tool = "P"
		name = "Copy Protector"
		version = "2.0"
		pattern = "2EA2????5351521E06B4??1E0E1FBA????CD211F"
	strings:
		$1 = { 2E A2 ?? ?? 53 51 52 1E 06 B4 ?? 1E 0E 1F BA ?? ?? CD 21 1F }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_360_CopyControl {
	meta:
		tool = "P"
		name = "CopyControl"
		version = "3.03"
		pattern = "CC9090EB0B0150515253546133612D35CAD10752D1A13C"
	strings:
		$1 = { CC 90 90 EB 0B 01 50 51 52 53 54 61 33 61 2D 35 CA D1 07 52 D1 A1 3C }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_361_CopyMinder {
	meta:
		tool = "P"
		name = "CopyMinder"
		pattern = "8325????????EF6A00E8????????E8????????CCFF25????????FF25????????FF25????????FF25????????FF25????????FF25????????FF25????????FF25????????FF25????????FF25????????FF25????????FF25????????FF25????????FF25????????FF25????????FF25????????FF25????????FF25"
	strings:
		$1 = { 83 25 ?? ?? ?? ?? EF 6A 00 E8 ?? ?? ?? ?? E8 ?? ?? ?? ?? CC FF 25 ?? ?? ?? ?? FF 25 ?? ?? ?? ?? FF 25 ?? ?? ?? ?? FF 25 ?? ?? ?? ?? FF 25 ?? ?? ?? ?? FF 25 ?? ?? ?? ?? FF 25 ?? ?? ?? ?? FF 25 ?? ?? ?? ?? FF 25 ?? ?? ?? ?? FF 25 ?? ?? ?? ?? FF 25 ?? ?? ?? ?? FF 25 ?? ?? ?? ?? FF 25 ?? ?? ?? ?? FF 25 ?? ?? ?? ?? FF 25 ?? ?? ?? ?? FF 25 ?? ?? ?? ?? FF 25 ?? ?? ?? ?? FF 25 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_362_CPAV {
	meta:
		tool = "P"
		name = "CPAV"
		pattern = "E8????4D5AB1019301000002"
	strings:
		$1 = { E8 ?? ?? 4D 5A B1 01 93 01 00 00 02 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_363_CrackStop {
	meta:
		tool = "P"
		name = "CrackStop"
		version = "1.01"
		pattern = "B448BBFFFFB9EB278BECCD21FAFC"
	strings:
		$1 = { B4 48 BB FF FF B9 EB 27 8B EC CD 21 FA FC }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_364_CREATEINSTALL {
	meta:
		tool = "P"
		name = "CREATEINSTALL"
		pattern = "558BEC81EC200200005356576A00FF15186140006800704000894508FF151461400085C074276A00A10020400050FF153C6140008BF06A0656FF15386140006A0356FF1538614000E93603000068027F"
	strings:
		$1 = { 55 8B EC 81 EC 20 02 00 00 53 56 57 6A 00 FF 15 18 61 40 00 68 00 70 40 00 89 45 08 FF 15 14 61 40 00 85 C0 74 27 6A 00 A1 00 20 40 00 50 FF 15 3C 61 40 00 8B F0 6A 06 56 FF 15 38 61 40 00 6A 03 56 FF 15 38 61 40 00 E9 36 03 00 00 68 02 7F }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_365_CREATEINSTALL {
	meta:
		tool = "P"
		name = "CREATEINSTALL"
		version = "2003.3.5"
		pattern = "81EC0C0400005356575568605040006A016A00FF15D88040008BF0FF15D48040003DB7000000750F56FF15B88040006A02FF15A480400033DBE8F2FEFFFF68027F0000891D9474400053891D98744000"
	strings:
		$1 = { 81 EC 0C 04 00 00 53 56 57 55 68 60 50 40 00 6A 01 6A 00 FF 15 D8 80 40 00 8B F0 FF 15 D4 80 40 00 3D B7 00 00 00 75 0F 56 FF 15 B8 80 40 00 6A 02 FF 15 A4 80 40 00 33 DB E8 F2 FE FF FF 68 02 7F 00 00 89 1D 94 74 40 00 53 89 1D 98 74 40 00 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_366_Crinkler {
	meta:
		tool = "P"
		name = "Crinkler"
		version = "0.1-0.2"
		pattern = "B9????????01C068????????6A0058506A005F485DBB03000000BE????????E9"
	strings:
		$1 = { B9 ?? ?? ?? ?? 01 C0 68 ?? ?? ?? ?? 6A 00 58 50 6A 00 5F 48 5D BB 03 00 00 00 BE ?? ?? ?? ?? E9 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_367_Crinkler {
	meta:
		tool = "P"
		name = "Crinkler"
		version = "0.3-0.4"
		pattern = "B80000420031DB43EB58"
	strings:
		$1 = { B8 00 00 42 00 31 DB 43 EB 58 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_368_Crunch {
	meta:
		tool = "P"
		name = "Crunch"
		version = "5 Fusion 4"
		pattern = "EB1503??????06??????????????????????68????????55E8"
	strings:
		$1 = { EB 15 03 ?? ?? ?? 06 ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? 68 ?? ?? ?? ?? 55 E8 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_369_Crunch {
	meta:
		tool = "P"
		name = "Crunch"
		version = "5"
		pattern = "EB1503000000060000000000000000000000680000000055E8000000005D81ED1D0000008BC555609C2B85FC0700008985E8070000FF74242CE8200200000F8294060000E8F3040000490F88880600008BB5E80700"
	strings:
		$1 = { EB 15 03 00 00 00 06 00 00 00 00 00 00 00 00 00 00 00 68 00 00 00 00 55 E8 00 00 00 00 5D 81 ED 1D 00 00 00 8B C5 55 60 9C 2B 85 FC 07 00 00 89 85 E8 07 00 00 FF 74 24 2C E8 20 02 00 00 0F 82 94 06 00 00 E8 F3 04 00 00 49 0F 88 88 06 00 00 8B B5 E8 07 00 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_370_Crunch {
	meta:
		tool = "P"
		name = "Crunch"
		version = "PE 3.0"
		pattern = "EB10????????????????????????????????55E8????????5D81ED18??????8BC555609C2B85????????8985????????FF74"
	strings:
		$1 = { EB 10 ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? 55 E8 ?? ?? ?? ?? 5D 81 ED 18 ?? ?? ?? 8B C5 55 60 9C 2B 85 ?? ?? ?? ?? 89 85 ?? ?? ?? ?? FF 74 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_371_Crunch {
	meta:
		tool = "P"
		name = "Crunch"
		version = "PE 4.0"
		pattern = "EB10????????????????????????????????55E8????????5D81ED18??????8BC555609C2B85E906????8985E106????FF74242CE8BB0100000F8292050000E8F1030000490F8886050000686CD9B29633C050E824"
	strings:
		$1 = { EB 10 ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? 55 E8 ?? ?? ?? ?? 5D 81 ED 18 ?? ?? ?? 8B C5 55 60 9C 2B 85 E9 06 ?? ?? 89 85 E1 06 ?? ?? FF 74 24 2C E8 BB 01 00 00 0F 82 92 05 00 00 E8 F1 03 00 00 49 0F 88 86 05 00 00 68 6C D9 B2 96 33 C0 50 E8 24 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_372_Crunch_PE {
	meta:
		tool = "P"
		name = "Crunch"
		version = "1.0"
		pattern = "55E8????????5D83ED068BC5556089AD????????2B85????????8985????????80BD??????????7509C685"
	strings:
		$1 = { 55 E8 ?? ?? ?? ?? 5D 83 ED 06 8B C5 55 60 89 AD ?? ?? ?? ?? 2B 85 ?? ?? ?? ?? 89 85 ?? ?? ?? ?? 80 BD ?? ?? ?? ?? ?? 75 09 C6 85 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_373_Crunch_PE {
	meta:
		tool = "P"
		name = "Crunch"
		version = "2.0"
		pattern = "55E8????????5D83ED068BC5556089AD????????2B85????????8985????????55BB????????03DD536467FF36????64678926"
	strings:
		$1 = { 55 E8 ?? ?? ?? ?? 5D 83 ED 06 8B C5 55 60 89 AD ?? ?? ?? ?? 2B 85 ?? ?? ?? ?? 89 85 ?? ?? ?? ?? 55 BB ?? ?? ?? ?? 03 DD 53 64 67 FF 36 ?? ?? 64 67 89 26 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_374_Cruncher {
	meta:
		tool = "P"
		name = "Cruncher"
		version = "1.0"
		pattern = "2E????????2E??????B430CD213C0373??BB????8EDB8D??????B409CD210633C050CB"
	strings:
		$1 = { 2E ?? ?? ?? ?? 2E ?? ?? ?? B4 30 CD 21 3C 03 73 ?? BB ?? ?? 8E DB 8D ?? ?? ?? B4 09 CD 21 06 33 C0 50 CB }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_375_DirTy_CrYpt0r {
	meta:
		tool = "P"
		name = "DirTy CrYpt0r"
		pattern = "B8????????32DBFEC33018403D????????7E??68????????E8"
	strings:
		$1 = { B8 ?? ?? ?? ?? 32 DB FE C3 30 18 40 3D ?? ?? ?? ?? 7E ?? 68 ?? ?? ?? ?? E8 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_376_CrypKey {
	meta:
		tool = "P"
		name = "CrypKey"
		version = "5 - 6"
		pattern = "E8????????5883E805505F578BF781EF????????83C639BA????????8BDFB90B??????8B06"
	strings:
		$1 = { E8 ?? ?? ?? ?? 58 83 E8 05 50 5F 57 8B F7 81 EF ?? ?? ?? ?? 83 C6 39 BA ?? ?? ?? ?? 8B DF B9 0B ?? ?? ?? 8B 06 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_377_CrypKey {
	meta:
		tool = "P"
		name = "CrypKey"
		version = "5.6.x DLL"
		pattern = "8B1D????????83FB00750AE8????????E8"
	strings:
		$1 = { 8B 1D ?? ?? ?? ?? 83 FB 00 75 0A E8 ?? ?? ?? ?? E8 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_378_CrypKey {
	meta:
		tool = "P"
		name = "CrypKey"
		version = "5.6.x"
		pattern = "E8????????E8????????83F80075076A00E8"
	strings:
		$1 = { E8 ?? ?? ?? ?? E8 ?? ?? ?? ?? 83 F8 00 75 07 6A 00 E8 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_379_CrypKey {
	meta:
		tool = "P"
		name = "CrypKey"
		version = "6.1.x DLL"
		pattern = "833D????????00753468????????E8"
	strings:
		$1 = { 83 3D ?? ?? ?? ?? 00 75 34 68 ?? ?? ?? ?? E8 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_380_CRYPT {
	meta:
		tool = "P"
		name = "CRYPT"
		version = "1.7 EXE"
		source = "(c) Dismember"
		pattern = "0E179C58F6????74??E9"
	strings:
		$1 = { 0E 17 9C 58 F6 ?? ?? 74 ?? E9 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_381_CRYPT {
	meta:
		tool = "P"
		name = "CRYPT"
		version = "1.7 COM"
		source = "(c) Dismember"
		pattern = "0E179C58F6C401??????????B401BE????BF????B9????68????68????68????57F3A4C3B002E62160"
	strings:
		$1 = { 0E 17 9C 58 F6 C4 01 ?? ?? ?? ?? ?? B4 01 BE ?? ?? BF ?? ?? B9 ?? ?? 68 ?? ?? 68 ?? ?? 68 ?? ?? 57 F3 A4 C3 B0 02 E6 21 60 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_382_CryptCom {
	meta:
		tool = "P"
		name = "CryptCom"
		version = "1.1"
		pattern = "BF????57BE??????B9????F3A4C38B??????8B??????BF????57BE??????AD33C2ABE2??C3"
	strings:
		$1 = { BF ?? ?? 57 BE ?? ?? ?? B9 ?? ?? F3 A4 C3 8B ?? ?? ?? 8B ?? ?? ?? BF ?? ?? 57 BE ?? ?? ?? AD 33 C2 AB E2 ?? C3 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_383_Crypter {
	meta:
		tool = "P"
		name = "Crypter"
		version = "3.1"
		pattern = "68FF6424F06858585858FFD4508B40F205B095F6950F850181BBFF68"
	strings:
		$1 = { 68 FF 64 24 F0 68 58 58 58 58 FF D4 50 8B 40 F2 05 B0 95 F6 95 0F 85 01 81 BB FF 68 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_384_Cryptic {
	meta:
		tool = "P"
		name = "Cryptic"
		version = "2.0"
		pattern = "B800004000BB??????00B900100000BA??????0003D803C803D13BCA74068031??41EBF6FFE3"
	strings:
		$1 = { B8 00 00 40 00 BB ?? ?? ?? 00 B9 00 10 00 00 BA ?? ?? ?? 00 03 D8 03 C8 03 D1 3B CA 74 06 80 31 ?? 41 EB F6 FF E3 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_385_Crypto_Lock {
	meta:
		tool = "P"
		name = "Crypto-Lock"
		version = "2.02"
		pattern = "60BE??9040008DBE????FFFF5783CDFFEB109090909090908A0646880747"
	strings:
		$1 = { 60 BE ?? 90 40 00 8D BE ?? ?? FF FF 57 83 CD FF EB 10 90 90 90 90 90 90 8A 06 46 88 07 47 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
)x86_pe_packer";