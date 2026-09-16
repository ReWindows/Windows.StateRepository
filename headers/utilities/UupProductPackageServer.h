#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 40 member(s).
namespace Windows::Internal::StateRepository {
class UupProductPackageServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@UupProductPackageServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Copy@UupProductPackageServer@StateRepository@Internal@Windows@@SAJPEAUIUupProductPackage@234@AEAVUupProductPackage@Entity@2@@Z
    static long Copy(::Windows::Internal::StateRepository::IUupProductPackage *, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@UupProductPackageServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageIdentity@UupProductPackageServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIPackageIdentity@234@@Z
    virtual long GetPackageIdentity(::Windows::Internal::StateRepository::IPackageIdentity * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@UupProductPackageServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@UupProductPackageServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUupProduct@UupProductPackageServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIUupProduct@234@@Z
    virtual long GetUupProduct(::Windows::Internal::StateRepository::IUupProduct * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@UupProductPackageServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@UupProductPackageServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@UupProductPackageServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@UupProductPackageServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@UupProductPackageServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@UupProductPackageServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPackageIdentity@UupProductPackageServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageIdentity@234@@Z
    virtual long SetPackageIdentity(::Windows::Internal::StateRepository::IPackageIdentity *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUupProduct@UupProductPackageServer@StateRepository@Internal@Windows@@UEAAJPEAUIUupProduct@234@@Z
    virtual long SetUupProduct(::Windows::Internal::StateRepository::IUupProduct *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_Dictionary@UupProductPackageServer@StateRepository@Internal@Windows@@UEAAJIPEAE@Z
    virtual long Set_Dictionary(unsigned int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_DictionaryToNull@UupProductPackageServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Set_DictionaryToNull();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UupProductPackageServer@StateRepository@Internal@Windows@@QEAA@XZ
    UupProductPackageServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Flags@UupProductPackageServer@StateRepository@Internal@Windows@@UEAAJPEAW4UupProductPackageFlags@234@@Z
    virtual long get_Flags(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsApplicable@UupProductPackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsApplicable(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@UupProductPackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageIdentity@UupProductPackageServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_PackageIdentity(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UupProduct@UupProductPackageServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_UupProduct(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@UupProductPackageServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__UupProductPackageID@UupProductPackageServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__UupProductPackageID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Flags@UupProductPackageServer@StateRepository@Internal@Windows@@UEAAJW4UupProductPackageFlags@234@@Z
    virtual long put_Flags(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsApplicable@UupProductPackageServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_IsApplicable(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PackageIdentity@UupProductPackageServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put_PackageIdentity(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_UupProduct@UupProductPackageServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put_UupProduct(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put__Revision@UupProductPackageServer@StateRepository@Internal@Windows@@UEAAJ_K@Z
    virtual long put__Revision(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put__UupProductPackageID@UupProductPackageServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put__UupProductPackageID(int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UupProductPackageServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~UupProductPackageServer();
};
} // namespace Windows::Internal::StateRepository
