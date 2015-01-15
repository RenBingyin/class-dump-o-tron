//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "SSXPCCoding.h"

@class NSArray, NSString;

@interface SSDownloadManifestResponse : NSObject <SSXPCCoding, NSCoding>
{
    NSArray *_validDownloads;
}

- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(copy) NSArray *validDownloads;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

