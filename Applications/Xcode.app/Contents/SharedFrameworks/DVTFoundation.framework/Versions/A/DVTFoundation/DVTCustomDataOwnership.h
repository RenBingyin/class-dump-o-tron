//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DVTCustomDataOwnership : NSObject
{
    NSString *_ownerName;
    BOOL _isShared;
}

+ (id)ownershipWithName:(id)arg1;
+ (id)ownershipForSharing;
+ (id)ownershipForCurrentUser;
+ (void)initialize;
@property(readonly) BOOL isShared; // @synthesize isShared=_isShared;
@property(readonly) NSString *ownerName; // @synthesize ownerName=_ownerName;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end

