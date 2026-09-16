#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 21 member(s).
namespace Windows::Internal::StateRepository {
class OptionalBundleFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@OptionalBundleFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@OptionalBundleFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByMainBundle@OptionalBundleFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIBundle@234@PEAE@Z
    virtual long ExistsByMainBundle(::Windows::Internal::StateRepository::IBundle *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByMainBundleAndName@OptionalBundleFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIBundle@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsByMainBundleAndName(::Windows::Internal::StateRepository::IBundle *, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByMainBundleAndNameAndPublisher@OptionalBundleFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIBundle@234@PEAUHSTRING__@@1PEAE@Z
    virtual long ExistsByMainBundleAndNameAndPublisher(::Windows::Internal::StateRepository::IBundle *, HSTRING__*, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByName@OptionalBundleFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long ExistsByName(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByNameAndPublisher@OptionalBundleFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@0PEAE@Z
    virtual long ExistsByNameAndPublisher(HSTRING__*, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@OptionalBundleFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVOptionalBundle@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByMainBundle@OptionalBundleFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIBundle@234@PEAPEAU?$IVectorView@PEAVOptionalBundle@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByMainBundle(::Windows::Internal::StateRepository::IBundle *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByMainBundleAndName@OptionalBundleFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIBundle@234@PEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVOptionalBundle@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByMainBundleAndName(::Windows::Internal::StateRepository::IBundle *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByName@OptionalBundleFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVOptionalBundle@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByName(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByNameAndPublisher@OptionalBundleFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@0PEAPEAU?$IVectorView@PEAVOptionalBundle@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByNameAndPublisher(HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@OptionalBundleFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIOptionalBundle@234@@Z
    virtual long Get(int64_t, ::Windows::Internal::StateRepository::IOptionalBundle * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByMainBundleAndNameAndPublisher@OptionalBundleFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIBundle@234@PEAUHSTRING__@@1PEAPEAUIOptionalBundle@234@@Z
    virtual long GetByMainBundleAndNameAndPublisher(::Windows::Internal::StateRepository::IBundle *, HSTRING__*, HSTRING__*, ::Windows::Internal::StateRepository::IOptionalBundle * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OptionalBundleFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    OptionalBundleFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@OptionalBundleFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIOptionalBundle@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IOptionalBundle * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByMainBundleAndNameAndPublisher@OptionalBundleFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIBundle@234@PEAUHSTRING__@@1PEAPEAUIOptionalBundle@234@@Z
    virtual long TryGetByMainBundleAndNameAndPublisher(::Windows::Internal::StateRepository::IBundle *, HSTRING__*, HSTRING__*, ::Windows::Internal::StateRepository::IOptionalBundle * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@OptionalBundleFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIOptionalBundle@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IOptionalBundle * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OptionalBundleFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~OptionalBundleFactoryServer();
};
} // namespace Windows::Internal::StateRepository
