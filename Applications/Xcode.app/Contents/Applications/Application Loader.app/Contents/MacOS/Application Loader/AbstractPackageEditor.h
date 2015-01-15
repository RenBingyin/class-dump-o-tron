//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "MZViewSearching.h"

@class ContentProviderUploadStatusController, MZFieldEditor, MZWorkSeries, NSArrayController, NSButton, NSDictionary, NSImageView, NSInvocation, NSObjectController, NSTabView, NSTableView, NSTextField, NSTimer, WorkItemDisplayController;

@interface AbstractPackageEditor : NSWindowController <MZViewSearching>
{
    BOOL _packageImported;
    BOOL _bypassingStatusLookup;
    MZWorkSeries *_upload;
    NSTimer *_deliveryTimer;
    NSTimer *_saveAndDeliverTimer;
    BOOL _initialized;
    BOOL _newPackage;
    BOOL _sentToApple;
    BOOL _isManualSave;
    NSTimer *_autosaveTimer;
    MZFieldEditor *_customFieldEditor;
    NSInvocation *_closingInvocation;
    ContentProviderUploadStatusController *_historyController;
    NSDictionary *_arrayControllersByName;
    NSTabView *_topLevelTabView;
    NSObjectController *_packageController;
    NSButton *_usernameButton;
    NSButton *_nextButton;
    NSButton *_previousButton;
    NSTextField *_validationStatusField;
    NSTableView *_validationTableView;
    NSArrayController *_validationFailuresController;
    NSButton *_sendButton;
    NSButton *_sendToAppleButton;
    NSButton *_detailsButton;
    NSImageView *_deliverySuccessView;
    WorkItemDisplayController *_deliveryDisplayController;
    NSTableView *_deliveryErrorTableView;
    NSArrayController *_deliveryErrorController;
    NSTextField *_deliveryReadyTextField;
}

