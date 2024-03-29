//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString, TMMarkupStringBuilder;
@protocol TMMarkupDelegate;

@interface TMMarkup : NSObject <NSSecureCoding>
{
    NSString *_outputString;
    NSDictionary *_sections;
    unsigned long long _contentHash;
    TMMarkupStringBuilder *_stringBuilder;
    NSMutableDictionary *_mutableSections;
    NSDictionary *_tagNamesToConverters;
    id <TMMarkupDelegate> _delegate;
}

+ (_Bool)supportsSecureCoding;
+ (id)attachmentString;
- (void).cxx_destruct;
@property(nonatomic) __weak id <TMMarkupDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDictionary *tagNamesToConverters; // @synthesize tagNamesToConverters=_tagNamesToConverters;
@property(retain, nonatomic) NSMutableDictionary *mutableSections; // @synthesize mutableSections=_mutableSections;
@property(retain, nonatomic) TMMarkupStringBuilder *stringBuilder; // @synthesize stringBuilder=_stringBuilder;
@property(readonly, nonatomic) unsigned long long contentHash; // @synthesize contentHash=_contentHash;
@property(readonly, nonatomic) NSDictionary *sections; // @synthesize sections=_sections;
@property(readonly, nonatomic) NSString *outputString; // @synthesize outputString=_outputString;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (_Bool)canAddLinkToRange:(struct _NSRange)arg1 toSections:(id)arg2;
- (void)addSection:(id)arg1 withRange:(id)arg2 toDictionary:(id)arg3;
- (void)processNode:(id)arg1 parent:(id)arg2 childIndex:(long long)arg3 indexedChildCount:(unsigned long long)arg4 depth:(int)arg5;
- (id)init;
- (id)initWithHTML:(id)arg1 converters:(id)arg2 preprocessors:(id)arg3 delegate:(id)arg4 maxContentLength:(unsigned long long)arg5 truncationString:(id)arg6;
- (id)initWithHTML:(id)arg1 converters:(id)arg2 preprocessors:(id)arg3 delegate:(id)arg4;

@end

