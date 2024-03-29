//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_TtP14DataDisplayKit27TableViewCellHeightProvider_-Protocol.h"

@class TMTimelineObjectHeightCalculator, _TtC22TimelineViewManagement21PostViewConfiguration, _TtC8TumblrUI32TableViewTimelineObjectRetriever;

@interface TMTimelineTableViewCellHeightProvider : NSObject <_TtP14DataDisplayKit27TableViewCellHeightProvider_>
{
    _Bool _scrollsDownward;
    _TtC22TimelineViewManagement21PostViewConfiguration *_viewConfiguration;
    _TtC8TumblrUI32TableViewTimelineObjectRetriever *_timelineObjectRetriever;
    TMTimelineObjectHeightCalculator *_timelineObjectHeightCalculator;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool scrollsDownward; // @synthesize scrollsDownward=_scrollsDownward;
@property(readonly, nonatomic) TMTimelineObjectHeightCalculator *timelineObjectHeightCalculator; // @synthesize timelineObjectHeightCalculator=_timelineObjectHeightCalculator;
@property(readonly, nonatomic) _TtC8TumblrUI32TableViewTimelineObjectRetriever *timelineObjectRetriever; // @synthesize timelineObjectRetriever=_timelineObjectRetriever;
@property(retain, nonatomic) _TtC22TimelineViewManagement21PostViewConfiguration *viewConfiguration; // @synthesize viewConfiguration=_viewConfiguration;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)initWithTimelineObjectRetriever:(id)arg1 timelineObjectHeightCalculator:(id)arg2 postViewConfiguration:(id)arg3 scrollsDownward:(_Bool)arg4;

@end

