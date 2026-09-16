#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 39 member(s).
namespace Windows::Internal::StateRepository {
class DefaultTileServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DefaultTileServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DefaultTileServer@StateRepository@Internal@Windows@@QEAA@XZ
    DefaultTileServer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplication@DefaultTileServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIApplication@234@@Z
    virtual long GetApplication(::Windows::Internal::StateRepository::IApplication * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHoloContentChoiceAsStorageFile@DefaultTileServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIStorageFile@Storage@4@@Z
    virtual long GetHoloContentChoiceAsStorageFile(::Windows::Storage::IStorageFile * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DefaultTileServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMixedRealityModelAsStorageFile@DefaultTileServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIStorageFile@Storage@4@@Z
    virtual long GetMixedRealityModelAsStorageFile(::Windows::Storage::IStorageFile * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DefaultTileServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DefaultTileServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@DefaultTileServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@DefaultTileServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@DefaultTileServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@DefaultTileServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DefaultTileServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DefaultTileServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Application@DefaultTileServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_Application(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DefaultSize@DefaultTileServer@StateRepository@Internal@Windows@@UEAAJPEAW4DefaultTileDefaultSize@234@@Z
    virtual long get_DefaultSize(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HoloContentChoice@DefaultTileServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_HoloContentChoice(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsHoloContentChoiceNull@DefaultTileServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsHoloContentChoiceNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsMixedRealityModelNull@DefaultTileServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsMixedRealityModelNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsShortNameNull@DefaultTileServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsShortNameNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsUpdateUriTemplateNull@DefaultTileServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsUpdateUriTemplateNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@DefaultTileServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MixedRealityModel@DefaultTileServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_MixedRealityModel(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShortName@DefaultTileServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ShortName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShowNameOnTiles@DefaultTileServer@StateRepository@Internal@Windows@@UEAAJPEAW4DefaultTileShowNameOnTiles@234@@Z
    virtual long get_ShowNameOnTiles(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UpdateRecurrence@DefaultTileServer@StateRepository@Internal@Windows@@UEAAJPEAW4DefaultTileUpdateRecurrence@234@@Z
    virtual long get_UpdateRecurrence(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UpdateUriTemplate@DefaultTileServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_UpdateUriTemplate(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UpdateUriTemplateAsUri@DefaultTileServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@4@@Z
    virtual long get_UpdateUriTemplateAsUri(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__DefaultTileID@DefaultTileServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__DefaultTileID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@DefaultTileServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DefaultTileServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~DefaultTileServer();
};
} // namespace Windows::Internal::StateRepository
