//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC14DataDisplayKit42DefaultDataDisplayViewPaginationController : NSObject
{
    MISSING_TYPE *dataDisplayView;
    MISSING_TYPE *paginationHandler;
    MISSING_TYPE *paginationAbilityDeterminer;
    MISSING_TYPE *analyticsSender;
    MISSING_TYPE *isPaginating;
    MISSING_TYPE *lastContentOffset;
    MISSING_TYPE *pageCount;
}

- (void).cxx_destruct;
- (id)init;
- (void)loadingLatest;
- (void)stopPagination:(_Bool)arg1 error:(id)arg2;
- (void)layout;
- (void)forcePagination;
- (void)updateScrollContentOffsetAndDeterminePaginationAbility:(struct CGPoint)arg1 wantsPagination:(CDUnknownBlockType)arg2;

@end

