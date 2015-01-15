//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SLComposeServiceViewController.h"

#import "VimeoComposeOptionViewDelegate.h"

@class ACAccount, ACAccountStore, NSArray, NSString, SLComposeSheetConfigurationItem, UIImageView, VimeoDetailsController, VimeoUploadSession;

@interface VimeoComposeViewController : SLComposeServiceViewController <VimeoComposeOptionViewDelegate>
{
    VimeoUploadSession *_session;
    UIImageView *_logoView;
    SLComposeSheetConfigurationItem *_detailsConfigurationItem;
    VimeoDetailsController *_detailsController;
    ACAccountStore *_accountStore;
    ACAccount *_vimeoAccount;
    NSString *_postDescription;
    NSArray *_tags;
    long long _videoSize;
    long long _privacySettings;
}

@property(nonatomic) long long privacySettings; // @synthesize privacySettings=_privacySettings;
@property(nonatomic) long long videoSize; // @synthesize videoSize=_videoSize;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSString *postDescription; // @synthesize postDescription=_postDescription;
@property(retain, nonatomic) ACAccount *vimeoAccount; // @synthesize vimeoAccount=_vimeoAccount;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
- (void).cxx_destruct;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)didSelectPost;
- (_Bool)validateText:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)vimeoComposeOptionsViewDidFinish:(id)arg1;
- (id)configurationItems;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

