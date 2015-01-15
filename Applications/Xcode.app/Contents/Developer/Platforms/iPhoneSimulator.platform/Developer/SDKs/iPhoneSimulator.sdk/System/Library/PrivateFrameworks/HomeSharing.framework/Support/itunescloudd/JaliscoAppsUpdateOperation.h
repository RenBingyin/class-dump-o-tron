//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JaliscoUpdateOperation.h"

@class JaliscoAppLibrary, NSNumber, SSAppPurchaseHistoryDatabase;

@interface JaliscoAppsUpdateOperation : JaliscoUpdateOperation
{
    JaliscoAppLibrary *_appCloudLibrary;
    SSAppPurchaseHistoryDatabase *_purchaseHistoryDatabase;
    NSNumber *_familyMemberStoreID;
}

@property(retain, nonatomic) NSNumber *familyMemberStoreID; // @synthesize familyMemberStoreID=_familyMemberStoreID;
@property(retain, nonatomic) SSAppPurchaseHistoryDatabase *purchaseHistoryDatabase; // @synthesize purchaseHistoryDatabase=_purchaseHistoryDatabase;
@property(retain, nonatomic) JaliscoAppLibrary *appCloudLibrary; // @synthesize appCloudLibrary=_appCloudLibrary;
- (void).cxx_destruct;
- (void)handleSuccess:(long long)arg1;
- (void)endPerformUpdate;
- (void)beginPerformUpdate;
- (_Bool)preflightImport;
- (id)newImporter;
- (_Bool)includeHiddenItems;
- (long long)localDatabaseRevision;
- (id)connection;
- (id)queryFilterPercentEscaped;
- (id)initWithReason:(long long)arg1;

@end
