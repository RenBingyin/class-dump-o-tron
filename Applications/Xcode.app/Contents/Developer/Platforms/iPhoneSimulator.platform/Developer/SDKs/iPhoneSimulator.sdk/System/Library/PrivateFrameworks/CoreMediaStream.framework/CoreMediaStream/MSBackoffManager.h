//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDate;

@interface MSBackoffManager : NSObject <NSCoding>
{
    id <MSBackoffManagerDelegate> _delegate;
    double _initialInterval;
    double _backoffFactor;
    double _randomizeFactor;
    double _maxBackoffInterval;
    double _currentInterval;
    NSDate *_nextExpiryDate;
    NSDate *_retryAfterDate;
}

@property(retain, nonatomic) NSDate *retryAfterDate; // @synthesize retryAfterDate=_retryAfterDate;
@property(retain, nonatomic) NSDate *nextExpiryDate; // @synthesize nextExpiryDate=_nextExpiryDate;
@property(nonatomic) double currentInterval; // @synthesize currentInterval=_currentInterval;
@property(nonatomic) double maxBackoffInterval; // @synthesize maxBackoffInterval=_maxBackoffInterval;
@property(nonatomic) double randomizeFactor; // @synthesize randomizeFactor=_randomizeFactor;
@property(nonatomic) double backoffFactor; // @synthesize backoffFactor=_backoffFactor;
@property(nonatomic) double initialInterval; // @synthesize initialInterval=_initialInterval;
@property(nonatomic) id <MSBackoffManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)_complainAboutMissingKeyInArchive:(id)arg1;
- (id)copyParameters;
- (void)encodeWithCoder:(id)arg1;
- (void)backoff;
- (void)reset;
- (void)didReceiveRetryAfterDate:(id)arg1;
- (id)initWithInitialInterval:(double)arg1 backoffFactor:(double)arg2 randomizeFactor:(double)arg3 maxBackoffInterval:(double)arg4 retryAfterDate:(id)arg5;

@end

