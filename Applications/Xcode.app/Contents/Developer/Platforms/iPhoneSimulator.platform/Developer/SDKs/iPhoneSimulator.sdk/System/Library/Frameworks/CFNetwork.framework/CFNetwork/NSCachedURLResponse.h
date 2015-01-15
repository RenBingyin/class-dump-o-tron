//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSCachedURLResponseInternal, NSData, NSDictionary, NSURLResponse;

@interface NSCachedURLResponse : NSObject <NSSecureCoding, NSCopying>
{
    NSCachedURLResponseInternal *_internal;
}

+ (void)initialize;
+ (_Bool)supportsSecureCoding;
- (void)_reestablishInternalCFCachedURLResponse:(struct _CFCachedURLResponse *)arg1;
- (void)_deallocInternalCFCachedURLResponse;
- (struct _CFCachedURLResponse *)_CFCachedURLResponse;
- (void)dealloc;
@property(readonly) unsigned long long storagePolicy;
@property(readonly, copy) NSDictionary *userInfo;
- (id)dataArray;
@property(readonly, copy) NSData *data;
@property(readonly, copy) NSURLResponse *response;
- (void)encodeWithCoder:(id)arg1;
- (void)_private_encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_private_initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithCFCachedURLResponse:(struct _CFCachedURLResponse *)arg1;
- (id)initWithResponse:(id)arg1 dataArray:(id)arg2 userInfo:(id)arg3 storagePolicy:(unsigned long long)arg4;
- (id)initWithResponse:(id)arg1 data:(id)arg2 userInfo:(id)arg3 storagePolicy:(unsigned long long)arg4;
- (id)initWithResponse:(id)arg1 data:(id)arg2;

@end

