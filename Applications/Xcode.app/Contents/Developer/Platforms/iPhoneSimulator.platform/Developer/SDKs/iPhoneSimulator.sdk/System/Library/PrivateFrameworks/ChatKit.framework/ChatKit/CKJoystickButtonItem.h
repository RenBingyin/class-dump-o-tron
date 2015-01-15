//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage, UIView, UIView<CKJoystickButton>;

@interface CKJoystickButtonItem : NSObject
{
    _Bool _highlighted;
    UIImage *_image;
    NSString *_title;
    id _target;
    SEL _action;
    SEL _tapAction;
    UIView<CKJoystickButton> *_button;
    UIView *_view;
}

@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(retain, nonatomic) UIView<CKJoystickButton> *button; // @synthesize button=_button;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) SEL tapAction; // @synthesize tapAction=_tapAction;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) id target; // @synthesize target=_target;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)loadButton;
- (void)sendTapActionFrom:(id)arg1 forEvent:(id)arg2;
- (void)sendActionFrom:(id)arg1 forEvent:(id)arg2;
- (id)initWithImage:(id)arg1 title:(id)arg2 target:(id)arg3 action:(SEL)arg4 tapAction:(SEL)arg5;
- (void)dealloc;

@end

