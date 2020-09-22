//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TMComposeFieldTableCellDelegate-Protocol.h"

@class NSString, TMComposeFieldTableCell, TMLinkPostParameters, TMURLTitleFetcherOperation;
@protocol TMComposeDataChangeDelegate, TMSession;

@interface TMComposeLinkPostCellDelegate : NSObject <TMComposeFieldTableCellDelegate>
{
    _Bool _shouldProcessPostParameters;
    _Bool _shouldUsePasteboardURL;
    _Bool _shouldFetchTitle;
    TMLinkPostParameters *_linkPostParameters;
    TMComposeFieldTableCell *_titleCell;
    TMComposeFieldTableCell *_addressCell;
    id <TMComposeDataChangeDelegate> _dataChangeDelegate;
    TMURLTitleFetcherOperation *_titleFetcherOperation;
    id <TMSession> _session;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <TMSession> session; // @synthesize session=_session;
@property(retain, nonatomic) TMURLTitleFetcherOperation *titleFetcherOperation; // @synthesize titleFetcherOperation=_titleFetcherOperation;
@property(nonatomic) __weak id <TMComposeDataChangeDelegate> dataChangeDelegate; // @synthesize dataChangeDelegate=_dataChangeDelegate;
@property(nonatomic) __weak TMComposeFieldTableCell *addressCell; // @synthesize addressCell=_addressCell;
@property(nonatomic) __weak TMComposeFieldTableCell *titleCell; // @synthesize titleCell=_titleCell;
@property(readonly, nonatomic) _Bool shouldFetchTitle; // @synthesize shouldFetchTitle=_shouldFetchTitle;
@property(readonly, nonatomic) _Bool shouldUsePasteboardURL; // @synthesize shouldUsePasteboardURL=_shouldUsePasteboardURL;
@property(readonly, nonatomic) _Bool shouldProcessPostParameters; // @synthesize shouldProcessPostParameters=_shouldProcessPostParameters;
@property(readonly, nonatomic) TMLinkPostParameters *linkPostParameters; // @synthesize linkPostParameters=_linkPostParameters;
- (void)updateTitleCellForAddressFieldText;
- (void)tableCellDidEndEditing:(id)arg1;
- (void)tableCell:(id)arg1 didChangeText:(id)arg2;
- (void)tableCellDidMoveToSuperview:(id)arg1;
- (id)init;
- (id)initWithLinkPostParameters:(id)arg1 titleCell:(id)arg2 addressCell:(id)arg3 editingState:(_Bool)arg4 dataChangeDelegate:(id)arg5 session:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
