#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 26 member(s).
namespace StateRepository::Entity {
class PackageExtension {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIntegrity@PackageExtension@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long CheckIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@PackageExtension@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long Exists(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByCategory@PackageExtension@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEA_N@Z
    static long ExistsByCategory(WindissectOpaque &, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackage@PackageExtension@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsByPackage(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageAndCategory@PackageExtension@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEA_N@Z
    static long ExistsByPackageAndCategory(WindissectOpaque &, int64_t, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageAndIndex@PackageExtension@Entity@StateRepository@@SAJAEAVDatabase@3@_JHAEA_N@Z
    static long ExistsByPackageAndIndex(WindissectOpaque &, int64_t, int, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndCategory@PackageExtension@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEA_N@Z
    static long ExistsByUserAndCategory(WindissectOpaque &, int64_t, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByCategory@PackageExtension@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEAVStatement@3@@Z
    static long FindByCategory(WindissectOpaque &, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackage@PackageExtension@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByPackage(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageAndCategory@PackageExtension@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEAVStatement@3@@Z
    static long FindByPackageAndCategory(WindissectOpaque &, int64_t, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndCategory@PackageExtension@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEAVStatement@3@@Z
    static long FindByUserAndCategory(WindissectOpaque &, int64_t, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNext@PackageExtension@Entity@StateRepository@@SAJAEAVStatement@3@AEAV123@AEA_N@Z
    static long FindNext(WindissectOpaque &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixIntegrity@PackageExtension@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long FixIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppLifecycleBehavior@PackageExtension@Entity@StateRepository@@QEBA?AW4AppLifecycleBehavior@3@XZ
    int GetAppLifecycleBehavior() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompatMode@PackageExtension@Entity@StateRepository@@QEBA?AW4CompatMode@3@XZ
    int GetCompatMode() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeBehavior@PackageExtension@Entity@StateRepository@@QEBA?AW4RuntimeBehavior@3@XZ
    int GetRuntimeBehavior() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScope@PackageExtension@Entity@StateRepository@@QEBA?AW4Scope@3@XZ
    int GetScope() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PackageExtension@Entity@StateRepository@@QEBA?AW4SRTrustLevel@3@XZ
    int GetTrustLevel() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageExtension@Entity@StateRepository@@QEAA@XZ
    PackageExtension();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLocalizedDictionaryIsReady@PackageExtension@Entity@StateRepository@@QEAAJ_N@Z
    long SetLocalizedDictionaryIsReady(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLocalizedDictionaryNeedsResolution@PackageExtension@Entity@StateRepository@@QEAAJ_N@Z
    long SetLocalizedDictionaryNeedsResolution(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@PackageExtension@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGet(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByPackageAndIndex@PackageExtension@Entity@StateRepository@@SAJAEAVDatabase@3@_JHAEAV123@AEA_N@Z
    static long TryGetByPackageAndIndex(WindissectOpaque &, int64_t, int, WindissectOpaque &, bool &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageExtension@Entity@StateRepository@@QEAA@XZ
    ~PackageExtension();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@PackageExtension@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
