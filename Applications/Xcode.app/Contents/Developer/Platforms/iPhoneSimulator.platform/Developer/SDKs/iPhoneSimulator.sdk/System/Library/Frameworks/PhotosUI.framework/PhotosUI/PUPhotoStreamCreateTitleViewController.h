//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITextViewDelegate.h"

@class NSString, UIColor, UILabel, UINavigationItem, UITextField, UITextView;

@interface PUPhotoStreamCreateTitleViewController : UIViewController <UITextViewDelegate>
{
    UITextField *_titleField;
    UILabel *_descriptionLabel;
    UITextView *_textView;
    UILabel *_textPlaceholderLabel;
    UIColor *_placeholderColor;
    UINavigationItem *_navItem;
    UILabel *_instructionLabel;
    id <PUPhotoStreamCreateTitleDelegate> _titleDelegate;
}

@property(nonatomic) id <PUPhotoStreamCreateTitleDelegate> titleDelegate; // @synthesize titleDelegate=_titleDelegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)_setTitle:(id)arg1;
- (void)_cancelPost:(id)arg1;
- (id)navigationItem;
- (void)_addConstraintsForInterfaceOrientation:(long long)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (struct CGSize)contentSizeForViewInPopover;
- (id)_placeholderColor;
- (void)textViewDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

