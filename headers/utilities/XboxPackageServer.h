#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 64 member(s).
namespace Windows::Internal::StateRepository {
class XboxPackageServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@XboxPackageServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Copy@XboxPackageServer@StateRepository@Internal@Windows@@SAJPEAUIXboxPackage@234@AEAVXboxPackage@Entity@2@@Z
    static long Copy(::Windows::Internal::StateRepository::IXboxPackage *, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@XboxPackageServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackage@XboxPackageServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIPackage@234@@Z
    virtual long GetPackage(::Windows::Internal::StateRepository::IPackage * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@XboxPackageServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@XboxPackageServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@XboxPackageServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@XboxPackageServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@XboxPackageServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@XboxPackageServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@XboxPackageServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@XboxPackageServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEscrowedKeyBlobIdToNull@XboxPackageServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long SetEscrowedKeyBlobIdToNull();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMediaIdToNull@XboxPackageServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long SetMediaIdToNull();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPackage@XboxPackageServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@@Z
    virtual long SetPackage(::Windows::Internal::StateRepository::IPackage *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrimaryServiceConfigIdToNull@XboxPackageServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long SetPrimaryServiceConfigIdToNull();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTitleIdToNull@XboxPackageServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long SetTitleIdToNull();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_Dictionary@XboxPackageServer@StateRepository@Internal@Windows@@UEAAJIPEAE@Z
    virtual long Set_Dictionary(unsigned int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_DictionaryToNull@XboxPackageServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Set_DictionaryToNull();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0XboxPackageServer@StateRepository@Internal@Windows@@QEAA@XZ
    XboxPackageServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BuildId@XboxPackageServer@StateRepository@Internal@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_BuildId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BuildVersion@XboxPackageServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get_BuildVersion(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContentId@XboxPackageServer@StateRepository@Internal@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_ContentId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DeviceId@XboxPackageServer@StateRepository@Internal@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_DeviceId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EditionId@XboxPackageServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_EditionId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EraVersion@XboxPackageServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get_EraVersion(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EscrowedKeyBlobId@XboxPackageServer@StateRepository@Internal@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_EscrowedKeyBlobId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEscrowedKeyBlobIdNull@XboxPackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsEscrowedKeyBlobIdNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsMediaIdNull@XboxPackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsMediaIdNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsPrimaryServiceConfigIdNull@XboxPackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsPrimaryServiceConfigIdNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsTitleIdNull@XboxPackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsTitleIdNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@XboxPackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MediaId@XboxPackageServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_MediaId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Package@XboxPackageServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_Package(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageSize@XboxPackageServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get_PackageSize(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PrimaryServiceConfigId@XboxPackageServer@StateRepository@Internal@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_PrimaryServiceConfigId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProductId@XboxPackageServer@StateRepository@Internal@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_ProductId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleId@XboxPackageServer@StateRepository@Internal@Windows@@UEAAJPEAI@Z
    virtual long get_TitleId(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@XboxPackageServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__XboxPackageID@XboxPackageServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__XboxPackageID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_BuildId@XboxPackageServer@StateRepository@Internal@Windows@@UEAAJU_GUID@@@Z
    virtual long put_BuildId(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_BuildVersion@XboxPackageServer@StateRepository@Internal@Windows@@UEAAJ_K@Z
    virtual long put_BuildVersion(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ContentId@XboxPackageServer@StateRepository@Internal@Windows@@UEAAJU_GUID@@@Z
    virtual long put_ContentId(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DeviceId@XboxPackageServer@StateRepository@Internal@Windows@@UEAAJU_GUID@@@Z
    virtual long put_DeviceId(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_EditionId@XboxPackageServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_EditionId(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_EraVersion@XboxPackageServer@StateRepository@Internal@Windows@@UEAAJ_K@Z
    virtual long put_EraVersion(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_EscrowedKeyBlobId@XboxPackageServer@StateRepository@Internal@Windows@@UEAAJU_GUID@@@Z
    virtual long put_EscrowedKeyBlobId(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MediaId@XboxPackageServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_MediaId(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Package@XboxPackageServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put_Package(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PackageSize@XboxPackageServer@StateRepository@Internal@Windows@@UEAAJ_K@Z
    virtual long put_PackageSize(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PrimaryServiceConfigId@XboxPackageServer@StateRepository@Internal@Windows@@UEAAJU_GUID@@@Z
    virtual long put_PrimaryServiceConfigId(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ProductId@XboxPackageServer@StateRepository@Internal@Windows@@UEAAJU_GUID@@@Z
    virtual long put_ProductId(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TitleId@XboxPackageServer@StateRepository@Internal@Windows@@UEAAJI@Z
    virtual long put_TitleId(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put__Revision@XboxPackageServer@StateRepository@Internal@Windows@@UEAAJ_K@Z
    virtual long put__Revision(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put__XboxPackageID@XboxPackageServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put__XboxPackageID(int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XboxPackageServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~XboxPackageServer();
};
} // namespace Windows::Internal::StateRepository
