//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CloudLibraryConcurrentOperation.h"

@class ML3MusicLibrary, NSError, NSMutableArray, NSString, NSURL, NSURLSession;

@interface CloudArtworkImportOperation : CloudLibraryConcurrentOperation
{
    NSError *_operationError;
    NSMutableArray *_completionHandlers;
    unsigned int _mediaType;
    NSURLSession *_URLSession;
    ML3MusicLibrary *_musicLibrary;
    unsigned long long _cloudID;
    NSString *_artworkToken;
    long long _artworkType;
    long long _sourceType;
    NSURL *_assetURL;
}

@property(copy, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
@property(nonatomic) unsigned int mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(readonly, nonatomic) long long artworkType; // @synthesize artworkType=_artworkType;
@property(readonly, nonatomic) NSString *artworkToken; // @synthesize artworkToken=_artworkToken;
@property(readonly, nonatomic) unsigned long long cloudID; // @synthesize cloudID=_cloudID;
@property(readonly, nonatomic) ML3MusicLibrary *musicLibrary; // @synthesize musicLibrary=_musicLibrary;
@property(readonly, nonatomic) NSURLSession *URLSession; // @synthesize URLSession=_URLSession;
- (void).cxx_destruct;
- (void)start;
- (id)description;
- (void)callCompletionHandlers;
- (void)addCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithURLSession:(id)arg1 musicLibrary:(id)arg2 cloudID:(unsigned long long)arg3 artworkToken:(id)arg4 artworkType:(long long)arg5 sourceType:(long long)arg6;

@end

