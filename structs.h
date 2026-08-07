// dumped by pibbly @credential_ and zzzz @2qp0
// version-d584fb6c717a43d9
// time spent: 20 minutes
#pragma once
#include <stdint.h>

#define LUA_TSTRING   6
#define LUA_TTABLE    7
#define LUA_TFUNCTION 8
#define LUA_TUSERDATA 9
#define LUA_TTHREAD   10
#define LUA_TBUFFER   11
#define LUA_TPROTO    15
#define LUA_TUPVAL    16

#define LUA_SIZECLASSES                40
#define LUA_MEMORY_CATEGORIES          256
#define LUA_UTAG_LIMIT                 128
#define LUA_LUTAG_LIMIT                128
#define UTAG_INTERNAL_LIMIT            130
#define LUA_T_COUNT                    14
#define TM_N                           21
#define LUA_EXECUTION_CALLBACK_STORAGE 512

struct GCObject;
struct TString;
struct Udata;
struct Buffer;
struct Closure;
struct LuaTable;
struct Proto;
struct UpVal;
struct lua_State;
struct global_State;
struct LuaNode;
struct lua_Page;
struct CallInfo;
struct lua_Debug;

typedef struct lua_TValue TValue;
typedef TValue* StkId;
typedef int (*lua_CFunction)(lua_State* L);
typedef int (*lua_Continuation)(lua_State* L, int status);
typedef void* (*lua_Alloc)(void* ud, void* ptr, size_t osize, size_t nsize);

typedef void (*lua_UserdataDirectAccess)(lua_State* L, void* data, int atom, uint16_t* cachedslot, int utag);
typedef int (*lua_UserdataDirectNamecall)(lua_State* L, void* data, int atom, uint16_t* cachedslot, int utag);
typedef void (*lua_UserdataMark)(lua_State* L, void* ud);
typedef void (*lua_EmbedderMark)(lua_State* L, int ref);
typedef void (*lua_EmbedderGc)(lua_State* L, lua_EmbedderMark markref);

struct GCheader
{
    uint8_t tt;      // 0x00
    uint8_t marked;  // 0x01
    uint8_t memcat;  // 0x02
};

struct lua_TValue
{
    union {
        GCObject* gc;
        void* p;
        double n;
        int b;
        int64_t l;
    } value;         // 0x00
    int extra;       // 0x08
    int tt;          // 0x0C
}; // 0x10

struct stringtable
{
    TString** hash;  // 0x00
    int size;        // 0x08
    uint32_t nuse;   // 0x0C
}; // 0x10

struct TString
{
    uint8_t tt;          // 0x00
    uint8_t marked;      // 0x01
    uint8_t memcat;      // 0x02
    int16_t atom;        // 0x06
    TString* next;       // 0x08
    unsigned int hash;   // 0x10
    unsigned int len;    // 0x14
    char data[1];        // 0x18
};

struct LuaTable
{
    uint8_t tt;              // 0x00
    uint8_t marked;          // 0x01
    uint8_t memcat;          // 0x02
    uint8_t tmcache;         // 0x03
    uint8_t readonly;        // 0x04
    uint8_t safeenv;         // 0x05
    uint8_t lsizenode;       // 0x06
    uint8_t nodemask8;       // 0x07
    int sizearray;           // 0x08
    int lastfree;            // 0x0C
    LuaNode* node;           // 0x10
    TValue* array;           // 0x18
    LuaTable* metatable;     // 0x20
    GCObject* gclist;        // 0x28
}; // 0x30

struct Closure
{
    uint8_t tt;              // 0x00
    uint8_t marked;          // 0x01
    uint8_t memcat;          // 0x02
    uint8_t isC;             // 0x03
    uint8_t stacksize;       // 0x04
    uint8_t nupvalues;       // 0x05
    uint8_t preload;         // 0x06
    uint8_t _pad7;           // 0x07
    GCObject* gclist;        // 0x08
    LuaTable* env;           // 0x10
    union {
        struct {
            lua_CFunction f;       // 0x18
            lua_Continuation cont; // 0x20
            TValue upvals[1];      // 0x28
        } c;
        struct {
            Proto* p;              // 0x18
            TValue uprefs[1];      // 0x20
        } l;
    };
};

struct LocVar
{
    TString* varname;          // 0x00
    int startpc;               // 0x08
    int endpc;                 // 0x0C
    uint8_t reg;               // 0x10
    uint8_t _pad11[7];         // 0x11
}; // 0x18

struct FeedbackVectorSlot
{
    int kind;                  // 0x00
    uint32_t pc;               // 0x04
    uint32_t proto;            // 0x08
    uint32_t hits;             // 0x0C
}; // 0x10


struct Proto
{
    uint8_t tt;                // 0x00
    uint8_t marked;            // 0x01
    uint8_t memcat;            // 0x02
    uint8_t nups;              // 0x03
    uint8_t numparams;         // 0x04
    uint8_t is_vararg;         // 0x05
    uint8_t maxstacksize;      // 0x06
    uint8_t flags;             // 0x07

