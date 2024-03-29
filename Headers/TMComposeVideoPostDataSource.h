//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TMComposePostDataSource-Protocol.h"

@class NSArray, NSSet, NSString, NSURL, TMComposeVideoCell, TMDefaultComposeFieldTableCellDelegate, TMVideoPost, TMVideoPostParameters;
@protocol TMCellsTransformer, TMComposeDataChangeDelegate, TMComposeDataSourceTableViewHandler, TMComposeFooterViewGIFButtonDelegate, TMSession;

@interface TMComposeVideoPostDataSource : NSObject <TMComposePostDataSource>
{
    _Bool _isEditing;
    NSArray *_cells;
    id <TMCellsTransformer> _cellsTransformer;
    id <TMComposeDataChangeDelegate> _dataChangeDelegate;
    id <TMComposeFooterViewGIFButtonDelegate> _GIFButtonDelegate;
    NSURL *_URL;
    TMComposeVideoCell *_videoCell;
    TMVideoPostParameters *_postParameters;
    TMVideoPost *_videoPost;
    NSSet *_permittedTagNames;
    id <TMComposeDataSourceTableViewHandler> _composeTableViewHandler;
    TMDefaultComposeFieldTableCellDelegate *_tableCellDelegate;
    id <TMSession> _session;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <TMSession> session; // @synthesize session=_session;
@property(retain, nonatomic) TMDefaultComposeFieldTableCellDelegate *tableCellDelegate; // @synthesize tableCellDelegate=_tableCellDelegate;
@property(retain, nonatomic) id <TMComposeDataSourceTableViewHandler> composeTableViewHandler; // @synthesize composeTableViewHandler=_composeTableViewHandler;
@property(readonly, nonatomic) NSSet *permittedTagNames; // @synthesize permittedTagNames=_permittedTagNames;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(retain, nonatomic) TMVideoPost *videoPost; // @synthesize videoPost=_videoPost;
@property(retain, nonatomic) TMVideoPostParameters *postParameters; // @synthesize postParameters=_postParameters;
@property(retain, nonatomic) TMComposeVideoCell *videoCell; // @synthesize videoCell=_videoCell;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) __weak id <TMComposeFooterViewGIFButtonDelegate> GIFButtonDelegate; // @synthesize GIFButtonDelegate=_GIFButtonDelegate;
@property(readonly, nonatomic) __weak id <TMComposeDataChangeDelegate> dataChangeDelegate; // @synthesize dataChangeDelegate=_dataChangeDelegate;
@property(retain, nonatomic) id <TMCellsTransformer> cellsTransformer; // @synthesize cellsTransformer=_cellsTransformer;
@property(readonly, nonatomic) NSArray *cells; // @synthesize cells=_cells;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableCellRequestedNextField:(id)arg1;
- (void)tableCellDidMoveToSuperview:(id)arg1;
- (void)updatePlayerForURL:(_Bool)arg1;
- (void)reloadCells;
- (id)footerViewOfTableView:(id)arg1;
- (id)initWithParameters:(id)arg1 session:(id)arg2 isEditing:(_Bool)arg3 videoPost:(id)arg4 cellsTransformer:(id)arg5 permittedTagNames:(id)arg6 dataChangeDelegate:(id)arg7 GIFButtonDelegate:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

