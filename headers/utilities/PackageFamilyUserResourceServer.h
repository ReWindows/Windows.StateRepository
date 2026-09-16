#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 34 member(s).
namespace Windows::Internal::StateRepository {
class PackageFamilyUserResourceServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PackageFamilyUserResourceServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Copy@PackageFamilyUserResourceServer@StateRepository@Internal@Windows@@SAJPEAUIPackageFamilyUserResource@234@AEAVPackageFamilyUserResource@Entity@2@@Z
    static long Copy(::Windows::Internal::StateRepository::IPackageFamilyUserResource *, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PackageFamilyUserResourceServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageFamilyUser@PackageFamilyUserResourceServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIPackageFamilyUser@234@@Z
    virtual long GetPackageFamilyUser(::Windows::Internal::StateRepository::IPackageFamilyUser * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PackageFamilyUserResourceServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PackageFamilyUserResourceServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@PackageFamilyUserResourceServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@PackageFamilyUserResourceServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@PackageFamilyUserResourceServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@PackageFamilyUserResourceServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageFamilyUserResourceServer@StateRepository@Internal@Windows@@QEAA@XZ
    PackageFamilyUserResourceServer();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PackageFamilyUserResourceServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PackageFamilyUserResourceServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPackageFamilyUser@PackageFamilyUserResourceServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageFamilyUser@234@@Z
    virtual long SetPackageFamilyUser(::Windows::Internal::StateRepository::IPackageFamilyUser *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_Dictionary@PackageFamilyUserResourceServer@StateRepository@Internal@Windows@@UEAAJIPEAE@Z
    virtual long Set_Dictionary(unsigned int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_DictionaryToNull@PackageFamilyUserResourceServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Set_DictionaryToNull();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@PackageFamilyUserResourceServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageFamilyUser@PackageFamilyUserResourceServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_PackageFamilyUser(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ResourceId@PackageFamilyUserResourceServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ResourceId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__PackageFamilyUserResourceID@PackageFamilyUserResourceServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__PackageFamilyUserResourceID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@PackageFamilyUserResourceServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PackageFamilyUser@PackageFamilyUserResourceServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put_PackageFamilyUser(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ResourceId@PackageFamilyUserResourceServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_ResourceId(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put__PackageFamilyUserResourceID@PackageFamilyUserResourceServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put__PackageFamilyUserResourceID(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put__Revision@PackageFamilyUserResourceServer@StateRepository@Internal@Windows@@UEAAJ_K@Z
    virtual long put__Revision(uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageFamilyUserResourceServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~PackageFamilyUserResourceServer();
};
} // namespace Windows::Internal::StateRepository
