//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE, NSDictionary, NSURL;
@protocol TMRequestBody;

@interface _TtC6Tumblr11GDPRRequest : _TtCs12_SwiftObject
{
    MISSING_TYPE *apiRequest;
    MISSING_TYPE *isSigned;
    MISSING_TYPE *isUpload;
}

- (id)requestByAddingAdditionalHeaders:(id)arg1;
- (id)requestByAddingQueryParameters:(id)arg1;
@property(nonatomic, readonly) NSDictionary *queryParameters;
@property(nonatomic) _Bool isUpload; // @synthesize isUpload;
@property(nonatomic, readonly) int method;
@property(nonatomic) _Bool isSigned; // @synthesize isSigned;
@property(nonatomic, readonly) id <TMRequestBody> requestBody;
@property(nonatomic, readonly) NSURL *URL;
@property(nonatomic, readonly) NSDictionary *additionalHeaders;

@end

