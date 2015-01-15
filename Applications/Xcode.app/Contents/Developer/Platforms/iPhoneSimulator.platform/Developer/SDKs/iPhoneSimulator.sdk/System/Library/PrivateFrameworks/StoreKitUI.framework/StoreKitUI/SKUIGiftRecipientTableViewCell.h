//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "ABPeoplePickerNavigationControllerDelegate.h"
#import "MFComposeRecipientViewDelegate.h"
#import "SKUIGiftContactSearchDelegate.h"

@class ABPeoplePickerNavigationController, NSArray, NSAttributedString, NSString, SKUIGiftComposeRecipientView, SKUIGiftContactSearchController, UILabel, UIView;

@interface SKUIGiftRecipientTableViewCell : UITableViewCell <ABPeoplePickerNavigationControllerDelegate, MFComposeRecipientViewDelegate, SKUIGiftContactSearchDelegate>
{
    void *_addressBook;
    ABPeoplePickerNavigationController *_peoplePickerController;
    UILabel *_placeholderLabel;
    SKUIGiftComposeRecipientView *_recipientView;
    SKUIGiftContactSearchController *_searchController;
    UIView *_topBorderView;
}

- (void).cxx_destruct;
- (void)_sendDismissPeoplePicker;
- (void)_sendDidUpdateSearchController;
- (void)_sendDidChangeRecipients;
- (void)_resetSearchController;
- (void *)_addressBook;
- (void)searchControllerDidFinishSearch:(id)arg1;
- (void)searchController:(id)arg1 didSelectRecipient:(id)arg2;
- (void)recipientViewDidResignFirstResponder:(id)arg1;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;
- (void)composeRecipientViewDidBecomeFirstResponder:(id)arg1;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;
- (id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void *)arg2 identifier:(int)arg3;
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 didChangeSize:(struct CGSize)arg2;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(copy, nonatomic) NSArray *recipientAddresses;
@property(copy, nonatomic) NSString *label;
@property(copy, nonatomic) NSAttributedString *attributedPlaceholder;
- (void)presentSearchResultsPopover:(id)arg1 animated:(_Bool)arg2;
- (void)presentPeoplePickerPopover:(id)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

