//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/PBXDebugDataValueViewModule.h>

@class PBXLSStackFrame;

@interface PBXDebugSingleDataValueViewModule : PBXDebugDataValueViewModule
{
    BOOL _firstTime;
    PBXLSStackFrame *_frameToWatch;
    BOOL _userDidResize;
    BOOL _doneWithInitialLoad;
    long long _numberOfToplevelVars;
}

- (void)debugViewModuleWindowWillClose:(id)arg1;
- (void)dsModelWillDealloc:(id)arg1;
- (void)_cleanup;
- (void)dsModelDidUpdate:(id)arg1;
- (void)setContainerDataValue:(id)arg1 dataValuesToClone:(id)arg2 viewContentsAsExpression:(id)arg3;
- (struct CGSize)windowWillResize:(id)arg1 toSize:(struct CGSize)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (void)viewBoundsDidChangeNotification:(id)arg1;
- (void)_setupContainerDataValue:(id)arg1;
- (void)setContainerDV:(id)arg1;
- (id)moduleNibName;
- (id)frameToWatch;
- (void)setFrameToWatch:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;

@end

