//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsCore/PBXBookmark.h>

@class PBXTarget;

@interface PBXTargetBookmark : PBXBookmark
{
    PBXTarget *_target;
}

+ (id)archiveNameForKey:(id)arg1;
+ (id)archivableRelationships;
- (id)innerDescription;
- (id)target;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)defaultName;
- (void)dealloc;
- (id)initWithFileReference:(id)arg1;
- (id)initWithTarget:(id)arg1;

@end

