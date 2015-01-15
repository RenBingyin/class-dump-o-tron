//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsCore/Xcode3Group.h>

#import "IDEStructureEditing.h"

@class NSString, XCVersionGroup;

@interface Xcode3VersionGroup : Xcode3Group <IDEStructureEditing>
{
    XCVersionGroup *_versionGroup;
}

@property(readonly) XCVersionGroup *versionGroup; // @synthesize versionGroup=_versionGroup;
- (void).cxx_destruct;
- (id)computedSubitemsWithOldSubitems:(id)arg1;
- (BOOL)structureEditSetName:(id)arg1 inContext:(id)arg2;
- (BOOL)canStructureEditInsertFileURLs:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)canStructureEditInsertSubitems:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)structureEditInsertSubitems:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)allowUserModificationOfSubitems;
- (BOOL)allowRemovingContainerGroup;
- (void)_versionGroupCopyAndInsertSubitems:(id)arg1 atIndex:(unsigned long long)arg2;
- (Class)_fileReferenceClassForFileReference:(id)arg1;
- (id)versionWithName:(id)arg1;
- (BOOL)makeVersionWithName:(id)arg1;
- (void)setCurrentVersion:(id)arg1;
- (BOOL)saveCurrentVersion;
- (id)currentVersion;
- (id)primarySubitem;
- (id)_pbxFileReferenceForIDEFileReference:(id)arg1;
- (id)_ideFileReferenceForPBXFileReference:(id)arg1;
- (id)ideModelObjectTypeIdentifier;
- (void)setFileTypeItem:(id)arg1;
- (id)fileTypeItem;
- (void)setSourceTreeItem:(id)arg1;
- (id)sourceTreeItem;
- (void)_takeConfigurationFromGroup:(id)arg1;
@property(readonly) NSString *absolutePath;
- (id)initWithXCVersionGroup:(id)arg1;
- (id)initWithPBXGroup:(id)arg1;
- (id)init;

@end

