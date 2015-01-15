//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ABPersonCellLayoutManagerDelegate.h"
#import "ABPrimaryValueDelegate.h"
#import "UITableViewDataSourcePrivate.h"
#import "UITableViewDelegate.h"

@class ABActionsController, ABLabelViewWithVariablePositioning, ABMultiCellContentView, ABNamePropertyGroup, ABPersonCellLayoutManager, ABPersonImageView, ABPersonPickersDelegate, ABPersonTableFooterView, ABPersonTableHeaderView, ABPersonTableView, ABPersonTableViewActionsDelegate, ABPersonTableViewImageDataDelegate, ABPersonTableViewLinkingDelegate, ABPersonTableViewMultiCellDelegate, ABPersonTableViewSharingDelegate, ABUIPerson, NSArray, NSDictionary, NSIndexPath, NSMutableArray, NSMutableDictionary, NSString, UIFont, UILabel, UIResponder, UITableViewCell, UIView;

@interface ABPersonTableViewDataSource : NSObject <UITableViewDelegate, UITableViewDataSourcePrivate, ABPrimaryValueDelegate, ABPersonCellLayoutManagerDelegate>
{
    ABActionsController *_actionsController;
    struct __CFArray *_optionalProperties;
    struct __CFArray *_additionalProperties;
    struct __CFDictionary *_multiCellContentViewsByCustomCell;
    ABPersonTableViewMultiCellDelegate *_multiCellContentViewDelegate;
    ABPersonTableViewImageDataDelegate *_imageDataDelegate;
    ABPersonTableViewActionsDelegate *_actionsDelegate;
    ABPersonTableViewLinkingDelegate *_linkingDelegate;
    ABPersonPickersDelegate *_pickersDelegate;
    ABPersonTableViewSharingDelegate *_sharingDelegate;
    _Bool _attemptDelayedBecomeFirstResponder;
    _Bool _isPinningLocked;
    NSMutableDictionary *_propertyGroupsStore;
    NSMutableDictionary *_unusedPropertyGroupsStore;
    NSMutableArray *_editablePropertyGroups;
    NSMutableArray *_propertyGroups;
    ABUIPerson *_preinsertedPerson;
    struct __CFSet *_addNewValuePropertiesStore;
    struct __CFSet *_addNewValueProperties;
    ABNamePropertyGroup *_namePropertyGroup;
    UILabel *_noValueLabel;
    ABPersonTableHeaderView *_headerView;
    ABPersonTableFooterView *_footerView;
    UIView *_customPersonTableHeaderView;
    UIView *_customPersonTableFooterView;
    UIView *_notesHeaderView;
    ABLabelViewWithVariablePositioning *_linkingHeaderView;
    int _primaryProperty;
    UITableViewCell *_partiallySelectedCell;
    ABPersonCellLayoutManager *_cellLayoutManager;
    UIView *_tableHeaderViewContainer;
    NSDictionary *_cachedKeyboardInfo;
    _Bool _isEditing;
    _Bool _isUnlinkingPerson;
    _Bool _badgeEmailPropertiesForMailVIP;
    double _lastReturnedHeaderHeight;
    _Bool _allowsActions;
    _Bool _allowsEditing;
    _Bool _allowsAddToFavorites;
    _Bool _allowsSendingTextMessage;
    _Bool _allowsSharing;
    _Bool _allowsConferencing;
    _Bool _allowsDeletion;
    _Bool _allowsSounds;
    _Bool _allowsVibrations;
    _Bool _shouldShowContactSourcesStringAsMessage;
    _Bool _highlightedValueIsImportant;
    _Bool _isSettingFirstResponder;
    _Bool _isEndingEditingTransactions;
    _Bool _viewControllerWillSlideOut;
    _Bool _selectedPropertyForCellWithoutLabelDivider;
    _Bool _ignoreVibrationsDidChangeNotification;
    int _highlightedValueProperty;
    int _highlightedValueIdentifier;
    int _insertionProperty;
    int _customKeyboardOutDirection;
    NSArray *_people;
    void *_addressBook;
    id <ABPersonTableViewDataSourceDelegate> _delegate;
    ABPersonTableView *_tableView;
    struct __CFArray *_displayedProperties;
    id _insertionValue;
    id _insertionLabel;
    id <ABStyleProvider> _styleProvider;
    NSIndexPath *_lastActiveMultiCellIndexPath;
    ABMultiCellContentView *_lastActiveMultiCellContentView;
    ABMultiCellContentView *_multiCellContentViewForWillEndEditing;
    ABMultiCellContentView *_pinningMultiCellContentViewAlternate;
    NSIndexPath *_pinningMultiCellIndexPath;
    NSIndexPath *_pinningMultiCellRelativeIndexPath;
    UIResponder *_pinningResponder;
    NSMutableArray *_additionalLabels;
}

