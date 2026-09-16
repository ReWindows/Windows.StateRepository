#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 38 member(s).
namespace Windows::Internal::StateRepository {
class DynamicAppUriHandlerGroupServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DynamicAppUriHandlerGroupServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Copy@DynamicAppUriHandlerGroupServer@StateRepository@Internal@Windows@@SAJPEAUIDynamicAppUriHandlerGroup@234@AEAVDynamicAppUriHandlerGroup@Entity@2@@Z
    static long Copy(::Windows::Internal::StateRepository::IDynamicAppUriHandlerGroup *, WindissectOpaque &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DynamicAppUriHandlerGroupServer@StateRepository@Internal@Windows@@QEAA@XZ
    DynamicAppUriHandlerGroupServer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DynamicAppUriHandlerGroupServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageFamily@DynamicAppUriHandlerGroupServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIPackageFamily@234@@Z
    virtual long GetPackageFamily(::Windows::Internal::StateRepository::IPackageFamily * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DynamicAppUriHandlerGroupServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DynamicAppUriHandlerGroupServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUser@DynamicAppUriHandlerGroupServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIUser@234@@Z
    virtual long GetUser(::Windows::Internal::StateRepository::IUser * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@DynamicAppUriHandlerGroupServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@DynamicAppUriHandlerGroupServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@DynamicAppUriHandlerGroupServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@DynamicAppUriHandlerGroupServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DynamicAppUriHandlerGroupServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DynamicAppUriHandlerGroupServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPackageFamily@DynamicAppUriHandlerGroupServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageFamily@234@@Z
    virtual long SetPackageFamily(::Windows::Internal::StateRepository::IPackageFamily *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUser@DynamicAppUriHandlerGroupServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@@Z
    virtual long SetUser(::Windows::Internal::StateRepository::IUser *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_Dictionary@DynamicAppUriHandlerGroupServer@StateRepository@Internal@Windows@@UEAAJIPEAE@Z
    virtual long Set_Dictionary(unsigned int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_DictionaryToNull@DynamicAppUriHandlerGroupServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Set_DictionaryToNull();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@DynamicAppUriHandlerGroupServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@DynamicAppUriHandlerGroupServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Name(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageFamily@DynamicAppUriHandlerGroupServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_PackageFamily(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_User@DynamicAppUriHandlerGroupServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_User(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__DynamicAppUriHandlerGroupID@DynamicAppUriHandlerGroupServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__DynamicAppUriHandlerGroupID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@DynamicAppUriHandlerGroupServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Name@DynamicAppUriHandlerGroupServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Name(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PackageFamily@DynamicAppUriHandlerGroupServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put_PackageFamily(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_User@DynamicAppUriHandlerGroupServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put_User(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put__DynamicAppUriHandlerGroupID@DynamicAppUriHandlerGroupServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put__DynamicAppUriHandlerGroupID(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put__Revision@DynamicAppUriHandlerGroupServer@StateRepository@Internal@Windows@@UEAAJ_K@Z
    virtual long put__Revision(uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DynamicAppUriHandlerGroupServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~DynamicAppUriHandlerGroupServer();
};
} // namespace Windows::Internal::StateRepository
