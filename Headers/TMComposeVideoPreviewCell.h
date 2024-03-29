//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "TMHeightRequiring-Protocol.h"
#import "TMVideoPlaybackViewDelegate-Protocol.h"

@class NSString, UILabel;
@protocol TMComposeVideoPreviewCellDelegate;

@interface TMComposeVideoPreviewCell : UITableViewCell <TMVideoPlaybackViewDelegate, TMHeightRequiring>
{
    id <TMComposeVideoPreviewCellDelegate> _delegate;
    UILabel *_providerLabel;
    struct CGSize _videoSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UILabel *providerLabel; // @synthesize providerLabel=_providerLabel;
@property(readonly, nonatomic) __weak id <TMComposeVideoPreviewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
- (void)didTapOnRemoveMediaButton:(id)arg1;
- (void)videoPlaybackView:(id)arg1 didTapPlayPauseButton:(id)arg2;
@property(readonly, nonatomic) double heightRequired;
- (id)initWithURL:(id)arg1 placeholderImageURL:(id)arg2 videoSize:(struct CGSize)arg3 providerName:(id)arg4 audioSessionManager:(id)arg5 delegate:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

