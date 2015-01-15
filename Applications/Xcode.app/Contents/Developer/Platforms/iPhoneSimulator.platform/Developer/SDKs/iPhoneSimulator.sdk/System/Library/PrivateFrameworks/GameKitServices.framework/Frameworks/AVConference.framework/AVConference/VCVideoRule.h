//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface VCVideoRule : NSObject
{
    int iWidth;
    int iHeight;
    float fRate;
    float fPref;
    int iPayload;
}

@property int iPayload; // @synthesize iPayload;
@property float fPref; // @synthesize fPref;
@property float fRate; // @synthesize fRate;
@property int iHeight; // @synthesize iHeight;
@property int iWidth; // @synthesize iWidth;
- (void)setToVideoRule:(id)arg1;
- (id)description;
- (long long)compareByPref:(id)arg1;
- (long long)compare:(id)arg1;
- (id)initWithFrameWidth:(int)arg1 frameHeight:(int)arg2 frameRate:(float)arg3 pref:(float)arg4;
- (id)initWithFrameWidth:(int)arg1 frameHeight:(int)arg2 frameRate:(float)arg3 payload:(int)arg4;
- (id)initWithFrameWidth:(int)arg1 frameHeight:(int)arg2 frameRate:(float)arg3;

@end

