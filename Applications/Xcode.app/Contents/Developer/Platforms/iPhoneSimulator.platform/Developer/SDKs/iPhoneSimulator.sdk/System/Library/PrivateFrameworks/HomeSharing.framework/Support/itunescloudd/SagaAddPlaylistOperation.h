//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CloudLibraryOperation.h"

@class NSArray, NSString;

@interface SagaAddPlaylistOperation : CloudLibraryOperation
{
    NSArray *_itemIDs;
    NSString *_playlistName;
    unsigned long long _playlistSagaID;
    NSArray *_seedItemIDs;
}

@property(readonly, nonatomic) unsigned long long playlistSagaID; // @synthesize playlistSagaID=_playlistSagaID;
- (void).cxx_destruct;
- (void)main;
- (id)newPropertyListRepresentation;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (id)initWithGeniusPlaylistName:(id)arg1 seedItemIDs:(id)arg2 itemIDs:(id)arg3;
- (id)initWithPlaylistName:(id)arg1;

@end

