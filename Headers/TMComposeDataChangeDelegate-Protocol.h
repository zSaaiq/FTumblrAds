//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;
@protocol TMComposePostDataSource;

@protocol TMComposeDataChangeDelegate <NSObject>
- (void)composePostDataSource:(id <TMComposePostDataSource>)arg1 didChangeCellsAtIndexPaths:(NSArray *)arg2;
- (void)compositionDidChangeDataRequiringTableViewCellsReload:(_Bool)arg1 requiresCellsHeightUpdate:(_Bool)arg2;
- (void)compositionDidChangeData;
@end

