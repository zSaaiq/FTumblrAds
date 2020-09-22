//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TMTagsDataSource-Protocol.h"

@class NSArray, NSDictionary, NSString, NSURLSessionTask, TMAPIClient;

@interface TMTagsAutoCompleteDataSource : NSObject <TMTagsDataSource>
{
    NSString *_searchString;
    _Bool _appendPrefix;
    NSDictionary *_tagNames;
    NSArray *_sectionKeys;
    NSArray *_sectionTitles;
    TMAPIClient *_APIClient;
    NSURLSessionTask *_task;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURLSessionTask *task; // @synthesize task=_task;
@property(readonly, nonatomic) _Bool appendPrefix; // @synthesize appendPrefix=_appendPrefix;
@property(readonly, nonatomic) TMAPIClient *APIClient; // @synthesize APIClient=_APIClient;
@property(retain, nonatomic) NSArray *sectionTitles; // @synthesize sectionTitles=_sectionTitles;
@property(retain, nonatomic) NSArray *sectionKeys; // @synthesize sectionKeys=_sectionKeys;
@property(copy, nonatomic) NSDictionary *tagNames; // @synthesize tagNames=_tagNames;
- (void)cancel;
- (id)tagAtIndexPath:(id)arg1;
- (id)sectionHeaderAtIndex:(long long)arg1;
- (long long)numberOfTagsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)appendTagPrefix:(id)arg1;
- (void)reloadDataWithString:(id)arg1 parameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithPermittedTagNames:(id)arg1 APIClient:(id)arg2 appendPrefix:(_Bool)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

