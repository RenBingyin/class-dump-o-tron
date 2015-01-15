//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSPopoverDelegate.h"

@class NSButton, NSPopover, NSString;

@interface MZPopoverController : NSViewController <NSPopoverDelegate>
{
    NSString *text;
    NSButton *button;
    NSString *_errorText;
    NSPopover *_popover;
}

@property(retain) NSPopover *popover; // @synthesize popover=_popover;
@property(retain) NSString *errorText; // @synthesize errorText=_errorText;
@property NSButton *button; // @synthesize button;
@property(retain) NSString *text; // @synthesize text;
- (void)setupPopoverView;
- (id)init;

@end

