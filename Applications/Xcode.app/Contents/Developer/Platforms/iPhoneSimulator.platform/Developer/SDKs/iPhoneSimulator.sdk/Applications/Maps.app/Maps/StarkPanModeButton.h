//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

__attribute__((visibility("hidden")))
@interface StarkPanModeButton : UIButton
{
    _Bool _updatingImages;
    _Bool _active;
}

@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (void)_updateImages;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

