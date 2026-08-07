// Luau:   0.733.0.7330989
// Build:  d584fb6c717a43d9
// dumped by: pibbly
#pragma once
#include <cstdint>

#define REBASE(x) (x)

namespace Offsets
{
    inline constexpr const char* LuauVersion = "0.733.0.7330989";

    namespace Memory {
        inline const uintptr_t luaM_freearray = REBASE(0x954790);
        inline const uintptr_t luaM_freegco = REBASE(0x954810);
        inline const uintptr_t luaM_visitgco = REBASE(0x954930);
        inline const uintptr_t newclasspage = REBASE(0x954540);
        inline const uintptr_t newpage = REBASE(0x954490);
    }

    namespace Luau {
        inline const uintptr_t loadsafe = REBASE(0x97c200);
        inline const uintptr_t luaA_toobject = REBASE(0x937cc0);
        inline const uintptr_t luaD_rawrunprotected = REBASE(0x945d50);
        inline const uintptr_t luaD_throw = REBASE(0x945d80);
        inline const uintptr_t luaG_runerror = REBASE(0x978940);
        inline const uintptr_t luaH_dummynode = REBASE(0x610b760);
        inline const uintptr_t luaL_argerrorL = REBASE(0x93b840);
        inline const uintptr_t luaL_findtable = REBASE(0x940ba0);
        inline const uintptr_t luaL_register = REBASE(0x93f570);
        inline const uintptr_t luaL_typerrorL = REBASE(0x93b8c0);
        inline const uintptr_t luaO_nilobject = REBASE(0x610b898);
        inline const uintptr_t luaO_str2d = REBASE(0x977080);
        inline const uintptr_t luaV_equal = REBASE(0x95b670);
        inline const uintptr_t luaV_lessthan = REBASE(0x92f9f0);
        inline const uintptr_t lua_eception = REBASE(0x945bf0);
        inline const uintptr_t lua_newstate = REBASE(0x936ab0);
        inline const uintptr_t lua_yield = REBASE(0x4176330);
        inline const uintptr_t luaopen_base = REBASE(0x4158d10);
        inline const uintptr_t luaopen_math = REBASE(0x416e040);
        inline const uintptr_t luaopen_os = REBASE(0x2317010);
    }

    namespace LuaLib {
        inline const uintptr_t luaB_assert = REBASE(0x4157330);
        inline const uintptr_t luaB_error = REBASE(0x4152170);
        inline const uintptr_t luaB_gcinfo = REBASE(0x4155c30);
        inline const uintptr_t luaB_getfenv = REBASE(0x4153770);
        inline const uintptr_t luaB_getmetatable = REBASE(0x4152bb0);
        inline const uintptr_t luaB_newproxy = REBASE(0x4157a30);
        inline const uintptr_t luaB_next = REBASE(0x4156880);
        inline const uintptr_t luaB_pcallrun = REBASE(0xeb1fa0);
        inline const uintptr_t luaB_print = REBASE(0x4151d20);
        inline const uintptr_t luaB_rawequal = REBASE(0x4153a60);
        inline const uintptr_t luaB_rawget = REBASE(0x4153b70);
        inline const uintptr_t luaB_rawlen = REBASE(0x4155b90);
        inline const uintptr_t luaB_rawset = REBASE(0x41540c0);
        inline const uintptr_t luaB_select = REBASE(0x41573e0);
        inline const uintptr_t luaB_setfenv = REBASE(0x4153830);
        inline const uintptr_t luaB_setmetatable = REBASE(0x4152d30);
        inline const uintptr_t luaB_tonumber = REBASE(0x4151df0);
        inline const uintptr_t luaB_tostring = REBASE(0x41579d0);
        inline const uintptr_t luaB_type = REBASE(0x4155c50);
        inline const uintptr_t luaB_typeof = REBASE(0x4156260);
    }

    namespace StringLib {
        inline const uintptr_t byte = REBASE(0x41603e0);
        inline const uintptr_t char_ = REBASE(0x4160670);
        inline const uintptr_t find = REBASE(0x4162280);
        inline const uintptr_t format = REBASE(0x4164180);
        inline const uintptr_t gmatch = REBASE(0x4162660);
        inline const uintptr_t gsub = REBASE(0x4163b70);
        inline const uintptr_t len = REBASE(0x415eea0);
        inline const uintptr_t lower = REBASE(0x415fb30);
        inline const uintptr_t match = REBASE(0x4162290);
        inline const uintptr_t pack = REBASE(0x4165d50);
        inline const uintptr_t packsize = REBASE(0x41666b0);
        inline const uintptr_t rep = REBASE(0x415fdd0);
        inline const uintptr_t reverse = REBASE(0x415f9e0);
        inline const uintptr_t split = REBASE(0x41647b0);
        inline const uintptr_t sub = REBASE(0x415ef50);
        inline const uintptr_t unpack = REBASE(0x4166a20);
        inline const uintptr_t upper = REBASE(0x415fc80);
    }

    namespace TableLib {
        inline const uintptr_t clear = REBASE(0x414e570);
        inline const uintptr_t clone = REBASE(0x414e7c0);
        inline const uintptr_t concat = REBASE(0x414b680);
        inline const uintptr_t create = REBASE(0x414d8a0);
        inline const uintptr_t find = REBASE(0x414e030);
        inline const uintptr_t foreach = REBASE(0x4147a90);
        inline const uintptr_t foreachi = REBASE(0x4146dd0);
        inline const uintptr_t freeze = REBASE(0x414e5c0);
        inline const uintptr_t getn = REBASE(0x4148e00);
        inline const uintptr_t insert = REBASE(0x4149eb0);
        inline const uintptr_t isfrozen = REBASE(0x414e710);
        inline const uintptr_t maxn = REBASE(0x4148b40);
        inline const uintptr_t move = REBASE(0x414a420);
        inline const uintptr_t pack = REBASE(0x414b9a0);
        inline const uintptr_t remove = REBASE(0x414a0b0);
        inline const uintptr_t sort = REBASE(0x414d720);
        inline const uintptr_t unpack = REBASE(0x414c180);
    }

