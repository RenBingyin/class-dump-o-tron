//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSArray, UILabel;

@interface CertUIKeyValueCell : UITableViewCell
{
    UILabel *_keyLabel;
    UILabel *_valueLabel;
    NSArray *_constraints;
}

@property(retain, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) UILabel *keyLabel; // @synthesize keyLabel=_keyLabel;
- (void).cxx_destruct;
- (void)_setupConstraints;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)_setup;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

