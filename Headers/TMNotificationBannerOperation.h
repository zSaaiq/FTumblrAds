//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TMBannerOperation.h"

#import "_TtP8TumblrUI19TMImageViewDelegate_-Protocol.h"

@class NSDate, TMNotificationBannerView;

@interface TMNotificationBannerOperation : TMBannerOperation <_TtP8TumblrUI19TMImageViewDelegate_>
{
    _Bool _imagesLoaded;
    _Bool _avatarIconLoaded;
    _Bool _postIconLoaded;
    _Bool _didTimeout;
    NSDate *_timeoutDate;
    TMNotificationBannerView *_notificationAlertView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak TMNotificationBannerView *notificationAlertView; // @synthesize notificationAlertView=_notificationAlertView;
@property(retain, nonatomic) NSDate *timeoutDate; // @synthesize timeoutDate=_timeoutDate;
@property(nonatomic) _Bool didTimeout; // @synthesize didTimeout=_didTimeout;
@property(nonatomic) _Bool postIconLoaded; // @synthesize postIconLoaded=_postIconLoaded;
@property(nonatomic) _Bool avatarIconLoaded; // @synthesize avatarIconLoaded=_avatarIconLoaded;
@property(nonatomic) _Bool imagesLoaded; // @synthesize imagesLoaded=_imagesLoaded;
- (void)imageViewDidFinishLoading:(id)arg1 withError:(id)arg2;
- (void)imageViewDidFinishLoading:(id)arg1;
- (void)imageViewDidCompleteFade:(id)arg1;
- (void)imageViewContentsDidChange:(id)arg1;
- (void)updateReadyStatus;
- (_Bool)isReady;
- (id)initWithBanner:(id)arg1 isAnonymous:(_Bool)arg2;

@end
