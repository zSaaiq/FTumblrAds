//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSString, NSURL;

@interface GADAdViewResourceRequest : NSObject
{
    NSArray *_equalityHints;
    NSURL *_URL;
    NSURL *_mainDocumentURL;
    NSString *_method;
    NSDictionary *_headers;
    NSData *_body;
}

@property(readonly, copy, nonatomic) NSData *body; // @synthesize body=_body;
@property(readonly, copy, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(readonly, copy, nonatomic) NSString *method; // @synthesize method=_method;
@property(readonly, copy, nonatomic) NSURL *mainDocumentURL; // @synthesize mainDocumentURL=_mainDocumentURL;
@property(readonly, copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (id)dictionaryRepresentationExcludingHeaders:(id)arg1;
- (id)resourceRequestWithHeaders:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithRequest:(id)arg1;
- (id)initWithResourceRequest:(id)arg1;

@end

