//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSError, NSIndexSet, PLCameraImportItem, PLCameraImporter;

@protocol PLCameraImporterDelegate <NSObject>
- (void)importer:(PLCameraImporter *)arg1 didCompleteRemovalOfItems:(NSArray *)arg2;
- (void)importer:(PLCameraImporter *)arg1 didCompleteImportForItems:(NSArray *)arg2;
- (void)importer:(PLCameraImporter *)arg1 didImportItem:(PLCameraImportItem *)arg2 error:(NSError *)arg3;
- (void)importer:(PLCameraImporter *)arg1 didCopyOriginalForItem:(PLCameraImportItem *)arg2 error:(NSError *)arg3;
- (void)importer:(PLCameraImporter *)arg1 didChangeImportItem:(PLCameraImportItem *)arg2 changeType:(int)arg3 error:(NSError *)arg4;
- (void)importerDidFinishReadingImportItems:(PLCameraImporter *)arg1 error:(NSError *)arg2;
- (void)importer:(PLCameraImporter *)arg1 didRemoveImportItems:(NSArray *)arg2 atIndexes:(NSIndexSet *)arg3;
- (void)importer:(PLCameraImporter *)arg1 didAddImportItem:(PLCameraImportItem *)arg2 atIndex:(unsigned long long)arg3;
@end

