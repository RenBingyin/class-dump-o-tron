//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MRDRunAssertion, NSData, NSDictionary;

@interface MRDNowPlayingInfoClient : NSObject
{
    MRDRunAssertion *_runAssertion;
    NSData *_nowPlayingArtworkData;
    NSDictionary *_nowPlayingInfo;
}

@property(copy, nonatomic) NSDictionary *nowPlayingInfo; // @synthesize nowPlayingInfo=_nowPlayingInfo;
@property(copy, nonatomic) NSData *nowPlayingArtworkData; // @synthesize nowPlayingArtworkData=_nowPlayingArtworkData;
- (void)dealloc;
- (id)init;

@end

