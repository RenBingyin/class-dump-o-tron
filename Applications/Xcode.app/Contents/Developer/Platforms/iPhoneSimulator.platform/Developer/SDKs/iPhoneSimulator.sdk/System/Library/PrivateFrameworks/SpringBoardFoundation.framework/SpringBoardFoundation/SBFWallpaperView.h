//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "_UISettingsKeyObserver.h"

@class NSString, NSTimer, SBFWallpaperParallaxSettings, SBFWallpaperSettings, UIColor, UIImage, UIImageView, _UILegibilitySettings, _UILegibilitySettingsProvider;

@interface SBFWallpaperView : UIView <_UISettingsKeyObserver>
{
    SBFWallpaperSettings *_wallpaperSettings;
    UIImageView *_topGradientView;
    UIImageView *_bottomGradientView;
    UIView *_parallaxView;
    double _contentScaleFactor;
    long long _variant;
    _UILegibilitySettingsProvider *_legibilitySettingsProvider;
    _UILegibilitySettings *_legibilitySettings;
    UIColor *_lastAverageColor;
    NSTimer *_colorSampleTimer;
    _Bool _shouldGenerateBlurredImagesWhenVisible;
    _Bool _generatingBlurredImages;
    SBFWallpaperParallaxSettings *_parallaxSettings;
    _Bool _wantsRasterization;
    long long _disallowRasterizationBlockCount;
    _Bool _filtersAverageColor;
    _Bool _continuousColorSamplingEnabled;
    _Bool _wallpaperAnimationEnabled;
    _Bool _parallaxEnabled;
    _Bool _suppressesGradients;
    id <SBFWallpaperViewLegibilityObserver> _legibilityObserver;
    UIView *_contentView;
    double _zoomFactor;
    double _contrast;
    double _parallaxFactor;
    id <SBFWallpaperViewInternalObserver> _internalObserver;
    double _parallaxAxisAdjustmentAngle;
}

+ (_Bool)_allowsRasterization;
+ (_Bool)_shouldScaleForParallax;
+ (_Bool)_allowsParallax;
@property(nonatomic) double parallaxAxisAdjustmentAngle; // @synthesize parallaxAxisAdjustmentAngle=_parallaxAxisAdjustmentAngle;
@property(nonatomic) _Bool suppressesGradients; // @synthesize suppressesGradients=_suppressesGradients;
@property(nonatomic) id <SBFWallpaperViewInternalObserver> internalObserver; // @synthesize internalObserver=_internalObserver;
@property(nonatomic) double parallaxFactor; // @synthesize parallaxFactor=_parallaxFactor;
@property(nonatomic) _Bool parallaxEnabled; // @synthesize parallaxEnabled=_parallaxEnabled;
@property(nonatomic) _Bool wallpaperAnimationEnabled; // @synthesize wallpaperAnimationEnabled=_wallpaperAnimationEnabled;
@property(nonatomic) _Bool continuousColorSamplingEnabled; // @synthesize continuousColorSamplingEnabled=_continuousColorSamplingEnabled;
@property(nonatomic) double contrast; // @synthesize contrast=_contrast;
@property(nonatomic) _Bool filtersAverageColor; // @synthesize filtersAverageColor=_filtersAverageColor;
@property(nonatomic) long long variant; // @synthesize variant=_variant;
@property(nonatomic) double zoomFactor; // @synthesize zoomFactor=_zoomFactor;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) id <SBFWallpaperViewLegibilityObserver> legibilityObserver; // @synthesize legibilityObserver=_legibilityObserver;
- (void)_cleanupAfterAnimatingGradients;
- (void)_updateGradientImage;
- (double)_bottomGradientAlpha;
- (double)_topGradientAlpha;
- (struct CGRect)_bottomGradientTestRect;
- (struct CGRect)_topGradientTestRect;
- (double)gradientOpacityInRect:(struct CGRect)arg1 contrastWithinBoxesFactor:(double)arg2 allowLuminanceCheck:(_Bool)arg3;
- (void)_updateGradientAlpha;
- (void)_prepareToAnimateGradients;
- (_Bool)_shouldShowBottomGradient;
- (_Bool)_shouldShowTopGradient;
- (_Bool)contrastRequiresTreatments;
- (_Bool)luminanceInRectRequiresTreatments:(struct CGRect)arg1;
- (void)_updateContentViewScale;
- (void)_updateScaleFactor;
- (void)_removeParallax;
- (void)_addParallax;
- (void)_applyParallaxSettings;
- (void)_updateParallaxSettings;
- (void)_updateGeneratingBlurs;
- (void)_updateRasterizationState;
- (void)_endDisallowRasterizationBlock;
- (void)_beginDisallowRasterizationBlock;
- (void)_notifyGeometryInvalidated;
- (void)_notifyBlursInvalidated;
- (_Bool)_isVisible;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (_Bool)wantsRasterization;
@property(readonly, nonatomic) UIImage *wallpaperImage;
- (double)contentScaleFactor;
- (void)setContentsRect:(struct CGRect)arg1;
- (id)_displayedImage;
- (id)_imageForBackdropParameters:(CDStruct_2ec95fd7)arg1 includeTint:(_Bool)arg2;
- (id)_blurredImage;
- (void)_stopGeneratingBlurredImages;
- (void)_startGeneratingBlurredImages;
- (id)_averageColorInContentViewRect:(struct CGRect)arg1 smudgeRadius:(double)arg2;
- (id)_computeAverageColor;
- (void)_handleVariantChange;
- (void)_handleVisibilityChange;
- (_Bool)isDisplayingWallpaper:(id)arg1 forVariant:(long long)arg2 options:(id)arg3;
- (void)didMoveToWindow;
- (void)setHidden:(_Bool)arg1;
- (void)layoutSubviews;
- (void)invalidate;
- (id)_blurReplacementImage;
- (id)imageForBackdropParameters:(CDStruct_2ec95fd7)arg1 includeTint:(_Bool)arg2;
- (id)blurredImage;
- (void)setGeneratesBlurredImages:(_Bool)arg1;
- (double)contrastInRect:(struct CGRect)arg1 contrastWithinBoxes:(double *)arg2 contrastBetweenBoxes:(double *)arg3;
- (double)contrastInRect:(struct CGRect)arg1;
- (id)averageColorInRect:(struct CGRect)arg1 withSmudgeRadius:(double)arg2;
- (void)_updateLegibilitySettingsForAverageColor:(id)arg1 notify:(_Bool)arg2;
- (void)updateLegibilitySettingsForAverageColor:(id)arg1;
- (void)_setLegibilitySettings:(id)arg1 notify:(_Bool)arg2;
- (id)_primaryColorOverride;
- (id)_wallpaperName;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
- (void)setVariant:(long long)arg1 withAnimationFactory:(id)arg2 forced:(_Bool)arg3;
- (void)setVariant:(long long)arg1 withAnimationFactory:(id)arg2;
- (double)cropZoomScale;
- (_Bool)supportsCropping;
- (void)prepareToDisappear;
- (void)prepareToAppear;
- (void)setCropRect:(struct CGRect)arg1 zoomScale:(double)arg2;
- (struct CGRect)cropRect;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 variant:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

