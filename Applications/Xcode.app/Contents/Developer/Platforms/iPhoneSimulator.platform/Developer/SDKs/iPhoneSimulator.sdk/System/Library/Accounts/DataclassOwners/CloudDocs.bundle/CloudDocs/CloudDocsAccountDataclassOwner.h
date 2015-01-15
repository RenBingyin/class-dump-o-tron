//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ACDDataclassOwnerProtocol.h"

@class NSString;

@interface CloudDocsAccountDataclassOwner : NSObject <ACDDataclassOwnerProtocol>
{
}

+ (id)dataclasses;
- (_Bool)performAction:(id)arg1 forAccount:(id)arg2 withChildren:(id)arg3 forDataclass:(id)arg4;
- (id)actionsForDisablingDataclassOnAccount:(id)arg1 forDataclass:(id)arg2;
- (id)actionsForEnablingDataclassOnAccount:(id)arg1 forDataclass:(id)arg2;
- (id)actionsForDeletingAccount:(id)arg1 forDataclass:(id)arg2;
- (id)actionsForAddingAccount:(id)arg1 forDataclass:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

