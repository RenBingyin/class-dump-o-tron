//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBIDELayoutGuideGeneratorDelegate.h>

#import "DVTInvalidation.h"

@class DVTStackBacktrace, IBViewEditorCanvasFrameController, NSString;

@interface IBEditorFrameLayoutGuideGeneratorDelegate : IBIDELayoutGuideGeneratorDelegate <DVTInvalidation>
{
    IBViewEditorCanvasFrameController *frameController;
}

+ (void)initialize;
- (void).cxx_destruct;
- (BOOL)layoutGuideGenerator:(id)arg1 shouldConsiderSelectionEdge:(unsigned int)arg2 toSiblingEdge:(unsigned int)arg3 guideFromSelection:(id)arg4 toView:(id)arg5;
- (BOOL)layoutGuideGenerator:(id)arg1 isEdge:(unsigned int)arg2 ofAncestor:(id)arg3 fixedDuringResizingOfSubviews:(id)arg4 fromKnob:(long long)arg5;
- (BOOL)layoutGuideGenerator:(id)arg1 isEdge:(unsigned int)arg2 ofSubview:(id)arg3 fixedInPositionOnWindowDuringResizeFromKnob:(long long)arg4;
- (BOOL)layoutGuideGenerator:(id)arg1 isDistanceFromSubviewEdge:(unsigned int)arg2 ofSubview:(id)arg3 toSameEdgeOfSuperviewChangingOneToOneWithKnob:(long long)arg4;
- (id)userLayoutGuides;
- (void)primitiveInvalidate;
- (id)initWithViewEditorFrameController:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

