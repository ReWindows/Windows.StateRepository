#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 42 member(s).
namespace Windows::Internal::StateRepository {
class DynamicAppUriHandlerServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DynamicAppUriHandlerServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Copy@DynamicAppUriHandlerServer@StateRepository@Internal@Windows@@SAJPEAUIDynamicAppUriHandler@234@AEAVDynamicAppUriHandler@Entity@2@@Z
    static long Copy(::Windows::Internal::StateRepository::IDynamicAppUriHandler *, WindissectOpaque &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DynamicAppUriHandlerServer@StateRepository@Internal@Windows@@QEAA@XZ
    DynamicAppUriHandlerServer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDynamicAppUriHandlerGroup@DynamicAppUriHandlerServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIDynamicAppUriHandlerGroup@234@@Z
    virtual long GetDynamicAppUriHandlerGroup(::Windows::Internal::StateRepository::IDynamicAppUriHandlerGroup * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DynamicAppUriHandlerServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DynamicAppUriHandlerServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DynamicAppUriHandlerServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@DynamicAppUriHandlerServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@DynamicAppUriHandlerServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@DynamicAppUriHandlerServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@DynamicAppUriHandlerServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DynamicAppUriHandlerServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DynamicAppUriHandlerServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDynamicAppUriHandlerGroup@DynamicAppUriHandlerServer@StateRepository@Internal@Windows@@UEAAJPEAUIDynamicAppUriHandlerGroup@234@@Z
    virtual long SetDynamicAppUriHandlerGroup(::Windows::Internal::StateRepository::IDynamicAppUriHandlerGroup *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPathToNull@DynamicAppUriHandlerServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long SetPathToNull();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProgIDToNull@DynamicAppUriHandlerServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long SetProgIDToNull();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_Dictionary@DynamicAppUriHandlerServer@StateRepository@Internal@Windows@@UEAAJIPEAE@Z
    virtual long Set_Dictionary(unsigned int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_DictionaryToNull@DynamicAppUriHandlerServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Set_DictionaryToNull();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DynamicAppUriHandlerGroup@DynamicAppUriHandlerServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_DynamicAppUriHandlerGroup(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HostName@DynamicAppUriHandlerServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_HostName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsPathNull@DynamicAppUriHandlerServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsPathNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsProgIDNull@DynamicAppUriHandlerServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsProgIDNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@DynamicAppUriHandlerServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Path@DynamicAppUriHandlerServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Path(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProgID@DynamicAppUriHandlerServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ProgID(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__DynamicAppUriHandlerID@DynamicAppUriHandlerServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__DynamicAppUriHandlerID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@DynamicAppUriHandlerServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DynamicAppUriHandlerGroup@DynamicAppUriHandlerServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put_DynamicAppUriHandlerGroup(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HostName@DynamicAppUriHandlerServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_HostName(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Path@DynamicAppUriHandlerServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Path(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ProgID@DynamicAppUriHandlerServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_ProgID(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put__DynamicAppUriHandlerID@DynamicAppUriHandlerServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put__DynamicAppUriHandlerID(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put__Revision@DynamicAppUriHandlerServer@StateRepository@Internal@Windows@@UEAAJ_K@Z
    virtual long put__Revision(uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DynamicAppUriHandlerServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~DynamicAppUriHandlerServer();
};
} // namespace Windows::Internal::StateRepository
