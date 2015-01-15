//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSDAbstractGuide.h>

@class CALayer, TSDUserDefinedGuide;

__attribute__((visibility("hidden")))
@interface TSDAlignmentGuide : TSDAbstractGuide
{
    int mType;
    double mStart;
    double mEnd;
    _Bool mDynamic;
    _Bool mInfinite;
    _Bool mSnapsToMin;
    _Bool mSnapsToMax;
    _Bool mSnapsToMid;
    CALayer *mLayer;
    TSDUserDefinedGuide *mModelGuide;
}

@property(retain, nonatomic) TSDUserDefinedGuide *modelGuide; // @synthesize modelGuide=mModelGuide;
@property(nonatomic) _Bool snapsToMax; // @synthesize snapsToMax=mSnapsToMax;
@property(nonatomic) _Bool snapsToMid; // @synthesize snapsToMid=mSnapsToMid;
@property(nonatomic) _Bool snapsToMin; // @synthesize snapsToMin=mSnapsToMin;
@property(nonatomic) _Bool infinite; // @synthesize infinite=mInfinite;
@property(nonatomic) _Bool dynamic; // @synthesize dynamic=mDynamic;
@property(nonatomic) int guideType; // @synthesize guideType=mType;
@property(nonatomic) double end; // @synthesize end=mEnd;
@property(nonatomic) double start; // @synthesize start=mStart;
- (id)layerWithICC:(id)arg1;
- (double)distanceToPoint:(struct CGPoint)arg1;
- (void)setOffset:(double)arg1;
- (_Bool)canBeSnappedToByEdge:(int)arg1 ofFrame:(struct CGRect)arg2;
- (void)dealloc;
- (id)initWithType:(int)arg1 offset:(double)arg2;
- (id)initWithRect:(struct CGRect)arg1 edge:(int)arg2;
- (id)init;

@end
