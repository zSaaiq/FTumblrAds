//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, UIImage;

@protocol YVPlayerErrorOverlayDelegate <NSObject>
- (void)handlePlayButtonPressed;
- (_Bool)userCanActToEnableLocation;
- (long long)thumbnailImageContentMode;
- (UIImage *)thumbnailImage;
- (NSError *)currentError;
- (void)recoverFromMissingLocationError;
- (void)showLiveStatsOverlay;
@end

