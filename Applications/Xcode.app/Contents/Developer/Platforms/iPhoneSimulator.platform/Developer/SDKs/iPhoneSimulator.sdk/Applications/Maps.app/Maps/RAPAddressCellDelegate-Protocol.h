//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, ReportAProblemAddressTableViewCell;

@protocol RAPAddressCellDelegate <NSObject>
- (void)reportAProblemCellShouldAdvanceToPreviousResponder:(ReportAProblemAddressTableViewCell *)arg1;
- (void)reportAProblemCellShouldAdvanceToNextResponder:(ReportAProblemAddressTableViewCell *)arg1;
- (void)reportAProblemCellCorrectnessStatusChanged:(ReportAProblemAddressTableViewCell *)arg1;
- (void)reportAProblemCellDidResignFirstResponder:(ReportAProblemAddressTableViewCell *)arg1;
- (void)reportAProblemCellDidBecomeFirstResponder:(ReportAProblemAddressTableViewCell *)arg1;
- (void)valueForAddressType:(int)arg1 changedTo:(NSString *)arg2;
@end

