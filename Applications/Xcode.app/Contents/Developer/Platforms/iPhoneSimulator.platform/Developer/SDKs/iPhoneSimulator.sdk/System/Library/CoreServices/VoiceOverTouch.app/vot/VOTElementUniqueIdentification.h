//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface VOTElementUniqueIdentification : NSObject <NSCopying>
{
    NSString *hashKey;
}

+ (id)identificationFromElement:(id)arg1;
+ (id)identificationFromKey:(id)arg1;
@property(copy, nonatomic) NSString *hashKey; // @synthesize hashKey;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

