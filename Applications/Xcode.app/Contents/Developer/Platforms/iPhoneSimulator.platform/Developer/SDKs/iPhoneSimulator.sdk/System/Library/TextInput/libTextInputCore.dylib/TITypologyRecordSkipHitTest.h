//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TextInputCore/TITypologyRecord.h>

@class TIKeyboardLayout, TIKeyboardTouchEvent;

@interface TITypologyRecordSkipHitTest : TITypologyRecord
{
    TIKeyboardTouchEvent *_touchEvent;
    TIKeyboardLayout *_keyLayout;
}

@property(retain, nonatomic) TIKeyboardLayout *keyLayout; // @synthesize keyLayout=_keyLayout;
@property(retain, nonatomic) TIKeyboardTouchEvent *touchEvent; // @synthesize touchEvent=_touchEvent;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)applyToStatistic:(id)arg1;

@end

