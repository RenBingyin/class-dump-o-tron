//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SAMPMediaEntity.h>

@class NSString, SACalendar, SAMPPlaybackInfo, SAMPReleaseInfo;

@interface SAMPMediaItem : SAMPMediaEntity
{
}

+ (id)mediaItemWithDictionary:(id)arg1 context:(id)arg2;
+ (id)mediaItem;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
@property(copy, nonatomic) NSString *sortArtist;
@property(copy, nonatomic) NSString *sortAlbum;
@property(retain, nonatomic) SAMPReleaseInfo *releaseInfo;
@property(retain, nonatomic) SAMPPlaybackInfo *playbackInfo;
@property(copy, nonatomic) NSString *genre;
@property(retain, nonatomic) SACalendar *datePurchased;
@property(retain, nonatomic) SACalendar *dateAdded;
@property(copy, nonatomic) NSString *artist;
@property(copy, nonatomic) NSString *album;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

