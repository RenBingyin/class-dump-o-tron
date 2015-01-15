//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUISimulatedBarMetrics.h>

#import "IBDocumentArchiving.h"
#import "NSCoding.h"

@class NSColor, NSString;

@interface IBUISimulatedNavigationBarMetrics : IBUISimulatedBarMetrics <NSCoding, IBDocumentArchiving>
{
    int _barStyle;
    BOOL _translucent;
    BOOL _prompted;
    NSColor *_tintColor;
    NSColor *_barTintColor;
}

+ (id)simulatedNavigationBarMetricsForNavigationBar:(id)arg1;
+ (id)simulatedNavigationBarMetricsWithStyle:(int)arg1 translucent:(BOOL)arg2 prompt:(BOOL)arg3 tintColor:(id)arg4 barTintColor:(id)arg5;
+ (id)defaultMetrics;
+ (id)simulatedBarMetricsForBarView:(id)arg1;
@property(readonly, copy, nonatomic) NSColor *barTintColor; // @synthesize barTintColor=_barTintColor;
@property(readonly, copy, nonatomic) NSColor *tintColor; // @synthesize tintColor=_tintColor;
@property(readonly, nonatomic, getter=isPrompted) BOOL prompted; // @synthesize prompted=_prompted;
@property(readonly, nonatomic, getter=isTranslucent) BOOL translucent; // @synthesize translucent=_translucent;
@property(readonly, nonatomic) int barStyle; // @synthesize barStyle=_barStyle;
- (void).cxx_destruct;
- (id)simulatedBarMetricsByRemovingTintColor;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (id)unpromptedInstance;
- (id)promptedInstance;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)barEdge;
- (id)displayName;
- (void)applyMetricsToBar:(id)arg1;
- (Class)barClass;
- (id)ibWidgetType;
- (BOOL)isTranslucentForTargetRuntime:(id)arg1;
- (id)initWithStyle:(int)arg1 translucent:(BOOL)arg2 prompted:(BOOL)arg3 tintColor:(id)arg4 barTintColor:(id)arg5;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

