#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 15 member(s).
namespace StateRepository {
class StatementExecution {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIntegrity@StatementExecution@StateRepository@@YAJAEAVDatabase@2@PEBD11W4ExecutionFlags@2@PEA_K@Z
    long CheckIntegrity(WindissectOpaque &, char const *, char const *, char const *, int, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearWorkByWorkId@StatementExecution@StateRepository@@YAJAEAVDatabase@2@PEBD_JW4ExecutionFlags@2@@Z
    long ClearWorkByWorkId(WindissectOpaque &, char const *, int64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByWorkId@StatementExecution@StateRepository@@YAJAEAVDatabase@2@PEBD_JW4ExecutionFlags@2@@Z
    long DeleteByWorkId(WindissectOpaque &, char const *, int64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixIntegrity@StatementExecution@StateRepository@@YAJAEAVDatabase@2@PEBD11W4ExecutionFlags@2@PEA_K@Z
    long FixIntegrity(WindissectOpaque &, char const *, char const *, char const *, int, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareAndBind@StatementExecution@StateRepository@@YAJAEAVDatabase@2@AEBUStatementDefinition@12@AEAVStatementBinderFunc@12@AEAVStatement@2@@Z
    long PrepareAndBind(WindissectOpaque &, WindissectOpaque const &, WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareAndBindAndCount@StatementExecution@StateRepository@@YAJAEAVDatabase@2@PEBD1AEA_K@Z
    long PrepareAndBindAndCount(WindissectOpaque &, char const *, char const *, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareAndBindAndDelete@StatementExecution@StateRepository@@YAJAEAVDatabase@2@PEBD1_J@Z
    long PrepareAndBindAndDelete(WindissectOpaque &, char const *, char const *, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareAndBindAndDeleteBy@StatementExecution@StateRepository@@YAJAEAVDatabase@2@AEBUStatementDefinition@12@AEAVStatementBinderFunc@12@@Z
    long PrepareAndBindAndDeleteBy(WindissectOpaque &, WindissectOpaque const &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareAndBindAndExists@StatementExecution@StateRepository@@YAJAEAVDatabase@2@PEBD1_JAEA_N@Z
    long PrepareAndBindAndExists(WindissectOpaque &, char const *, char const *, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareAndBindAndExistsBy@StatementExecution@StateRepository@@YAJAEAVDatabase@2@AEBUStatementDefinition@12@AEAVStatementBinderFunc@12@AEA_N@Z
    long PrepareAndBindAndExistsBy(WindissectOpaque &, WindissectOpaque const &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareAndBindAndFind@StatementExecution@StateRepository@@YAJAEAVDatabase@2@PEBD1AEAVStatement@2@@Z
    long PrepareAndBindAndFind(WindissectOpaque &, char const *, char const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareAndBindAndFindBy@StatementExecution@StateRepository@@YAJAEAVDatabase@2@AEBUStatementDefinition@12@AEAVStatementBinderFunc@12@AEAVStatement@2@@Z
    long PrepareAndBindAndFindBy(WindissectOpaque &, WindissectOpaque const &, WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareAndBindAndTryGet@StatementExecution@StateRepository@@YAJAEAVDatabase@2@PEBD1_JAEAVStatement@2@AEA_N@Z
    long PrepareAndBindAndTryGet(WindissectOpaque &, char const *, char const *, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareAndBindAndTryGetBy@StatementExecution@StateRepository@@YAJAEAVDatabase@2@AEBUStatementDefinition@12@AEAVStatementBinderFunc@12@AEAVStatement@2@AEA_N@Z
    long PrepareAndBindAndTryGetBy(WindissectOpaque &, WindissectOpaque const &, WindissectOpaque &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWorkId@StatementExecution@StateRepository@@YAJAEAVDatabase@2@PEBD_J2W4ExecutionFlags@2@@Z
    long UpdateWorkId(WindissectOpaque &, char const *, int64_t, int64_t, int);
};
} // namespace StateRepository
