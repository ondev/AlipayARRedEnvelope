//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "O2OViewController.h"

#import "BEEPhotoBrowserDelegate.h"
#import "BEEPhotoPickerDelegate.h"
#import "NSLayoutManagerDelegate.h"
#import "O2OCDPAdapterPromotionProtocol.h"
#import "O2OCommentImagePickerDelegate.h"
#import "O2OCommonSchemeProtocol.h"
#import "O2ONewTagListViewDelegate.h"
#import "O2OStarViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITextViewDelegate.h"

@class APCheckBox, BEEPlaceholderTextView, CDPSpaceView, MOBILECSAItemInfo, NSArray, NSMutableArray, NSString, O2OAddAppraiseHelper, O2OAddAppraiseModel, O2OAddAppraisePublishModel, O2OCommentBottomSubmitView, O2OCommentImagePickerView, O2OCommentRecommendView, O2OCommentSingleItemView, O2OCommentSubScoreView, O2OStarView, UILabel, UIScrollView, UIView;

@interface O2OAddAppraiseController : O2OViewController <BEEPhotoBrowserDelegate, O2ONewTagListViewDelegate, O2OCommonSchemeProtocol, O2OStarViewDelegate, UINavigationControllerDelegate, UIGestureRecognizerDelegate, BEEPhotoPickerDelegate, UIAlertViewDelegate, O2OCommentImagePickerDelegate, UIScrollViewDelegate, UITextViewDelegate, NSLayoutManagerDelegate, O2OCDPAdapterPromotionProtocol>
{
    _Bool _isPublishLoading;
    _Bool _scoreAlertShown;
    _Bool _showSubScoreView;
    _Bool _inCommentSuccess;
    int _parameterRate;
    O2OAddAppraiseModel *_addAppraiseModel;
    O2OAddAppraisePublishModel *_addAppraisePublishModel;
    NSArray *_rateDesc;
    NSMutableArray *_uploadedImageURLs;
    NSArray *_recommendDishes;
    NSArray *_recommendCraftsmans;
    MOBILECSAItemInfo *_itemInfo;
    O2OAddAppraiseHelper *_helper;
    UIScrollView *_scrollView;
    O2OStarView *_starView;
    O2OCommentSubScoreView *_subScoreView;
    O2OCommentImagePickerView *_tiledImageView;
    NSMutableArray *_selectedImages;
    APCheckBox *_checkBox;
    APCheckBox *_syncCheckBox;
    UILabel *_scoreDescLabel;
    UIView *_textInputBackView;
    BEEPlaceholderTextView *_contentTextView;
    UILabel *_charNumLabel;
    O2OCommentSingleItemView *_purchaseItemView;
    O2OCommentRecommendView *_craftsmanButtonView;
    O2OCommentRecommendView *_recommendDishButtonView;
    O2OCommentBottomSubmitView *_submitView;
    CDPSpaceView *_cdpView;
    NSString *_tradeNo;
    NSString *_from;
    NSString *_bizSource;
    NSString *_orderBizType;
}

