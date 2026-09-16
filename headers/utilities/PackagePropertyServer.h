#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 30 member(s).
namespace Windows::Internal::StateRepository {
class PackagePropertyServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PackagePropertyServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PackagePropertyServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackage@PackagePropertyServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIPackage@234@@Z
    virtual long GetPackage(::Windows::Internal::StateRepository::IPackage * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PackagePropertyServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PackagePropertyServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@PackagePropertyServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@PackagePropertyServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@PackagePropertyServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@PackagePropertyServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackagePropertyServer@StateRepository@Internal@Windows@@QEAA@XZ
    PackagePropertyServer();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PackagePropertyServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PackagePropertyServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DeferUpdateWhileInUse@PackagePropertyServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_DeferUpdateWhileInUse(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Flags@PackagePropertyServer@StateRepository@Internal@Windows@@UEAAJPEAW4PackagePropertyFlags@234@@Z
    virtual long get_Flags(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Index@PackagePropertyServer@StateRepository@Internal@Windows@@UEAAJPEAH@Z
    virtual long get_Index(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@PackagePropertyServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@PackagePropertyServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Name(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Package@PackagePropertyServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_Package(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__PackagePropertyID@PackagePropertyServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__PackagePropertyID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@PackagePropertyServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DeferUpdateWhileInUse@PackagePropertyServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_DeferUpdateWhileInUse(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackagePropertyServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~PackagePropertyServer();
};
} // namespace Windows::Internal::StateRepository
