//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBInspector.h"

@class IBStackView, NSArray, NSMutableArray, NSMutableSet, NSScrollView;

@interface NewBindingsInspector : IBInspector
{
    NSScrollView *_scrollView;
    IBStackView *_mainView;
    NSArray *_controllers;
    NSArray *_controllerInfo;
    NSArray *_connections;
    NSMutableArray *_inspectorEditorPool;
    NSMutableSet *_expandedBindings;
    NSMutableArray *_currentEditors;
    struct CGRect _frameOfEditorOfInterest;
    id _previousSelection;
    unsigned long long _categoryIndex;
    struct {
        unsigned int _establishingBinding:1;
        unsigned int _refreshing:1;
        unsigned int _reserved:30;
    } _ibBindingsInspectorFlags;
}

+ (BOOL)supportsMultipleObjectInspection;
- (id)view;
- (id)viewNibName;
- (void)unbind:(id)arg1;
- (void)bind:(id)arg1 toController:(id)arg2 withKeyPath:(id)arg3 valueTransformerName:(id)arg4 options:(id)arg5;
- (id)expandedBindings;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)refresh;
- (void)assertBindingsIntegrity;
- (void)layoutCategory:(id)arg1 addingBindings:(id)arg2;
- (id)fullDescriptionForBindingInfo:(id)arg1;
- (void)_updateNibConnectors;
- (void)_updateNibConnectorsForObject:(id)arg1;
- (void)_updateControllerArray;
- (void)returnBindingsEditorToPool:(id)arg1;
- (id)bindingsEditorFromPool;
- (BOOL)controllerCanBeBoundTo:(id)arg1;
- (id)categoryViewWithCategoryString:(id)arg1;
- (void)dealloc;
- (id)init;

@end

