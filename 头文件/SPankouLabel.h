//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface SPankouLabel : UIView
{
    UILabel *_firstLabel;
    UILabel *_priceLabel;
    UILabel *_numberLabel;
    UILabel *_tailLabel;
}

@property(retain, nonatomic) UILabel *tailLabel; // @synthesize tailLabel=_tailLabel;
@property(retain, nonatomic) UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *firstLabel; // @synthesize firstLabel=_firstLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateFontSizeForTitle:(long long)arg1 other:(long long)arg2;
- (void)createLabels;
- (id)initWithFrame:(struct CGRect)arg1;

@end

