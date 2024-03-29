//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TMComposeFieldTableCellDelegate-Protocol.h"
#import "TMComposePostDataSource-Protocol.h"
#import "TMComposeVideoLinkCellDelegate-Protocol.h"
#import "TMComposeVideoPreviewCellDelegate-Protocol.h"

@class NSArray, NSSet, NSString, TMWebVideoPostParameters, _TtC9ComposeUI23WebVideoMetaDataFetcher;
@protocol TMCellsTransformer, TMComposeDataChangeDelegate, TMComposeDataSourceTableViewHandler, TMComposeFooterViewGIFButtonDelegate, TMComposeInlineControllerPresenter, TMSession;

@interface TMComposeWebVideoPostDataSource : NSObject <TMComposeVideoLinkCellDelegate, TMComposeFieldTableCellDelegate, TMComposeVideoPreviewCellDelegate, TMComposePostDataSource>
{
    _Bool _isEditing;
    NSArray *_cells;
    id <TMCellsTransformer> _cellsTransformer;
    id <TMComposeDataChangeDelegate> _dataChangeDelegate;
    id <TMComposeFooterViewGIFButtonDelegate> _GIFButtonDelegate;
    TMWebVideoPostParameters *_parameters;
    id <TMComposeDataSourceTableViewHandler> _composeTableViewHandler;
    NSSet *_permittedTagNames;
    id <TMComposeInlineControllerPresenter> _inlineControllerPresenter;
    _TtC9ComposeUI23WebVideoMetaDataFetcher *_webVideoMetaDataFetcher;
    id <TMSession> _session;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <TMSession> session; // @synthesize session=_session;
@property(readonly, nonatomic) _TtC9ComposeUI23WebVideoMetaDataFetcher *webVideoMetaDataFetcher; // @synthesize webVideoMetaDataFetcher=_webVideoMetaDataFetcher;
@property(retain, nonatomic) id <TMComposeInlineControllerPresenter> inlineControllerPresenter; // @synthesize inlineControllerPresenter=_inlineControllerPresenter;
@property(readonly, nonatomic) NSSet *permittedTagNames; // @synthesize permittedTagNames=_permittedTagNames;
@property(readonly, nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(retain, nonatomic) id <TMComposeDataSourceTableViewHandler> composeTableViewHandler; // @synthesize composeTableViewHandler=_composeTableViewHandler;
@property(retain, nonatomic) TMWebVideoPostParameters *parameters; // @synthesize parameters=_parameters;
@property(readonly, nonatomic) __weak id <TMComposeFooterViewGIFButtonDelegate> GIFButtonDelegate; // @synthesize GIFButtonDelegate=_GIFButtonDelegate;
@property(readonly, nonatomic) __weak id <TMComposeDataChangeDelegate> dataChangeDelegate; // @synthesize dataChangeDelegate=_dataChangeDelegate;
@property(retain, nonatomic) id <TMCellsTransformer> cellsTransformer; // @synthesize cellsTransformer=_cellsTransformer;
@property(readonly, nonatomic) NSArray *cells; // @synthesize cells=_cells;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)footerViewOfTableView:(id)arg1;
- (void)didRemovePreviewForComposeVideoPreviewCell:(id)arg1;
- (id)videoURLCell;
- (id)webVideoCellWithParameters:(id)arg1;
- (void)reloadWebVideoCell;
- (void)composeVideoLinkCell:(id)arg1 didRemoveURL:(id)arg2;
- (void)tableCellRequestedNextField:(id)arg1;
- (void)tableCellDidClear:(id)arg1;
- (void)tableCellDidEndEditing:(id)arg1;
- (void)tableCell:(id)arg1 didChangeText:(id)arg2;
- (void)tableCellDidMoveToSuperview:(id)arg1;
- (void)updateMetaDataAndPreviewCellForURL:(id)arg1;
- (void)reloadCells;
- (id)init;
- (id)initWithParameters:(id)arg1 isEditing:(_Bool)arg2 cellsTransformer:(id)arg3 permittedTagNames:(id)arg4 dataChangeDelegate:(id)arg5 GIFButtonDelegate:(id)arg6 inlineControllerPresenter:(id)arg7 session:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

