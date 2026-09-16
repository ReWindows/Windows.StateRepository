#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 33 member(s).
namespace Windows::Internal::StateRepository {
class AppExtensionServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppExtensionServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppExtensionServer@StateRepository@Internal@Windows@@QEAA@XZ
    AppExtensionServer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExtension@AppExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIApplicationExtension@234@@Z
    virtual long GetExtension(::Windows::Internal::StateRepository::IApplicationExtension * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPublicFolderAsStorageFolder@AppExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIStorageFolder@Storage@4@@Z
    virtual long GetPublicFolderAsStorageFolder(::Windows::Storage::IStorageFolder * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@AppExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@AppExtensionServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@AppExtensionServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@AppExtensionServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppExtensionServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppExtensionServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Description@AppExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Description(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayName@AppExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DisplayName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Extension@AppExtensionServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_Extension(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@AppExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Id(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsDescriptionNull@AppExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsDescriptionNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsPublicFolderNull@AppExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsPublicFolderNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@AppExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@AppExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Name(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PublicFolder@AppExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PublicFolder(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__AppExtensionID@AppExtensionServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__AppExtensionID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@AppExtensionServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppExtensionServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~AppExtensionServer();
};
} // namespace Windows::Internal::StateRepository
