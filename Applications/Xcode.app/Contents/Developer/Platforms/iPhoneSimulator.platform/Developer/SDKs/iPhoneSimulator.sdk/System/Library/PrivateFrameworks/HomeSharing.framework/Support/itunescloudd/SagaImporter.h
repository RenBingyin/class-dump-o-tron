//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HSMediaLibraryImportObserverDelegate.h"

@class HSCloudLibrary, HSMediaLibraryImportObserver, NSString;

@interface SagaImporter : NSObject <HSMediaLibraryImportObserverDelegate>
{
    float _progress;
    HSMediaLibraryImportObserver *_mediaLibraryImportObserver;
    _Bool _isCancelled;
    HSCloudLibrary *_library;
    _Bool _prefetchArtwork;
}

+ (void)cancelAllOperations;
@property(readonly, nonatomic) float progress; // @synthesize progress=_progress;
@property(nonatomic) _Bool prefetchArtwork; // @synthesize prefetchArtwork=_prefetchArtwork;
@property(readonly, nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
- (void).cxx_destruct;
- (void)_sendActivityPing;
- (_Bool)_importLyricsFromItemsResponseData:(id)arg1;
- (void)mediaLibraryImportObserver:(id)arg1 didReportError:(id)arg2;
- (void)mediaLibraryImportObserver:(id)arg1 didReportProgress:(float)arg2;
- (void)importTracksUpToRevision:(unsigned int)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)cancel;
- (void)dealloc;
- (id)initWithLibrary:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

