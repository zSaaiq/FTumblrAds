//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FlurryAdExternalWebView, NSError, NSURL;

@protocol FlurryAdExternalWebViewDelegate <NSObject>
- (void)flurryAdExternalWebViewDidFailLoad:(FlurryAdExternalWebView *)arg1 error:(NSError *)arg2;
- (void)flurryAdExternalWebViewDidFinishLoad:(FlurryAdExternalWebView *)arg1;
- (_Bool)flurryAdExternalWebView:(FlurryAdExternalWebView *)arg1 openAppUrl:(NSURL *)arg2;
- (void)flurryAdExternalWebViewDidClose:(FlurryAdExternalWebView *)arg1 withResult:(int)arg2;
@end

