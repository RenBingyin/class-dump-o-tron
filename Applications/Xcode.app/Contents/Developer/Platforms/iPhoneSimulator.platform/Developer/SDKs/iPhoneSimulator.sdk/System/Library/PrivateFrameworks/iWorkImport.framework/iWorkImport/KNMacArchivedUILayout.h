//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class KNMacUILayout;

__attribute__((visibility("hidden")))
@interface KNMacArchivedUILayout : TSPObject
{
    KNMacUILayout *mUILayout;
}

@property(readonly, nonatomic) KNMacUILayout *uiLayout; // @synthesize uiLayout=mUILayout;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)dealloc;
- (id)initWithUILayout:(id)arg1 context:(id)arg2;

@end

