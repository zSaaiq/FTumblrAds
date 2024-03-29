//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class YMAdApp, YMAdFeedback, YMAdPhoto, YMAdVideo;

@protocol YMAdComponents <NSObject>
- (_Bool)hasFeedback;
- (_Bool)hasApp;
- (_Bool)hasVideo;
- (_Bool)hasPhoto;
- (YMAdFeedback *)feedback;
- (YMAdApp *)app;
- (YMAdVideo *)video;
- (YMAdPhoto *)photo;
@end

