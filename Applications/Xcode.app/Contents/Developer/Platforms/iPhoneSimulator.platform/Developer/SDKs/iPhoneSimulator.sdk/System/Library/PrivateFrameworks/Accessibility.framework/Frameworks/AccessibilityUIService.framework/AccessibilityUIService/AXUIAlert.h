//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface AXUIAlert : UIView
{
    unsigned long long _alertType;
    id <AXUIAlertStyleProvider> _styleProvider;
}

@property(retain, nonatomic) id <AXUIAlertStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property(nonatomic) unsigned long long alertType; // @synthesize alertType=_alertType;
- (void)_appendParagraphWithText:(id)arg1 withTextColor:(id)arg2 font:(id)arg3 textAlignment:(long long)arg4 lineSpacing:(double)arg5 paragraphSpacingBefore:(double)arg6 toAttributedString:(id)arg7;
- (void)addToContainerView:(id)arg1;
- (void)dealloc;
- (id)initWithType:(unsigned long long)arg1 text:(id)arg2 subtitleText:(id)arg3 iconImage:(id)arg4 styleProvider:(id)arg5;

@end

