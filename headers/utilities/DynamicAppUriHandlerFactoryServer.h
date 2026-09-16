#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 23 member(s).
namespace Windows::Internal::StateRepository {
class DynamicAppUriHandlerFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@DynamicAppUriHandlerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@DynamicAppUriHandlerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIDynamicAppUriHandler@234@@Z
    virtual long Add(::Windows::Internal::StateRepository::IDynamicAppUriHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@DynamicAppUriHandlerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIDynamicAppUriHandler@234@@Z
    virtual long Delete(::Windows::Internal::StateRepository::IDynamicAppUriHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByProgIDAndDynamicAppUriHandlerGroup@DynamicAppUriHandlerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUIDynamicAppUriHandlerGroup@234@@Z
    virtual long DeleteByProgIDAndDynamicAppUriHandlerGroup(HSTRING__*, ::Windows::Internal::StateRepository::IDynamicAppUriHandlerGroup *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DynamicAppUriHandlerFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    DynamicAppUriHandlerFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@DynamicAppUriHandlerFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByDynamicAppUriHandlerGroup@DynamicAppUriHandlerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIDynamicAppUriHandlerGroup@234@PEAE@Z
    virtual long ExistsByDynamicAppUriHandlerGroup(::Windows::Internal::StateRepository::IDynamicAppUriHandlerGroup *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByHostName@DynamicAppUriHandlerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long ExistsByHostName(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByHostNameAndDynamicAppUriHandlerGroup@DynamicAppUriHandlerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUIDynamicAppUriHandlerGroup@234@PEAE@Z
    virtual long ExistsByHostNameAndDynamicAppUriHandlerGroup(HSTRING__*, ::Windows::Internal::StateRepository::IDynamicAppUriHandlerGroup *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByProgID@DynamicAppUriHandlerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long ExistsByProgID(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByProgIDAndDynamicAppUriHandlerGroup@DynamicAppUriHandlerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUIDynamicAppUriHandlerGroup@234@PEAE@Z
    virtual long ExistsByProgIDAndDynamicAppUriHandlerGroup(HSTRING__*, ::Windows::Internal::StateRepository::IDynamicAppUriHandlerGroup *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@DynamicAppUriHandlerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVDynamicAppUriHandler@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByDynamicAppUriHandlerGroup@DynamicAppUriHandlerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIDynamicAppUriHandlerGroup@234@PEAPEAU?$IVectorView@PEAVDynamicAppUriHandler@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByDynamicAppUriHandlerGroup(::Windows::Internal::StateRepository::IDynamicAppUriHandlerGroup *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByHostName@DynamicAppUriHandlerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVDynamicAppUriHandler@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByHostName(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByHostNameAndDynamicAppUriHandlerGroup@DynamicAppUriHandlerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUIDynamicAppUriHandlerGroup@234@PEAPEAU?$IVectorView@PEAVDynamicAppUriHandler@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByHostNameAndDynamicAppUriHandlerGroup(HSTRING__*, ::Windows::Internal::StateRepository::IDynamicAppUriHandlerGroup *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByProgID@DynamicAppUriHandlerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVDynamicAppUriHandler@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByProgID(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@DynamicAppUriHandlerFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIDynamicAppUriHandler@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IDynamicAppUriHandler * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByProgIDAndDynamicAppUriHandlerGroup@DynamicAppUriHandlerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUIDynamicAppUriHandlerGroup@234@PEAPEAUIDynamicAppUriHandler@234@@Z
    virtual long TryGetByProgIDAndDynamicAppUriHandlerGroup(HSTRING__*, ::Windows::Internal::StateRepository::IDynamicAppUriHandlerGroup *, ::Windows::Internal::StateRepository::IDynamicAppUriHandler * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@DynamicAppUriHandlerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIDynamicAppUriHandler@234@@Z
    virtual long Update(::Windows::Internal::StateRepository::IDynamicAppUriHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@DynamicAppUriHandlerFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIDynamicAppUriHandler@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IDynamicAppUriHandler * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DynamicAppUriHandlerFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~DynamicAppUriHandlerFactoryServer();
};
} // namespace Windows::Internal::StateRepository
