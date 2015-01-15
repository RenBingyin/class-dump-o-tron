//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ISSingleton.h"
#import "SUDialogDelegate.h"

@class NSMutableArray, NSString;

@interface SUDialogManager : NSObject <ISSingleton, SUDialogDelegate>
{
    NSMutableArray *_dialogs;
}

+ (id)newDialogWithError:(id)arg1;
+ (id)sharedInstance;
+ (void)setSharedInstance:(id)arg1;
- (void)_performDefaultActionForDialog:(id)arg1 buttonIndex:(long long)arg2;
- (_Bool)_haveEquivalentDialog:(id)arg1;
- (void)_finishDialog:(id)arg1 withButtonIndex:(long long)arg2;
- (void)dialogDidCancel:(id)arg1;
- (void)dialog:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (_Bool)presentDialogForError:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (_Bool)presentDialogForError:(id)arg1;
- (_Bool)presentDialog:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (_Bool)presentDialog:(id)arg1;
@property(readonly, nonatomic) long long numberOfPendingDialogs;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

