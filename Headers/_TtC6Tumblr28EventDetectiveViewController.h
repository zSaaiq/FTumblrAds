//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UISearchBarDelegate-Protocol.h"
#import "_TtP9Analytics28AnalyticsBufferEventListener_-Protocol.h"

@class MISSING_TYPE;

@interface _TtC6Tumblr28EventDetectiveViewController : UIViewController <_TtP9Analytics28AnalyticsBufferEventListener_, UISearchBarDelegate>
{
    MISSING_TYPE *EventDetectiveChangeNotificationKey;
    MISSING_TYPE *window;
    MISSING_TYPE *$__lazy_storage_$_detectiveView;
    MISSING_TYPE *$__lazy_storage_$_eventController;
    MISSING_TYPE *detectiveViewVisible;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)eventsTracked:(id)arg1;
- (void)didUpdateWantsEventDetectiveWithNotification:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
