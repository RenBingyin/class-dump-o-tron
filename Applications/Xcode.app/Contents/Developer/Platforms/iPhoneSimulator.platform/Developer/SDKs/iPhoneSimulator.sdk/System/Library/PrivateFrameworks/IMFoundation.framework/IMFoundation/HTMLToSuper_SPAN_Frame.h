//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMFoundation/HTMLToSuper_Default_Frame.h>

@interface HTMLToSuper_SPAN_Frame : HTMLToSuper_Default_Frame
{
    _Bool _shouldPopBackgroundColor;
    _Bool _shouldPopForegroundColor;
    _Bool _shouldPopFontFamily;
    _Bool _shouldPopFontSize;
    _Bool _shouldDecrementBoldCount;
    _Bool _shouldDecrementItalicCount;
    _Bool _shouldDecrementUnderlineCount;
    _Bool _shouldDecrementStrikeCount;
}

- (void)parser:(id)arg1 context:(id)arg2 didEndElement:(id)arg3 namespaceURI:(id)arg4 qualifiedName:(id)arg5;
- (void)parser:(id)arg1 context:(id)arg2 didStartElement:(id)arg3 namespaceURI:(id)arg4 qualifiedName:(id)arg5 attributes:(id)arg6;

@end

