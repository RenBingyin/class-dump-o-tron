//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OCXReadState.h>

@class CXNamespace, OAXDrawingState;

__attribute__((visibility("hidden")))
@interface ODXState : OCXReadState
{
    CXNamespace *mODXDiagramNamespace;
    OAXDrawingState *mOfficeArtState;
}

@property(retain, nonatomic) CXNamespace *ODXDiagramNamespace; // @synthesize ODXDiagramNamespace=mODXDiagramNamespace;
- (void)setupNSForXMLFormat:(int)arg1;
- (id)officeArtState;
- (void)dealloc;
- (id)initWithOfficeArtState:(id)arg1;

@end

