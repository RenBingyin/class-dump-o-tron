//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class XCLibraryDescriptor;

@interface XCLinkedLibrary : NSObject
{
    XCLibraryDescriptor *_library;
}

- (id)typeSortOrder;
- (BOOL)isLeaf;
- (int)libraryCount;
- (id)libraries;
- (id)sourceTree;
- (id)path;
- (id)displayName;
- (void)dealloc;
- (id)initWithLibrary:(id)arg1;

@end

