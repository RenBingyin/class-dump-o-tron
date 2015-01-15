//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GQWrapPointGenerator.h"

@class GQDAffineGeometry, GQDBezierPath, NSString;

__attribute__((visibility("hidden")))
@interface GQDDrawable : NSObject <GQWrapPointGenerator>
{
    GQDAffineGeometry *mGeometry;
    struct __CFURL *mUrl;
    char *mUid;
    GQDBezierPath *mWrapPath;
    GQDAffineGeometry *mWrapGeometry;
    set_80ec8016 *mInnerWrapPoints;
    _Bool mHasPagesOrder;
    long long mPagesOrder;
}

- (int)pagesOrder;
- (_Bool)hasPagesOrder;
- (struct CGPath *)createBezierPath;
- (void)clearWrapPoints;
- (vector_dadce35e *)createListOfWrapPointsAlongY:(float)arg1 minX:(float)arg2 maxX:(float)arg3 zIndex:(int)arg4;
- (const set_80ec8016 *)wrapPoints;
- (void)addWrapPoint:(id)arg1;
- (int)collectWrapPointsForState:(id)arg1 graphicStyle:(id)arg2;
- (const char *)uid;
- (struct __CFString *)urlString;
- (struct __CFURL *)url;
- (id)geometry;
- (void)dealloc;
- (void)collectWrapPoints:(id)arg1 forPath:(struct CGPath *)arg2 context:(struct FindLinesContext *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

