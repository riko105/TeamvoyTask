//
//  TTPhoto.h
//  TeamvoyTask
//
//  Created by Stepan Paholyk on 2/4/17.
//  Copyright © 2017 Stepan Paholyk. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TTUser.h"

@interface TTPhoto : NSObject

@property (strong, nonatomic) NSString *photoURLString;
@property (assign, nonatomic) BOOL liked; //liked byCurrent logged user
@property (strong, nonatomic) TTUser *owner;
@property (assign, nonatomic) NSInteger amountOfLikes;
@property (strong, nonatomic) NSDate *uploadDate;
@property (strong, nonatomic) NSString *photoID;
@property (strong, nonatomic) UIImage *image;

- (instancetype)initWithServerResponse:(NSDictionary *)response;


@end
