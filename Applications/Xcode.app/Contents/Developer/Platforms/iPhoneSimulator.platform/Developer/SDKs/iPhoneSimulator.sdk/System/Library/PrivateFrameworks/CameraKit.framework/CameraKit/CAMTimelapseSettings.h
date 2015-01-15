//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CAMTimelapseSettings : NSObject
{
    double _initialCaptureTimeInterval;
    double _maxOutputFPS;
    double _maxOutputLength;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) double maxOutputLength; // @synthesize maxOutputLength=_maxOutputLength;
@property(readonly, nonatomic) double maxOutputFPS; // @synthesize maxOutputFPS=_maxOutputFPS;
@property(readonly, nonatomic) double initialCaptureTimeInterval; // @synthesize initialCaptureTimeInterval=_initialCaptureTimeInterval;
@property(readonly, nonatomic) long long maxFailedStateReadAttempts;
- (double)waitTimeBeforeNextWriteForNumberOfPreviousAttempts:(long long)arg1;
@property(readonly, nonatomic) long long maxMovieWriteAttempts;
- (id)outputSettingsPresetForWidth:(long long)arg1 height:(long long)arg2;
- (long long)minAvailableBytesNeededForCaptureForWidth:(long long)arg1 height:(long long)arg2;
- (long long)maxMovieFileLengthForWidth:(long long)arg1 height:(long long)arg2;
- (long long)averageMovieBitrateForWidth:(long long)arg1 height:(long long)arg2;
- (double)outputFPSForFrameCount:(long long)arg1;
@property(readonly, nonatomic) long long maxOutputFrames;
- (id)init;

@end

