//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKResource.h"

@interface GKMutableResource : GKResource
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

// Remaining properties
@property(nonatomic) double TTL;
@property(nonatomic, getter=isInvalid) _Bool invalid;
@property(retain, nonatomic) id representedItem;

@end

