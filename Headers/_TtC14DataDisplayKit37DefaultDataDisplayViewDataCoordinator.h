//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC14DataDisplayKit37DefaultDataDisplayViewDataCoordinator : NSObject
{
    MISSING_TYPE *dataDisplayViewUpdater;
    MISSING_TYPE *dataDisplayViewDataSource;
    MISSING_TYPE *dataDisplayViewPrefetchingDataSource;
    MISSING_TYPE *dataDisplayViewDelegate;
    MISSING_TYPE *emptyViewManager;
    MISSING_TYPE *dataDisplayViewUpdaterDelegate;
    MISSING_TYPE *dataDisplayView;
}

- (void).cxx_destruct;
- (id)init;
- (void)showOrHideEmptyView:(_Bool)arg1 errorCode:(long long)arg2;
- (void)forceRetryPagination;
- (void)cancel;
- (void)reload;
- (void)reloadEmptyView;
- (void)layoutEmptyView;
- (void)layout;
- (void)syncContentOffset:(struct CGPoint)arg1;
@property(nonatomic, readonly) _Bool isLoading;
- (void)dealloc;

@end

