//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "NSTextInputClient.h"

@class CDragSource, CDropTarget;

@interface AWTView : NSView <NSTextInputClient>
{
    struct _jobject *m_cPlatformView;
    long long rolloverTrackingRectTag;
    CDragSource *_dragSource;
    CDropTarget *_dropTarget;
    struct _jobject *fInputMethodLOCKABLE;
    BOOL fKeyEventsNeeded;
    BOOL fProcessingKeystroke;
    BOOL fEnablePressAndHold;
    BOOL fInPressAndHold;
    BOOL fPAHNeedsToSelect;
    id cglLayer;
    BOOL mouseIsOver;
}

- (id)initWithRect:(struct CGRect)arg1 platformView:(struct _jobject *)arg2 windowLayer:(id)arg3;
- (void)dealloc;
- (void)viewDidMoveToWindow;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)preservesContentDuringLiveResize;
- (void)mouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)rightMouseUp:(id)arg1;
- (void)otherMouseDown:(id)arg1;
- (void)otherMouseUp:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)rightMouseDragged:(id)arg1;
- (void)otherMouseDragged:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)flagsChanged:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)deliverJavaMouseEvent:(id)arg1;
- (void)clearTrackingRect;
- (void)resetTrackingRect;
- (void)updateTrackingAreas;
- (void)resetCursorRects;
- (void)deliverJavaKeyEventHelper:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (struct _jobject *)awtComponent:(const struct JNINativeInterface_ **)arg1;
- (id)getAxData:(const struct JNINativeInterface_ **)arg1;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityFocusedUIElement;
- (id)accessibleSelectedText;
- (id)accessibleSelectedTextAsRTFD;
- (BOOL)replaceAccessibleTextSelection:(id)arg1;
- (id)validRequestorForSendType:(id)arg1 returnType:(id)arg2;
- (BOOL)writeSelectionToPasteboard:(id)arg1 types:(id)arg2;
- (BOOL)readSelectionFromPasteboard:(id)arg1;
- (void)setDragSource:(id)arg1;
- (void)setDropTarget:(id)arg1;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (id)namesOfPromisedFilesDroppedAtDestination:(id)arg1;
- (void)draggedImage:(id)arg1 beganAt:(struct CGPoint)arg2;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)draggedImage:(id)arg1 movedTo:(struct CGPoint)arg2;
- (BOOL)ignoreModifierKeysWhileDragging;
- (unsigned long long)draggingEntered:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (void)draggingExited:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (void)draggingEnded:(id)arg1;
- (void)insertText:(id)arg1 replacementRange:(struct _NSRange)arg2;
- (void)doCommandBySelector:(SEL)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2 replacementRange:(struct _NSRange)arg3;
- (void)unmarkText;
- (BOOL)hasMarkedText;
- (long long)conversationIdentifier;
- (id)attributedSubstringForProposedRange:(struct _NSRange)arg1 actualRange:(struct _NSRange *)arg2;
- (struct _NSRange)markedRange;
- (struct _NSRange)selectedRange;
- (struct CGRect)firstRectForCharacterRange:(struct _NSRange)arg1 actualRange:(struct _NSRange *)arg2;
- (unsigned long long)characterIndexForPoint:(struct CGPoint)arg1;
- (id)validAttributesForMarkedText;
- (void)setInputMethod:(struct _jobject *)arg1;
- (void)abandonInput;
@property(nonatomic) BOOL mouseIsOver; // @synthesize mouseIsOver;
@property(retain, nonatomic) id cglLayer; // @synthesize cglLayer;
@property(retain) CDragSource *_dragSource; // @synthesize _dragSource;
@property(retain) CDropTarget *_dropTarget; // @synthesize _dropTarget;

@end

