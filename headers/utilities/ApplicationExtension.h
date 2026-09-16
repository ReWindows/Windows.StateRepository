#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 31 member(s).
namespace StateRepository::Entity {
class ApplicationExtension {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ApplicationExtension@Entity@StateRepository@@QEAA@XZ
    ApplicationExtension();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIntegrity@ApplicationExtension@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long CheckIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@ApplicationExtension@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long Exists(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByApplication@ApplicationExtension@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsByApplication(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByApplicationAndCategory@ApplicationExtension@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEA_N@Z
    static long ExistsByApplicationAndCategory(WindissectOpaque &, int64_t, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByApplicationAndIndex@ApplicationExtension@Entity@StateRepository@@SAJAEAVDatabase@3@_JHAEA_N@Z
    static long ExistsByApplicationAndIndex(WindissectOpaque &, int64_t, int, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByCategory@ApplicationExtension@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEA_N@Z
    static long ExistsByCategory(WindissectOpaque &, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndCategory@ApplicationExtension@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEA_N@Z
    static long ExistsByUserAndCategory(WindissectOpaque &, int64_t, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByApplication@ApplicationExtension@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByApplication(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByCategory@ApplicationExtension@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEAVStatement@3@@Z
    static long FindByCategory(WindissectOpaque &, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndCategory@ApplicationExtension@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEAVStatement@3@@Z
    static long FindByUserAndCategory(WindissectOpaque &, int64_t, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndCategoryAndApplicationUserModelId@ApplicationExtension@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBG2AEAVStatement@3@@Z
    static long FindByUserAndCategoryAndApplicationUserModelId(WindissectOpaque &, int64_t, unsigned short const *, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndCategoryAndPackageFullName@ApplicationExtension@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBG2AEAVStatement@3@@Z
    static long FindByUserAndCategoryAndPackageFullName(WindissectOpaque &, int64_t, unsigned short const *, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserOrDefaultAccountAndCategory@ApplicationExtension@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEAVStatement@3@@Z
    static long FindByUserOrDefaultAccountAndCategory(WindissectOpaque &, int64_t, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserOrDefaultAccountAndPackageFullNameAndFileType@ApplicationExtension@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBG2AEAVStatement@3@@Z
    static long FindByUserOrDefaultAccountAndPackageFullNameAndFileType(WindissectOpaque &, int64_t, unsigned short const *, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserOrDefaultAccountAndPackageFullNameAndProtocolName@ApplicationExtension@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBG2AEAVStatement@3@@Z
    static long FindByUserOrDefaultAccountAndPackageFullNameAndProtocolName(WindissectOpaque &, int64_t, unsigned short const *, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixIntegrity@ApplicationExtension@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long FixIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppLifecycleBehavior@ApplicationExtension@Entity@StateRepository@@QEBA?AW4AppLifecycleBehavior@3@XZ
    int GetAppLifecycleBehavior() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompatMode@ApplicationExtension@Entity@StateRepository@@QEBA?AW4CompatMode@3@XZ
    int GetCompatMode() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeBehavior@ApplicationExtension@Entity@StateRepository@@QEBA?AW4RuntimeBehavior@3@XZ
    int GetRuntimeBehavior() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScope@ApplicationExtension@Entity@StateRepository@@QEBA?AW4Scope@3@XZ
    int GetScope() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ApplicationExtension@Entity@StateRepository@@QEBA?AW4SRTrustLevel@3@XZ
    int GetTrustLevel() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLocalizedDictionaryIsReady@ApplicationExtension@Entity@StateRepository@@QEAAJ_N@Z
    long SetLocalizedDictionaryIsReady(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLocalizedDictionaryNeedsResolution@ApplicationExtension@Entity@StateRepository@@QEAAJ_N@Z
    long SetLocalizedDictionaryNeedsResolution(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@ApplicationExtension@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGet(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByApplicationAndIndex@ApplicationExtension@Entity@StateRepository@@SAJAEAVDatabase@3@_JHAEAV123@AEA_N@Z
    static long TryGetByApplicationAndIndex(WindissectOpaque &, int64_t, int, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndApplicationUserModelIdAndFileType@ApplicationExtension@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBG2AEAV123@AEA_N@Z
    static long TryGetByUserAndApplicationUserModelIdAndFileType(WindissectOpaque &, int64_t, unsigned short const *, unsigned short const *, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndApplicationUserModelIdAndProtocolName@ApplicationExtension@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBG2AEAV123@AEA_N@Z
    static long TryGetByUserAndApplicationUserModelIdAndProtocolName(WindissectOpaque &, int64_t, unsigned short const *, unsigned short const *, WindissectOpaque &, bool &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ApplicationExtension@Entity@StateRepository@@QEAA@XZ
    ~ApplicationExtension();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@ApplicationExtension@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
