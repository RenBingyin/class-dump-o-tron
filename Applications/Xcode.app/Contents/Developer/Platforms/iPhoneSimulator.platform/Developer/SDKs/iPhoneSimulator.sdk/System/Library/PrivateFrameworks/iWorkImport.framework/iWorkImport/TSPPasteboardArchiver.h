//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSPArchiver.h>

__attribute__((visibility("hidden")))
@interface TSPPasteboardArchiver : TSPArchiver
{
    id <TSPProxyObjectManager> _proxyManager;
}

@property(nonatomic) __weak id <TSPProxyObjectManager> proxyManager; // @synthesize proxyManager=_proxyManager;
- (void).cxx_destruct;
- (void)setWeakLazyReference:(id)arg1 message:(struct Reference *)arg2;
- (void)setStrongLazyReference:(id)arg1 message:(struct Reference *)arg2;
- (void)setWeakReference:(id)arg1 message:(struct Reference *)arg2;
- (void)setStrongReference:(id)arg1 message:(struct Reference *)arg2;
- (_Bool)forPasteboard;

@end

