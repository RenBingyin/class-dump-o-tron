//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CKRecord.h"

@interface CKRecord (BRCSerializationAdditions)
- (void)serializeVersion:(id)arg1 resolvedConflictEtag:(id)arg2 diffs:(unsigned long long)arg3 deadInServerTruth:(_Bool)arg4;
- (void)serializeStatInfo:(id)arg1 itemID:(id)arg2 container:(id)arg3 diffs:(unsigned long long)arg4 deadInServerTruth:(_Bool)arg5;
- (void)serializeStructuralPluginHints:(id)arg1;
- (void)serializeFilename:(id)arg1 forCreation:(_Bool)arg2;
- (void)serializeSystemFields:(id)arg1;
- (_Bool)deserializeVersion:(id *)arg1 container:(id)arg2 error:(id *)arg3;
- (_Bool)deserializeStatInfo:(id *)arg1 itemID:(id)arg2 container:(id)arg3 error:(id *)arg4;
- (_Bool)deserializeAliasInfo:(id *)arg1 container:(id)arg2 error:(id *)arg3;
- (_Bool)_deserializeFilename:(id *)arg1 userInfo:(id)arg2 error:(id *)arg3;
- (_Bool)_deserializeValue:(id *)arg1 forKey:(id)arg2 expectClass:(Class)arg3 allowNil:(_Bool)arg4 errorDescription:(id *)arg5;
@end

