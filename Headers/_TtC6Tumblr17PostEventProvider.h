//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC6Tumblr17PostEventProvider : NSObject
{
    MISSING_TYPE *screenID;
    MISSING_TYPE *postInfo;
    MISSING_TYPE *analyticsBuffer;
    MISSING_TYPE *screenEventProvider;
}

+ (id)providerWithPostInfo:(id)arg1 screenIdentifier:(id)arg2 analyticsBuffer:(id)arg3;
- (void).cxx_destruct;
- (id)init;
- (id)noteHighlightClickEvent;
- (id)tappedBlogNameEventWithType:(long long)arg1 target:(long long)arg2;
- (id)seeAllTagsButtonTappedEvent;
- (id)showRecommendationsEvent;
- (id)bloglessAdClickthroughEvent;
- (id)censoredPostShownEvent;
- (id)panoramaPhotoVisibilityThresholdReachedEvent;
- (id)panoramaPhotoPanEvent;
- (id)panoramaPhotoTapEvent;
- (id)photoCarouselClickEventWithOffset:(long long)arg1 isNativeURL:(_Bool)arg2;
- (id)photoCarouselSlideEventWithOrigin:(long long)arg1 destination:(long long)arg2;
- (id)appAttributionOpenEvent:(id)arg1;
- (id)appAttributionInstallEvent:(id)arg1;
- (id)appAttributionTappedEvent:(id)arg1;
- (id)actionButtonTapThroughWithNativeURL:(_Bool)arg1 carouselIndex:(id)arg2;
- (id)appOpenEvent:(id)arg1;
- (id)appInstallEvent:(id)arg1;
- (id)clickthroughTapEvent:(id)arg1 isNativeURL:(_Bool)arg2;
- (id)clickthroughLongPressEvent:(id)arg1;
- (id)GIFPhotoTapEvent;
- (id)GIFPanEvent;
- (id)photoTapEvent:(id)arg1;
- (id)photoLongPressEvent:(id)arg1;
- (id)audioPostPlayedEvent;
- (id)recommendationReasonTapEventWithDestinationType:(id)arg1;
- (id)readMoreEvent:(id)arg1;
- (id)fastReblogEvent:(id)arg1;
- (id)unlikeEvent:(id)arg1;
- (id)sharePostEvent:(id)arg1;
- (id)replyIconTapEvent:(id)arg1;
- (id)queuePostControlLongPressEvent:(id)arg1;
- (id)queuePostControlTapEvent:(id)arg1;
- (id)reblogPostControlLongPressEvent:(id)arg1;
- (id)reblogPostControlTapEvent:(id)arg1 usePostFormHeaderRedesign:(_Bool)arg2;
- (id)contentSourceTapEvent:(id)arg1;
- (id)postTagTapEvent:(id)arg1;
- (id)postAvatarTapEvent:(id)arg1;
- (id)postHeaderTapEvent:(id)arg1;
- (id)postHeaderReblogLabelTapEvent:(id)arg1;
- (id)notesPostControlTapEvent:(id)arg1;
- (id)inlineLinkTapEvent:(id)arg1;
- (id)likeEvent:(id)arg1;
- (id)doubleTapLikeEvent:(id)arg1;
- (id)editPostEvent;
- (id)deletePostEvent;
- (id)queueReorderEvent;
- (id)initWithScreenID:(id)arg1 postInfo:(id)arg2 analyticsBuffer:(id)arg3;

@end
