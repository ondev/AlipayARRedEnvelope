//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NBNavigationTitleView.h"

@class APActivityIndicatorView, AUSearchTitleView, NSDictionary, NSURL, UIControl, UIImageView, UILabel;

@interface H5NavigationTitleView : NBNavigationTitleView
{
    _Bool _shouldUseAUSearch;
    _Bool _isAnimating;
    NSDictionary *_auSearchAttributes;
    AUSearchTitleView *_mainTitleSearchView;
    UIControl *_mainTitleContentView;
    UILabel *_mainTitleLabel;
    UIControl *_subtitleContentView;
    UILabel *_subtitleLabel;
    double _indicatorWidth;
    UIControl *_rightIconContentView;
    UIImageView *_rightIconImgV;
    double _mainTitleFontSize;
    APActivityIndicatorView *_indicatorView;
    double _paddingLeft;
    double _paddingRight;
    UIImageView *_mainTitleImageView;
    NSURL *_mainTitleImageUrl;
}

@property(retain, nonatomic) NSURL *mainTitleImageUrl; // @synthesize mainTitleImageUrl=_mainTitleImageUrl;
@property(retain, nonatomic) UIImageView *mainTitleImageView; // @synthesize mainTitleImageView=_mainTitleImageView;
@property(nonatomic) double paddingRight; // @synthesize paddingRight=_paddingRight;
@property(nonatomic) double paddingLeft; // @synthesize paddingLeft=_paddingLeft;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) APActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(nonatomic) double mainTitleFontSize; // @synthesize mainTitleFontSize=_mainTitleFontSize;
@property(retain, nonatomic) UIImageView *rightIconImgV; // @synthesize rightIconImgV=_rightIconImgV;
@property(retain, nonatomic) UIControl *rightIconContentView; // @synthesize rightIconContentView=_rightIconContentView;
@property(nonatomic) double indicatorWidth; // @synthesize indicatorWidth=_indicatorWidth;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UIControl *subtitleContentView; // @synthesize subtitleContentView=_subtitleContentView;
@property(retain, nonatomic) UILabel *mainTitleLabel; // @synthesize mainTitleLabel=_mainTitleLabel;
@property(retain, nonatomic) UIControl *mainTitleContentView; // @synthesize mainTitleContentView=_mainTitleContentView;
@property(retain, nonatomic) AUSearchTitleView *mainTitleSearchView; // @synthesize mainTitleSearchView=_mainTitleSearchView;
@property(retain, nonatomic) NSDictionary *auSearchAttributes; // @synthesize auSearchAttributes=_auSearchAttributes;
@property(nonatomic) _Bool shouldUseAUSearch; // @synthesize shouldUseAUSearch=_shouldUseAUSearch;
- (void).cxx_destruct;
- (void)setTitleViewHidden:(_Bool)arg1;
- (void)crateImageTitleWithImage:(id)arg1;
- (void)downLoadTitleImage;
- (_Bool)canSetImageTitle:(id)arg1;
- (void)setMainTitle:(id)arg1 subtitle:(id)arg2;
- (void)createAUSearchTitleView;
- (void)setIndicatorViewProgressColor:(id)arg1;
- (void)setIndicatorViewTrackColor:(id)arg1;
- (void)stopLoading;
- (void)startLoading;
- (id)subtitle;
- (id)mainTitle;
- (void)layoutSubviews;

@end

