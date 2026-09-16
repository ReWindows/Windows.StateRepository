#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 38 member(s).
namespace Windows::Internal::StateRepository {
class SharedPackageContainerServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SharedPackageContainerServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Copy@SharedPackageContainerServer@StateRepository@Internal@Windows@@SAJPEAUISharedPackageContainer@234@AEAVSharedPackageContainer@Entity@2@@Z
    static long Copy(::Windows::Internal::StateRepository::ISharedPackageContainer *, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SharedPackageContainerServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SharedPackageContainerServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SharedPackageContainerServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUser@SharedPackageContainerServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIUser@234@@Z
    virtual long GetUser(::Windows::Internal::StateRepository::IUser * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@SharedPackageContainerServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@SharedPackageContainerServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@SharedPackageContainerServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@SharedPackageContainerServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SharedPackageContainerServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SharedPackageContainerServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUser@SharedPackageContainerServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@@Z
    virtual long SetUser(::Windows::Internal::StateRepository::IUser *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_Dictionary@SharedPackageContainerServer@StateRepository@Internal@Windows@@UEAAJIPEAE@Z
    virtual long Set_Dictionary(unsigned int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_DictionaryToNull@SharedPackageContainerServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Set_DictionaryToNull();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SharedPackageContainerServer@StateRepository@Internal@Windows@@QEAA@XZ
    SharedPackageContainerServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@SharedPackageContainerServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Id(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@SharedPackageContainerServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@SharedPackageContainerServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Name(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Status@SharedPackageContainerServer@StateRepository@Internal@Windows@@UEAAJPEAW4SharedPackageContainerStatus@234@@Z
    virtual long get_Status(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_User@SharedPackageContainerServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_User(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@SharedPackageContainerServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__SharedPackageContainerID@SharedPackageContainerServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__SharedPackageContainerID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Id@SharedPackageContainerServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Id(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Name@SharedPackageContainerServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Name(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Status@SharedPackageContainerServer@StateRepository@Internal@Windows@@UEAAJW4SharedPackageContainerStatus@234@@Z
    virtual long put_Status(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_User@SharedPackageContainerServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put_User(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put__Revision@SharedPackageContainerServer@StateRepository@Internal@Windows@@UEAAJ_K@Z
    virtual long put__Revision(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put__SharedPackageContainerID@SharedPackageContainerServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put__SharedPackageContainerID(int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SharedPackageContainerServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~SharedPackageContainerServer();
};
} // namespace Windows::Internal::StateRepository
