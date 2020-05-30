//
//  ViewController.h
//  FaceId
//
//  Created by Jonathan Viloria M on 12/10/18.
//  Copyright © 2018 Digipro Movil. All rights reserved.
//

#ifndef FaceViewController_h
#define FaceViewController_h

#import <UIKit/UIKit.h>

@interface FaceViewController : UIViewController
@property (nonatomic, copy) void (^didDismiss)(NSString *data);
- (id)initWithActions:(NSInteger)actions withOrder:(NSArray*)order;
@end
int auxDismiss;

#endif /* FaceViewController_h */

