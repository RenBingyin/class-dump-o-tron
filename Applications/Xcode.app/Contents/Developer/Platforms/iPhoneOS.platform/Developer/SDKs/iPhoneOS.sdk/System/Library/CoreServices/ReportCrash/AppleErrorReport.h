//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AppleErrorReport : NSObject
{
    NSString *_incidentID;
    NSString *_logType;
    NSString *_deviceID;
}

+ (id)kernelVersionDescription;
+ (id)systemIDWithDescription:(_Bool)arg1;
+ (id)systemVersionDescription;
+ (void)logSafely:(CDUnknownBlockType)arg1;
+ (unsigned char)executeWithTimeout:(unsigned int)arg1 Code:(CDUnknownBlockType)arg2;
+ (id)xattr_name;
- (unsigned int)uid;
- (id)description;
- (id)logType;
- (_Bool)isInternalOrCarrierInstall;
- (_Bool)isCarrierInstall;
- (_Bool)isInternalInstall;
- (id)incidentID;
- (_Bool)isAppleTV;
- (id)hardwareModel;
- (id)deviceID;
- (id)getSyslogForPid:(int)arg1 withPrefix:(id)arg2;
- (void)dealloc;
- (id)initWithType:(id)arg1;

@end

