//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayerUI/MPUReportingTrackMetadata.h>

@class NSDictionary;

@interface MPUReportingRadioTrackMetadata : MPUReportingTrackMetadata
{
    long long _storeID;
    NSDictionary *_trackInfo;
    long long _trackType;
}

@property(nonatomic) long long trackType; // @synthesize trackType=_trackType;
@property(copy, nonatomic) NSDictionary *trackInfo; // @synthesize trackInfo=_trackInfo;
@property(nonatomic) long long storeID; // @synthesize storeID=_storeID;
- (void).cxx_destruct;

@end

