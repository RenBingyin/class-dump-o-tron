//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, NSURL;

@interface PLFilesystemDeletionInfo : NSObject
{
    NSString *_directory;
    NSString *_filename;
    NSURL *_objectIDURI;
    NSArray *_fileURLs;
    unsigned long long _thumbnailIndex;
    NSString *_thumbnailIdentifier;
    NSString *_uuid;
    unsigned long long _timestamp;
}

+ (id)deletionInfoWithAsset:(id)arg1;
@property(readonly) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, retain) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain) NSString *thumbnailIdentifier; // @synthesize thumbnailIdentifier=_thumbnailIdentifier;
@property(readonly) unsigned long long thumbnailIndex; // @synthesize thumbnailIndex=_thumbnailIndex;
@property(retain) NSArray *fileURLs; // @synthesize fileURLs=_fileURLs;
@property(readonly, retain) NSURL *objectIDURI; // @synthesize objectIDURI=_objectIDURI;
@property(readonly, retain) NSString *filename; // @synthesize filename=_filename;
@property(readonly, retain) NSString *directory; // @synthesize directory=_directory;
- (id)description;
- (void)dealloc;
- (id)initWithObjectIDURI:(id)arg1 directory:(id)arg2 filename:(id)arg3 fileURLs:(id)arg4 thumbnailIndex:(unsigned long long)arg5 thumbnailIdentifier:(id)arg6 uuid:(id)arg7 timestamp:(unsigned long long)arg8;

@end