    namespace Bit32Lib {
        inline const uintptr_t arshift = REBASE(0x4150c90);
        inline const uintptr_t band = REBASE(0x414ffa0);
        inline const uintptr_t bnot = REBASE(0x4150190);
        inline const uintptr_t bor = REBASE(0x41500a0);
        inline const uintptr_t btest = REBASE(0x41512c0);
        inline const uintptr_t bxor = REBASE(0x41501e0);
        inline const uintptr_t countlz = REBASE(0x4151420);
        inline const uintptr_t countrz = REBASE(0x41513c0);
        inline const uintptr_t extract = REBASE(0x4150e90);
        inline const uintptr_t lrotate = REBASE(0x4150d70);
        inline const uintptr_t lshift = REBASE(0x4150b50);
        inline const uintptr_t replace = REBASE(0x4151010);
        inline const uintptr_t rrotate = REBASE(0x4150e00);
        inline const uintptr_t rshift = REBASE(0x4150bf0);
    }

    namespace Utf8Lib {
        inline const uintptr_t char_ = REBASE(0x415b280);
        inline const uintptr_t codepoint = REBASE(0x415aee0);
        inline const uintptr_t codes = REBASE(0x415bf90);
        inline const uintptr_t len = REBASE(0x415ac00);
        inline const uintptr_t offset = REBASE(0x415ba40);
    }

    namespace CoroutineLib {
        inline const uintptr_t close = REBASE(0x4176480);
        inline const uintptr_t create = REBASE(0x4175b90);
        inline const uintptr_t isyieldable = REBASE(0x4176400);
        inline const uintptr_t running = REBASE(0x4176390);
        inline const uintptr_t status = REBASE(0x4174500);
        inline const uintptr_t wrap = REBASE(0x41760d0);
        inline const uintptr_t yield = REBASE(0x4176330);
    }

    namespace BufferLib {
        inline const uintptr_t copy = REBASE(0x4170ef0);
        inline const uintptr_t create = REBASE(0x416fb60);
        inline const uintptr_t fill = REBASE(0x41711e0);
        inline const uintptr_t fromstring = REBASE(0x416fc10);
        inline const uintptr_t len = REBASE(0x4170e40);
        inline const uintptr_t readbits = REBASE(0x4171430);
        inline const uintptr_t readf32 = REBASE(0x41721f0);
        inline const uintptr_t readf64 = REBASE(0x4172350);
        inline const uintptr_t readi16 = REBASE(0x4171c70);
        inline const uintptr_t readi32 = REBASE(0x4171f30);
        inline const uintptr_t readi8 = REBASE(0x41719b0);
        inline const uintptr_t readstring = REBASE(0x41704c0);
        inline const uintptr_t readu16 = REBASE(0x4171dd0);
        inline const uintptr_t readu32 = REBASE(0x4172090);
        inline const uintptr_t readu8 = REBASE(0x4171b10);
        inline const uintptr_t tostring = REBASE(0x416fce0);
        inline const uintptr_t writebits = REBASE(0x4171670);
        inline const uintptr_t writef32 = REBASE(0x4172930);
        inline const uintptr_t writef64 = REBASE(0x4172ac0);
        inline const uintptr_t writei16 = REBASE(0x4172630);
        inline const uintptr_t writei32 = REBASE(0x41727b0);
        inline const uintptr_t writei8 = REBASE(0x41724b0);
        inline const uintptr_t writestring = REBASE(0x4170ba0);
        inline const uintptr_t writeu16 = REBASE(0x4172630);
        inline const uintptr_t writeu32 = REBASE(0x41727b0);
        inline const uintptr_t writeu8 = REBASE(0x41724b0);
    }

    namespace Misc {
        inline const uintptr_t Print = REBASE(0x91f9a0);
        inline const uintptr_t luaF_freeproto = REBASE(0x955d90);
        inline const uintptr_t luaL_tostring = REBASE(0x943ed0);
        inline const uintptr_t lua_clock = REBASE(0x415cd40);
    }

    namespace Roblox {
        inline const uintptr_t ConnectionDisconnect = REBASE(0x2291cd0);
        inline const uintptr_t GetIdentityStruct = REBASE(0x799600);
        inline const uintptr_t GetPropertyDescriptor = REBASE(0x8e90a0);
    }

    namespace Raknet {
        inline const uintptr_t ReportNetworkError = REBASE(0x2870880);
    }

    namespace Task {
        inline const uintptr_t delay = REBASE(0x23f70d0);
        inline const uintptr_t desynchronize = REBASE(0x23f5c00);
        inline const uintptr_t spawn = REBASE(0x23f6d60);
        inline const uintptr_t synchronize = REBASE(0x23f5620);
        inline const uintptr_t wait = REBASE(0x23f73c0);
    }

    namespace Security {
        inline const uintptr_t EnableLoadModule = REBASE(0x8178dd8);
    }

    namespace Instance {
        inline const uintptr_t Class = 0x18;
    }

    namespace Property {
        inline const uintptr_t CDesc2PDesc = 0x1d8;
        inline const uintptr_t isScriptable = 0x8c;
    }

    namespace TaskScheduler {
        inline const uintptr_t JobsEnd = 0xd0;
        inline const uintptr_t JobsStart = 0xc8;
    }

} // namespace Offsets
