//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, UIColor;

__attribute__((visibility("hidden")))
@interface EKEventDetailAttendeesListView : UIView
{
    _Bool _highlighted;
    _Bool _groupsNames;
    NSArray *_acceptedNames;
    NSArray *_maybeNames;
    NSArray *_declinedNames;
    NSArray *_noReplyNames;
    NSArray *_ungroupedNames;
    UIColor *_textColor;
    UIColor *_highlightedTextColor;
}

@property(nonatomic) _Bool groupsNames; // @synthesize groupsNames=_groupsNames;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) UIColor *highlightedTextColor; // @synthesize highlightedTextColor=_highlightedTextColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSArray *ungroupedNames; // @synthesize ungroupedNames=_ungroupedNames;
@property(retain, nonatomic) NSArray *noReplyNames; // @synthesize noReplyNames=_noReplyNames;
@property(retain, nonatomic) NSArray *declinedNames; // @synthesize declinedNames=_declinedNames;
@property(retain, nonatomic) NSArray *maybeNames; // @synthesize maybeNames=_maybeNames;
@property(retain, nonatomic) NSArray *acceptedNames; // @synthesize acceptedNames=_acceptedNames;
- (void).cxx_destruct;
- (void)_drawColumnOfStrings:(id)arg1 inRange:(struct _NSRange)arg2 startingAtPoint:(struct CGPoint)arg3 givenWidth:(double)arg4;
- (void)drawInvitees:(id)arg1 withStatus:(id)arg2 startingAtPoint:(struct CGPoint)arg3 givenWidth:(double)arg4;
- (void)drawRect:(struct CGRect)arg1;
- (double)_offsetFromOffsetToBaseline:(double)arg1 withFont:(id)arg2;
- (double)_heightForGroupOfAttendeeNames:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