    TString* debugname;        // 0x08
    uint8_t* debuginsn;        // 0x10
    Proto** p;                 // 0x18
    TString** upvalues;        // 0x20
    void* execdata;            // 0x28
    uintptr_t exectarget;      // 0x30
    const uint32_t* codeentry; // 0x38
    void* userdata;            // 0x40
    GCObject* gclist;          // 0x48
    TValue* k;                 // 0x50
    uint32_t* code;            // 0x58
    int* abslineinfo;          // 0x60
    LocVar* locvars;           // 0x68
    TString* source;           // 0x70
    uint8_t* typeinfo;         // 0x78
    uint8_t* lineinfo;         // 0x80

    int linedefined;           // 0x88
    int sizek;                 // 0x8C
    int sizelineinfo;          // 0x90
    int sizelocvars;           // 0x94
    int sizep;                 // 0x98
    int sizecode;              // 0x9C
    int linegaplog2;           // 0xA0
    int sizeabslineinfo;       // 0xA4
    int sizeupvalues;          // 0xA8
    int sizetypeinfo;          // 0xAC

    FeedbackVectorSlot* feedbackvec; // 0xB0
    uint32_t feedbackvecsize;  // 0xB8
    int bytecodeid;            // 0xBC
    Proto* optimized;          // 0xC0
    Proto* deoptimized;        // 0xC8
    uint64_t cost;             // 0xD0 
}; // 0xD8

struct UpVal
{
    uint8_t tt;              // 0x00
    uint8_t marked;          // 0x01
    uint8_t memcat;          // 0x02
    uint8_t markedopen;      // 0x03
    uint32_t _pad4;          // 0x04
    TValue* v;               // 0x08
    union {
        TValue value;        // 0x10
        struct {
            UpVal* prev;     // 0x10
            UpVal* next;     // 0x18
            UpVal* threadnext; // 0x20
        } open;
    } u;
}; // 0x28

struct CallInfo
{
    StkId top;               // 0x00
    Proto* p;                // 0x08
    StkId base;              // 0x10
    StkId func;              // 0x18
    const uint32_t* savedpc; // 0x20
    int nresults;            // 0x28
    unsigned int flags;      // 0x2C
}; // 0x30

struct lua_State
{
    uint8_t tt;              // 0x00
    uint8_t marked;          // 0x01
    uint8_t memcat;          // 0x02
    uint8_t status;          // 0x03
    uint8_t isactive;        // 0x04
    uint8_t singlestep;      // 0x05
    uint8_t activememcat;    // 0x06
    LuaTable* gt;            // 0x08
    CallInfo* end_ci;        // 0x10
    CallInfo* base_ci;       // 0x18
    void* userdata;          // 0x20
    UpVal* openupval;        // 0x28
    uint16_t nCcalls;        // 0x30
    uint16_t baseCcalls;     // 0x32
    int cachedslot;          // 0x34
    GCObject* gclist;        // 0x38
    int stacksize;           // 0x40
    int size_ci;             // 0x44
    StkId top;               // 0x48
    StkId stack;             // 0x50
    CallInfo* ci;            // 0x58
    StkId base;              // 0x60
    StkId stack_last;        // 0x68
    global_State* global;    // 0x70
    TString* namecall;       // 0x78
}; // 0x80


struct lua_Callbacks
{
    void* userdata;                                               // 0x00
    int16_t (*useratom)(lua_State* L, const char* s, size_t l);   // 0x08
    void (*debugbreak)(lua_State* L, lua_Debug* ar);              // 0x10
    void (*debugstep)(lua_State* L, lua_Debug* ar);               // 0x18
    void (*interrupt)(lua_State* L, int gc);                      // 0x20
    void (*panic)(lua_State* L, int errcode);                     // 0x28
    void (*userthread)(lua_State* LP, lua_State* L);              // 0x30
    void (*onallocate)(lua_State* L, size_t osize, size_t nsize); // 0x38
    void (*debugprotectederror)(lua_State* L);                    // 0x40
    void (*debuginterrupt)(lua_State* L, lua_Debug* ar);          // 0x48
}; // 0x50

struct lua_ExecutionCallbacks
{
    void* context;                                                        // 0x00
    void* native;                                                         // 0x08
    void (*close)(lua_State* L);                                          // 0x10
    void (*destroy)(lua_State* L, Proto* proto);                          // 0x18
    int (*enter)(lua_State* L, Proto* proto);                             // 0x20
    void (*disable)(lua_State* L, Proto* proto);                          // 0x28
    size_t (*getmemorysize)(lua_State* L, Proto* proto);                  // 0x30
    uint8_t (*gettypemapping)(lua_State* L, const char* str, size_t len); // 0x38
    char* (*getcounterdata)(lua_State* L, Proto* proto, size_t* count);   // 0x40
    Proto* (*inlinefunction)(lua_State* L, Closure* caller, Closure* target, uint32_t pc); // 0x48
}; // 0x50

