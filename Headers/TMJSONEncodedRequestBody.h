//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TMRequestBody-Protocol.h"

@class NSDictionary;

@interface TMJSONEncodedRequestBody : NSObject <TMRequestBody>
{
    NSDictionary *_JSONDictionary;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *JSONDictionary; // @synthesize JSONDictionary=_JSONDictionary;
- (_Bool)encodeParameters;
- (id)parameters;
- (id)bodyData;
- (id)contentEncoding;
- (id)contentType;
- (id)description;
- (id)initWithJSONDictionary:(id)arg1;

@end

