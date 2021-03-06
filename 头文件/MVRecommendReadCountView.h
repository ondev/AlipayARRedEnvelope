//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MVArticle, MVPosterImageView, UILabel;

@interface MVRecommendReadCountView : UIView
{
    MVArticle *_article;
    MVPosterImageView *_avatarView;
    UILabel *_titleLabel;
    UILabel *_readCountLabel;
}

@property(retain, nonatomic) UILabel *readCountLabel; // @synthesize readCountLabel=_readCountLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MVPosterImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) MVArticle *article; // @synthesize article=_article;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (id)init;

@end

