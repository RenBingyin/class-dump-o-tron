//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableArray, PDSlideMaster;

__attribute__((visibility("hidden")))
@interface PBMasterInfo : NSObject
{
    PDSlideMaster *mSlideMaster;
    NSMutableArray *mTgtSlideLayoutArray;
    unsigned int mMainPbRef;
    unsigned int mTitlePbRef;
    NSDictionary *mLayoutMap;
    ChVector_b45fc7a7 *mSrcTextStyling;
}

- (ChVector_b45fc7a7 *)sourceTextStyling;
- (id)slideLayoutForSlideHolder:(id)arg1;
- (void)cacheSlideLayouts;
- (id)allTargetLayoutTypes;
- (void)cacheTargetLayoutType:(int)arg1;
- (unsigned int)titlePbRef;
- (void)setTitlePbRef:(unsigned int)arg1;
- (unsigned int)mainPbRef;
- (void)setMainPbRef:(unsigned int)arg1;
- (id)slideMaster;
- (void)setSlideMaster:(id)arg1;
- (void)dealloc;
- (id)init;

@end

