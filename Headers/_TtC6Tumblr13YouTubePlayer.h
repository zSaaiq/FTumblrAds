//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WKScriptMessageHandler-Protocol.h"

@class MISSING_TYPE;

@interface _TtC6Tumblr13YouTubePlayer : UIView <WKScriptMessageHandler>
{
    MISSING_TYPE *youTubeID;
    MISSING_TYPE *delegate;
    MISSING_TYPE *$__lazy_storage_$_webView;
    MISSING_TYPE *ready;
    MISSING_TYPE *currentTime;
    MISSING_TYPE *duration;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)layoutSubviews;

@end

