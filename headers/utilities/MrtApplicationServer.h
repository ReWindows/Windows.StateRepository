#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 41 member(s).
namespace Windows::Internal::StateRepository {
class MrtApplicationServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@MrtApplicationServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplication@MrtApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIApplication@234@@Z
    virtual long GetApplication(::Windows::Internal::StateRepository::IApplication * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@MrtApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@MrtApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@MrtApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@MrtApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@MrtApplicationServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@MrtApplicationServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@MrtApplicationServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MrtApplicationServer@StateRepository@Internal@Windows@@QEAA@XZ
    MrtApplicationServer();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@MrtApplicationServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@MrtApplicationServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Application@MrtApplicationServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_Application(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DescriptionReference@MrtApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DescriptionReference(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayNameReference@MrtApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DisplayNameReference(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSplashScreenImageReferenceNull@MrtApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsSplashScreenImageReferenceNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSquare310x310LogoReferenceNull@MrtApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsSquare310x310LogoReferenceNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSquare71x71LogoReferenceNull@MrtApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsSquare71x71LogoReferenceNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsStartPageReferenceNull@MrtApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsStartPageReferenceNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsVisualGroupReferenceNull@MrtApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsVisualGroupReferenceNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsWide310x150LogoReferenceNull@MrtApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsWide310x150LogoReferenceNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@MrtApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SplashScreenImageReference@MrtApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SplashScreenImageReference(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Square150x150LogoReference@MrtApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Square150x150LogoReference(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Square310x310LogoReference@MrtApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Square310x310LogoReference(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Square44x44LogoReference@MrtApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Square44x44LogoReference(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Square71x71LogoReference@MrtApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Square71x71LogoReference(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StartPageReference@MrtApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_StartPageReference(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisualGroupReference@MrtApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_VisualGroupReference(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Wide310x150LogoReference@MrtApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Wide310x150LogoReference(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__MrtApplicationID@MrtApplicationServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__MrtApplicationID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@MrtApplicationServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MrtApplicationServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~MrtApplicationServer();
};
} // namespace Windows::Internal::StateRepository
