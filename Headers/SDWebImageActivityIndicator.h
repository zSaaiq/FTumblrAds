//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDWebImageIndicator-Protocol.h"

@class NSString, UIActivityIndicatorView;

@interface SDWebImageActivityIndicator : NSObject <SDWebImageIndicator>
{
    UIActivityIndicatorView *_indicatorView;
}

+ (id)mediumIndicator;
+ (id)largeIndicator;
+ (id)whiteLargeIndicator;
+ (id)whiteIndicator;
+ (id)grayLargeIndicator;
+ (id)grayIndicator;
- (void).cxx_destruct;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
- (void)stopAnimatingIndicator;
- (void)startAnimatingIndicator;
- (void)commonInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
