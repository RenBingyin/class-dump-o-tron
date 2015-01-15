//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSListController.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface SpeechController : PSListController
{
    _Bool _speechSettingsItemsHidden;
    NSArray *_speechSettingsItems;
}

@property(nonatomic, getter=areSpeechSettingsItemsHidden) _Bool speechSettingsItemsHidden; // @synthesize speechSettingsItemsHidden=_speechSettingsItemsHidden;
@property(retain, nonatomic) NSArray *speechSettingsItems; // @synthesize speechSettingsItems=_speechSettingsItems;
- (void)setSpeakCorrectionsEnabled:(id)arg1 specifier:(id)arg2;
- (id)speakCorrectionsEnabled:(id)arg1;
- (void)setSpeakThisEnabled:(id)arg1 specifier:(id)arg2;
- (id)speakThisEnabled:(id)arg1;
- (void)setQuickSpeakSpeakingRate:(id)arg1 specifier:(id)arg2;
- (id)quickSpeakSpeakingRate:(id)arg1;
- (void)setHighlightWord:(id)arg1 specifier:(id)arg2;
- (id)highlightWord:(id)arg1;
- (void)setQuickSpeakEnabled:(id)arg1 specifier:(id)arg2;
- (id)quickSpeakEnabled:(id)arg1;
- (void)updateLayout;
- (void)viewWillAppear:(_Bool)arg1;
- (void)willBecomeActive;
- (id)specifiers;
- (void)dealloc;
- (void)loadView;

@end

