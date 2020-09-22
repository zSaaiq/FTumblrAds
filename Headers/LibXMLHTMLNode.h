//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTMLNode-Protocol.h"

@class NSArray, NSString;
@protocol HTMLNode;

@interface LibXMLHTMLNode : NSObject <HTMLNode>
{
    struct _xmlNode *_node;
}

@property(nonatomic) struct _xmlNode *node; // @synthesize node=_node;
@property(readonly, copy, nonatomic) NSString *rawContents;
@property(readonly, copy, nonatomic) NSString *allContents;
@property(readonly, nonatomic) unsigned int nodetype;
@property(readonly, copy, nonatomic) NSString *contents;
- (void)appendChildContentsToString:(id)arg1 inNode:(struct _xmlNode *)arg2;
- (id)init;
- (id)initWithXMLNode:(struct _xmlNode *)arg1;
- (id)findChildrenOfClass:(id)arg1;
- (id)findChildrenWithAttribute:(id)arg1 matchingName:(id)arg2 allowPartial:(_Bool)arg3;
- (id)findChildOfClass:(id)arg1;
- (id)findChildWithAttribute:(id)arg1 matchingName:(id)arg2 allowPartial:(_Bool)arg3;
- (id)findChildWithAttribute:(const char *)arg1 matchingName:(const char *)arg2 inXMLNode:(struct _xmlNode *)arg3 allowPartial:(_Bool)arg4;
@property(readonly, copy, nonatomic) NSArray *children;
- (id)findChildTag:(id)arg1;
- (id)findChildTag:(id)arg1 inXMLNode:(struct _xmlNode *)arg2;
- (id)findChildTags:(id)arg1;
- (void)findChildTags:(id)arg1 inXMLNode:(struct _xmlNode *)arg2 inArray:(id)arg3;
- (void)findChildrenWithAttribute:(const char *)arg1 matchingName:(const char *)arg2 inXMLNode:(struct _xmlNode *)arg3 inArray:(id)arg4 allowPartial:(_Bool)arg5;
@property(readonly, nonatomic) id <HTMLNode> firstChild;
@property(readonly, copy, nonatomic) NSString *tagName;
@property(readonly, copy, nonatomic) NSString *className;
- (id)getAttributeNamed:(id)arg1;
@property(readonly, nonatomic) id <HTMLNode> previousSibling;
@property(readonly, nonatomic) id <HTMLNode> nextSibling;
@property(readonly, nonatomic) id <HTMLNode> parent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
