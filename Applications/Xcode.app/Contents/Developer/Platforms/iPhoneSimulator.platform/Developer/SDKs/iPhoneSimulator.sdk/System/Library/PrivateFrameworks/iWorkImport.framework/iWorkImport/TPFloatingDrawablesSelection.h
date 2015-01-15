//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSKSelection.h>

#import "NSFastEnumeration.h"

@class NSSet;

__attribute__((visibility("hidden")))
@interface TPFloatingDrawablesSelection : TSKSelection <NSFastEnumeration>
{
    NSSet *_selectedInfos;
}

+ (id)selectionWithInfos:(id)arg1;
@property(readonly, retain, nonatomic) NSSet *drawables; // @synthesize drawables=_selectedInfos;
- (_Bool)containsInfo:(id)arg1;
- (id)infos;
- (unsigned long long)count;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)selectionByRemovingInfo:(id)arg1;
- (id)selectionByAddingInfo:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithInfo:(id)arg1;
- (id)initWithInfos:(id)arg1;

@end

