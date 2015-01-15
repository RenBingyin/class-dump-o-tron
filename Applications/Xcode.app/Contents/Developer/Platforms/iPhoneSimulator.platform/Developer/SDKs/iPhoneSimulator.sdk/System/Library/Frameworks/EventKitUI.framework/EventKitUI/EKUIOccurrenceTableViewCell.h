//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class ColorBarView, EKCalendarDate, NSAttributedString, NSDate, NSDictionary, NSLayoutConstraint, NSString, UIColor, UIImage, UIImageView, UILabel, UIView;

@interface EKUIOccurrenceTableViewCell : UITableViewCell
{
    UIView *_separatorViewForNonOpaqueTables;
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UILabel *_topTimeLabel;
    UILabel *_bottomTimeLabel;
    ColorBarView *_colorBarView;
    UIImageView *_angleStripeBackgroundView;
    NSLayoutConstraint *_primaryTextTopToBaselineConstraint;
    NSLayoutConstraint *_secondaryTextTopToBaselineConstraint;
    NSLayoutConstraint *_secondaryTextBottomToBaselineConstraint;
    NSLayoutConstraint *_timeTextWidthConstraint;
    NSLayoutConstraint *_timeTextLeftMarginConstraint;
    NSLayoutConstraint *_timeTextRightMarginConstraint;
    double _travelTime;
    long long _routingMode;
    UIColor *_eventCalendarColor;
    NSDate *_eventStartDateIncludingTravelTime;
    EKCalendarDate *_eventStartDate;
    EKCalendarDate *_eventEndDate;
    NSAttributedString *_eventTitleAttrString;
    NSString *_eventTitle;
    NSString *_eventLocation;
    NSString *_topTimeString;
    NSString *_bottomTimeString;
    NSString *_travelTimeLabelString;
    NSString *_travelAddressString;
    NSString *_travelDepartureTimeString;
    NSDictionary *_secondaryStringDrawingAttributes;
    NSDictionary *_topTimeStringDrawingAttributes;
    NSDictionary *_bottomTimeStringDrawingAttributes;
    NSDictionary *_travelTimeLabelStringDrawingAttributes;
    NSDictionary *_travelAddressStringDrawingAttributes;
    NSDictionary *_travelDepartureTimeStringDrawingAttributes;
    long long _truncatingOptions;
    long long _nontruncatingOptions;
    UIImage *_routingModeImage;
    _Bool _isAllDay;
    _Bool _isRecurring;
    _Bool _isBirthday;
    _Bool _isFacebook;
    _Bool _tentative;
    _Bool _declined;
    _Bool _needsReply;
    _Bool _cancelled;
    _Bool _showingTravelTime;
    _Bool _drawsOwnRowSeparators;
    _Bool _usesVibrantSeparatorOverlayDrawing;
    _Bool _usesInsetMargin;
}

+ (id)_tentativeAngledStripeBackground;
+ (id)_needsReplyAngledStripeBackground;
+ (id)_needsReplyDot;
+ (id)_facebookIcon;
+ (id)_birthdayIcon;
+ (double)_rightImageSpacing;
+ (double)tentativeStripeBackgroundAlpha;
+ (id)tentativeStripeColor;
+ (id)tentativeBackgroundColor;
+ (double)needsReplyStripeBackgroundAlpha;
+ (id)needsReplyStripeColor;
+ (id)needsReplyBackgroundColor;
+ (id)normalBackgroundColor;
+ (id)strikethroughTimeTextColor;
+ (id)normalBottomTimeTextColor;
+ (id)normalTopTimeTextColor;
+ (id)strikethroughSecondaryTextColor;
+ (id)normalSecondaryTextColor;
+ (id)strikethroughPrimaryTextColor;
+ (id)invitationPrimaryTextColor;
+ (id)prefixPrimaryTextColor;
+ (id)normalPrimaryTextColor;
+ (id)cancelledDeclinedColorBarColor;
+ (void)clearFontCaches;
+ (id)secondaryTextLabelFont;
+ (id)constrainedPrimaryTextLabelFont;
+ (id)scalablePrimaryTextLabelFont;
+ (id)timeLabelsFont;
+ (double)cellHeightForWidth:(double)arg1;
+ (id)reuseIdentifier;
+ (void)_clearCaches;
+ (void)initialize;
@property(nonatomic) _Bool usesInsetMargin; // @synthesize usesInsetMargin=_usesInsetMargin;
@property(nonatomic) _Bool usesVibrantSeparatorOverlayDrawing; // @synthesize usesVibrantSeparatorOverlayDrawing=_usesVibrantSeparatorOverlayDrawing;
@property(nonatomic) _Bool drawsOwnRowSeparators; // @synthesize drawsOwnRowSeparators=_drawsOwnRowSeparators;
- (void).cxx_destruct;
- (id)_textForDepartureTimeLabel;
- (id)_textForBottomTimeLabel;
- (id)_textForTopTimeLabel;
- (_Bool)isDeclined;
- (_Bool)needsReply;
- (_Bool)isTentative;
- (_Bool)isFacebook;
- (_Bool)isBirthday;
- (_Bool)isCancelled;
- (_Bool)isAllDay;
- (id)_textLabelWithAddedImageAttachmentsFromText:(id)arg1 withFont:(id)arg2;
- (_Bool)_textLabelHasAddedImages;
- (void)_addIcon:(id)arg1 toString:(id)arg2 withFont:(id)arg3;
- (void)_updateRoutingModeIcon;
- (void)_updateTravelTimeAddressLabel;
- (void)_updateTravelTimeLabel;
- (void)_updateTravelDepartureTimeLabel;
- (void)_updateBottomTimeLabel;
- (void)_updateTopTimeLabel;
- (void)_updateSecondaryTextLabel;
- (void)_updatePrimaryTextLabel;
- (void)_updateAngleBackgroundColor;
- (void)_updateColorBarColor;
- (void)_setUpConstraints;
- (double)_rightMarginForTimeViewsFromTimeWidth:(double)arg1;
- (double)_leftMarginForTimeViewsFromTimeWidth:(double)arg1;
- (double)_widthForTimeViews;
- (double)_verticalSpacingBottomToBaselineForBottomLabel;
- (double)_verticalSpacingTopToBaselineForBottomLabel;
- (double)_verticalSpacingTopToBaselineForTopLabel;
- (void)updateConstraints;
- (void)contentCategorySizeChanged;
- (void)_createViews;
- (id)_travelTimeIcon;
- (void)setFrame:(struct CGRect)arg1;
- (void)forceUpdateOfAllElements;
- (id)primaryTextLabelFont;
- (void)layoutSubviews;
- (void)_updateContentForSizeCategoryChange:(id)arg1;
- (void)updateWithEvent:(id)arg1 calendar:(id)arg2 placedUnderDayWithStartDate:(id)arg3 showCalendarColors:(_Bool)arg4 extendHeightForTravelTime:(_Bool)arg5;
- (void)updateWithEvent:(id)arg1 calendar:(id)arg2 placedUnderDayWithStartDate:(id)arg3 showCalendarColors:(_Bool)arg4;
- (void)_setMarginExtendsToFullWidth:(_Bool)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

