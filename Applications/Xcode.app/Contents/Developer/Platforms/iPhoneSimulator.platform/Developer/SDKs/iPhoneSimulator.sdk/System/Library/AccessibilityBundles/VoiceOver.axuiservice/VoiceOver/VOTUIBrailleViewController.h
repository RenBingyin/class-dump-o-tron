//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSArray;

@interface VOTUIBrailleViewController : UIViewController
{
    long long _orientation;
    NSArray *_dotNumberPositions;
    long long _typingMode;
}

@property(readonly, nonatomic) long long typingMode; // @synthesize typingMode=_typingMode;
@property(readonly, nonatomic) NSArray *dotNumberPositions; // @synthesize dotNumberPositions=_dotNumberPositions;
@property(readonly, nonatomic) long long orientation; // @synthesize orientation=_orientation;
- (void).cxx_destruct;
- (void)setOrientation:(long long)arg1 dotNumberPositions:(id)arg2 typingMode:(long long)arg3;
- (void)flashInsertedText:(id)arg1;
- (void)highlightBrailleDots:(id)arg1;
- (void)loadView;
- (id)initWithOrientation:(long long)arg1 dotNumberPositions:(id)arg2 typingMode:(long long)arg3;

@end

