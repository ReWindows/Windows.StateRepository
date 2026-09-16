#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 33 member(s).
namespace Windows::Internal::StateRepository {
class PkgExtensionServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PkgExtensionServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExtension@PkgExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIPackageExtension@234@@Z
    virtual long GetExtension(::Windows::Internal::StateRepository::IPackageExtension * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PkgExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPublicFolderAsStorageFolder@PkgExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIStorageFolder@Storage@4@@Z
    virtual long GetPublicFolderAsStorageFolder(::Windows::Storage::IStorageFolder * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PkgExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PkgExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@PkgExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@PkgExtensionServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@PkgExtensionServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@PkgExtensionServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PkgExtensionServer@StateRepository@Internal@Windows@@QEAA@XZ
    PkgExtensionServer();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PkgExtensionServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PkgExtensionServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Description@PkgExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Description(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayName@PkgExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DisplayName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Extension@PkgExtensionServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_Extension(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@PkgExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Id(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsDescriptionNull@PkgExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsDescriptionNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsPublicFolderNull@PkgExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsPublicFolderNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@PkgExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@PkgExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Name(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PublicFolder@PkgExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PublicFolder(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__PkgExtensionID@PkgExtensionServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__PkgExtensionID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@PkgExtensionServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PkgExtensionServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~PkgExtensionServer();
};
} // namespace Windows::Internal::StateRepository
