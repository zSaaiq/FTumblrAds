//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC6Tumblr15TMSearchOptions : NSObject
{
    MISSING_TYPE *settingsReader;
    MISSING_TYPE *preferences;
    MISSING_TYPE *searchQuery;
    MISSING_TYPE *mode;
    MISSING_TYPE *context;
    MISSING_TYPE *postTypeFilter;
}

- (void).cxx_destruct;
- (id)init;
- (id)requestWithQueryParameters:(id)arg1;
- (id)dictionaryOfParametersWithLatest:(_Bool)arg1 offset:(unsigned long long)arg2 lastPost:(id)arg3 resultLimit:(unsigned long long)arg4;
@property(nonatomic, readonly) unsigned long long resultsType;
@property(nonatomic, readonly) NSString *query;
@property(nonatomic, copy) NSString *postTypeFilter;
@property(nonatomic, readonly) unsigned long long context; // @synthesize context;
@property(nonatomic) long long mode; // @synthesize mode;
@property(nonatomic, copy) NSString *searchQuery;

@end
