//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKit/PKPaymentAddCardViewController.h>

@class UIButton;

@interface PKPaymentSetupAssistantRegistrationViewController : PKPaymentAddCardViewController
{
    UIButton *_skipButton;
}

+ (_Bool)setupAssistantNeedsToRunReturningRequirements:(unsigned long long *)arg1;
+ (_Bool)setupAssistantNeedsToRun;
- (void)aboutButtonTouched:(id)arg1;
- (void)skip:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)preflightWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithPaymentWebService:(id)arg1 context:(long long)arg2 delegate:(id)arg3;

@end

