#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 26 member(s).
namespace Windows::Internal::StateRepository {
class HostRuntimeServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@HostRuntimeServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@HostRuntimeServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageExtension@HostRuntimeServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIPackageExtension@234@@Z
    virtual long GetPackageExtension(::Windows::Internal::StateRepository::IPackageExtension * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@HostRuntimeServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@HostRuntimeServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@HostRuntimeServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HostRuntimeServer@StateRepository@Internal@Windows@@QEAA@XZ
    HostRuntimeServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@HostRuntimeServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@HostRuntimeServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@HostRuntimeServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@HostRuntimeServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@HostRuntimeServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HostId@HostRuntimeServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_HostId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@HostRuntimeServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageExtension@HostRuntimeServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_PackageExtension(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__HostRuntimeID@HostRuntimeServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__HostRuntimeID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@HostRuntimeServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HostRuntimeServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~HostRuntimeServer();
};
} // namespace Windows::Internal::StateRepository
