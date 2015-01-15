//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ITunesPurpleBundleDescriberContext;

@interface ITunesPurpleBundleIconDescriber : NSObject
{
    ITunesPurpleBundleDescriberContext *_context;
}

+ (id)defaultImageNames;
+ (id)allowedIconExtensions;
+ (id)describerWithContext:(id)arg1;
+ (void)initialize;
- (BOOL)execute;
- (id)findAllImagesUsingImagesAsPrefixName:(id)arg1;
- (id)allIconsNamesRemovingAllowedIconExtensions:(id)arg1;
- (id)addDefaultImages:(id)arg1;
- (BOOL)describeIconsNamed:(id)arg1 errorIfAbsent:(BOOL)arg2;
- (id)describeIconNamed:(id)arg1 required:(BOOL)arg2 error:(id *)arg3;
- (id)findIconDirectlyUnderPathNamed:(id)arg1;
- (id)allReferencedIconNamesRegardlessOfOSVersionWithError:(id *)arg1;
- (id)findAllIconsWithPrefixNames:(id)arg1 inDirectory:(id)arg2;
- (id)context;
- (void)dealloc;
- (id)initWithContext:(id)arg1;

@end

