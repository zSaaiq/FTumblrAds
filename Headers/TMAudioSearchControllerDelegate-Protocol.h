//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSError, TMAudioSearchController;

@protocol TMAudioSearchControllerDelegate
- (void)audioSearchControllerResultsDidChange:(TMAudioSearchController *)arg1;
- (void)audioSearchController:(TMAudioSearchController *)arg1 didEndRequestWithError:(NSError *)arg2;
- (void)audioSearchControllerDidBeginRequest:(TMAudioSearchController *)arg1;
@end

