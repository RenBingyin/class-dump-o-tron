//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UITableViewRowAction, UIVisualEffect;

@interface _UITableViewCellActionButton : UIButton
{
    UITableViewRowAction *_action;
    unsigned long long _style;
    UIVisualEffect *_backgroundEffect;
}

+ (id)actionButtonWithStyle:(unsigned long long)arg1;
@property(copy, nonatomic) UIVisualEffect *backgroundEffect; // @synthesize backgroundEffect=_backgroundEffect;
@property(nonatomic) unsigned long long style;
@property(retain, nonatomic) UITableViewRowAction *action;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

