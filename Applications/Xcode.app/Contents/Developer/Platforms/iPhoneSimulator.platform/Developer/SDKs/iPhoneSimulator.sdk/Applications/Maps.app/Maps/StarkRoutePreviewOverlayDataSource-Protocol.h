//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, UIView;

@protocol StarkRoutePreviewOverlayDataSource <NSObject>
- (NSString *)subtitleForPreviewSign:(UIView *)arg1;
- (NSString *)titleForPreviewSign:(UIView *)arg1;
- (unsigned long long)selectedRouteIndexForPreviewSign:(UIView *)arg1;
- (NSArray *)currentRoutesForPreviewSign:(UIView *)arg1;
- (unsigned long long)numberOfResultsForPreviewSign:(UIView *)arg1;
- (unsigned long long)selectedIndexForPreviewSign:(UIView *)arg1;
@end

