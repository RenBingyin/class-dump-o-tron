//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<IBAutolayoutItem>, NSValue;

@interface IBLayoutViewMovementCacheKey : NSObject
{
    NSObject<IBAutolayoutItem> *_coordinateSpaceView;
    NSObject<IBAutolayoutItem> *_sizingView;
    NSValue *_sizeValue;
}

@property(readonly, copy) NSValue *sizeValue; // @synthesize sizeValue=_sizeValue;
@property(readonly) NSObject<IBAutolayoutItem> *sizingView; // @synthesize sizingView=_sizingView;
@property(readonly) NSObject<IBAutolayoutItem> *coordinateSpaceView; // @synthesize coordinateSpaceView=_coordinateSpaceView;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSize:(struct CGSize)arg1 sizingView:(id)arg2 coordinateSpaceView:(id)arg3;

@end

