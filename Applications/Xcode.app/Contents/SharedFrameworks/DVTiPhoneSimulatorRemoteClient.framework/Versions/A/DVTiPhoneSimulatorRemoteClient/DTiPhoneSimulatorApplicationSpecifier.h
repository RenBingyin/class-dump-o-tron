//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface DTiPhoneSimulatorApplicationSpecifier : NSObject <NSCopying>
{
}

+ (id)specifierWithToolPath:(id)arg1;
+ (id)specifierWithApplicationBundleIdentifier:(id)arg1;
+ (id)specifierWithApplicationPath:(id)arg1;
- (BOOL)isTool;
- (id)description;
@property(readonly, copy) NSString *toolPath;
@property(readonly, copy) NSString *bundleID;
@property(readonly, copy) NSString *appPath;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

