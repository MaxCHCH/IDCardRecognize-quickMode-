//
//  XLScanBaseViewController.h
//  IDAndBankCard
//
//  Created by mxl on 2017/3/28.
//  Copyright © 2017年 mxl. All rights reserved.
//

#import "XLScanManager.h"

#define iOS9Later ([UIDevice currentDevice].systemVersion.floatValue >= 9.0f)

@interface XLScanBaseViewController : UIViewController

@property (nonatomic, strong) XLScanManager *cameraManager;

@end
