//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MZXMLPersistentRepository.h"

@class NSMutableArray;

@interface MZXMLFileSystemDataRepository : NSObject <MZXMLPersistentRepository>
{
    NSMutableArray *_searchPaths;
    NSMutableArray *_searchBundles;
}

+ (CDUnknownFunctionPointerType)setRepositoryCreateFunction:(CDUnknownFunctionPointerType)arg1;
- (id)description;
- (id)writeFileToVersionedUserOverrideArea:(id)arg1 name:(id)arg2 error:(id *)arg3;
- (id)writeFileToUserOverrideArea:(id)arg1 name:(id)arg2 error:(id *)arg3;
- (id)writeFile:(id)arg1 toPath:(id)arg2 name:(id)arg3 error:(id *)arg4;
- (id)createUserOverrideArea:(id)arg1;
- (id)writeDocumentToUserOverrideArea:(id)arg1 name:(id)arg2 error:(id *)arg3;
- (id)userOverrideArea;
- (id)pathForResourceNamed:(id)arg1;
- (id)pathForResourceInBundlesNamed:(id)arg1;
- (id)dataForName:(id)arg1 error:(id *)arg2;
- (id)documentNamed:(id)arg1 error:(id *)arg2;
- (BOOL)containsData:(id)arg1;
- (BOOL)containsDocument:(id)arg1;
- (void)setSearchBundles:(id)arg1;
- (id)searchBundles;
- (void)setSearchPaths:(id)arg1;
- (id)searchPaths;
- (void)dealloc;
- (id)init;
- (void)initializeSearchPaths;
- (void)addPathToSearchPaths:(id)arg1 processName:(id)arg2;
- (id)applicationVersion;
- (id)applicationBundle;

@end

