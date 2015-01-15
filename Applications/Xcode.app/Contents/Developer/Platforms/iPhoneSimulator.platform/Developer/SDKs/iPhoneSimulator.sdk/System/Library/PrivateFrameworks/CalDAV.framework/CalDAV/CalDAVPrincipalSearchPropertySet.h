//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet;

@interface CalDAVPrincipalSearchPropertySet : NSObject
{
    NSSet *_properties;
}

+ (id)searchSetWithProperties:(id)arg1;
@property(readonly, nonatomic) NSSet *stringProperties; // @synthesize stringProperties=_properties;
- (_Bool)isEqualToPropertySet:(id)arg1;
@property(readonly, nonatomic) _Bool supportsPropertySearch;
- (_Bool)supportsWellKnownType:(int)arg1;
- (_Bool)supportsPropertyTypeWithNameSpace:(id)arg1 andName:(id)arg2;
- (id)initWithStringProperties:(id)arg1;
- (id)initWithSearchProperties:(id)arg1;
- (void)dealloc;

@end

