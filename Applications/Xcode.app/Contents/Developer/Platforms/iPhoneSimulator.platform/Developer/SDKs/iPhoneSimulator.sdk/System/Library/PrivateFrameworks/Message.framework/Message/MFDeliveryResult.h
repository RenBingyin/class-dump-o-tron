//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MFDeliveryResult : NSObject
{
    int _status;
    double _duration;
    unsigned long long _bytesSent;
    _Bool _isWifi;
}

@property(nonatomic) _Bool isWifi; // @synthesize isWifi=_isWifi;
@property(nonatomic) unsigned long long bytesSent; // @synthesize bytesSent=_bytesSent;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) int status; // @synthesize status=_status;
- (id)description;
- (id)initWithStatus:(int)arg1;

@end

