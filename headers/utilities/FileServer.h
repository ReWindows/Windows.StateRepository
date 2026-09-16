#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 62 member(s).
namespace Windows::Internal::StateRepository {
class FileServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@FileServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FileServer@StateRepository@Internal@Windows@@QEAA@XZ
    FileServer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDigest@FileServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long GetDigest(unsigned int *, unsigned char * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@FileServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackage@FileServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIPackage@234@@Z
    virtual long GetPackage(::Windows::Internal::StateRepository::IPackage * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRelativeFilePathAsStorageFile@FileServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIStorageFile@Storage@4@@Z
    virtual long GetRelativeFilePathAsStorageFile(::Windows::Storage::IStorageFile * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@FileServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@FileServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@FileServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@FileServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@FileServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@FileServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@FileServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@FileServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AllowExecute@FileServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_AllowExecute(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppendAces@FileServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_AppendAces(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BlockSize@FileServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get_BlockSize(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DevMode@FileServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_DevMode(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExternalLocation@FileServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_ExternalLocation(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Flags@FileServer@StateRepository@Internal@Windows@@UEAAJPEAW4FileFlags@234@@Z
    virtual long get_Flags(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FullTrust@FileServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_FullTrust(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HasHostRuntime@FileServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_HasHostRuntime(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsAllApplicationPackage@FileServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsAllApplicationPackage(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsDigestNull@FileServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsDigestNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsFullFileHash@FileServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsFullFileHash(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsOwnedByTrustedInstaller@FileServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsOwnedByTrustedInstaller(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsUnrestrictedAdminAccess@FileServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsUnrestrictedAdminAccess(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsUnrestrictedBuiltinUserAccess@FileServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsUnrestrictedBuiltinUserAccess(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsUnsigned@FileServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsUnsigned(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@FileServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OtherPackageFamily@FileServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_OtherPackageFamily(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Package@FileServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_Package(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PartialTrust@FileServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_PartialTrust(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RelativeFilePath@FileServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_RelativeFilePath(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@FileServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_Size(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SkipAllConditionalAces@FileServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_SkipAllConditionalAces(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__FileID@FileServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__FileID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@FileServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AllowExecute@FileServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_AllowExecute(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AppendAces@FileServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_AppendAces(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DevMode@FileServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_DevMode(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ExternalLocation@FileServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_ExternalLocation(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FullTrust@FileServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_FullTrust(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HasHostRuntime@FileServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_HasHostRuntime(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsAllApplicationPackage@FileServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_IsAllApplicationPackage(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsFullFileHash@FileServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_IsFullFileHash(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsOwnedByTrustedInstaller@FileServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_IsOwnedByTrustedInstaller(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsUnrestrictedAdminAccess@FileServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_IsUnrestrictedAdminAccess(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsUnrestrictedBuiltinUserAccess@FileServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_IsUnrestrictedBuiltinUserAccess(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsUnsigned@FileServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_IsUnsigned(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_OtherPackageFamily@FileServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_OtherPackageFamily(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PartialTrust@FileServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_PartialTrust(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SkipAllConditionalAces@FileServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_SkipAllConditionalAces(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FileServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~FileServer();
};
} // namespace Windows::Internal::StateRepository
