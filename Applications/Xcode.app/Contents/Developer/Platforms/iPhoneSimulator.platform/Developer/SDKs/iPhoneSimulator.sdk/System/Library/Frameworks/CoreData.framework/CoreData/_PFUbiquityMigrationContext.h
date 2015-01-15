//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PFUbiquityStoreSaveSnapshot, PFUbiquityTransactionLog;

__attribute__((visibility("hidden")))
@interface _PFUbiquityMigrationContext : NSObject
{
    PFUbiquityTransactionLog *_transactionLog;
    PFUbiquityStoreSaveSnapshot *_sourceStoreSaveSnapshot;
    PFUbiquityStoreSaveSnapshot *_destinationStoreSaveSnapshot;
}

@property(retain, nonatomic) PFUbiquityStoreSaveSnapshot *destinationStoreSaveSnapshot; // @synthesize destinationStoreSaveSnapshot=_destinationStoreSaveSnapshot;
@property(retain, nonatomic) PFUbiquityStoreSaveSnapshot *sourceStoreSaveSnapshot; // @synthesize sourceStoreSaveSnapshot=_sourceStoreSaveSnapshot;
@property(retain, nonatomic) PFUbiquityTransactionLog *transactionLog; // @synthesize transactionLog=_transactionLog;
- (void)dealloc;
- (id)sourceGlobalObjectIDFromCompressedID:(id)arg1;

@end

