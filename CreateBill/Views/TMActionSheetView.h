

#import <UIKit/UIKit.h>

@interface TMActionSheetView : UIView
@property (nonatomic, copy) void (^cancelBtnBlock)();
@property (nonatomic, copy) void (^camerBtnBlock)();
@property (nonatomic, copy) void (^albumBtnBlock)();
@end
