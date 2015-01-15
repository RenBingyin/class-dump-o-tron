//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSXMLDocument;

@interface ITunesPackage : NSObject
{
    NSString *_path;
    NSXMLDocument *_metadataDocument;
}

+ (id)scrubString:(id)arg1 ofCharacters:(id)arg2 trimFromStart:(id)arg3;
+ (id)generateSafeVendorIdentifier:(id)arg1;
+ (id)fileSystemSafeAssetName:(id)arg1;
+ (BOOL)createDirectoryAtPath:(id)arg1 error:(id *)arg2;
- (BOOL)addInfoFromPackage:(id)arg1 error:(id *)arg2;
- (id)description;
- (id)renameToPath:(id)arg1 useUniqueName:(BOOL)arg2 overwrite:(BOOL)arg3;
- (id)duplicateToPath:(id)arg1;
- (id)saveToPath:(id)arg1;
- (id)save;
- (id)recylceAssetWithName:(id)arg1 error:(id *)arg2;
- (id)removeAssetWithName:(id)arg1;
- (id)existingAssetPathWithName:(id)arg1;
- (id)uniqueAssetPathWithName:(id)arg1;
- (id)assetPathWithName:(id)arg1;
- (id)linkAssetFromPath:(id)arg1 error:(id *)arg2;
- (id)linkAssetFromPath:(id)arg1 toName:(id)arg2 error:(id *)arg3;
- (id)moveAssetFromPath:(id)arg1 error:(id *)arg2;
- (id)moveAssetFromPath:(id)arg1 toName:(id)arg2 error:(id *)arg3;
- (id)addAssetFromPath:(id)arg1;
- (id)addAssetFromPath:(id)arg1 error:(id *)arg2;
- (BOOL)createPackageDirectory:(id *)arg1;
- (void)setMetadataDocument:(id)arg1;
- (id)metadataDocument;
- (id)metadataDocumentByLoadingIfNeeded:(id *)arg1;
- (id)loadMetadataDocument:(id *)arg1;
- (id)loadMetadata:(id *)arg1;
- (void)setPath:(id)arg1;
- (id)path;
- (void)dealloc;
- (id)init;
- (id)initWithPath:(id)arg1;
- (BOOL)setPackageElement:(id)arg1 error:(id *)arg2;
- (id)packageElementWithError:(id *)arg1;
- (id)initWithPackageElement:(id)arg1 error:(id *)arg2;
- (id)initWithPath:(id)arg1 packageElement:(id)arg2 error:(id *)arg3;

@end

