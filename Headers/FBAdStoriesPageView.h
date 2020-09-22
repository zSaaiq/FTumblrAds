//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBAdVideoRendererViewDelegate-Protocol.h"

@class FBAdTimer, FBAdVideoRendererView, NSString, UIImageView;
@protocol FBAdStoriesPageViewDelegate;

@interface FBAdStoriesPageView : UIView <FBAdVideoRendererViewDelegate>
{
    double _volume;
    id <FBAdStoriesPageViewDelegate> _delegate;
    FBAdTimer *_imageViewTimer;
    UIImageView *_imageView;
    FBAdVideoRendererView *_videoRendererView;
    CDStruct_1b6d18a9 _imageViewCurrentTime;
}

@property(retain, nonatomic) FBAdVideoRendererView *videoRendererView; // @synthesize videoRendererView=_videoRendererView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) FBAdTimer *imageViewTimer; // @synthesize imageViewTimer=_imageViewTimer;
@property(nonatomic) CDStruct_1b6d18a9 imageViewCurrentTime; // @synthesize imageViewCurrentTime=_imageViewCurrentTime;
@property(nonatomic) __weak id <FBAdStoriesPageViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double volume; // @synthesize volume=_volume;
- (void).cxx_destruct;
- (void)pageTimer:(id)arg1;
- (void)videoViewDidEnd:(id)arg1;
- (void)videoView:(id)arg1 didFailWithError:(id)arg2;
- (void)videoViewDidLoad:(id)arg1;
- (CDStruct_1b6d18a9)defaultImageDisplayDuration;
@property(nonatomic) CDStruct_1b6d18a9 currentTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
- (_Bool)isPlaying;
- (void)pauseContent;
- (void)playContent;
- (void)layoutSubviews;
- (void)fadeInView:(id)arg1;
- (void)configureAsVideoPageWithDataModel:(id)arg1 placementDefinition:(id)arg2 pageIndex:(long long)arg3 pageCount:(long long)arg4;
- (void)configureAsImagePageWithDataModel:(id)arg1;
- (void)configureWithDataModel:(id)arg1 placementDefinition:(id)arg2 pageIndex:(long long)arg3 pageCount:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

