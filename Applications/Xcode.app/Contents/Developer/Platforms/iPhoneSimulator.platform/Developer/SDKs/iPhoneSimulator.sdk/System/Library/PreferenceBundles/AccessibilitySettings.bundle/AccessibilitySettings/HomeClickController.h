//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSListController.h"

@class NSTimer;

__attribute__((visibility("hidden")))
@interface HomeClickController : PSListController
{
    long long _flashCount;
    NSTimer *_flashTimer;
    NSTimer *_vibrationTimer;
    long long _selectedRow;
}

@property(nonatomic) long long selectedRow; // @synthesize selectedRow=_selectedRow;
@property(retain, nonatomic) NSTimer *vibrationTimer; // @synthesize vibrationTimer=_vibrationTimer;
@property(retain, nonatomic) NSTimer *flashTimer; // @synthesize flashTimer=_flashTimer;
@property(nonatomic) long long flashCount; // @synthesize flashCount=_flashCount;
- (struct __CFDictionary *)_vibrationPattern;
- (float)_homeClickSpeedFromSpecifierKey:(id)arg1;
- (void)_vibrateSelectedRow;
- (void)_flashSelectedRow;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)specifiers;
- (void)dealloc;

@end

