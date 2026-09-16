#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 33 member(s).
namespace Windows::Internal::StateRepository {
class FileTypeAssociationLauncherInfoServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@FileTypeAssociationLauncherInfoServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FileTypeAssociationLauncherInfoServer@StateRepository@Internal@Windows@@QEAA@XZ
    FileTypeAssociationLauncherInfoServer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplication@FileTypeAssociationLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIApplication@234@@Z
    virtual long GetApplication(::Windows::Internal::StateRepository::IApplication * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileTypeAssociation@FileTypeAssociationLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIFileTypeAssociation@234@@Z
    virtual long GetFileTypeAssociation(::Windows::Internal::StateRepository::IFileTypeAssociation * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@FileTypeAssociationLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@FileTypeAssociationLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@FileTypeAssociationLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@FileTypeAssociationLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@FileTypeAssociationLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@FileTypeAssociationLauncherInfoServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@FileTypeAssociationLauncherInfoServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@FileTypeAssociationLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@FileTypeAssociationLauncherInfoServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Application@FileTypeAssociationLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_Application(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationUserModelId@FileTypeAssociationLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ApplicationUserModelId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FileType@FileTypeAssociationLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_FileType(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FileTypeAssociation@FileTypeAssociationLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_FileTypeAssociation(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsProgIDNull@FileTypeAssociationLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsProgIDNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@FileTypeAssociationLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageFamilyName@FileTypeAssociationLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PackageFamilyName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageFullName@FileTypeAssociationLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PackageFullName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageOrigin@FileTypeAssociationLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJPEAW4PackageOrigin@234@@Z
    virtual long get_PackageOrigin(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProgID@FileTypeAssociationLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ProgID(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportedUsers@FileTypeAssociationLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJPEAW4SupportedUsers@234@@Z
    virtual long get_SupportedUsers(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FileTypeAssociationLauncherInfoServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~FileTypeAssociationLauncherInfoServer();
};
} // namespace Windows::Internal::StateRepository
