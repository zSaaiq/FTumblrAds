//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol FBAdDSLDataLoaderDelegate;

@interface FBAdDSLDataLoader : NSObject
{
    id <FBAdDSLDataLoaderDelegate> _delegate;
}

@property(nonatomic) __weak id <FBAdDSLDataLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)loadAssetsFromAdModel:(id)arg1;

@end