+ (id)generateTokenID;
+ (unsigned long long)canInitWithScheme:(id)arg1;
@property(nonatomic) _Bool inCommentSuccess; // @synthesize inCommentSuccess=_inCommentSuccess;
@property(retain, nonatomic) NSString *orderBizType; // @synthesize orderBizType=_orderBizType;
@property(retain, nonatomic) NSString *bizSource; // @synthesize bizSource=_bizSource;
@property(retain, nonatomic) NSString *from; // @synthesize from=_from;
@property(retain, nonatomic) NSString *tradeNo; // @synthesize tradeNo=_tradeNo;
@property(nonatomic) int parameterRate; // @synthesize parameterRate=_parameterRate;
@property(retain, nonatomic) CDPSpaceView *cdpView; // @synthesize cdpView=_cdpView;
@property(retain, nonatomic) O2OCommentBottomSubmitView *submitView; // @synthesize submitView=_submitView;
@property(retain, nonatomic) O2OCommentRecommendView *recommendDishButtonView; // @synthesize recommendDishButtonView=_recommendDishButtonView;
@property(retain, nonatomic) O2OCommentRecommendView *craftsmanButtonView; // @synthesize craftsmanButtonView=_craftsmanButtonView;
@property(retain, nonatomic) O2OCommentSingleItemView *purchaseItemView; // @synthesize purchaseItemView=_purchaseItemView;
@property(retain, nonatomic) UILabel *charNumLabel; // @synthesize charNumLabel=_charNumLabel;
@property(retain, nonatomic) BEEPlaceholderTextView *contentTextView; // @synthesize contentTextView=_contentTextView;
@property(retain, nonatomic) UIView *textInputBackView; // @synthesize textInputBackView=_textInputBackView;
@property(retain, nonatomic) UILabel *scoreDescLabel; // @synthesize scoreDescLabel=_scoreDescLabel;
@property(retain, nonatomic) APCheckBox *syncCheckBox; // @synthesize syncCheckBox=_syncCheckBox;
@property(retain, nonatomic) APCheckBox *checkBox; // @synthesize checkBox=_checkBox;
@property(retain, nonatomic) NSMutableArray *selectedImages; // @synthesize selectedImages=_selectedImages;
@property(retain, nonatomic) O2OCommentImagePickerView *tiledImageView; // @synthesize tiledImageView=_tiledImageView;
@property(retain, nonatomic) O2OCommentSubScoreView *subScoreView; // @synthesize subScoreView=_subScoreView;
@property(retain, nonatomic) O2OStarView *starView; // @synthesize starView=_starView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) O2OAddAppraiseHelper *helper; // @synthesize helper=_helper;
@property(nonatomic) _Bool showSubScoreView; // @synthesize showSubScoreView=_showSubScoreView;
@property(retain, nonatomic) MOBILECSAItemInfo *itemInfo; // @synthesize itemInfo=_itemInfo;
@property(retain, nonatomic) NSArray *recommendCraftsmans; // @synthesize recommendCraftsmans=_recommendCraftsmans;
@property(retain, nonatomic) NSArray *recommendDishes; // @synthesize recommendDishes=_recommendDishes;
@property(retain, nonatomic) NSMutableArray *uploadedImageURLs; // @synthesize uploadedImageURLs=_uploadedImageURLs;
@property(nonatomic) _Bool scoreAlertShown; // @synthesize scoreAlertShown=_scoreAlertShown;
@property(nonatomic) _Bool isPublishLoading; // @synthesize isPublishLoading=_isPublishLoading;
@property(retain, nonatomic) NSArray *rateDesc; // @synthesize rateDesc=_rateDesc;
@property(retain, nonatomic) O2OAddAppraisePublishModel *addAppraisePublishModel; // @synthesize addAppraisePublishModel=_addAppraisePublishModel;
@property(retain, nonatomic) O2OAddAppraiseModel *addAppraiseModel; // @synthesize addAppraiseModel=_addAppraiseModel;
- (void).cxx_destruct;
- (void)promotionViewDidFinishLoading:(id)arg1 spaceCode:(id)arg2;
- (void)promitionEnd;
- (void)promotionStart;
- (id)commentFeed;
- (void)selectedRecommendDish:(id)arg1;
- (void)hideKeyboard;
- (void)tappedOnBackground:(id)arg1;
- (_Bool)imageCheckPassed;
- (void)contentsValidityCheck:(id)arg1;
- (void)postComment;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)updateTextAndImageTipLabel;
- (void)photoPickerController:(id)arg1 didFinishPickingAssetData:(id)arg2;
- (void)photoBrowser:(id)arg1 deletePhotoAtIndex:(unsigned long long)arg2;
- (id)photoBrowser:(id)arg1 photoAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfPhotosInPhotoBrowser:(id)arg1;
- (void)tapGestureEnded:(id)arg1;
- (void)starView:(id)arg1 scoreDidChange:(double)arg2;
- (void)uploadImage:(id)arg1 forImageView:(id)arg2;
- (void)tiledImageViewDidTapBackground:(id)arg1;
- (void)tiledImageView:(id)arg1 didTapImageView:(id)arg2 atIndex:(long long)arg3;
- (void)tiledImageView:(id)arg1 configImageForImageView:(id)arg2 atIndex:(long long)arg3;
- (long long)numberOfImagesInTiledImageView:(id)arg1;
- (double)layoutManager:(id)arg1 lineSpacingAfterGlyphAtIndex:(unsigned long long)arg2 withProposedLineFragmentRect:(struct CGRect)arg3;
- (void)keyboardFrameWillChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)changeRecommendDishStringStyleForSpecialWords:(id)arg1 specialWords:(id)arg2;
- (void)reLayout;
- (void)createSubViews;
- (void)showError:(id)arg1 withModel:(id)arg2;
- (void)showLoading:(id)arg1;
- (void)showEmpty:(id)arg1;
- (void)showModel:(id)arg1;
- (void)showQuitCommentAlert;
- (void)back;
- (void)dealloc;
- (id)pageSpm;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithTradeNo:(id)arg1;
- (id)initWithScheme:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

