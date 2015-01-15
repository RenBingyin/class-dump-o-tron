//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIAlertView.h"

#import "UIAlertViewDelegate.h"

@class NSString;

@interface PUAlertView : UIAlertView <UIAlertViewDelegate>
{
    CDUnknownBlockType _shouldEnableFirstOtherButtonBlock;
    CDUnknownBlockType _willDismissHandler;
    CDUnknownBlockType _completionHandler;
}

+ (id)alertForStorageUpgradeLoadFailure;
+ (id)alertForCPLEnableError:(id)arg1;
+ (id)deleteITunesContentAlertWithAssetCount:(long long)arg1 includesPhotos:(_Bool)arg2 includesVideos:(_Bool)arg3;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) CDUnknownBlockType willDismissHandler; // @synthesize willDismissHandler=_willDismissHandler;
@property(copy, nonatomic) CDUnknownBlockType shouldEnableFirstOtherButtonBlock; // @synthesize shouldEnableFirstOtherButtonBlock=_shouldEnableFirstOtherButtonBlock;
- (void).cxx_destruct;
- (_Bool)alertViewShouldEnableFirstOtherButton:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)showWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setDelegate:(id)arg1;
- (void)_tearDown;
- (id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitles:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

