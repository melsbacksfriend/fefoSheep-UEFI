/*
 * UEFI:SIMPLE - UEFI development made easy
 * Copyright © 2014-2018 Pete Batard <pete@akeo.ie> - Public Domain
 * See COPYING for the full licensing terms.
 */
#include <efi.h>
#include <efilib.h>

// Application entrypoint (must be set to 'efi_main' for gnu-efi crt0 compatibility)
EFI_STATUS efi_main(EFI_HANDLE ImageHandle, EFI_SYSTEM_TABLE *SystemTable)
{
	UINTN Event;

#if defined(_GNU_EFI)
	InitializeLib(ImageHandle, SystemTable);
#endif

	/*
	 * In addition to the standard %-based flags, Print() supports the following:
	 *   %N       Set output attribute to normal
	 *   %H       Set output attribute to highlight
	 *   %E       Set output attribute to error
	 *   %B       Set output attribute to blue color
	 *   %V       Set output attribute to green color
	 *   %r       Human readable version of a status code
	 */
	Print(L"\n%Ndownloa fefoshep from gothu%N\n");

	for (long long A = 0; A >= 0; A = A + 5)
	{
		if (A == 1800000000) Print(L"\n%Ndownola compete now isntalnig..%N\n");
		if (A == 3600000000) Print(L"\n%Ninstal compete now downloa linuchs, widows and macos\nfriig am..%N\n");
		if (A == 5400000000) Print(L"\n%Nnow doanload swotch frii gam port for\nmacos widows and linuchs..%N\n");
		if (A == 7200000000) Print(L"\n%Ndownlaod frii gam tree ds on feui..%N\n");
		if (A == 9000000000) Print(L"\n%NU GO T FRII GAM%N\n");
		if (A == 10800000000) Print(L"\n%Nnow git pokegomz in rel lif!!!!11%N\n");
		if (A == 12600000000) Print(L"\n%NC L O N G O !%N\n");
		if (A == 14400000000) Print(L"\n%Ndongrodi too legicii by-os..%N\n");
		if (A == 16200000000) Print(L"\n%Nsicc now generat new systume imag..%N\n");
		if (A == 18000000000) Print(L"\n%Nsystume imag genrat now flash ontoo emptii brian..%N\n");
		if (A == 19800000000) Print(L"\n%Ndoo sam ting with recuvure and fei partishuns..%N\n");
		if (A == 20600000000) Print(L"\n%Ndownloding more ram!!!!!1%N\n");
		if (A == 21400000000) Print(L"\n%Nflash buy-os form u..%N\n");
		if (A == 22200000000) Print(L"\n%Noh no heck th pokegom impart \ngot interupt'd by MASUDA%N\n");
		if (A == 24000000000) Print(L"\n%Nresumin (#BrinBakNashunalDechs)%N\n");
		if (A == 25800000000) Print(L"\n%Npokegom impart resum my dud%N\n");
		if (A == 26600000000) Print(L"\n%Ncunvirtin flies of pokegomz..%N\n");
		if (A == 27400000000) Print(L"\n%Nnow imparti flies of pokegomz..%N\n");
		if (A == 28200000000) Print(L"\n%Ngib u pokegomz in rel lif..%N\n");
		if (A == 30000000000) Print(L"\n%Nnowe u hav a rel liv Charizard%N\n");
	}

	SystemTable->ConIn->Reset(SystemTable->ConIn, FALSE);
	SystemTable->BootServices->WaitForEvent(1, &SystemTable->ConIn->WaitForKey, &Event);
#if defined(_DEBUG)
	// If running in debug mode, use the EFI shut down call to close QEMU
	SystemTable->RuntimeServices->ResetSystem(EfiResetShutdown, EFI_SUCCESS, 0, NULL);
#endif

	return EFI_SUCCESS;
}
