//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, NSURL, TMAttribution;

@protocol TMPostFooterDelegate
- (void)postFooterDidTapEyeButton;
- (void)postFooterDidSelectWithRecommendationReasonURL:(NSURL *)arg1 destinationType:(NSString *)arg2;
- (void)postFooterDidSelectSeeAll;
- (void)postFooterDidSelectWithContentSource:(TMAttribution *)arg1;
- (void)postFooterDidLongPressWithTag:(NSString *)arg1 fromRect:(struct CGRect)arg2;
- (void)postFooterDidSelectWithTag:(NSString *)arg1;
@end

