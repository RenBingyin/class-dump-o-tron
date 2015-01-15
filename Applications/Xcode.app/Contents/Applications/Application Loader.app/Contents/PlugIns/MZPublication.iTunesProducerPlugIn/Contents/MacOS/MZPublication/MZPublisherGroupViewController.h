//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MZContainedViewController.h"

@class MZPopoverButton, NSPopUpButton, NSTextField, PublicationLanguageComboBox;

@interface MZPublisherGroupViewController : MZContainedViewController
{
    BOOL _isShowingImprintField;
    BOOL _didChangePublisherName;
    NSTextField *_publisherLabel;
    NSTextField *_publicationDateLabel;
    NSTextField *_languageLabel;
    NSTextField *_publisherNameField;
    NSTextField *_imprintField;
    NSTextField *_publicationDateField;
    NSTextField *_explicitContentLabel;
    NSPopUpButton *_explicitContentField;
    NSTextField *_printLengthLabel;
    NSTextField *_printLengthField;
    NSTextField *_bookTypeLabel;
    NSPopUpButton *_bookTypeField;
    PublicationLanguageComboBox *_languageField;
    MZPopoverButton *_publisherNameInfoPopover;
    MZPopoverButton *_imprintInfoPopover;
    MZPopoverButton *_publicationDatePopover;
    MZPopoverButton *_languageInfoPopover;
}

+ (id)pluginName;
+ (id)xibName;
@property MZPopoverButton *languageInfoPopover; // @synthesize languageInfoPopover=_languageInfoPopover;
@property MZPopoverButton *publicationDatePopover; // @synthesize publicationDatePopover=_publicationDatePopover;
@property MZPopoverButton *imprintInfoPopover; // @synthesize imprintInfoPopover=_imprintInfoPopover;
@property MZPopoverButton *publisherNameInfoPopover; // @synthesize publisherNameInfoPopover=_publisherNameInfoPopover;
@property PublicationLanguageComboBox *languageField; // @synthesize languageField=_languageField;
@property NSPopUpButton *bookTypeField; // @synthesize bookTypeField=_bookTypeField;
@property NSTextField *bookTypeLabel; // @synthesize bookTypeLabel=_bookTypeLabel;
@property NSTextField *printLengthField; // @synthesize printLengthField=_printLengthField;
@property NSTextField *printLengthLabel; // @synthesize printLengthLabel=_printLengthLabel;
@property NSPopUpButton *explicitContentField; // @synthesize explicitContentField=_explicitContentField;
@property NSTextField *explicitContentLabel; // @synthesize explicitContentLabel=_explicitContentLabel;
@property NSTextField *publicationDateField; // @synthesize publicationDateField=_publicationDateField;
@property NSTextField *imprintField; // @synthesize imprintField=_imprintField;
@property NSTextField *publisherNameField; // @synthesize publisherNameField=_publisherNameField;
@property NSTextField *languageLabel; // @synthesize languageLabel=_languageLabel;
@property NSTextField *publicationDateLabel; // @synthesize publicationDateLabel=_publicationDateLabel;
@property NSTextField *publisherLabel; // @synthesize publisherLabel=_publisherLabel;
- (BOOL)isPackageImported;
- (void)controlTextDidChange:(id)arg1;
- (void)adjustPopupButtonConstraints;
- (void)updateConstraints;
- (float)minimumLeftColumnRequired;
- (void)dealloc;
- (void)didLoadView;

@end

