//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MZSingleEpubAssetViewController.h"

@class NSView;

@interface MZAssetsPrimaryViewController : MZSingleEpubAssetViewController
{
    NSView *_noFileBottomLabel;
    NSView *_hasFileTopLabel;
    NSView *_hasFileBottomAccessory;
}

+ (id)pluginName;
+ (id)xibName;
@property NSView *hasFileBottomAccessory; // @synthesize hasFileBottomAccessory=_hasFileBottomAccessory;
@property NSView *hasFileTopLabel; // @synthesize hasFileTopLabel=_hasFileTopLabel;
@property NSView *noFileBottomLabel; // @synthesize noFileBottomLabel=_noFileBottomLabel;
- (id)multitouchExpectedFieldTitle;
- (BOOL)allowsMetadataOnlyInitialImport;
- (id)assetContainerElement;
- (void)packageAssetControllerWillUpdate:(id)arg1;

@end

