//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSSet, PKCatalog, PKPass;

@protocol PKPassLibraryExportedInterface
- (void)passRemoved:(PKPass *)arg1;
- (void)passUpdated:(PKPass *)arg1;
- (void)passAdded:(PKPass *)arg1;
- (void)removingPassesOfType:(unsigned long long)arg1 didFinishWithSuccess:(_Bool)arg2;
- (void)removingPassesOfType:(unsigned long long)arg1 didUpdateWithProgress:(double)arg2;
- (void)catalogChanged:(PKCatalog *)arg1 withNewPasses:(NSSet *)arg2;
@end

