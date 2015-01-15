//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@class NSArray, NSDate, NSString;

@interface CertificateViewController : UITableViewController
{
    _Bool _certificateIsRoot;
    _Bool _showCertificateButton;
    _Bool _certificateButtonIsDestructiveAction;
    int _certUIAction;
    id _certificateTrust;
    NSString *_certificateTitle;
    NSString *_certificateIssuer;
    NSString *_certificatePurpose;
    NSDate *_certificateExpiration;
    NSArray *_certificateProperties;
    NSString *_certificateButtonTitle;
    NSString *_certificateButtonDescription;
    CDUnknownBlockType _certificateButtonActionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType certificateButtonActionHandler; // @synthesize certificateButtonActionHandler=_certificateButtonActionHandler;
@property(nonatomic) _Bool certificateButtonIsDestructiveAction; // @synthesize certificateButtonIsDestructiveAction=_certificateButtonIsDestructiveAction;
@property(retain, nonatomic) NSString *certificateButtonDescription; // @synthesize certificateButtonDescription=_certificateButtonDescription;
@property(retain, nonatomic) NSString *certificateButtonTitle; // @synthesize certificateButtonTitle=_certificateButtonTitle;
@property(nonatomic) _Bool showCertificateButton; // @synthesize showCertificateButton=_showCertificateButton;
@property(nonatomic) _Bool certificateIsRoot; // @synthesize certificateIsRoot=_certificateIsRoot;
@property(retain, nonatomic) NSArray *certificateProperties; // @synthesize certificateProperties=_certificateProperties;
@property(retain, nonatomic) NSDate *certificateExpiration; // @synthesize certificateExpiration=_certificateExpiration;
@property(retain, nonatomic) NSString *certificatePurpose; // @synthesize certificatePurpose=_certificatePurpose;
@property(retain, nonatomic) NSString *certificateIssuer; // @synthesize certificateIssuer=_certificateIssuer;
@property(retain, nonatomic) NSString *certificateTitle; // @synthesize certificateTitle=_certificateTitle;
@property(nonatomic) int certUIAction; // @synthesize certUIAction=_certUIAction;
@property(retain, nonatomic) id certificateTrust; // @synthesize certificateTrust=_certificateTrust;
- (void).cxx_destruct;
- (void)preferredContentSizeChanged:(id)arg1;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setShowCertificateButton:(_Bool)arg1 localizedTitle:(id)arg2 localizedDescription:(id)arg3 destructive:(_Bool)arg4 handler:(CDUnknownBlockType)arg5;
- (void)setCertificateTitle:(id)arg1 issuer:(id)arg2 purpose:(id)arg3 expiration:(id)arg4 properties:(id)arg5 isRoot:(_Bool)arg6 action:(int)arg7;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithTrust:(struct __SecTrust *)arg1 action:(int)arg2;
- (id)init;

@end

