//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MVCycleScrollReusableView.h"

@class MVBannerModel, MVBorderedButton, UIButton, UIImageView, UILabel;

@interface MVFilmSmartBannerCyclePageView : MVCycleScrollReusableView
{
    UIButton *_closeButton;
    MVBorderedButton *_actionButton;
    UIImageView *_iconImgView;
    UILabel *_titleLbl;
    UILabel *_subTitleLbl;
    MVBannerModel *_model;
}

@property(retain, nonatomic) MVBannerModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)closeTapped:(id)arg1;
- (void)buttonTapped:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

