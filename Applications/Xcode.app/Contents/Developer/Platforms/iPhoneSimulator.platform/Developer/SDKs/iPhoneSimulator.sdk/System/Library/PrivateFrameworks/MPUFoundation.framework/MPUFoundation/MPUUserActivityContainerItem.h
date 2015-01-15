//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@class MPMediaEntity, _MPUProtoBufUserActivityContainerItem;

@interface MPUUserActivityContainerItem : NSObject <NSCopying, NSMutableCopying>
{
    MPMediaEntity *_selectedMediaEntity;
    MPMediaEntity *_visualReferenceMediaEntity;
    long long _containerItemType;
}

@property(readonly, nonatomic) MPMediaEntity *visualReferenceMediaEntity; // @synthesize visualReferenceMediaEntity=_visualReferenceMediaEntity;
@property(readonly, nonatomic) MPMediaEntity *selectedMediaEntity; // @synthesize selectedMediaEntity=_selectedMediaEntity;
@property(readonly, nonatomic) long long containerItemType; // @synthesize containerItemType=_containerItemType;
- (void).cxx_destruct;
@property(readonly, nonatomic) _MPUProtoBufUserActivityContainerItem *protoBufUserActivityContainerItem;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithProtoBufUserActivityContainerItem:(id)arg1;
- (id)initWithContainerItemType:(long long)arg1;
- (id)init;

@end

