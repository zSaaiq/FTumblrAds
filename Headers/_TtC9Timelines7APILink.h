//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDictionary, NSString;

@interface _TtC9Timelines7APILink : NSObject
{
    MISSING_TYPE *HREF;
    MISSING_TYPE *bodyParameters;
    MISSING_TYPE *apiRequestMethodName;
    MISSING_TYPE *type;
    MISSING_TYPE *queryParameters;
    MISSING_TYPE *meta;
}

- (void).cxx_destruct;
- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)path;
- (id)initWithUrlString:(id)arg1 apiRequestMethodName:(id)arg2 type:(int)arg3;
- (id)initWithUrlString:(id)arg1 apiRequestMethodName:(id)arg2 type:(int)arg3 bodyParameters:(id)arg4;
- (id)initWithDictionary:(id)arg1;
@property(nonatomic, copy) NSDictionary *queryParameters;
@property(nonatomic) int type; // @synthesize type;
@property(nonatomic, copy) NSString *apiRequestMethodName;
@property(nonatomic, copy) NSDictionary *bodyParameters;

@end

