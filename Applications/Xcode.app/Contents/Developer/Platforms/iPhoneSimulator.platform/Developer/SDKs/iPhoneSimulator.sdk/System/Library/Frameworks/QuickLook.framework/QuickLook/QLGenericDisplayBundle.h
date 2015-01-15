//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <QuickLook/QLDisplayBundle.h>

#import "QLGenericViewDelegate.h"

@class NSError, NSString, QLGenericView;

@interface QLGenericDisplayBundle : QLDisplayBundle <QLGenericViewDelegate>
{
    QLGenericView *_airplayView;
    NSError *_error;
}

@property(retain) NSError *error; // @synthesize error=_error;
- (void)genericViewDidClickOnArchiveButton:(id)arg1;
- (void)discardAirPlayView;
- (void)setupAirPlayView;
- (id)airplayView;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)loadWithHints:(id)arg1;
- (void)_loadPreviewItemInfos;
- (id)subtitleWithDescription:(id)arg1 fileSize:(unsigned long long)arg2;
- (void)loadView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

