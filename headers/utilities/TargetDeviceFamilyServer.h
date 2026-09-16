#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 29 member(s).
namespace Windows::Internal::StateRepository {
class TargetDeviceFamilyServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TargetDeviceFamilyServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@TargetDeviceFamilyServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackage@TargetDeviceFamilyServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIPackage@234@@Z
    virtual long GetPackage(::Windows::Internal::StateRepository::IPackage * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@TargetDeviceFamilyServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@TargetDeviceFamilyServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@TargetDeviceFamilyServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@TargetDeviceFamilyServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@TargetDeviceFamilyServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@TargetDeviceFamilyServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TargetDeviceFamilyServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TargetDeviceFamilyServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TargetDeviceFamilyServer@StateRepository@Internal@Windows@@QEAA@XZ
    TargetDeviceFamilyServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Index@TargetDeviceFamilyServer@StateRepository@Internal@Windows@@UEAAJPEAH@Z
    virtual long get_Index(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@TargetDeviceFamilyServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MaxVersion@TargetDeviceFamilyServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get_MaxVersion(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MinVersion@TargetDeviceFamilyServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get_MinVersion(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@TargetDeviceFamilyServer@StateRepository@Internal@Windows@@UEAAJPEAH@Z
    virtual long get_Name(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Package@TargetDeviceFamilyServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_Package(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@TargetDeviceFamilyServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__TargetDeviceFamilyID@TargetDeviceFamilyServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__TargetDeviceFamilyID(int64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TargetDeviceFamilyServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~TargetDeviceFamilyServer();
};
} // namespace Windows::Internal::StateRepository