struct lua_UdataDirectAccessData
{
    TValue indextm;                         // 0x00
    TValue newindextm;                      // 0x10
    TValue namecalltm;                      // 0x20
    lua_UserdataDirectAccess index;         // 0x30
    lua_UserdataDirectAccess newindex;      // 0x38
    lua_UserdataDirectNamecall namecall;    // 0x40
}; // 0x48

struct GCStats
{
    int32_t triggerterms[32];               // 0x00
    uint32_t triggertermpos;                // 0x80
    int32_t triggerintegral;                // 0x84
    size_t atomicstarttotalsizebytes;       // 0x88
    size_t endtotalsizebytes;               // 0x90
    size_t heapgoalsizebytes;               // 0x98
    double starttimestamp;                  // 0xA0
    double atomicstarttimestamp;            // 0xA8
    double endtimestamp;                    // 0xB0
}; // 0xB8

struct global_State
{
    stringtable strt;                       // 0x00

    uint8_t currentwhite;                   // 0x10
    uint8_t gcstate;                        // 0x11

    lua_Alloc frealloc;                     // 0x18
    void* ud;                               // 0x20

    int gcgoal;                             // 0x28
    int gcstepmul;                          // 0x2C
    int gcstepsize;                         // 0x30

    GCObject* gray;                         // 0x38
    GCObject* grayagain;                    // 0x40
    GCObject* weak;                         // 0x48

    size_t GCthreshold;                     // 0x50
    size_t totalbytes;                      // 0x58

    lua_Page* freepages[LUA_SIZECLASSES];   // 0x60
    lua_State* mainthread;                  // 0x1A0
    lua_Page* freegcopages[LUA_SIZECLASSES]; // 0x1A8

    lua_Page* sweepgcopage;                 // 0x2E8

    UpVal uvhead;                           // 0x2F0

    lua_Page* allpages;                     // 0x318
    lua_Page* allgcopages;                  // 0x320

    TString* tmname[TM_N];                  // 0x328
    TString* ttname[LUA_T_COUNT];           // 0x3D0
    LuaTable* mt[LUA_T_COUNT];              // 0x440

    TValue pseudotemp;                      // 0x4B0

    TValue registry;                        // 0x4C0
    int registryfree;                       // 0x4D0

    uint64_t rngstate;                      // 0x4D8
    uint64_t ptrenckey[4];                  // 0x4E0

    lua_Callbacks cb;                       // 0x500
    lua_ExecutionCallbacks ecb;             // 0x550
    uint8_t ecbdata[LUA_EXECUTION_CALLBACK_STORAGE]; // 0x5A0

    lua_UdataDirectAccessData udatadirect[UTAG_INTERNAL_LIMIT]; // 0x7A0

    size_t memcatbytes[LUA_MEMORY_CATEGORIES]; // 0x2C30

    lua_UserdataMark udatamark[LUA_UTAG_LIMIT]; // 0x3430
    void (*udatagc[LUA_UTAG_LIMIT])(lua_State*, void*); // 0x3830
    LuaTable* udatamt[LUA_UTAG_LIMIT];      // 0x3C30

    TValue weakregistry;                    // 0x4030
    int weakregistryfree;                   // 0x4040
    lua_EmbedderGc embeddergc;              // 0x4048

    TString* lightuserdataname[LUA_LUTAG_LIMIT]; // 0x4050
    LuaTable* udatadirectfields[UTAG_INTERNAL_LIMIT]; // 0x4450

    GCStats gcstats;                        // 0x4860
    uint32_t lastprotoid;                   // 0x4918
};


struct Udata
{
    uint8_t tt;              // 0x00
    uint8_t marked;          // 0x01
    uint8_t memcat;          // 0x02
    uint8_t tag;             // 0x03
    int len;                 // 0x04
    intptr_t metatable_rel;  // 0x08
    char data[1];            // 0x10
};

struct Buffer
{
    uint8_t tt;              // 0x00
    uint8_t marked;          // 0x01
    uint8_t memcat;          // 0x02
    uint8_t _pad3;           // 0x03
    unsigned int len;        // 0x04
    char data[1];            // 0x08
};

#ifdef __cplusplus
namespace strings
{
    constexpr const char* error_in_error_handling = "error in error handling"; // f_luaopen
    constexpr const char* not_enough_memory       = "not enough memory";       // f_luaopen
    constexpr const char* namecall                = "__namecall";              // luaT_init
    constexpr const char* index                   = "__index";                 // luaT_init
    constexpr const char* tt_nil                  = "nil";                     // luaT_init
    constexpr const char* tt_boolean              = "boolean";                 // luaT_init
    constexpr const char* stack_overflow          = "stack overflow";          // ScriptContext_newthread
    constexpr const char* table_index_is_nan      = "table index is NaN";      // luau_load
}
#endif
