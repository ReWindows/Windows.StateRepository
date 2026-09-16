#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 39 member(s).
namespace Windows::Internal::StateRepository {
class BundlePackageServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BundlePackageServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BundlePackageServer@StateRepository@Internal@Windows@@QEAA@XZ
    BundlePackageServer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBundle@BundlePackageServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIBundle@234@@Z
    virtual long GetBundle(::Windows::Internal::StateRepository::IBundle * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFilenameAsStorageFile@BundlePackageServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIStorageFile@Storage@4@@Z
    virtual long GetFilenameAsStorageFile(::Windows::Storage::IStorageFile * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@BundlePackageServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@BundlePackageServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@BundlePackageServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@BundlePackageServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@BundlePackageServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@BundlePackageServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@BundlePackageServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BundlePackageServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BundlePackageServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Architecture@BundlePackageServer@StateRepository@Internal@Windows@@UEAAJPEAI@Z
    virtual long get_Architecture(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Bundle@BundlePackageServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_Bundle(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Filename@BundlePackageServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Filename(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Flags@BundlePackageServer@StateRepository@Internal@Windows@@UEAAJPEAW4BundlePackageFlags@234@@Z
    virtual long get_Flags(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsResourceIdNull@BundlePackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsResourceIdNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsStub@BundlePackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsStub(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@BundlePackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Offset@BundlePackageServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get_Offset(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageType@BundlePackageServer@StateRepository@Internal@Windows@@UEAAJPEAW4BundlePackageType@234@@Z
    virtual long get_PackageType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ResourceId@BundlePackageServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ResourceId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ResourcesDefault@BundlePackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_ResourcesDefault(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@BundlePackageServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get_Size(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Version@BundlePackageServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get_Version(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__BundlePackageID@BundlePackageServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__BundlePackageID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@BundlePackageServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsStub@BundlePackageServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_IsStub(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ResourcesDefault@BundlePackageServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_ResourcesDefault(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BundlePackageServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~BundlePackageServer();
};
} // namespace Windows::Internal::StateRepository
