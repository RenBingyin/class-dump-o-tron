//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface OADDashStop : NSObject <NSCopying>
{
    float mDash;
    float mSpace;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (float)space;
- (float)dash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDash:(float)arg1 space:(float)arg2;

@end

