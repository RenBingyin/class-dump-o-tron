//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookUI/ABPropertySimpleEditingCell.h>

#import "ABPickerControllerDelegate.h"

@class CNInstantMessageAddress, NSString;

@interface ABPropertyInstantMessageEditingCell : ABPropertySimpleEditingCell <ABPickerControllerDelegate>
{
}

- (void)pickerDidCancel:(id)arg1;
- (void)picker:(id)arg1 didPickItem:(id)arg2;
- (void)labelButtonClicked:(id)arg1;
@property(readonly, nonatomic) CNInstantMessageAddress *profile;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

