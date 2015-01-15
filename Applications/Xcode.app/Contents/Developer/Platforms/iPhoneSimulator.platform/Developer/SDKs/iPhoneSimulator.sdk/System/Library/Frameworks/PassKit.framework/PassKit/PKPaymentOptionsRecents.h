//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CRRecentContactsLibrary;

@interface PKPaymentOptionsRecents : NSObject
{
    void *_abRef;
    CRRecentContactsLibrary *_coreRecentsLibrary;
}

+ (id)_coreRecentsKindForPropertyID:(int)arg1;
+ (id)defaultInstance;
- (void)_coreRecentsContactsForPropertyID:(int)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void *)_copyOfUnifiedMeCard;
- (void)meCardEntriesForPropertyID:(int)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)meCardEntriesForPropertyID:(int)arg1;
- (void)deleteRecentsForPropertyID:(int)arg1;
- (void)recentsForPropertyID:(int)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)recentsForPropertyID:(int)arg1;
- (void)saveItemToCoreRecents:(id)arg1 contact:(id)arg2 propertyID:(int)arg3;
- (void)dealloc;
- (id)init;

@end

