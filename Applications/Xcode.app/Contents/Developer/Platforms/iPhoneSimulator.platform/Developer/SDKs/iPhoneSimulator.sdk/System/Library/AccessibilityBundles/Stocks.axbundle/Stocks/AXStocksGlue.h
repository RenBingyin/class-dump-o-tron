//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AXStocksGlue : NSObject
{
}

+ (id)formattedStringForString:(id)arg1 fractionDigits:(unsigned int)arg2 percentStyle:(_Bool)arg3;
+ (id)sharedStocksController;
+ (void)accessibilityInitializeBundle;
- (double)timeQuoteLastUpdated;
- (id)selectedStock;

@end