+ (BOOL)isPackageType:(int)arg1 inAllowedPackageTypePrefixes:(id)arg2;
+ (id)defaultBindingsManager;
+ (id)defaultBlankDocumentName;
+ (id)defaultBlankDocumentVendorId;
+ (void)initialize;
+ (id)dynamicBindingsDocumentName;
+ (id)deliveryCompleteSound;
@property NSTextField *deliveryReadyTextField; // @synthesize deliveryReadyTextField=_deliveryReadyTextField;
@property NSArrayController *deliveryErrorController; // @synthesize deliveryErrorController=_deliveryErrorController;
@property NSTableView *deliveryErrorTableView; // @synthesize deliveryErrorTableView=_deliveryErrorTableView;
@property WorkItemDisplayController *deliveryDisplayController; // @synthesize deliveryDisplayController=_deliveryDisplayController;
@property NSImageView *deliverySuccessView; // @synthesize deliverySuccessView=_deliverySuccessView;
@property NSButton *detailsButton; // @synthesize detailsButton=_detailsButton;
@property NSButton *sendToAppleButton; // @synthesize sendToAppleButton=_sendToAppleButton;
@property NSButton *sendButton; // @synthesize sendButton=_sendButton;
@property NSArrayController *validationFailuresController; // @synthesize validationFailuresController=_validationFailuresController;
@property NSTableView *validationTableView; // @synthesize validationTableView=_validationTableView;
@property NSTextField *validationStatusField; // @synthesize validationStatusField=_validationStatusField;
@property NSButton *previousButton; // @synthesize previousButton=_previousButton;
@property NSButton *nextButton; // @synthesize nextButton=_nextButton;
@property NSButton *usernameButton; // @synthesize usernameButton=_usernameButton;
@property NSObjectController *packageController; // @synthesize packageController=_packageController;
@property NSTabView *topLevelTabView; // @synthesize topLevelTabView=_topLevelTabView;
- (id)arrayControllersByName;
- (BOOL)findView:(id *)arg1 withIdentifier:(id)arg2 index:(id)arg3 andDisplay:(BOOL)arg4;
- (BOOL)isPackageTypeInAllowedPackageTypePrefixes:(id)arg1;
- (void)displayAlert:(id)arg1;
- (void)usernameButtonClicked:(id)arg1;
- (void)document:(id)arg1 shouldClose:(BOOL)arg2 contextInfo:(void *)arg3;
- (void)updateUsernameButton;
- (BOOL)isNewFromFile;
- (BOOL)wasPackageOpened;
- (BOOL)isRenameNeededForExistingPackageName:(id)arg1 newName:(id)arg2 packagePath:(id)arg3 packageLoader:(id)arg4;
- (BOOL)packageNameHasDashNSuffixForExistingPackageName:(id)arg1 newName:(id)arg2;
- (BOOL)shouldForceUniquePackagePathMode;
- (id)defaultPackageDirectory;
- (void)dumpDocument:(id)arg1;
- (void)dumpDocument;
- (id)marshallDocument;
- (void)_cleanup;
- (void)windowControllerDidLoadNib:(id)arg1;
- (void)windowControllerWillLoadNib:(id)arg1;
- (void)markDocumentDirty:(id)arg1;
- (void)markDocumentClean:(id)arg1;
- (void)display;
- (void)displayInitialTabWithIdentifier:(id)arg1;
- (id)documentWindow;
- (id)windowController;
- (void)windowWillClose:(id)arg1;
- (void)close;
- (void)setDocument:(id)arg1;
- (id)undoManager;
- (id)userInfo;
- (id)activity;
- (id)package;
- (id)packageContents;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)addObject:(id)arg1 toDocumentKeyPath:(id)arg2;
- (void)addObject:(id)arg1 toObject:(id)arg2 keyPath:(id)arg3;
- (void)cleanupDynamicBindings;
- (void)applyDynamicBindings;
- (id)initWithActivity:(id)arg1 package:(id)arg2;
- (id)transitionalRelaxNGDocumentVerifierWithError:(id *)arg1;
- (id)marshallDocumentForRelaxNG;
- (id)dynamicBindingsTagWithIdentifier:(id)arg1;
- (id)missingVendorIdError;
- (id)relaxNGMappingDocumentName;
- (id)defaultInitialTabIdentifier;
- (id)windowNibName;
- (void)credentialsUpdated:(id)arg1;
- (void)credentialsWillUpdate:(id)arg1;
- (void)uploadDidSucceed:(id)arg1;
- (void)uploadDidFail:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)referenceDataManagerFlushed:(id)arg1;
- (void)userDefaultsDidChange;
- (id)arrayControllerForView:(id)arg1;
- (id)arrayControllerForValidation:(id)arg1;
- (BOOL)findTagInAlternateViews:(int)arg1 tabViewItem:(id *)arg2 view:(id *)arg3 selectTabView:(BOOL)arg4;
- (id)addNonRelaxNGValidations:(id)arg1 verifier:(id)arg2;
- (void)mainTabViewWillSelectTabViewItem:(id)arg1;
- (id)updateXMLDocumentPriorToSave:(id)arg1;
- (void)updatePackagePriorToSave;
- (void)updatePricingPriorToSave;
- (void)updateVendorIdPriorToSave;
- (void)documentWillCloseCleanup;
- (void)documentDidCloseCleanup;
- (void)windowControllerDidLoadNibInitialization:(id)arg1;
- (void)windowControllerDidLoadNibPreDocumentSetInitialization:(id)arg1;
- (void)teardownModelObservation;
- (void)setupModelObservation;
- (id)buildPackageWithPathMode:(int)arg1 error:(id *)arg2;
- (id)packageHistoryVendorIdentifier;
- (id)packageHistoryVendorIdMissingError;
- (id)defaultPackageHistoryVendorIdMissingError;
- (id)desiredPackageNameWithoutExtension;
- (int)packageType;
- (void)ensureNextKeyViewsAreComplete;
- (id)findNextKeyViewForView:(id)arg1 firstKeyView:(id)arg2 tabs:(id)arg3 depthSafetyCounter:(int)arg4;
- (void)tabView:(id)arg1 didSelectTabViewItem:(id)arg2;
- (BOOL)isDeliveryTabSelected;
- (void)tabView:(id)arg1 willSelectTabViewItem:(id)arg2;
- (void)previous:(id)arg1;
- (void)next:(id)arg1;
- (id)findLeafTabView:(id)arg1;
- (id)findParentTabViewNotUsedAsSwapView:(id)arg1;
- (id)findTabbedSubviewNotUsedAsSwapView:(id)arg1;
- (BOOL)isNotUsedAsSwapView:(id)arg1;
- (void)enableAndDisableNavigationButtons;
- (id)findTabbedSubview:(id)arg1;
- (id)findTabbedSubviewInView:(id)arg1;
- (id)findTabbedSubviewInViews:(id)arg1;
- (void)copy:(id)arg1;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (double)computeErrorHeightForRow:(long long)arg1;
- (BOOL)isDeliveryStateVisible;
- (BOOL)isDeliveryErrorTableVisible;
- (BOOL)errorTableShouldBeVisible;
- (BOOL)isValidationTableVisible;
- (BOOL)validationTableShouldBeVisible;
- (void)changeDeliveryErrorsToWarnings:(id)arg1;
- (void)abortDelivery:(id)arg1;
- (BOOL)isDeliveryFailure;
- (void)sendToApple:(id)arg1;
- (void)showDeliveryDetails:(id)arg1;
- (BOOL)deliveryDetailsShouldEnableSendToApple:(id)arg1;
- (void)deliveryDetails:(id)arg1 didSucceed:(BOOL)arg2;
- (void)uploadCompleted:(id)arg1;
- (void)updateDeliveryErrorsAndWarnings;
- (void)setDeliverySuccessImage:(id)arg1;
- (void)updateUI:(id)arg1;
- (void)sendPackage:(id)arg1;
- (void)cleanupItmsTransporterDir;
- (void)saveAndDeliverPackage:(id)arg1;
- (void)clickDeliverButton:(id)arg1;
- (BOOL)tabView:(id)arg1 shouldSelectTabViewItem:(id)arg2;
- (void)startSaveAndDeliverTimer;
- (void)shutdownSaveAndDeliverTimer;
- (void)startDeliveryTimer;
- (void)shutdownDeliveryTimer;
- (void)configureDeliveryWorkSeries:(id)arg1;
- (id)createDeliveryWorkSeries;
- (id)configurePackageSource;
- (void)document:(id)arg1 didSave:(BOOL)arg2 contextInfo:(void *)arg3;
- (void)deliveryTabSelected:(id)arg1;
- (id)viewForIdentifier:(id)arg1;
- (BOOL)isPackageEditable;
- (void)validationDoubleClicked:(id)arg1;
- (void)deliveryErrorDoubleCLicked:(id)arg1;
- (void)drillDownToValidation:(id)arg1;
- (void)selectAppropriateObjectForView:(id)arg1 validation:(id)arg2;
- (id)valueForView:(id)arg1 desiredValue:(id)arg2 validation:(id)arg3 atIndex:(unsigned long long)arg4;
- (id)valueForView:(id)arg1 desiredValue:(id)arg2 validation:(id)arg3;
- (void)highlightDrilldownView:(id)arg1;
- (BOOL)findValidation:(id)arg1 tabViewItem:(id *)arg2 view:(id *)arg3;
- (long long)tagWithValidation:(id)arg1;
- (long long)tagWithIdentifier:(id)arg1;
- (BOOL)findTag:(long long)arg1 tabViewItem:(id *)arg2 view:(id *)arg3 selectTabView:(BOOL)arg4;
- (BOOL)findTag:(long long)arg1 tabView:(id)arg2 tabViewItem:(id *)arg3 view:(id *)arg4 selectTabView:(BOOL)arg5;
- (BOOL)findTag:(long long)arg1 inView:(id)arg2 tabView:(id)arg3 tabViewItem:(id)arg4 targetView:(id *)arg5 selectTabView:(BOOL)arg6;
- (void)documentDidChangeCleanStatus:(id)arg1;
- (void)validatePackageForDelivery:(id)arg1;
- (void)configureUIBasedOnValidations:(id)arg1;
- (BOOL)validatePackage;
- (BOOL)containsValidationErrors;
- (BOOL)containsValidationErrors:(id)arg1;
- (BOOL)verifier:(id)arg1 shouldFailDefine:(id)arg2 againstNode:(id)arg3 content:(id)arg4 mapping:(id)arg5 validation:(id *)arg6;
- (void)applyAlteration:(id)arg1 toValidation:(id)arg2;
- (id)validationsForPackage;
- (id)marshallDocumentForRelaxNG;
- (id)processXMLDocumentBeforeRelaxNGValidation:(id)arg1;
- (void)validateIdentifiersAndViewsExist:(id)arg1;
- (id)transitionalRelaxNGDocumentVerifierWithError:(id *)arg1;
- (id)relaxNGDocumentVerifierWithSchema:(id)arg1 error:(id *)arg2;
- (id)packageTypeSpecificSchemaNameWithFallback:(id)arg1;
- (id)transitionalRelaxNGSchemaNameWithPackageType;
- (id)transitionalRelaxNGSchemaName;
- (id)strictRelaxNGSchemaNameWithPackageType;
- (id)strictRelaxNGSchemaName;
- (id)defaultRelaxNGSchemaName;
- (id)unsavedValidation;
- (void)clearDeliveryInterface;
- (void)togglePackageImported:(id)arg1;
- (void)setNewPackage:(BOOL)arg1;
- (void)setBypassingStatusLookup:(BOOL)arg1;
- (BOOL)isBypassingStatusLookup;
- (BOOL)isPackageImported;
- (void)statusRequestCompleted:(id)arg1;
- (void)analyzeUploads:(id)arg1;
- (void)lookupPackageStatuses;
- (void)lookupMetadata;
- (void)makeEditingEnabled:(id)arg1;
- (void)setMetadataLookupState:(BOOL)arg1;
- (void)setPackageImportedState:(BOOL)arg1;
- (BOOL)metadataLookupStateFromPersistentRepositoryWithVendorId:(id)arg1;
- (BOOL)packageImportedStateFromPersistentRepositoryWithVendorId:(id)arg1;
- (void)historySheetDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)packageHistory:(id)arg1;

@end

