#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 27 member(s).
namespace Windows::Internal::StateRepository {
class AppServiceServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppServiceServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppServiceServer@StateRepository@Internal@Windows@@QEAA@XZ
    AppServiceServer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExtension@AppServiceServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIApplicationExtension@234@@Z
    virtual long GetExtension(::Windows::Internal::StateRepository::IApplicationExtension * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppServiceServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppServiceServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppServiceServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@AppServiceServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@AppServiceServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@AppServiceServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@AppServiceServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppServiceServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppServiceServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Extension@AppServiceServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_Extension(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Index@AppServiceServer@StateRepository@Internal@Windows@@UEAAJPEAH@Z
    virtual long get_Index(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@AppServiceServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@AppServiceServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Name(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__AppServiceID@AppServiceServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__AppServiceID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@AppServiceServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppServiceServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~AppServiceServer();
};
} // namespace Windows::Internal::StateRepository
