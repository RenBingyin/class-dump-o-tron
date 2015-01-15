//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL, TSAImportController;

@protocol TSAImportDelegate <NSObject>

@optional
- (_Bool)areNewExternalReferencesToDataAllowedForImportController:(TSAImportController *)arg1;
- (void)importController:(TSAImportController *)arg1 documentDidMoveToURL:(NSURL *)arg2;
- (void)importControllerDidRunOutOfSpace:(TSAImportController *)arg1;
- (void)importControllerDidCancelImport:(TSAImportController *)arg1;
- (void)willSaveImportedDocument:(TSAImportController *)arg1;
@end

