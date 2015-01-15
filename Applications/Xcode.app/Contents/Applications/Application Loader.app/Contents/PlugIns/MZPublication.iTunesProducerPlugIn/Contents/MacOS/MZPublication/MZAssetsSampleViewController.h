//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MZSingleEpubAssetViewController.h"

@class NSView;

@interface MZAssetsSampleViewController : MZSingleEpubAssetViewController
{
    NSView *_noFileBottomLabel;
    NSView *_hasFileTopLabel;
    NSView *_hasFileBottomAccessory;
    NSView *_generatedFileBottomLabel;
}

+ (id)pluginName;
+ (id)xibName;
@property NSView *generatedFileBottomLabel; // @synthesize generatedFileBottomLabel=_generatedFileBottomLabel;
@property NSView *hasFileBottomAccessory; // @synthesize hasFileBottomAccessory=_hasFileBottomAccessory;
@property NSView *hasFileTopLabel; // @synthesize hasFileTopLabel=_hasFileTopLabel;
@property NSView *noFileBottomLabel; // @synthesize noFileBottomLabel=_noFileBottomLabel;
- (id)imageForPackageAssetController:(id)arg1 assetElement:(id)arg2;
- (BOOL)isGeneratedSampleSituation;
- (void)publicationAssetChanged;
- (id)assetContainerElement;
- (void)packageAssetControllerWillUpdate:(id)arg1;
- (void)didLoadView;

@end

