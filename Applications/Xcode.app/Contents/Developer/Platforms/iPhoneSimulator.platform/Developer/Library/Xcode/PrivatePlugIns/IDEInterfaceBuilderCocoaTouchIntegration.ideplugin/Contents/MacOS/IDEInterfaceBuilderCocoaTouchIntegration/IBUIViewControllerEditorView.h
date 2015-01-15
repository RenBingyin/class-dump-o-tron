//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIEditorView.h>

@class IBUIViewController, IBUIViewControllerEditorPlaceholderView;

@interface IBUIViewControllerEditorView : IBUIEditorView
{
    IBUIViewControllerEditorPlaceholderView *placeholderView;
    id <IBUIViewControllerEditorViewDelegate> delegate;
    IBUIViewController *_editedViewController;
}

@property(retain, nonatomic) IBUIViewController *editedViewController; // @synthesize editedViewController=_editedViewController;
@property(nonatomic) __weak id <IBUIViewControllerEditorViewDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (unsigned long long)innerShadowEdgeMask;
- (struct CGSize)sizeForContentView;
- (id)extendedEdgeProvider;
- (id)contentView;
- (id)bottomBarForSimulatedBarMetrics:(id)arg1;
- (void)customizeBottomBarView:(id)arg1 forSimulatedBarMetrics:(id)arg2;
- (void)customizeTopBarView:(id)arg1 forSimulatedBarMetrics:(id)arg2;
@property(readonly) IBUIViewControllerEditorPlaceholderView *placeholderView; // @synthesize placeholderView;
- (id)itemsForSimulatedToolbar:(id)arg1;
- (id)itemsForSimulatedTabBar:(id)arg1;
- (id)itemsForSimulatedNavigationBar:(id)arg1;
- (void)editedViewControllerDidChangeInvalidatingProperty;
- (void)synchronizePlaceholderView;
- (void)synchronizeSimulatedMetricsContainer;
- (void)synchronizeEditorView;
- (void)setBackgroundColor:(id)arg1;

@end

