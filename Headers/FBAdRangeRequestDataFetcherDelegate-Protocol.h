//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBAdRangeRequestDataFetcher, NSData, NSError;

@protocol FBAdRangeRequestDataFetcherDelegate <NSObject>
- (void)rangeRequestDataFetcher:(FBAdRangeRequestDataFetcher *)arg1 didFinishFetchWithError:(NSError *)arg2;
- (void)rangeRequestDataFetcher:(FBAdRangeRequestDataFetcher *)arg1 didFinishFetchSuccessfullyWithData:(NSData *)arg2;
@end
