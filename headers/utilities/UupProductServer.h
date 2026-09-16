#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 34 member(s).
namespace Windows::Internal::StateRepository {
class UupProductServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@UupProductServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Copy@UupProductServer@StateRepository@Internal@Windows@@SAJPEAUIUupProduct@234@AEAVUupProduct@Entity@2@@Z
    static long Copy(::Windows::Internal::StateRepository::IUupProduct *, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@UupProductServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@UupProductServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@UupProductServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@UupProductServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@UupProductServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@UupProductServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@UupProductServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@UupProductServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@UupProductServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_Dictionary@UupProductServer@StateRepository@Internal@Windows@@UEAAJIPEAE@Z
    virtual long Set_Dictionary(unsigned int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_DictionaryToNull@UupProductServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Set_DictionaryToNull();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UupProductServer@StateRepository@Internal@Windows@@QEAA@XZ
    UupProductServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Flags@UupProductServer@StateRepository@Internal@Windows@@UEAAJPEAW4UupProductFlags@234@@Z
    virtual long get_Flags(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@UupProductServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProductID@UupProductServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ProductID(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Version@UupProductServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get_Version(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@UupProductServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__UupProductID@UupProductServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__UupProductID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Flags@UupProductServer@StateRepository@Internal@Windows@@UEAAJW4UupProductFlags@234@@Z
    virtual long put_Flags(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ProductID@UupProductServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_ProductID(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Version@UupProductServer@StateRepository@Internal@Windows@@UEAAJ_K@Z
    virtual long put_Version(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put__Revision@UupProductServer@StateRepository@Internal@Windows@@UEAAJ_K@Z
    virtual long put__Revision(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put__UupProductID@UupProductServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put__UupProductID(int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UupProductServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~UupProductServer();
};
} // namespace Windows::Internal::StateRepository
