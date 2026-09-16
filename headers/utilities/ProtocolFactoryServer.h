#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 29 member(s).
namespace Windows::Internal::StateRepository {
class ProtocolFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@ProtocolFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@ProtocolFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByExtension@ProtocolFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplicationExtension@234@PEAE@Z
    virtual long ExistsByExtension(::Windows::Internal::StateRepository::IApplicationExtension *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByExtensionAndIndex@ProtocolFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplicationExtension@234@HPEAE@Z
    virtual long ExistsByExtensionAndIndex(::Windows::Internal::StateRepository::IApplicationExtension *, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByProgID@ProtocolFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long ExistsByProgID(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByProgIDAndExtension@ProtocolFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUIApplicationExtension@234@PEAE@Z
    virtual long ExistsByProgIDAndExtension(HSTRING__*, ::Windows::Internal::StateRepository::IApplicationExtension *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByProtocolName@ProtocolFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long ExistsByProtocolName(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByProtocolNameAndExtension@ProtocolFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUIApplicationExtension@234@PEAE@Z
    virtual long ExistsByProtocolNameAndExtension(HSTRING__*, ::Windows::Internal::StateRepository::IApplicationExtension *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByProtocolNameAndReturnResults@ProtocolFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@W4ProtocolReturnResults@234@PEAE@Z
    virtual long ExistsByProtocolNameAndReturnResults(HSTRING__*, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@ProtocolFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVProtocol@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByExtension@ProtocolFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplicationExtension@234@PEAPEAU?$IVectorView@PEAVProtocol@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByExtension(::Windows::Internal::StateRepository::IApplicationExtension *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByProgID@ProtocolFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVProtocol@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByProgID(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByProgIDAndExtension@ProtocolFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUIApplicationExtension@234@PEAPEAU?$IVectorView@PEAVProtocol@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByProgIDAndExtension(HSTRING__*, ::Windows::Internal::StateRepository::IApplicationExtension *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByProtocolName@ProtocolFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVProtocol@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByProtocolName(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByProtocolNameAndExtension@ProtocolFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUIApplicationExtension@234@PEAPEAU?$IVectorView@PEAVProtocol@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByProtocolNameAndExtension(HSTRING__*, ::Windows::Internal::StateRepository::IApplicationExtension *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByProtocolNameAndReturnResults@ProtocolFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@W4ProtocolReturnResults@234@PEAPEAU?$IVectorView@PEAVProtocol@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByProtocolNameAndReturnResults(HSTRING__*, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndProtocolName@ProtocolFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVProtocol@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndProtocolName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindLauncherInfoByUserOrDefaultAccountAndProgId@ProtocolFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVProtocolLauncherInfo@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindLauncherInfoByUserOrDefaultAccountAndProgId(::Windows::Internal::StateRepository::IUser *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindLauncherInfoByUserOrDefaultAccountAndProtocolName@ProtocolFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVProtocolLauncherInfo@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindLauncherInfoByUserOrDefaultAccountAndProtocolName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindLauncherInfoByUserOrDefaultAccountAndProtocolNameAndPackageFamilyName@ProtocolFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@1PEAPEAU?$IVectorView@PEAVProtocolLauncherInfo@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindLauncherInfoByUserOrDefaultAccountAndProtocolNameAndPackageFamilyName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@ProtocolFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIProtocol@234@@Z
    virtual long Get(int64_t, ::Windows::Internal::StateRepository::IProtocol * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByExtensionAndIndex@ProtocolFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplicationExtension@234@HPEAPEAUIProtocol@234@@Z
    virtual long GetByExtensionAndIndex(::Windows::Internal::StateRepository::IApplicationExtension *, int, ::Windows::Internal::StateRepository::IProtocol * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ProtocolFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    ProtocolFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@ProtocolFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIProtocol@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IProtocol * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByExtensionAndIndex@ProtocolFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplicationExtension@234@HPEAPEAUIProtocol@234@@Z
    virtual long TryGetByExtensionAndIndex(::Windows::Internal::StateRepository::IApplicationExtension *, int, ::Windows::Internal::StateRepository::IProtocol * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@ProtocolFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIProtocol@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IProtocol * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ProtocolFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~ProtocolFactoryServer();
};
} // namespace Windows::Internal::StateRepository
