//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Preferences/PSSearchResultsCell.h>

@class PSSpecifier, UISwitch;

@interface PSSearchResultsSwitchCell : PSSearchResultsCell
{
    UISwitch *_switch;
    SEL _getter;
    SEL _setter;
    id _target;
    PSSpecifier *_specifier;
}

@property(retain, nonatomic) PSSpecifier *specifier; // @synthesize specifier=_specifier;
@property(nonatomic) id target; // @synthesize target=_target;
@property(nonatomic) SEL setter; // @synthesize setter=_setter;
@property(nonatomic) SEL getter; // @synthesize getter=_getter;
- (void)reloadValue:(_Bool)arg1;
- (void)_switchValueChanged:(id)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

