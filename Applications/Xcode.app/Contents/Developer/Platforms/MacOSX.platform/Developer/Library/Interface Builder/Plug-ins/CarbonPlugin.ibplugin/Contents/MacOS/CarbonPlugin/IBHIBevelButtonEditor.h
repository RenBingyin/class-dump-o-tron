//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBViewEditor.h"

@class IBMenuEditor;

@interface IBHIBevelButtonEditor : IBViewEditor
{
    IBMenuEditor *menuEditor;
}

- (void)didActivate;
- (void)didDeactivate;
- (void)menuItemSelectionChanged:(id)arg1;
- (void)willEditChild:(id)arg1 inWindowController:(id)arg2;
- (BOOL)interceptEvent:(id)arg1;

@end

