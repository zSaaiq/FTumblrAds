//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TMPostMarkupToAttributedStringConverter : NSObject
{
}

+ (void)addFigureToString:(id)arg1 fromDescriptor:(id)arg2 figureAssets:(id)arg3 range:(struct _NSRange)arg4 insets:(struct UIEdgeInsets)arg5;
+ (double)indexForLists:(id)arg1 blockQuotes:(id)arg2 inRange:(id)arg3 listsWidth:(double)arg4 blockQuoteWidth:(double)arg5;
+ (double)indentForRanges:(id)arg1 atIndex:(long long)arg2 width:(double)arg3;
+ (id)paragraphStyleWithIndent:(double)arg1;
+ (struct UIEdgeInsets)insetsForImageRange:(struct _NSRange)arg1 inRanges:(id)arg2 width:(double)arg3 descriptor:(id)arg4;
+ (struct UIEdgeInsets)insetsForImageRange:(struct _NSRange)arg1 inRanges:(id)arg2 width:(double)arg3;
+ (id)paragraphStyleWithParagraphSpacing:(double)arg1 lineSpacing:(double)arg2 textGutter:(double)arg3;
+ (CDUnknownBlockType)imageHandlerBlockWithMaximumContentWidth:(double)arg1 maximumInlineImages:(unsigned long long)arg2 inlineImageSizes:(id)arg3;
+ (id)attributedStringFromMarkup:(id)arg1 inlineImageSizes:(id)arg2 maximumContentWidth:(double)arg3 textGutter:(double)arg4 figureAssets:(id)arg5 maximumInlineImages:(unsigned long long)arg6 linksSupported:(_Bool)arg7 imagesSupported:(_Bool)arg8 postFormViewAttachmentDelegate:(id)arg9;

@end

