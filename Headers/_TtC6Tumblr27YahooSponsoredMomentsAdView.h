//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YMAdVideoPlayerDelegate-Protocol.h"

@class MISSING_TYPE;

@interface _TtC6Tumblr27YahooSponsoredMomentsAdView : UIView <YMAdVideoPlayerDelegate>
{
    MISSING_TYPE *fingerTapButton;
    MISSING_TYPE *muteButton;
    MISSING_TYPE *backgroundGradient;
    MISSING_TYPE *volumeMuteImage;
    MISSING_TYPE *volumeOnImage;
    MISSING_TYPE *tapActionLabel;
    MISSING_TYPE *loadingControl;
    MISSING_TYPE *viewController;
    MISSING_TYPE *adUnitController;
    MISSING_TYPE *videoAdView;
    MISSING_TYPE *gradientOffset;
    MISSING_TYPE *mainViewsSetupComplete;
    MISSING_TYPE *clientSideAnaltyicsLogger;
    MISSING_TYPE *ad;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)imageViewDidFinishLoading:(id)arg1 withError:(id)arg2;
- (void)imageViewDidFinishLoading:(id)arg1;
- (void)imageViewDidCompleteFade:(id)arg1;
- (void)imageViewContentsDidChange:(id)arg1;
- (void)muteButtonTapped;
- (id)initWithCoder:(id)arg1;
- (void)videoPlaybackStatusChanged:(int)arg1;
- (void)adContentViewTapped;

@end

