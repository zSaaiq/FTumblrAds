//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FlurryHTTPURLResponse, FlurryURLSessionTask;

@protocol FlurryURLSessionTaskDelegate <NSObject>
- (void)flurryUrlRequestDidSucceed:(FlurryURLSessionTask *)arg1 withResponse:(FlurryHTTPURLResponse *)arg2;
- (void)flurryUrlRequestDidCancel:(FlurryURLSessionTask *)arg1 withResponse:(FlurryHTTPURLResponse *)arg2;
- (void)flurryUrlRequestDidFail:(FlurryURLSessionTask *)arg1 withResponse:(FlurryHTTPURLResponse *)arg2;
@end

