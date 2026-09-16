#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 57 member(s).
namespace Windows::Internal::StateRepository {
class PackageFamilyPolicyServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PackageFamilyPolicyServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Copy@PackageFamilyPolicyServer@StateRepository@Internal@Windows@@SAJPEAUIPackageFamilyPolicy@234@AEAVPackageFamilyPolicy@Entity@2@@Z
    static long Copy(::Windows::Internal::StateRepository::IPackageFamilyPolicy *, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PackageFamilyPolicyServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageFamily@PackageFamilyPolicyServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIPackageFamily@234@@Z
    virtual long GetPackageFamily(::Windows::Internal::StateRepository::IPackageFamily * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PackageFamilyPolicyServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PackageFamilyPolicyServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUser@PackageFamilyPolicyServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIUser@234@@Z
    virtual long GetUser(::Windows::Internal::StateRepository::IUser * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@PackageFamilyPolicyServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@PackageFamilyPolicyServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@PackageFamilyPolicyServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@PackageFamilyPolicyServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageFamilyPolicyServer@StateRepository@Internal@Windows@@QEAA@XZ
    PackageFamilyPolicyServer();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PackageFamilyPolicyServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PackageFamilyPolicyServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPackageFamily@PackageFamilyPolicyServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageFamily@234@@Z
    virtual long SetPackageFamily(::Windows::Internal::StateRepository::IPackageFamily *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUser@PackageFamilyPolicyServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@@Z
    virtual long SetUser(::Windows::Internal::StateRepository::IUser *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValueStringToNull@PackageFamilyPolicyServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long SetValueStringToNull();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValueToNull@PackageFamilyPolicyServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long SetValueToNull();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_Dictionary@PackageFamilyPolicyServer@StateRepository@Internal@Windows@@UEAAJIPEAE@Z
    virtual long Set_Dictionary(unsigned int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_DictionaryToNull@PackageFamilyPolicyServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Set_DictionaryToNull();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Index@PackageFamilyPolicyServer@StateRepository@Internal@Windows@@UEAAJPEAH@Z
    virtual long get_Index(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsValueStringNull@PackageFamilyPolicyServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsValueStringNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@PackageFamilyPolicyServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@PackageFamilyPolicyServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Name(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageFamily@PackageFamilyPolicyServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_PackageFamily(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_User@PackageFamilyPolicyServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_User(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ValueBoolean@PackageFamilyPolicyServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_ValueBoolean(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ValueInt32@PackageFamilyPolicyServer@StateRepository@Internal@Windows@@UEAAJPEAH@Z
    virtual long get_ValueInt32(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ValueInt64@PackageFamilyPolicyServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_ValueInt64(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ValueNumber@PackageFamilyPolicyServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get_ValueNumber(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ValueString@PackageFamilyPolicyServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ValueString(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ValueUInt32@PackageFamilyPolicyServer@StateRepository@Internal@Windows@@UEAAJPEAI@Z
    virtual long get_ValueUInt32(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ValueUInt64@PackageFamilyPolicyServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get_ValueUInt64(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__PackageFamilyPolicyID@PackageFamilyPolicyServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__PackageFamilyPolicyID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@PackageFamilyPolicyServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Index@PackageFamilyPolicyServer@StateRepository@Internal@Windows@@UEAAJH@Z
    virtual long put_Index(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Name@PackageFamilyPolicyServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Name(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PackageFamily@PackageFamilyPolicyServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put_PackageFamily(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_User@PackageFamilyPolicyServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put_User(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ValueBoolean@PackageFamilyPolicyServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_ValueBoolean(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ValueInt32@PackageFamilyPolicyServer@StateRepository@Internal@Windows@@UEAAJH@Z
    virtual long put_ValueInt32(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ValueInt64@PackageFamilyPolicyServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put_ValueInt64(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ValueNumber@PackageFamilyPolicyServer@StateRepository@Internal@Windows@@UEAAJ_K@Z
    virtual long put_ValueNumber(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ValueString@PackageFamilyPolicyServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_ValueString(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ValueUInt32@PackageFamilyPolicyServer@StateRepository@Internal@Windows@@UEAAJI@Z
    virtual long put_ValueUInt32(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ValueUInt64@PackageFamilyPolicyServer@StateRepository@Internal@Windows@@UEAAJ_K@Z
    virtual long put_ValueUInt64(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put__PackageFamilyPolicyID@PackageFamilyPolicyServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put__PackageFamilyPolicyID(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put__Revision@PackageFamilyPolicyServer@StateRepository@Internal@Windows@@UEAAJ_K@Z
    virtual long put__Revision(uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageFamilyPolicyServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~PackageFamilyPolicyServer();
};
} // namespace Windows::Internal::StateRepository
