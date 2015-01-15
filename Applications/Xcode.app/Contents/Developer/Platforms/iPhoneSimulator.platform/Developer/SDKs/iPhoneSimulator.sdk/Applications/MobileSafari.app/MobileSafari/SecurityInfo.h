//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSURL;

@interface SecurityInfo : NSObject <NSSecureCoding>
{
    _Bool _hasWarnedUser;
    int _assessment;
    int _provider;
    NSURL *_assessedURL;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool hasWarnedUser; // @synthesize hasWarnedUser=_hasWarnedUser;
@property(nonatomic) int provider; // @synthesize provider=_provider;
@property(nonatomic) int assessment; // @synthesize assessment=_assessment;
@property(retain, nonatomic) NSURL *assessedURL; // @synthesize assessedURL=_assessedURL;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)securityTypeDescription;
- (id)providerDescription;
- (_Bool)isKnownToBeUnsafe;
- (id)description;
- (id)initWithURL:(id)arg1 assessment:(int)arg2 provider:(int)arg3 hasWarnedUser:(_Bool)arg4;

@end
