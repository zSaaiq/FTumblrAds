//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNumber, TMPost, TMPostControl;

@protocol KeyCommandPostDelegate <NSObject>
- (void)likePost:(TMPost *)arg1 carouselIndex:(NSNumber *)arg2;
- (void)fastReblogPost:(TMPost *)arg1 fromPoint:(struct CGPoint)arg2 fromKeyCommand:(_Bool)arg3 fromControl:(TMPostControl *)arg4;
- (void)dismissPopovers;
@end

