//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDictionary.h"

@class NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface WebElementDictionary : NSDictionary
{
    struct HitTestResult *_result;
    NSMutableDictionary *_cache;
    NSMutableSet *_nilValues;
    _Bool _cacheComplete;
}

+ (void)initializeLookupTable;
+ (void)initialize;
- (id)_isInScrollBar;
- (id)_isContentEditable;
- (id)_isLiveLink;
- (id)_textContent;
- (id)_titleDisplayString;
- (id)_targetWebFrame;
- (id)_absoluteLinkURL;
- (id)_title;
- (id)_isSelected;
- (id)_absoluteMediaURL;
- (id)_absoluteImageURL;
- (id)_spellingToolTip;
- (id)_altDisplayString;
- (id)_webFrame;
- (id)_domNode;
- (id)objectForKey:(id)arg1;
- (id)keyEnumerator;
- (unsigned long long)count;
- (void)_fillCache;
- (void)finalize;
- (void)dealloc;
- (id)initWithHitTestResult:(const struct HitTestResult *)arg1;

@end

