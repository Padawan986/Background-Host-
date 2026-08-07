#pragma once
#include <cstdint>

// made by pibbly <@1481403329287295037> and zzzz <@1165794597486735501> 
// version-d584fb6c717a43d9
namespace Hooks {
    inline uintptr_t NtCreateSection = 0x1368A30;
    inline uintptr_t RtlExitUserProcess = 0x1FEDA0;
    inline uintptr_t NtAllocateVirtualMemory = 0xCE0530;
    inline uintptr_t NtFreeVirtualMemory = 0x8B7340;
    inline uintptr_t NtMapViewOfSection = 0x13E5290;
    inline uintptr_t NtUnmapViewOfSection = 0x1377890;
    inline uintptr_t NtTerminateProcess = 0x2753C0;
    inline uintptr_t NtCreateThread = 0x13E3590;
    inline uintptr_t NtCreateThreadEx = 0x330C30;
    inline uintptr_t NtRaiseException = 0x13E3FA0;
    inline uintptr_t NtSuspendThread = 0x326F20;
    inline uintptr_t NtQuerySystemInformation = 0x3278F0;
    inline uintptr_t NtSetContextThread = 0x7E0390;
    inline uintptr_t NtProtectVirtualMemory = 0xBF8C10;
    inline uintptr_t NtQueryVirtualMemory = 0x13BA2D0;
    inline uintptr_t NtRaiseHardError = 0x64B1C0;
    inline uintptr_t KiUserExceptionDispatcher = 0x1364C50;
    inline uintptr_t KiUserCallbackDispatcher = 0x1364C70;
    inline uintptr_t KiUserApcDispatcher = 0x1364D60;
    inline uintptr_t LdrInitializeThunk = 0x1364D70;
    inline uintptr_t NtContinue = 0x15C5830;
}