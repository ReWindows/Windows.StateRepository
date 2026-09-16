#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 32 member(s).
namespace Windows::Internal::StateRepository {
class AppUriHandlerServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppUriHandlerServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppUriHandlerServer@StateRepository@Internal@Windows@@QEAA@XZ
    AppUriHandlerServer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppUriHandlerGroup@AppUriHandlerServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIAppUriHandlerGroup@234@@Z
    virtual long GetAppUriHandlerGroup(::Windows::Internal::StateRepository::IAppUriHandlerGroup * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExtension@AppUriHandlerServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIApplicationExtension@234@@Z
    virtual long GetExtension(::Windows::Internal::StateRepository::IApplicationExtension * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppUriHandlerServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppUriHandlerServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppUriHandlerServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@AppUriHandlerServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@AppUriHandlerServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@AppUriHandlerServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@AppUriHandlerServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppUriHandlerServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppUriHandlerServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppUriHandlerGroup@AppUriHandlerServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_AppUriHandlerGroup(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Extension@AppUriHandlerServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_Extension(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HostName@AppUriHandlerServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_HostName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsPathNull@AppUriHandlerServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsPathNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsProgIDNull@AppUriHandlerServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsProgIDNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@AppUriHandlerServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Path@AppUriHandlerServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Path(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProgID@AppUriHandlerServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ProgID(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__AppUriHandlerID@AppUriHandlerServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__AppUriHandlerID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@AppUriHandlerServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppUriHandlerServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~AppUriHandlerServer();
};
} // namespace Windows::Internal::StateRepository