@property(nonatomic) _Bool badgeEmailPropertiesForMailVIP; // @synthesize badgeEmailPropertiesForMailVIP=_badgeEmailPropertiesForMailVIP;
@property(nonatomic) _Bool ignoreVibrationsDidChangeNotification; // @synthesize ignoreVibrationsDidChangeNotification=_ignoreVibrationsDidChangeNotification;
@property(nonatomic) _Bool selectedPropertyForCellWithoutLabelDivider; // @synthesize selectedPropertyForCellWithoutLabelDivider=_selectedPropertyForCellWithoutLabelDivider;
@property(retain, nonatomic) NSMutableArray *additionalLabels; // @synthesize additionalLabels=_additionalLabels;
@property(nonatomic) int customKeyboardOutDirection; // @synthesize customKeyboardOutDirection=_customKeyboardOutDirection;
@property(nonatomic) _Bool viewControllerWillSlideOut; // @synthesize viewControllerWillSlideOut=_viewControllerWillSlideOut;
@property(readonly, nonatomic) _Bool isEndingEditingTransactions; // @synthesize isEndingEditingTransactions=_isEndingEditingTransactions;
@property(nonatomic) _Bool isSettingFirstResponder; // @synthesize isSettingFirstResponder=_isSettingFirstResponder;
@property(retain, nonatomic) UIResponder *pinningResponder; // @synthesize pinningResponder=_pinningResponder;
@property(retain, nonatomic) NSIndexPath *pinningMultiCellRelativeIndexPath; // @synthesize pinningMultiCellRelativeIndexPath=_pinningMultiCellRelativeIndexPath;
@property(retain, nonatomic) NSIndexPath *pinningMultiCellIndexPath; // @synthesize pinningMultiCellIndexPath=_pinningMultiCellIndexPath;
@property(retain, nonatomic) ABMultiCellContentView *pinningMultiCellContentViewAlternate; // @synthesize pinningMultiCellContentViewAlternate=_pinningMultiCellContentViewAlternate;
@property(retain, nonatomic) ABMultiCellContentView *multiCellContentViewForWillEndEditing; // @synthesize multiCellContentViewForWillEndEditing=_multiCellContentViewForWillEndEditing;
@property(retain, nonatomic) ABMultiCellContentView *lastActiveMultiCellContentView; // @synthesize lastActiveMultiCellContentView=_lastActiveMultiCellContentView;
@property(retain, nonatomic) NSIndexPath *lastActiveMultiCellIndexPath; // @synthesize lastActiveMultiCellIndexPath=_lastActiveMultiCellIndexPath;
@property(retain, nonatomic) UITableViewCell *partiallySelectedCell; // @synthesize partiallySelectedCell=_partiallySelectedCell;
@property(retain, nonatomic) id <ABStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property(readonly, nonatomic) id insertionLabel; // @synthesize insertionLabel=_insertionLabel;
@property(readonly, nonatomic) id insertionValue; // @synthesize insertionValue=_insertionValue;
@property(readonly, nonatomic) int insertionProperty; // @synthesize insertionProperty=_insertionProperty;
@property(nonatomic) _Bool highlightedValueIsImportant; // @synthesize highlightedValueIsImportant=_highlightedValueIsImportant;
@property(nonatomic) int highlightedValueIdentifier; // @synthesize highlightedValueIdentifier=_highlightedValueIdentifier;
@property(nonatomic) int highlightedValueProperty; // @synthesize highlightedValueProperty=_highlightedValueProperty;
@property(nonatomic) struct __CFArray *displayedProperties; // @synthesize displayedProperties=_displayedProperties;
@property(nonatomic) _Bool shouldShowContactSourcesStringAsMessage; // @synthesize shouldShowContactSourcesStringAsMessage=_shouldShowContactSourcesStringAsMessage;
@property(nonatomic) _Bool allowsVibrations; // @synthesize allowsVibrations=_allowsVibrations;
@property(nonatomic) _Bool allowsSounds; // @synthesize allowsSounds=_allowsSounds;
@property(nonatomic) _Bool allowsDeletion; // @synthesize allowsDeletion=_allowsDeletion;
@property(nonatomic) _Bool allowsConferencing; // @synthesize allowsConferencing=_allowsConferencing;
@property(nonatomic) _Bool allowsSharing; // @synthesize allowsSharing=_allowsSharing;
@property(nonatomic) _Bool allowsSendingTextMessage; // @synthesize allowsSendingTextMessage=_allowsSendingTextMessage;
@property(nonatomic) _Bool allowsActions; // @synthesize allowsActions=_allowsActions;
@property(retain, nonatomic) ABPersonTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) id <ABPersonTableViewDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) void *addressBook; // @synthesize addressBook=_addressBook;
@property(retain, nonatomic) NSArray *people; // @synthesize people=_people;
- (long long)editingSectionForNonEditingSection:(long long)arg1;
- (id)namePropertyGroup:(id)arg1 primaryValueForProperty:(int)arg2;
- (_Bool)personCellLayoutManager:(id)arg1 isCellInFullEditMode:(id)arg2;
- (double)marginForTableView:(id)arg1;
- (id)viewForFooterInTableView:(id)arg1;
- (id)realHeaderView;
- (id)tableHeaderViewContainer;
- (id)viewForHeaderInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 wantsHeaderForSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)_updateBackgroundForCell:(id)arg1 atIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (void)_performVibrationRelatedChangesReloadingFromModel:(_Bool)arg1 updatingDataUsingBlock:(CDUnknownBlockType)arg2;
- (void)_updateTableForVibrationChanges;
- (void)_unregisterForVibrationsChangedNotifications;
- (void)_registerForVibrationsChangedNotifications;
- (void)_handleUserGeneratedVibrationsDidChangeNotification;
- (void)_unregisterForKeyboardNotifications;
- (void)_registerForKeyboardNotifications;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)adjustTableViewForKeyboardInfo:(id)arg1 animated:(_Bool)arg2;
- (_Bool)canSelectLabelForPropertyGroup:(id)arg1 info:(id)arg2;
- (void)tableView:(id)arg1 cell:(id *)arg2 orTag:(long long *)arg3 forRowAtIndexPath:(id)arg4 allowDequeing:(_Bool)arg5;
- (id)tableViewCellForActions:(id)arg1 tableView:(id)arg2 row:(long long)arg3 editing:(_Bool)arg4 allowDequeing:(_Bool)arg5 tag:(long long *)arg6;
- (id)ieTableViewCellForPropertyGroup:(id)arg1 tableView:(id)arg2 indexPath:(id)arg3 editing:(_Bool)arg4 allowDequeing:(_Bool)arg5 tag:(long long *)arg6;
- (id)_multiCellContentViewForCustomPropertyCell:(id)arg1;
- (void)_setMultiCellContentView:(id)arg1 forCustomPropertyCell:(id)arg2;
- (id)newAccessoryViewWhenEditing:(_Bool)arg1 forDataProvider:(id)arg2 info:(id)arg3;
- (id)cellLayoutManager;
- (void)_updateCellsForDataProvider:(id)arg1 afterDeleteAtIndex:(long long)arg2 isInsertionIndex:(_Bool)arg3 inTableView:(id)arg4;
- (void)_getDataProvider:(id *)arg1 andInfo:(id *)arg2 forIndexPath:(id)arg3;
- (id)actionCellForTableView:(id)arg1 withReuseIdentifier:(id)arg2 isConference:(_Bool)arg3 hasCustomContent:(_Bool)arg4;
- (id)addValueCellForTableView:(id)arg1 withReuseIdentifier:(id)arg2;
- (id)linkedCardCellForTableView:(id)arg1 withReuseIdentifier:(id)arg2;
- (long long)numberOfRowsInSection:(long long)arg1 whenEditing:(_Bool)arg2;
- (long long)numberOfSectionsWhenEditing:(_Bool)arg1;
- (_Bool)isInFullEditingMode;
- (long long)indexOfLinkingUISectionWhenEditing:(_Bool)arg1;
- (void)indexOfFirstPropertyGroupSection:(long long *)arg1 lastPropertyGroupSection:(long long *)arg2 addFieldSection:(long long *)arg3 linkingUISection:(long long *)arg4 primaryPropertyActionsSection:(long long *)arg5 topGroupingActionSection:(long long *)arg6 bottomGroupingActionSection:(long long *)arg7 cardActionsSection:(long long *)arg8 cardActionsSectionCount:(long long *)arg9 totalSectionCount:(long long *)arg10 whenEditing:(_Bool)arg11;
- (void)updateRecord;
- (void)endEditingTransactions;
- (void)unselectAllCellParts;
- (void)selectCustomPartWithFrame:(struct CGRect)arg1 occupiedCorners:(unsigned long long)arg2 forCell:(id)arg3;
- (void)selectWholePartForCell:(id)arg1;
- (void)selectValuePartForCell:(id)arg1;
- (void)selectLabelPartForCell:(id)arg1;
- (void)scrollToLastActiveEntryFieldAnimated:(_Bool)arg1;
- (void)scrollToLastActiveEntryFieldAnimated:(_Bool)arg1 becomeFirstResponder:(_Bool)arg2;
- (void)cancelPinning;
- (void)endPinning;
- (void)beginPinning;
@property(readonly, nonatomic) _Bool isPinning;
- (void)invalidatePropertyGroupsForEditing:(_Bool)arg1;
- (void)invalidateAllPropertyGroups;
- (id)propertyGroupsForEditing:(_Bool)arg1;
- (id)newPropertyGroupsForEditing:(_Bool)arg1;
- (id)newPropertyGroupsForEditing:(_Bool)arg1 withDisplayedProperties:(struct __CFArray *)arg2;
- (id)displayedPropertyGroupForProperty:(int)arg1 context:(void *)arg2 whenEditing:(_Bool)arg3;
- (id)propertyGroupForProperty:(int)arg1 context:(void *)arg2;
- (id)propertyGroupForProperty:(int)arg1 context:(void *)arg2 createIfEmpty:(_Bool)arg3;
- (void)resetPropertyGroupStores;
- (void *)_copyDefaultPolicy:(void *)arg1;
- (void)_enumerateContextPointersForProperty:(int)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)invalidateAdditionalProperties;
- (struct __CFArray *)additionalProperties;
- (struct __CFArray *)newAdditionalProperties;
- (_Bool)isPropertyOptional:(int)arg1;
- (void)updateCellEditingStyleAtIndexPath:(id)arg1;
- (long long)tableViewRowAnimationForUpdateAction:(unsigned long long)arg1 isFirstRow:(_Bool)arg2;
- (id)_notesHeaderView;
- (void)presentRelatedNamesPicker:(id)arg1;
- (void)addToContactsButtonClicked:(id)arg1;
- (void)updateByAddingFieldForProperty:(int)arg1 whenEditing:(_Bool)arg2;
- (void)tableViewAddFieldUpdateAnimationsDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (id)_indexPathForHeaderViewRow:(unsigned long long)arg1;
- (void)addFieldCellSelected:(id)arg1;
- (void)addFieldCellWillSelect:(id)arg1;
- (void)swapAddNewValueCellForProperty:(int)arg1 atIndexPath:(id)arg2;
- (void)setShouldUseAddNewValueCell:(_Bool)arg1 forProperty:(int)arg2;
- (_Bool)shouldUseAddNewValueCellForProperty:(int)arg1;
- (_Bool)usesAddNewValueCellForProperty:(int)arg1;
- (void)_resetAddNewValueCells;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void *)arg3 important:(_Bool)arg4;
- (void)setInsertionValue:(id)arg1;
- (void)setInsertionLabel:(id)arg1;
- (void)setInsertionProperty:(int)arg1 value:(id)arg2 label:(id)arg3;
- (void)valueAtIndex:(long long)arg1 selectedForPropertyGroup:(id)arg2 withMemberCell:(id)arg3 forEditing:(_Bool)arg4;
- (void)deleteButtonClicked:(id)arg1;
@property(readonly, nonatomic) ABPersonImageView *personImageView;
- (void)sizeToFit;
- (void)prepareView;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isEditing) _Bool editing;
- (void)updateHeadersAndFootersForEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)headerFooterAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (id)sectionAnimationsDictionaryForEditing:(_Bool)arg1;
- (id)sectionAnimationsDictionaryForOriginalPropertyGroups:(id)arg1 newPropertyGroups:(id)arg2 whenEditing:(_Bool)arg3;
- (id)sectionAnimationsDictionaryForSwipeToDeleteAtIndexPath:(id)arg1;
- (long long)sectionIndexForProperty:(int)arg1 propertyGroupContext:(void *)arg2 withPropertyGroups:(id)arg3 whenEditing:(_Bool)arg4;
- (long long)sectionIndexForPropertyGroup:(id)arg1 withPropertyGroups:(id)arg2 whenEditing:(_Bool)arg3;
- (long long)_sectionIndexForPropertyGroup:(id)arg1 orProperty:(int)arg2 propertyGroupContext:(void *)arg3 withPropertyGroups:(id)arg4 whenEditing:(_Bool)arg5;
- (void)setAttribution:(id)arg1 enabled:(_Bool)arg2 target:(id)arg3 action:(SEL)arg4;
@property(readonly, nonatomic, getter=isAttributionEnabled) _Bool attributionEnabled;
@property(readonly, nonatomic) NSString *attribution;
@property(retain, nonatomic) UIView *customPersonTableFooterView;
- (void)updateTableFooterViewAnimated:(_Bool)arg1;
@property(readonly, nonatomic) ABPersonTableFooterView *tableFooterView;
- (id)_footerView;
@property(nonatomic) _Bool shouldAlignPersonHeaderViewToImage;
@property(retain, nonatomic) UIView *personHeaderView;
@property(retain, nonatomic) UIView *customMessageView;
@property(retain, nonatomic) UIFont *messageDetailFont;
@property(copy, nonatomic) NSString *messageDetail;
@property(retain, nonatomic) UIFont *messageFont;
@property(copy, nonatomic) NSString *message;
@property(copy, nonatomic) NSString *alternateName;
@property(retain, nonatomic) UIView *customPersonTableHeaderView;
- (void)updateTableHeaderViewAnimated:(_Bool)arg1;
- (void)updateTableHeaderViewAnimated:(_Bool)arg1 andSkipTableViewHeaderHeightNotification:(_Bool)arg2;
- (void)notifyHeaderViewHeightDidChange;
@property(retain, nonatomic) ABPersonTableHeaderView *tableHeaderView;
- (id)newHeaderView;
- (void)reloadNoValueLabelAnimated:(_Bool)arg1;
- (void)reloadFavoritesData;
- (void)reloadPropertyGroups;
- (void)reloadImageData;
- (void)reloadDeleteButton;
- (void)reloadPreferredPersonForName;
- (void)reloadNameData;
- (void)reloadData;
- (void)reloadDataIncludingHeaderView:(_Bool)arg1;
- (void)reloadDataIncludingHeaderView:(_Bool)arg1 invalidatePropertyData:(_Bool)arg2;
- (void)notifyDataWasReloaded;
- (id)noValueLabel;
- (id)titleForNoValueWithProperty:(int)arg1;
@property(readonly, nonatomic) _Bool hasNameChanges;
@property(readonly, nonatomic) _Bool hasImageChanges;
- (_Bool)hasOnlyRingtoneChanges;
@property(readonly, nonatomic) _Bool hasChanges;
@property(readonly, nonatomic) _Bool canSave;
- (void)setPrimaryProperty:(int)arg1 countryCode:(id)arg2;
@property(readonly, nonatomic) int primaryProperty;
@property(nonatomic) _Bool allowsEditing; // @synthesize allowsEditing=_allowsEditing;
- (_Bool)isPropertyDisplayed:(int)arg1;
- (void)setDisplayedProperties:(struct __CFArray *)arg1 andRefreshUI:(_Bool)arg2;
- (id)namePropertyGroup;
- (id)actionsController;
- (_Bool)allowsVoiceFavorite;
- (_Bool)allowsFaceTimeFavorite;
@property(nonatomic) _Bool allowsAddToFavorites; // @synthesize allowsAddToFavorites=_allowsAddToFavorites;
- (void)setAllowsConferencing:(_Bool)arg1 andReload:(_Bool)arg2;
- (void)setAllowsSharing:(_Bool)arg1 andReload:(_Bool)arg2;
- (void)setAllowsSendingTextMessage:(_Bool)arg1 andReload:(_Bool)arg2;
- (void)setAllowsAddToFavorites:(_Bool)arg1 andReload:(_Bool)arg2;
- (void)updateForConferencingAvailabilityChange;
- (void)reloadConferencing;
- (void)updateLinkingUI:(id)arg1;
- (id)prepareForLinkingUIUpdate;
- (id)_linkingHeaderView;
- (_Bool)isUnlinkingPersonWithAnimation;
- (void)showLinkedCardAtRow:(long long)arg1;
- (void)_endTableViewUpdatesWithoutScroll;
- (id)controllerMainView;
- (void)_updateDeleteButtonIfNeededForFooterView:(id)arg1;
- (void)updateSectionHeaderAndFooterHeightsForEditing:(_Bool)arg1;
- (void)_conferenceHistoryChanged:(id)arg1;
- (void)updateContactSourcesStringIfNeeded;
- (id)_contactSourcesString;
- (void)_getFirstRows:(id *)arg1 andOtherRows:(id *)arg2 fromIndexPaths:(id)arg3;
- (_Bool)_isReadonlyAtIndexPath:(id)arg1;
- (void)_getPropertyGroup:(id *)arg1 index:(long long *)arg2 editableFlag:(_Bool *)arg3 atIndexPath:(id)arg4;
- (long long)rowIndexInPropertyGroup:(id *)arg1 orActions:(id *)arg2 forRow:(long long)arg3 inSection:(long long)arg4 whenEditing:(_Bool)arg5;
- (void)propertyGroup:(id *)arg1 orActions:(id *)arg2 forSection:(long long)arg3 whenEditing:(_Bool)arg4;
- (id)_indexPathForPropertyGroup:(id)arg1 index:(long long)arg2 editableFlag:(_Bool)arg3;
@property(readonly, nonatomic) ABPersonTableViewSharingDelegate *sharingDelegate;
@property(readonly, nonatomic) ABPersonTableViewLinkingDelegate *linkingDelegate;
- (void)setLinkingDelegate:(id)arg1;
@property(readonly, nonatomic) ABPersonTableViewActionsDelegate *actionsDelegate;
@property(readonly, nonatomic) ABPersonPickersDelegate *pickersDelegate;
@property(readonly, nonatomic) ABPersonTableViewImageDataDelegate *imageDataDelegate;
@property(readonly, nonatomic) ABPersonTableViewMultiCellDelegate *multiCellContentViewDelegate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

