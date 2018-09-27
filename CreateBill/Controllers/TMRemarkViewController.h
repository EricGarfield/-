

#import "LYBaseViewController.h"
@class TMBill;
@interface TMRemarkViewController : LYBaseViewController
@property (nonatomic, strong) TMBill *bill;
@property (nonatomic, copy) void (^passbackBlock)(NSString *remarks,NSData *photoData);
@end
