//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController;

@interface TMPostHeaderTapHandlerResult : NSObject
{
    _Bool _tapHandled;
    UIViewController *_destinationBlogViewController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIViewController *destinationBlogViewController; // @synthesize destinationBlogViewController=_destinationBlogViewController;
@property(readonly, nonatomic, getter=wasTapHandled) _Bool tapHandled; // @synthesize tapHandled=_tapHandled;
- (id)initWithDestinationBlogViewController:(id)arg1 tapHandled:(_Bool)arg2;
- (id)init;

@end

