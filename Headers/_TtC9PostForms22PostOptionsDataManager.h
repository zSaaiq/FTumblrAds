//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC9PostForms22PostOptionsDataManager : NSObject
{
    MISSING_TYPE *isRedesign;
    MISSING_TYPE *isAnswer;
    MISSING_TYPE *cachedTagsCellContentHeight;
    MISSING_TYPE *tagsOptionsModel;
    MISSING_TYPE *appColorScheme;
    MISSING_TYPE *tableViewSections;
    MISSING_TYPE *$__lazy_storage_$_additionalOptionsCell;
    MISSING_TYPE *$__lazy_storage_$_dateCell;
    MISSING_TYPE *$__lazy_storage_$_tagsCell;
    MISSING_TYPE *$__lazy_storage_$_scheduleCell;
    MISSING_TYPE *tagsDelegate;
    MISSING_TYPE *delegate;
    MISSING_TYPE *postOptions;
    MISSING_TYPE *suggestedTagsDataSource;
    MISSING_TYPE *controllerModel;
}

- (void).cxx_destruct;
- (id)init;
- (void)updateColors:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;

@end

