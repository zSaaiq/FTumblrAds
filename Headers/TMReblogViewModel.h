//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_TtP6Tumblr30PostFormViewAttachmentDelegate_-Protocol.h"

@class NSAttributedString, NSDictionary, NSString, _TtC6Tumblr21PostReadMoreViewModel;
@protocol FigureAssetViewModelEventDelegate, TMReblogViewModelDelegate;

@interface TMReblogViewModel : NSObject <_TtP6Tumblr30PostFormViewAttachmentDelegate_>
{
    _Bool _showsHeaderAttribution;
    _Bool _showsAvatar;
    _Bool _showsUnderline;
    _Bool _selectable;
    _Bool _showsReblogIcon;
    _Bool _isRootTextPostContent;
    _Bool _hasAbstract;
    _Bool _prefersAbstract;
    _Bool _canDisplayAbstract;
    _Bool _needsFrameSizeUpdate;
    _Bool _hasNewFrameContent;
    id <TMReblogViewModelDelegate> _delegate;
    id <FigureAssetViewModelEventDelegate> _figureAssetsEventDelegate;
    _TtC6Tumblr21PostReadMoreViewModel *_readMoreViewModel;
    NSString *_postingBlogName;
    NSString *_permalinkPostID;
    NSString *_unselectableReason;
    NSDictionary *_bodyAssetViewModels;
    NSAttributedString *_fullAttributedString;
    NSAttributedString *_abstractAttributedString;
    double _maxContentWidth;
    double _additionalContentHeight;
    struct _NSRange _lastAbstractWordRange;
    struct CGSize _fullFrameSize;
    struct CGSize _abstractFrameSize;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasNewFrameContent; // @synthesize hasNewFrameContent=_hasNewFrameContent;
@property(nonatomic) _Bool needsFrameSizeUpdate; // @synthesize needsFrameSizeUpdate=_needsFrameSizeUpdate;
@property(nonatomic) double additionalContentHeight; // @synthesize additionalContentHeight=_additionalContentHeight;
@property(readonly, nonatomic) double maxContentWidth; // @synthesize maxContentWidth=_maxContentWidth;
@property(readonly, nonatomic) struct CGSize abstractFrameSize; // @synthesize abstractFrameSize=_abstractFrameSize;
@property(readonly, nonatomic) struct CGSize fullFrameSize; // @synthesize fullFrameSize=_fullFrameSize;
@property(readonly, copy, nonatomic) NSAttributedString *abstractAttributedString; // @synthesize abstractAttributedString=_abstractAttributedString;
@property(readonly, copy, nonatomic) NSAttributedString *fullAttributedString; // @synthesize fullAttributedString=_fullAttributedString;
@property(readonly, nonatomic) _Bool canDisplayAbstract; // @synthesize canDisplayAbstract=_canDisplayAbstract;
@property(readonly, nonatomic) _Bool prefersAbstract; // @synthesize prefersAbstract=_prefersAbstract;
@property(readonly, nonatomic) _Bool hasAbstract; // @synthesize hasAbstract=_hasAbstract;
@property(readonly, nonatomic) NSDictionary *bodyAssetViewModels; // @synthesize bodyAssetViewModels=_bodyAssetViewModels;
@property(readonly, nonatomic) _Bool isRootTextPostContent; // @synthesize isRootTextPostContent=_isRootTextPostContent;
@property(readonly, nonatomic) _Bool showsReblogIcon; // @synthesize showsReblogIcon=_showsReblogIcon;
@property(readonly, copy, nonatomic) NSString *unselectableReason; // @synthesize unselectableReason=_unselectableReason;
@property(readonly, nonatomic) _Bool selectable; // @synthesize selectable=_selectable;
@property(readonly, nonatomic) _Bool showsUnderline; // @synthesize showsUnderline=_showsUnderline;
@property(readonly, nonatomic) _Bool showsAvatar; // @synthesize showsAvatar=_showsAvatar;
@property(readonly, nonatomic) _Bool showsHeaderAttribution; // @synthesize showsHeaderAttribution=_showsHeaderAttribution;
@property(readonly, copy, nonatomic) NSString *permalinkPostID; // @synthesize permalinkPostID=_permalinkPostID;
@property(readonly, copy, nonatomic) NSString *postingBlogName; // @synthesize postingBlogName=_postingBlogName;
@property(readonly, nonatomic) _TtC6Tumblr21PostReadMoreViewModel *readMoreViewModel; // @synthesize readMoreViewModel=_readMoreViewModel;
@property(nonatomic) __weak id <FigureAssetViewModelEventDelegate> figureAssetsEventDelegate; // @synthesize figureAssetsEventDelegate=_figureAssetsEventDelegate;
@property(nonatomic) __weak id <TMReblogViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)hash;
- (void)postFormLinkBlockView:(id)arg1 didSelectURL:(id)arg2;
- (void)updateFrameSize;
- (void)setMaxContentWidth:(double)arg1;
- (void)contentSizeUpdated:(id)arg1;
@property(readonly, nonatomic) struct _NSRange lastAbstractWordRange; // @synthesize lastAbstractWordRange=_lastAbstractWordRange;
@property(readonly, nonatomic) double contentHeight;
@property(readonly, nonatomic) struct CGSize frameSize;
@property(readonly, copy, nonatomic) NSAttributedString *attributedString;
- (_Bool)showsReadMoreButton;
- (id)init;
- (id)initWithPost:(id)arg1 markup:(id)arg2 abstractMarkup:(id)arg3 textGutter:(double)arg4 inlineImageSizes:(id)arg5 bodyAssetViewModels:(id)arg6 viewConfiguration:(id)arg7;
- (id)initWithPost:(id)arg1 viewConfiguration:(id)arg2;
- (id)initWithReblog:(id)arg1 post:(id)arg2 viewConfiguration:(id)arg3 currentComment:(_Bool)arg4 showUnderline:(_Bool)arg5;
- (id)initWithReblog:(id)arg1 post:(id)arg2 viewConfiguration:(id)arg3;

@end

