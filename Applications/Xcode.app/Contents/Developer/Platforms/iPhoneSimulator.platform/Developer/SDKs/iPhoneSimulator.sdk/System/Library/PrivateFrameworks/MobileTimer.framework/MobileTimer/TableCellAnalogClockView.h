//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MobileTimer/AnalogClockView.h>

@interface TableCellAnalogClockView : AnalogClockView
{
}

+ (id)makeOverSecondHandDotImage;
+ (id)overHourHandDotImageForDaytime:(_Bool)arg1;
+ (id)makeClockHand:(int)arg1 daytime:(_Bool)arg2;
+ (id)makeClockFaceForDaytime:(_Bool)arg1;
+ (_Bool)shouldCacheImageOnDiskForType:(int)arg1 dayTime:(_Bool)arg2;
+ (struct CGPoint)handRotationalCenterForHand:(int)arg1;
+ (_Bool)doesFaceHaveShadow;
+ (double)faceRadius;
+ (id)resourcePath;
+ (int)style;
- (double)coarseUpdateInterval;
- (double)updateInterval;

@end

