#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 30 member(s).
namespace Windows::Internal::StateRepository {
class PackageFamilyServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PackageFamilyServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PackageFamilyServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PackageFamilyServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PackageFamilyServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@PackageFamilyServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@PackageFamilyServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@PackageFamilyServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@PackageFamilyServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageFamilyServer@StateRepository@Internal@Windows@@QEAA@XZ
    PackageFamilyServer();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PackageFamilyServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PackageFamilyServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@PackageFamilyServer@StateRepository@Internal@Windows@@QEAAJ$$QEAVPackageFamily@Entity@2@@Z
    long RuntimeClassInitialize(WindissectOpaque &&);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsRawPublisherNull@PackageFamilyServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsRawPublisherNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@PackageFamilyServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@PackageFamilyServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Name(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageFamilyName@PackageFamilyServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PackageFamilyName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageSID@PackageFamilyServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PackageSID(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Publisher@PackageFamilyServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Publisher(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PublisherId@PackageFamilyServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PublisherId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RawPublisher@PackageFamilyServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_RawPublisher(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__PackageFamilyID@PackageFamilyServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__PackageFamilyID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@PackageFamilyServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
};
} // namespace Windows::Internal::StateRepository
