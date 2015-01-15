//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWindow.h"

@class StarkDisplayController;

__attribute__((visibility("hidden")))
@interface StarkWindow : UIWindow
{
    StarkDisplayController *_owningStarkController;
}

@property(nonatomic) __weak StarkDisplayController *owningStarkController; // @synthesize owningStarkController=_owningStarkController;
- (void).cxx_destruct;
- (long long)interactionModel;
- (_Bool)_isClippedByScreenJail;
- (_Bool)_isConstrainedByScreenJail;
- (void)sendEvent:(id)arg1;

@end

