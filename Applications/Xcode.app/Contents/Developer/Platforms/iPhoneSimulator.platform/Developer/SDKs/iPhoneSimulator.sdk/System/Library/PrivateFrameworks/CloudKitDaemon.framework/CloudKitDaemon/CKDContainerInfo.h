//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface CKDContainerInfo : NSObject <NSCopying, NSSecureCoding>
{
    NSURL *_publicCloudDBURL;
    NSURL *_publicShareServiceURL;
    NSURL *_publicDeviceServiceURL;
    NSString *_containerScopedUserID;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *containerScopedUserID; // @synthesize containerScopedUserID=_containerScopedUserID;
@property(copy, nonatomic) NSURL *publicDeviceServiceURL; // @synthesize publicDeviceServiceURL=_publicDeviceServiceURL;
@property(copy, nonatomic) NSURL *publicShareServiceURL; // @synthesize publicShareServiceURL=_publicShareServiceURL;
@property(copy, nonatomic) NSURL *publicCloudDBURL; // @synthesize publicCloudDBURL=_publicCloudDBURL;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)CKPropertiesDescription;

@end

