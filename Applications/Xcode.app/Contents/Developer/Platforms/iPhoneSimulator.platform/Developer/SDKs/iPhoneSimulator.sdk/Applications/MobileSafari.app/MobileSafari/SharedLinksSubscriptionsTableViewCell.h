//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VibrantTableViewCell.h"

@class UIImageView;

@interface SharedLinksSubscriptionsTableViewCell : VibrantTableViewCell
{
    UIImageView *_serviceIconView;
    id <SharedLinksSubscriptionsTableViewCellDelegate> _delegate;
}

@property(nonatomic) id <SharedLinksSubscriptionsTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setServiceIcon:(id)arg1;
- (void)setUsesSwitchControl:(_Bool)arg1 isOn:(_Bool)arg2;
- (void)_subscriptionToggled:(id)arg1;

@end

