//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_TtP10GIFCreator28MediaPickerAnalyticsProvider_-Protocol.h"

@class MISSING_TYPE;

@interface _TtC9ComposeUI35ComposeMediaPickerAnalyticsProvider : NSObject <_TtP10GIFCreator28MediaPickerAnalyticsProvider_>
{
    MISSING_TYPE *screenID;
    MISSING_TYPE *analyticsBuffer;
}

- (void).cxx_destruct;
- (id)init;
- (void)mediaPickerDidDismissCamera;
- (void)mediaPickerDidPresentCamera;
- (void)mediaPickerSelectedAlbum;
- (void)mediaPickerDidTapFilterButton;
- (void)mediaPickerDidTapTextButton;
- (void)mediaPickerDidTapStickerButtonWithStickerDrawerOpen:(_Bool)arg1;
- (void)mediaPickerDidRemoveSticker:(id)arg1;
- (void)mediaPickerDidAddSticker:(id)arg1;
- (void)mediaPickerDidDeselectMedia:(long long)arg1;
- (void)mediaPickerDidSelectMedia:(long long)arg1;
- (void)mediaPickerDidDismiss;
- (void)mediaPickerDidLoadMediaWith:(id)arg1 endTime:(id)arg2;
- (id)initWithAnalyticsBuffer:(id)arg1;

@end

