#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 27 member(s).
namespace StateRepository::Entity {
class FileTypeAssociation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIntegrity@FileTypeAssociation@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long CheckIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@FileTypeAssociation@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long Exists(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByContentType@FileTypeAssociation@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEA_N@Z
    static long ExistsByContentType(WindissectOpaque &, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByContentTypeAndExtension@FileTypeAssociation@Entity@StateRepository@@SAJAEAVDatabase@3@PEBG_JAEA_N@Z
    static long ExistsByContentTypeAndExtension(WindissectOpaque &, unsigned short const *, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByExtension@FileTypeAssociation@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsByExtension(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByExtensionAndIndex@FileTypeAssociation@Entity@StateRepository@@SAJAEAVDatabase@3@_JHAEA_N@Z
    static long ExistsByExtensionAndIndex(WindissectOpaque &, int64_t, int, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByFileType@FileTypeAssociation@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEA_N@Z
    static long ExistsByFileType(WindissectOpaque &, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByFileTypeAndExtension@FileTypeAssociation@Entity@StateRepository@@SAJAEAVDatabase@3@PEBG_JAEA_N@Z
    static long ExistsByFileTypeAndExtension(WindissectOpaque &, unsigned short const *, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByProgID@FileTypeAssociation@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEA_N@Z
    static long ExistsByProgID(WindissectOpaque &, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByProgIDAndExtension@FileTypeAssociation@Entity@StateRepository@@SAJAEAVDatabase@3@PEBG_JAEA_N@Z
    static long ExistsByProgIDAndExtension(WindissectOpaque &, unsigned short const *, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByContentType@FileTypeAssociation@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEAVStatement@3@@Z
    static long FindByContentType(WindissectOpaque &, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByContentTypeAndExtension@FileTypeAssociation@Entity@StateRepository@@SAJAEAVDatabase@3@PEBG_JAEAVStatement@3@@Z
    static long FindByContentTypeAndExtension(WindissectOpaque &, unsigned short const *, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByExtension@FileTypeAssociation@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByExtension(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByFileType@FileTypeAssociation@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEAVStatement@3@@Z
    static long FindByFileType(WindissectOpaque &, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByFileTypeAndExtension@FileTypeAssociation@Entity@StateRepository@@SAJAEAVDatabase@3@PEBG_JAEAVStatement@3@@Z
    static long FindByFileTypeAndExtension(WindissectOpaque &, unsigned short const *, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByProgID@FileTypeAssociation@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEAVStatement@3@@Z
    static long FindByProgID(WindissectOpaque &, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByProgIDAndExtension@FileTypeAssociation@Entity@StateRepository@@SAJAEAVDatabase@3@PEBG_JAEAVStatement@3@@Z
    static long FindByProgIDAndExtension(WindissectOpaque &, unsigned short const *, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUser@FileTypeAssociation@Entity@StateRepository@@SAJAEAVDatabase@3@PEAXAEAVStatement@3@@Z
    static long FindByUser(WindissectOpaque &, void *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndFileType@FileTypeAssociation@Entity@StateRepository@@SAJAEAVDatabase@3@PEAXPEBGAEAVStatement@3@@Z
    static long FindByUserAndFileType(WindissectOpaque &, void *, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindLauncherInfoByUserOrDefaultAccountAndFileType@FileTypeAssociation@Entity@StateRepository@@SAJAEAVDatabase@3@PEAXPEBGAEAVStatement@3@@Z
    static long FindLauncherInfoByUserOrDefaultAccountAndFileType(WindissectOpaque &, void *, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindLauncherInfoByUserOrDefaultAccountAndFileTypeAndPackageFamilyName@FileTypeAssociation@Entity@StateRepository@@SAJAEAVDatabase@3@PEAXPEBG2AEAVStatement@3@@Z
    static long FindLauncherInfoByUserOrDefaultAccountAndFileTypeAndPackageFamilyName(WindissectOpaque &, void *, unsigned short const *, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindLauncherInfoByUserOrDefaultAccountAndProgId@FileTypeAssociation@Entity@StateRepository@@SAJAEAVDatabase@3@PEAXPEBGAEAVStatement@3@@Z
    static long FindLauncherInfoByUserOrDefaultAccountAndProgId(WindissectOpaque &, void *, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixIntegrity@FileTypeAssociation@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long FixIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@FileTypeAssociation@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGet(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByExtensionAndIndex@FileTypeAssociation@Entity@StateRepository@@SAJAEAVDatabase@3@_JHAEAV123@AEA_N@Z
    static long TryGetByExtensionAndIndex(WindissectOpaque &, int64_t, int, WindissectOpaque &, bool &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FileTypeAssociation@Entity@StateRepository@@QEAA@XZ
    ~FileTypeAssociation();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@FileTypeAssociation@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
