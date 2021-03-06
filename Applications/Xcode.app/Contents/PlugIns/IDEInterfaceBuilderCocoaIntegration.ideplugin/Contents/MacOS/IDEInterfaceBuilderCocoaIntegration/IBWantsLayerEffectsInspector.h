//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBInspectorViewController.h"

@class DVTTableView, IBWantsLayerContainerView, NSArrayController, NSView;

@interface IBWantsLayerEffectsInspector : IBInspectorViewController
{
    NSArrayController *renderTreeViewsArrayController;
    IBWantsLayerContainerView *containerView;
    DVTTableView *tableView;
    NSView *lastInspectedView;
}

+ (id)keyPathsForValuesAffectingInspectedView;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)loadView;
- (void)setContent:(id)arg1;
- (id)inspectedView;

@end

