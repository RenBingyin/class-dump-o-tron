//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/_UIBarBackgroundImageView.h>

#import "_UIBarPositioningInternal.h"

@class NSMutableDictionary, NSString, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface UISearchBarBackground : _UIBarBackgroundImageView <_UIBarPositioningInternal>
{
    UIColor *_barTintColor;
    NSMutableDictionary *_customBackgroundImages;
    NSMutableDictionary *_generatedBackgroundImages;
    long long _barPosition;
    unsigned long long _searchBarStyle;
    unsigned int _barStyle:3;
    unsigned int _barTranslucence:3;
    unsigned int _usesEmbeddedAppearance:1;
    unsigned int _actingAsNavBar:1;
    unsigned int _usesContiguousBarBackground:1;
    unsigned int _barHasController;
}

@property(retain, nonatomic) UIColor *barTintColor; // @synthesize barTintColor=_barTintColor;
- (void)_setBehavesAsIfSearchBarHasController:(_Bool)arg1;
- (void)_updateBackgroundImageIfPossible;
@property(nonatomic) _Bool usesContiguousBarBackground;
- (_Bool)_hasCustomBackgroundImage;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (id)_backgroundImageForBarPosition:(long long)arg1 barMetrics:(long long)arg2;
- (void)_setBackgroundImage:(id)arg1 forBarPosition:(long long)arg2 barMetrics:(long long)arg3;
@property(readonly, nonatomic) UIImage *backgroundImage;
@property(readonly, nonatomic) UIImage *backgroundImagePrompt;
- (void)_updateBackgroundImage;
- (id)_createBackgroundImageForBarStyle:(long long)arg1 alpha:(double)arg2;
@property(nonatomic) unsigned long long searchBarStyle;
@property(nonatomic) long long barStyle;
@property(nonatomic) _Bool usesEmbeddedAppearance;
@property(nonatomic, getter=isTranslucent) _Bool translucent;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (long long)_barPosition;
- (void)_setBarPosition:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

