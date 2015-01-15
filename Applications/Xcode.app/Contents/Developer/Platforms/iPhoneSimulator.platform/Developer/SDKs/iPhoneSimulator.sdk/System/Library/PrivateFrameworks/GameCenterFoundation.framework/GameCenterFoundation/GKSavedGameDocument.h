//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFilePresenter.h"

@class NSDate, NSOperationQueue, NSString, NSURL;

@interface GKSavedGameDocument : NSObject <NSFilePresenter>
{
    _Bool _hasConflict;
    _Bool _isConflictVersion;
    NSURL *_fileURL;
    NSString *_name;
    NSString *_deviceName;
    NSDate *_modificationDate;
}

+ (id)currentDeviceName;
@property(retain, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(retain, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(nonatomic) _Bool isConflictVersion; // @synthesize isConflictVersion=_isConflictVersion;
@property(nonatomic) _Bool hasConflict; // @synthesize hasConflict=_hasConflict;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, copy) NSString *description;
- (void)deleteConflictVersion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteAllVersionsIncludingCurrent:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)saveData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)metadata;
- (void)setMetadata:(id)arg1;
- (void)updateMetadata;
- (void)loadMetadataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadWrapperDataWithFilename:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateConflictStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)presentedItemDidResolveConflictVersion:(id)arg1;
- (void)presentedItemDidLoseVersion:(id)arg1;
- (void)presentedItemDidGainVersion:(id)arg1;
- (void)presentedItemDidChange;
@property(readonly, copy) NSURL *presentedItemURL;
@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue;
- (void)dealloc;
- (id)initWithFileURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSURL *primaryPresentedItemURL;
@property(readonly) Class superclass;

@end

