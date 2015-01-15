//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (MNExtras)
+ (id)stringWithTimeInterval:(double)arg1;
+ (id)stringWithTimeIntervalAccurate:(double)arg1;
+ (id)stringWithAltitudeUnits;
+ (id)stringWithAltitude:(double)arg1 accuracy:(double)arg2;
+ (id)stringWithDirection:(double)arg1 abbreviated:(_Bool)arg2;
+ (id)stringWithSpeedUnits;
+ (id)stringWithSpeed:(double)arg1;
+ (id)stringWithRemainingTime:(double)arg1 distance:(double)arg2;
+ (id)stringWithRemainingTime:(double)arg1 distance:(double)arg2 showPastTimes:(_Bool)arg3 allowShortForm:(_Bool)arg4;
+ (id)stringWithRemainingTime:(double)arg1 allowShortForm:(_Bool)arg2;
+ (id)stringWithSeconds:(unsigned long long)arg1 withTraffic:(_Bool)arg2 abbreviated:(_Bool)arg3;
+ (id)stringWithRemainingTime:(double)arg1 allowShortForm:(_Bool)arg2 showPastTimes:(_Bool)arg3;
+ (id)_maps_shortStringWithRemainingTime:(double)arg1;
+ (id)stringWithDistance:(double)arg1 useMetric:(_Bool)arg2 useYardsForShortDistances:(_Bool)arg3 extraDetail:(_Bool)arg4;
+ (id)stringWithDistance:(double)arg1;
+ (id)voiceOverStringWithRemainingTime:(double)arg1 distance:(double)arg2 showPastTimes:(_Bool)arg3;
+ (id)voiceOverStringWithRemainingTime:(double)arg1 distance:(double)arg2;
+ (id)voiceOverStringWithRemainingTime:(double)arg1 showPastTimes:(_Bool)arg2;
+ (id)voiceOverStringWithRemainingTime:(double)arg1;
+ (id)speechWithDistance:(double)arg1 roundValues:(_Bool)arg2 useMetric:(_Bool)arg3 useYardsForShortDistances:(_Bool)arg4;
+ (id)_maps_voiceOverLocalizedDistanceStringWithMeters:(unsigned int)arg1 inMetric:(_Bool)arg2 displaysYardsForShortDistances:(_Bool)arg3 includeTrip:(_Bool)arg4;
+ (id)_maps_localizedDistanceStringWithMeters:(unsigned int)arg1 inMetric:(_Bool)arg2 displaysYardsForShortDistances:(_Bool)arg3 includeTrip:(_Bool)arg4 abbreviated:(_Bool)arg5;
+ (id)_maps_formattedStringForFloat:(double)arg1 useIncreasedPrecision:(_Bool)arg2;
+ (id)_maps_formattedStringForFloat:(double)arg1;
+ (id)_maps_formattedStringForInt:(long long)arg1;
- (struct _NSRange)_maps_rangeForTimePartOfFormattedShortTimeString;
- (id)stringByMarkingAsNormalText;
- (id)stringByMarkingAsNavigationText;
- (id)stringByMarkingAsAddress;
- (id)stringByMakingPhonetic;
- (long long)fileCreationDateDescendingSort:(id)arg1;
@end
