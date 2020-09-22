//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TMComposeMediaStatusDelegate-Protocol.h"
#import "TMComposePostDataSource-Protocol.h"

@class FBKVOController, NSArray, NSMutableSet, NSSet, NSString, PSPhotoset, TMComposePhotosetCell, TMDefaultComposeFieldTableCellDelegate, TMPhotoPostParameters;
@protocol PSLightTableViewDelegate, TMCellsTransformer, TMComposeDataChangeDelegate, TMComposeDataSourceTableViewHandler, TMComposeFooterViewGIFButtonDelegate, TMSession;

@interface TMComposePhotoPostDataSource : NSObject <TMComposePostDataSource, TMComposeMediaStatusDelegate>
{
    _Bool _isEditing;
    NSArray *_cells;
    id <TMCellsTransformer> _cellsTransformer;
    id <TMComposeDataChangeDelegate> _dataChangeDelegate;
    id <TMComposeFooterViewGIFButtonDelegate> _GIFButtonDelegate;
    PSPhotoset *_photoset;
    NSMutableSet *_dominatedGestureRecognizerDelegates;
    TMComposePhotosetCell *_photosetCell;
    TMPhotoPostParameters *_parameters;
    id <TMComposeDataSourceTableViewHandler> _composeTableViewHandler;
    FBKVOController *_KVOController;
    NSMutableSet *_mediaItems;
    NSArray *_selectedMediaItems;
    TMDefaultComposeFieldTableCellDelegate *_tableCellDelegate;
    id <PSLightTableViewDelegate> _lightTableViewDelegate;
    NSSet *_permittedTagNames;
    id <TMSession> _session;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <TMSession> session; // @synthesize session=_session;
@property(readonly, nonatomic) NSSet *permittedTagNames; // @synthesize permittedTagNames=_permittedTagNames;
@property(readonly, nonatomic) __weak id <PSLightTableViewDelegate> lightTableViewDelegate; // @synthesize lightTableViewDelegate=_lightTableViewDelegate;
@property(retain, nonatomic) TMDefaultComposeFieldTableCellDelegate *tableCellDelegate; // @synthesize tableCellDelegate=_tableCellDelegate;
@property(retain, nonatomic) NSArray *selectedMediaItems; // @synthesize selectedMediaItems=_selectedMediaItems;
@property(retain, nonatomic) NSMutableSet *mediaItems; // @synthesize mediaItems=_mediaItems;
@property(retain, nonatomic) FBKVOController *KVOController; // @synthesize KVOController=_KVOController;
@property(retain, nonatomic) id <TMComposeDataSourceTableViewHandler> composeTableViewHandler; // @synthesize composeTableViewHandler=_composeTableViewHandler;
@property(retain, nonatomic) TMPhotoPostParameters *parameters; // @synthesize parameters=_parameters;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(retain, nonatomic) TMComposePhotosetCell *photosetCell; // @synthesize photosetCell=_photosetCell;
@property(retain, nonatomic) NSMutableSet *dominatedGestureRecognizerDelegates; // @synthesize dominatedGestureRecognizerDelegates=_dominatedGestureRecognizerDelegates;
@property(retain, nonatomic) PSPhotoset *photoset; // @synthesize photoset=_photoset;
@property(readonly, nonatomic) __weak id <TMComposeFooterViewGIFButtonDelegate> GIFButtonDelegate; // @synthesize GIFButtonDelegate=_GIFButtonDelegate;
@property(readonly, nonatomic) __weak id <TMComposeDataChangeDelegate> dataChangeDelegate; // @synthesize dataChangeDelegate=_dataChangeDelegate;
@property(retain, nonatomic) id <TMCellsTransformer> cellsTransformer; // @synthesize cellsTransformer=_cellsTransformer;
@property(readonly, nonatomic) NSArray *cells; // @synthesize cells=_cells;
- (void)updateLivePhotoPlaybackEnabled;
- (void)updateParametersWithPhotoPaths;
- (_Bool)isReadyToPublish;
- (void)removePhoto:(id)arg1;
- (void)removeAllPhotos;
- (void)addPhoto:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)adjustCellWidth:(id)arg1 width:(double)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
@property(readonly, nonatomic) unsigned long long numberOfPhotos;
- (id)footerProvider;
- (void)reloadCells;
- (void)dealloc;
- (id)footerViewOfTableView:(id)arg1;
- (id)initWithParameters:(id)arg1 session:(id)arg2 photoset:(id)arg3 selectedMediaItems:(id)arg4 lightTableViewDelegate:(id)arg5 cellsTransformer:(id)arg6 isEditing:(_Bool)arg7 permittedTagNames:(id)arg8 dataChangeDelegate:(id)arg9 GIFButtonDelegate:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
