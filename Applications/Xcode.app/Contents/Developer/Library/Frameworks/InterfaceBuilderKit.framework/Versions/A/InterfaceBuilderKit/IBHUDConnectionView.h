//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InterfaceBuilderKit/IBAutoLayoutView.h>

@class IBConnection, IBConnectionInterfaceStyle, IBDocument, IBHUDConnectionPredecessorsView, IBPredecessorDisplayValue, NSString;

@interface IBHUDConnectionView : IBAutoLayoutView
{
    IBConnectionInterfaceStyle *connectionInterfaceStyle;
    long long cancelationToken;
    IBHUDConnectionPredecessorsView *predecessorView;
    IBConnection *prototype;
    double titleWidth;
    BOOL mouseOverTitle;
    IBDocument *document;
    IBPredecessorDisplayValue *mouseOverPredecessorDisplayValue;
    IBPredecessorDisplayValue *pressedPredecessorDisplayValue;
    NSString *matchedString;
}

- (void)applyInterfaceState:(id)arg1;
- (id)captureInterfaceState;
- (id)captureInterfaceStateIdentifer;
- (double)actualTitleWidth;
- (double)titleWidth;
- (void)setTitleWidth:(double)arg1;
- (id)connectionInterfaceStyle;
- (void)predecessorsViewDidChangeConnections:(id)arg1;
- (void)predecessorsViewDidToggleExpansion:(id)arg1;
- (id)toolTipManager:(id)arg1 toolTipForView:(id)arg2 location:(struct CGPoint)arg3 tipSourceRect:(struct CGRect *)arg4;
- (BOOL)truncationWillBeNeededForTitle;
- (id)tooltipAttributes;
- (void)globalMouseMoved:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)setPressedPredecessorDisplayValue:(id)arg1;
- (id)pressedPredecessorDisplayValue;
- (void)cancelIdentifiers;
- (void)setMouseOverTitle:(BOOL)arg1;
- (void)setMouseOverPredecessorDisplayValue:(id)arg1;
- (id)endPointForPredecessor:(id)arg1;
- (id)document;
- (void)drawRect:(struct CGRect)arg1;
- (id)linkPath;
- (id)effectiveStrokeColorForTitleBubble;
- (id)effectiveFillColorForTitleBubble;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)layout;
- (struct CGSize)minSize;
- (struct CGRect)predecessorRect;
- (struct CGRect)predecessorRectForBoundsSize:(struct CGSize)arg1;
- (struct CGRect)textRect;
- (void)setMatchedStringInTitle:(id)arg1;
- (id)matchedStringInTitle;
- (struct CGRect)titleRect;
- (id)attributedTitle;
- (id)matchAttributes;
- (id)titleAttributes;
- (id)title;
- (id)reasonForDisallowingNewConnections;
- (void)setReasonForDisallowingNewConnections:(id)arg1;
- (void)setAllowsEstablishingNewConnections:(BOOL)arg1;
- (BOOL)allowsEstablishingNewConnections;
- (void)setWarningMessage:(id)arg1;
- (id)warningMessage;
- (id)predecessors;
- (id)prototype;
- (id)headerView;
- (BOOL)isHUDStyle;
- (void)documentWillClose:(id)arg1;
- (void)clearDocumentReference;
- (void)dealloc;
- (id)initWithPrototype:(id)arg1 andPredecessors:(id)arg2 forDocument:(id)arg3 connectionInterfaceStyle:(id)arg4;

@end

