//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LSApplicationProxy, NSString, NSURL;

@interface FBBundleInfo : NSObject
{
    LSApplicationProxy *_proxy;
    NSString *_displayName;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    NSString *_bundleType;
    NSURL *_bundleURL;
}

@property(retain, nonatomic) NSURL *bundleURL; // @synthesize bundleURL=_bundleURL;
@property(copy, nonatomic) NSString *bundleType; // @synthesize bundleType=_bundleType;
@property(copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, retain, nonatomic, getter=_proxy) LSApplicationProxy *proxy; // @synthesize proxy=_proxy;
- (void)dealloc;
- (id)initWithApplicationProxy:(id)arg1;

@end

