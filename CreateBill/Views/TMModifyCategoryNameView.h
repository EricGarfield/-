

#import <UIKit/UIKit.h>
@class TMCategory;
@interface TMModifyCategoryNameView : UIView
@property (nonatomic, copy) NSString *categoryName;
@property (nonatomic, strong) TMCategory *category;
@property (nonatomic, copy) void (^clickSureBtn)();
/** 成为第一响应者 */
- (void)becomeFirstResponder;
@end
