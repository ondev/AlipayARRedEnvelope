//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSString, UIImageView, UILabel;

@interface NYCountDownView : UIView
{
    UIView *_numsContainerView;
    NSArray *_numViewList;
    UILabel *_headTipLabel;
    UILabel *_tailTipLabel;
    NSString *_format;
    NSString *_formatForAccessibility;
    NSString *_num;
    UIImageView *_frameBgView;
}

@property(retain, nonatomic) UIImageView *frameBgView; // @synthesize frameBgView=_frameBgView;
@property(copy, nonatomic) NSString *num; // @synthesize num=_num;
@property(copy, nonatomic) NSString *formatForAccessibility; // @synthesize formatForAccessibility=_formatForAccessibility;
@property(copy, nonatomic) NSString *format; // @synthesize format=_format;
@property(retain, nonatomic) UILabel *tailTipLabel; // @synthesize tailTipLabel=_tailTipLabel;
@property(retain, nonatomic) UILabel *headTipLabel; // @synthesize headTipLabel=_headTipLabel;
@property(retain, nonatomic) NSArray *numViewList; // @synthesize numViewList=_numViewList;
@property(retain, nonatomic) UIView *numsContainerView; // @synthesize numsContainerView=_numsContainerView;
- (void).cxx_destruct;
- (void)setCount:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)adjustLayout;
- (void)setupViewWithFormat:(id)arg1 num:(id)arg2;
- (id)init;

@end

