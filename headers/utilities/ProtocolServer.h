#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 30 member(s).
namespace Windows::Internal::StateRepository {
class ProtocolServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ProtocolServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExtension@ProtocolServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIApplicationExtension@234@@Z
    virtual long GetExtension(::Windows::Internal::StateRepository::IApplicationExtension * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ProtocolServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ProtocolServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ProtocolServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@ProtocolServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ProtocolServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@ProtocolServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@ProtocolServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ProtocolServer@StateRepository@Internal@Windows@@QEAA@XZ
    ProtocolServer();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ProtocolServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ProtocolServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Extension@ProtocolServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_Extension(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Index@ProtocolServer@StateRepository@Internal@Windows@@UEAAJPEAH@Z
    virtual long get_Index(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsProgIDNull@ProtocolServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsProgIDNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@ProtocolServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProgID@ProtocolServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ProgID(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProtocolName@ProtocolServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ProtocolName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ReturnResults@ProtocolServer@StateRepository@Internal@Windows@@UEAAJPEAW4ProtocolReturnResults@234@@Z
    virtual long get_ReturnResults(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__ProtocolID@ProtocolServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__ProtocolID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@ProtocolServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ProtocolServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~ProtocolServer();
};
} // namespace Windows::Internal::StateRepository
