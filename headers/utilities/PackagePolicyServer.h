#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 57 member(s).
namespace Windows::Internal::StateRepository {
class PackagePolicyServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PackagePolicyServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Copy@PackagePolicyServer@StateRepository@Internal@Windows@@SAJPEAUIPackagePolicy@234@AEAVPackagePolicy@Entity@2@@Z
    static long Copy(::Windows::Internal::StateRepository::IPackagePolicy *, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PackagePolicyServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackage@PackagePolicyServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIPackage@234@@Z
    virtual long GetPackage(::Windows::Internal::StateRepository::IPackage * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PackagePolicyServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PackagePolicyServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUser@PackagePolicyServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIUser@234@@Z
    virtual long GetUser(::Windows::Internal::StateRepository::IUser * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@PackagePolicyServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@PackagePolicyServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@PackagePolicyServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@PackagePolicyServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackagePolicyServer@StateRepository@Internal@Windows@@QEAA@XZ
    PackagePolicyServer();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PackagePolicyServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PackagePolicyServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPackage@PackagePolicyServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@@Z
    virtual long SetPackage(::Windows::Internal::StateRepository::IPackage *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUser@PackagePolicyServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@@Z
    virtual long SetUser(::Windows::Internal::StateRepository::IUser *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValueStringToNull@PackagePolicyServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long SetValueStringToNull();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValueToNull@PackagePolicyServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long SetValueToNull();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_Dictionary@PackagePolicyServer@StateRepository@Internal@Windows@@UEAAJIPEAE@Z
    virtual long Set_Dictionary(unsigned int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_DictionaryToNull@PackagePolicyServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Set_DictionaryToNull();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Index@PackagePolicyServer@StateRepository@Internal@Windows@@UEAAJPEAH@Z
    virtual long get_Index(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsValueStringNull@PackagePolicyServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsValueStringNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@PackagePolicyServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@PackagePolicyServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Name(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Package@PackagePolicyServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_Package(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_User@PackagePolicyServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_User(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ValueBoolean@PackagePolicyServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_ValueBoolean(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ValueInt32@PackagePolicyServer@StateRepository@Internal@Windows@@UEAAJPEAH@Z
    virtual long get_ValueInt32(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ValueInt64@PackagePolicyServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_ValueInt64(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ValueNumber@PackagePolicyServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get_ValueNumber(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ValueString@PackagePolicyServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ValueString(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ValueUInt32@PackagePolicyServer@StateRepository@Internal@Windows@@UEAAJPEAI@Z
    virtual long get_ValueUInt32(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ValueUInt64@PackagePolicyServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get_ValueUInt64(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__PackagePolicyID@PackagePolicyServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__PackagePolicyID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@PackagePolicyServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Index@PackagePolicyServer@StateRepository@Internal@Windows@@UEAAJH@Z
    virtual long put_Index(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Name@PackagePolicyServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Name(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Package@PackagePolicyServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put_Package(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_User@PackagePolicyServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put_User(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ValueBoolean@PackagePolicyServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_ValueBoolean(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ValueInt32@PackagePolicyServer@StateRepository@Internal@Windows@@UEAAJH@Z
    virtual long put_ValueInt32(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ValueInt64@PackagePolicyServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put_ValueInt64(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ValueNumber@PackagePolicyServer@StateRepository@Internal@Windows@@UEAAJ_K@Z
    virtual long put_ValueNumber(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ValueString@PackagePolicyServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_ValueString(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ValueUInt32@PackagePolicyServer@StateRepository@Internal@Windows@@UEAAJI@Z
    virtual long put_ValueUInt32(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ValueUInt64@PackagePolicyServer@StateRepository@Internal@Windows@@UEAAJ_K@Z
    virtual long put_ValueUInt64(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put__PackagePolicyID@PackagePolicyServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put__PackagePolicyID(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put__Revision@PackagePolicyServer@StateRepository@Internal@Windows@@UEAAJ_K@Z
    virtual long put__Revision(uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackagePolicyServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~PackagePolicyServer();
};
} // namespace Windows::Internal::StateRepository
