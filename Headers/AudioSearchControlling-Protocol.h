//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol TMAudioSearchControllerDelegate;

@protocol AudioSearchControlling <NSObject>
- (void)performSearchForSearchText:(NSString *)arg1;
- (_Bool)isTrending;
@property(nonatomic, readonly) NSArray *results;
@property(nonatomic, readonly) id <TMAudioSearchControllerDelegate> delegate;

// Remaining properties
@property(nonatomic, readonly) _Bool trending;
@end

