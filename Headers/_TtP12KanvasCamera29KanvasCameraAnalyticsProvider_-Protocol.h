//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

@protocol _TtP12KanvasCamera29KanvasCameraAnalyticsProvider_
- (void)logAdvancedOptionsOpenWithPage:(NSString *)arg1;
- (void)logEditorGIFChangeWithTrimStart:(double)arg1 trimEnd:(double)arg2;
- (void)logEditorGIFChangeWithSpeed:(float)arg1;
- (void)logEditorGIFChangeWithPlaybackMode:(long long)arg1;
- (void)logEditorGIFConfirmWithDuration:(double)arg1 playbackMode:(long long)arg2 speed:(float)arg3;
- (void)logEditorGIFRevert;
- (void)logEditorGIFOpenSpeed;
- (void)logEditorGIFOpenTrim;
- (void)logEditorGIFOpen;
- (void)logEditorGIFButtonToggle:(_Bool)arg1;
- (void)logEditorStickerMoveWithStickerId:(NSString *)arg1;
- (void)logEditorStickerRemoveWithStickerId:(NSString *)arg1;
- (void)logEditorStickerAddWithStickerId:(NSString *)arg1;
- (void)logEditorStickerPackSelectWithStickerPackId:(NSString *)arg1;
- (void)logEditorMediaDrawerSelectStickers;
- (void)logEditorMediaDrawerClosed;
- (void)logEditorMediaDrawerOpen;
- (void)logIconPresentedOnDashboard;
- (void)logEditorTagTapped;
- (void)logOpenComposeFromDashboard;
- (void)logSaveFromDashboard;
- (void)logChangeBlogForPostFromDashboard;
- (void)logPostFromDashboard;
- (void)logDismissFromDashboardWithDismissAction:(long long)arg1;
- (void)logOpenFromDashboardWithOpenAction:(long long)arg1;
- (void)logEditorCreatedMediaWithClipsCount:(long long)arg1 length:(double)arg2;
- (void)logEditorTextChangeWithColor:(_Bool)arg1;
- (void)logEditorTextChangeWithHighlighted:(_Bool)arg1;
- (void)logEditorTextChangeWithAlignment:(long long)arg1;
- (void)logEditorTextChangeWithFont:(long long)arg1;
- (void)logEditorTextRemove;
- (void)logEditorTextMove;
- (void)logEditorTextConfirmWithIsNew:(_Bool)arg1 font:(long long)arg2 alignment:(long long)arg3 highlighted:(_Bool)arg4;
- (void)logEditorTextEdit;
- (void)logEditorTextAdd;
- (void)logEditorDrawingConfirm;
- (void)logEditorDrawingEraserWithBrushType:(long long)arg1 strokeSize:(float)arg2 drawType:(long long)arg3;
- (void)logEditorDrawingUndo;
- (void)logEditorDrawStrokeWithBrushType:(long long)arg1 strokeSize:(float)arg2 drawType:(long long)arg3;
- (void)logEditorDrawingChangeColorWithSelectionTool:(long long)arg1;
- (void)logEditorDrawingChangeBrushWithBrushType:(long long)arg1;
- (void)logEditorDrawingChangeStrokeSizeWithStrokeSize:(float)arg1;
- (void)logEditorDrawingOpen;
- (void)logEditorFilterSelectedWithFilterType:(long long)arg1;
- (void)logEditorFiltersOpen;
- (void)logEditorBack;
- (void)logEditorOpen;
- (void)logMediaPickerPickedMediaOfType:(long long)arg1;
- (void)logMediaPickerDismiss;
- (void)logMediaPickerOpen;
- (void)logFilterSelectedWithFilterType:(long long)arg1;
- (void)logOpenFiltersSelector;
- (void)logConfirmedMediaWithMode:(long long)arg1 clipsCount:(long long)arg2 length:(double)arg3;
- (void)logSwipedZoom;
- (void)logPinchedZoom;
- (void)logMovedClip;
- (void)logPreviewDismissed;
- (void)logNextTapped;
- (void)logUndoTapped;
- (void)logImagePreviewToggledWithEnabled:(_Bool)arg1;
- (void)logFlashToggled;
- (void)logDeleteSegment;
- (void)logFlipCamera;
- (void)logCapturedMediaWithType:(long long)arg1 cameraPosition:(long long)arg2 length:(double)arg3 ghostFrameEnabled:(_Bool)arg4 filterType:(long long)arg5;
- (void)logDismiss;
- (void)logCameraOpenWithMode:(long long)arg1;
@end

