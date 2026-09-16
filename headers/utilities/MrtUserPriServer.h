#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 31 member(s).
namespace Windows::Internal::StateRepository {
class MrtUserPriServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@MrtUserPriServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFilenameAsStorageFile@MrtUserPriServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIStorageFile@Storage@4@@Z
    virtual long GetFilenameAsStorageFile(::Windows::Storage::IStorageFile * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@MrtUserPriServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMrtSharedPri@MrtUserPriServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIMrtSharedPri@234@@Z
    virtual long GetMrtSharedPri(::Windows::Internal::StateRepository::IMrtSharedPri * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackage@MrtUserPriServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIPackage@234@@Z
    virtual long GetPackage(::Windows::Internal::StateRepository::IPackage * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@MrtUserPriServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@MrtUserPriServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUser@MrtUserPriServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIUser@234@@Z
    virtual long GetUser(::Windows::Internal::StateRepository::IUser * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@MrtUserPriServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@MrtUserPriServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@MrtUserPriServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@MrtUserPriServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MrtUserPriServer@StateRepository@Internal@Windows@@QEAA@XZ
    MrtUserPriServer();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@MrtUserPriServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@MrtUserPriServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Filename@MrtUserPriServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Filename(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@MrtUserPriServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MrtSharedPri@MrtUserPriServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_MrtSharedPri(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Package@MrtUserPriServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_Package(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_User@MrtUserPriServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_User(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__MrtUserPriID@MrtUserPriServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__MrtUserPriID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@MrtUserPriServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MrtUserPriServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~MrtUserPriServer();
};
} // namespace Windows::Internal::StateRepository
